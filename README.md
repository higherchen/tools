# Brief
Try to use zephir to develop extensions of php &amp; This is just for practice

# How to start

## Install Zephir
```bash
git clone https://github.com/phalcon/zephir
apt-get install re2c libpcre3-dev
cd zephir
./bin/zephir compile
./install-nosudo
```

## Use Extension
```bash
git clone https://github.com/higherchen/tools
cd tools
zephir build
# Add 'extension=tools.so' to php.ini file
php -r "var_dump(Tools\ShortUrl::generate('https://github.com/higherchen/tools'));"
```
