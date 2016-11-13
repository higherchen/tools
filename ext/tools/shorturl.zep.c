
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/array.h"
#include "kernel/string.h"
#include "kernel/concat.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Tools_ShortUrl) {

	ZEPHIR_REGISTER_CLASS(Tools, ShortUrl, tools, shorturl, tools_shorturl_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Tools_ShortUrl, generate) {

	zephir_fcall_cache_entry *_6 = NULL;
	int max_char, ZEPHIR_LAST_CALL_STATUS, blockNum, output_count, char_count = 0, max_index, index = 0, _10$$5;
	zval *url_param = NULL, *max_char_param = NULL, base, _0, output, hex, subHex, chars, _1$$3, _2$$3, _3$$3, _4$$3, _5$$3, _7$$3, _8$$3, _9$$5;
	zval url;
	ZEPHIR_INIT_THIS();

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&base);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&output);
	ZVAL_UNDEF(&hex);
	ZVAL_UNDEF(&subHex);
	ZVAL_UNDEF(&chars);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);
	ZVAL_UNDEF(&_9$$5);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &url_param, &max_char_param);

	zephir_get_strval(&url, url_param);
	if (!max_char_param) {
		max_char = 6;
	} else {
		max_char = zephir_get_intval(max_char_param);
	}


	ZEPHIR_INIT_VAR(&base);
	zephir_create_array(&base, 62, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "a");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "b");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "c");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "d");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "e");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "f");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "g");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "h");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "i");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "j");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "k");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "l");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "m");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "n");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "o");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "p");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "q");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "r");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "s");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "t");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "u");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "v");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "w");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "x");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "y");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "z");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 0);
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 1);
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 2);
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 3);
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 4);
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 5);
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 6);
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 7);
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 8);
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_LONG(&_0, 9);
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "A");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "B");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "C");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "D");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "E");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "F");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "G");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "H");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "I");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "J");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "K");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "L");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "M");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "N");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "O");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "P");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "Q");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "R");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "S");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "T");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "U");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "V");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "W");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "X");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "Y");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_NVAR(&_0);
	ZVAL_STRING(&_0, "Z");
	zephir_array_fast_append(&base, &_0);
	ZEPHIR_INIT_VAR(&output);
	array_init(&output);
	blockNum = 4;
	ZEPHIR_INIT_NVAR(&_0);
	zephir_md5(&_0, &url);
	ZEPHIR_CPY_WRT(&hex, &_0);
	output_count = 0;
	max_index = 61;
	while (1) {
		if (output_count == blockNum) {
			break;
		}
		char_count = 0;
		ZEPHIR_INIT_NVAR(&chars);
		ZVAL_STRING(&chars, "");
		ZVAL_LONG(&_1$$3, (output_count * 8));
		ZVAL_LONG(&_2$$3, 8);
		ZEPHIR_INIT_NVAR(&_3$$3);
		zephir_substr(&_3$$3, &hex, zephir_get_intval(&_1$$3), 8 , 0);
		ZEPHIR_INIT_LNVAR(_4$$3);
		ZEPHIR_CONCAT_SV(&_4$$3, "0x", &_3$$3);
		ZEPHIR_CALL_FUNCTION(&_5$$3, "hexdec", &_6, 1, &_4$$3);
		zephir_check_call_status();
		ZEPHIR_INIT_NVAR(&_7$$3);
		ZVAL_STRING(&_7$$3, "0x3FFFFFFF");
		ZEPHIR_CALL_FUNCTION(&_8$$3, "hexdec", &_6, 1, &_7$$3);
		zephir_check_call_status();
		ZEPHIR_INIT_NVAR(&subHex);
		zephir_bitwise_and_function(&subHex, &_5$$3, &_8$$3 TSRMLS_CC);
		while (1) {
			if (char_count == max_char) {
				break;
			}
			index = ((int) (zephir_get_numberval(&subHex)) & max_index);
			zephir_array_fetch_long(&_9$$5, &base, index, PH_NOISY | PH_READONLY, "tools/shorturl.zep", 29 TSRMLS_CC);
			zephir_concat_self(&chars, &_9$$5 TSRMLS_CC);
			_10$$5 = ((int) (zephir_get_numberval(&subHex)) >> 5);
			ZEPHIR_INIT_NVAR(&subHex);
			ZVAL_LONG(&subHex, _10$$5);
			char_count += 1;
		}
		zephir_array_append(&output, &chars, PH_SEPARATE, "tools/shorturl.zep", 31);
		output_count += 1;
	}
	RETURN_CCTOR(output);

}

