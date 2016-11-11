
extern zend_class_entry *tools_shorturl_ce;

ZEPHIR_INIT_CLASS(Tools_ShortUrl);

PHP_METHOD(Tools_ShortUrl, generate);

ZEND_BEGIN_ARG_INFO_EX(arginfo_tools_shorturl_generate, 0, 0, 1)
	ZEND_ARG_INFO(0, url)
	ZEND_ARG_INFO(0, max_char)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(tools_shorturl_method_entry) {
	PHP_ME(Tools_ShortUrl, generate, arginfo_tools_shorturl_generate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
