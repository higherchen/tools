
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#include "php_ext.h"
#include "tools.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *tools_shorturl_ce;

ZEND_DECLARE_MODULE_GLOBALS(tools)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(tools)
{
	REGISTER_INI_ENTRIES();
	ZEPHIR_INIT(Tools_ShortUrl);
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(tools)
{
	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_tools_globals *tools_globals TSRMLS_DC)
{
	tools_globals->initialized = 0;

	/* Memory options */
	tools_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	tools_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	tools_globals->cache_enabled = 1;

	/* Recursive Lock */
	tools_globals->recursive_lock = 0;

	/* Static cache */
	memset(tools_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

/**
 * Initialize globals only on each thread started
 */
static void php_zephir_init_module_globals(zend_tools_globals *tools_globals TSRMLS_DC)
{

}

static PHP_RINIT_FUNCTION(tools)
{

	zend_tools_globals *tools_globals_ptr;
#ifdef ZTS
	tsrm_ls = ts_resource(0);
#endif
	tools_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(tools_globals_ptr TSRMLS_CC);
	zephir_initialize_memory(tools_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(tools)
{
	
	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(tools)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_TOOLS_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_TOOLS_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_TOOLS_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_TOOLS_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_TOOLS_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(tools)
{
	php_zephir_init_globals(tools_globals TSRMLS_CC);
	php_zephir_init_module_globals(tools_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(tools)
{

}


zend_function_entry php_tools_functions[] = {
ZEND_FE_END

};

zend_module_entry tools_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_TOOLS_EXTNAME,
	php_tools_functions,
	PHP_MINIT(tools),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(tools),
#else
	NULL,
#endif
	PHP_RINIT(tools),
	PHP_RSHUTDOWN(tools),
	PHP_MINFO(tools),
	PHP_TOOLS_VERSION,
	ZEND_MODULE_GLOBALS(tools),
	PHP_GINIT(tools),
	PHP_GSHUTDOWN(tools),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_TOOLS
ZEND_GET_MODULE(tools)
#endif
