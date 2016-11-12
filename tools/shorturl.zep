namespace Tools;
class ShortUrl
{
    public static function generate(string url, int max_char = 6)
    {
        var base = [
            "a", "b", "c", "d", "e", "f", "g", "h",
            "i", "j", "k", "l", "m", "n", "o", "p",
            "q", "r", "s", "t", "u", "v", "w", "x",
            "y", "z", "0", "1", "2", "3", "4", "5",
            "6", "7", "8", "9", "A", "B", "C", "D",
            "E", "F", "G", "H", "I", "J", "K", "L",
            "M", "N", "O", "P", "Q", "R", "S", "T",
            "U", "V", "W", "X", "Y", "Z"
        ];
        var output = [], blockNum = 4, hex = url->md5(), output_count = 0;
        var char_count, subHex, chars;
	// max_index = count(base) - 1
        int max_index = 61, index;

        loop {
            if output_count == blockNum {break;}

            let char_count = 0, chars = "";
            let subHex = hexdec("0x3FFFFFFF") & hexdec("0x".substr(hex, output_count * 8, 8));
            loop {
                if char_count == max_char {break;}
                let index = subHex & max_index;
                let chars .= base[index], subHex = subHex >> 5, char_count += 1;
            }
            let output[] = chars, output_count += 1;
        }

        return output;
    }
}
