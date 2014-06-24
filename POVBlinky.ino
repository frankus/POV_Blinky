#include <avr/pgmspace.h>

prog_char unprintable[5] = {
  B11111,
  B10001,
  B10001,
  B10001,
  B11111
};

prog_char space[5] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

prog_char exclamation_mark[5] = {
  B00000,
  B00000,
  B11101,
  B00000,
  B00000
};

prog_char double_quote[5] = {
  B00000,
  B11000,
  B00000,
  B11000,
  B00000
};

prog_char octothorpe[5] = {
  B01010,
  B11111,
  B01010,
  B11111,
  B01010
};

prog_char dollar_sign[5] = {
  B01001,
  B10101,
  B11111,
  B10101,
  B10010
};

prog_char percent_sign[5] = {
  B11001,
  B11010,
  B00100,
  B01011,
  B10011
};

prog_char ampersand[5] = {
  B00010,
  B01101,
  B10101,
  B01010,
  B00001
};

prog_char single_quote[5] = {
  B00000,
  B00000,
  B11000,
  B00000,
  B00000
};

prog_char open_parenthesis[5] = {
  B00000,
  B00000,
  B01110,
  B10001,
  B00000
};

prog_char close_parenthesis[5] = {
  B00000,
  B10001,
  B01110,
  B00000,
  B00000
};

prog_char asterisk[5] = {
  B00100,
  B10101,
  B01110,
  B10101,
  B00100
};

prog_char plus_sign[5] = {
  B00100,
  B00100,
  B11111,
  B00100,
  B00100
};

prog_char comma[5] = {
  B00000,
  B00001,
  B00010,
  B00000,
  B00000
};

prog_char minus_sign[5] = {
  B00100,
  B00100,
  B00100,
  B00100,
  B00100
};

prog_char period[5] = {
  B00000,
  B00001,
  B00000,
  B00000,
  B00000
};

prog_char forward_slash[5] = {
  B00001,
  B00010,
  B00100,
  B01000,
  B10000
};

prog_char zero[5] = {
  B01110,
  B10001,
  B10101,
  B10001,
  B01110
};

prog_char one[5] = {
  B00000,
  B01001,
  B11111,
  B00001,
  B00000
};

prog_char two[5] = {
  B01001,
  B10011,
  B10101,
  B10101,
  B01001
};

prog_char three[5] = {
  B01010,
  B10001,
  B10101,
  B10101,
  B01010
};

prog_char four[5] = {
  B00010,
  B00110,
  B01010,
  B11111,
  B00010
};

prog_char five[5] = {
  B11101,
  B10101,
  B10101,
  B10101,
  B10010
};

prog_char six[5] = {
  B01110,
  B10101,
  B10101,
  B10101,
  B10010
};

prog_char seven[5] = {
  B10000,
  B10000,
  B10111,
  B11000,
  B00000
};

prog_char eight[5] = {
  B01010,
  B10101,
  B10101,
  B10101,
  B01010,
};

prog_char nine[5] = {
  B01000,
  B10101,
  B10101,
  B10101,
  B01110
};

prog_char colon[5] = {
  B00000,
  B01010,
  B00000,
  B00000,
  B00000
};

prog_char semicolon[5] = {
  B00001,
  B01010,
  B00000,
  B00000,
  B00000,
};

prog_char less_than_sign[5] = {
  B00000,
  B00100,
  B01010,
  B10001,
  B00000
};

prog_char equal_sign[5] = {
  B01010,
  B01010,
  B01010,
  B01010,
  B01010
};

prog_char greater_than_sign[5] = {
  B00000,
  B10001,
  B01010,
  B00100,
  B00000,
};

prog_char question_mark[5] = {
  B01000,
  B10000,
  B10101,
  B10100,
  B01000
};

prog_char at_sign[5] = {
  B01110,
	B10000,
	B10111,
	B10101,
	B01111
};

prog_char uppercase_a[5] = {
	B01111,
	B10100,
	B10100,
	B10100,
	B01111
};

prog_char uppercase_b[5] = {
	B11111,
	B10101,
	B10101,
	B10101,
	B01010
};

prog_char uppercase_c[5] = {
	B01110,
	B10001,
	B10001,
	B10001,
	B10001
};

prog_char uppercase_d[5] = {
	B11111,
	B10001,
	B10001,
	B10001,
	B01110
};

prog_char uppercase_e[5] = {
	B11111,
	B10101,
	B10101,
	B10101,
	B10001
};

prog_char uppercase_f[5] = {
	B11111,
	B10100,
	B10100,
	B10100,
	B10000
};

prog_char uppercase_g[5] = {
	B01110,
	B10001,
	B10001,
	B10101,
	B10111
};

prog_char uppercase_h[5] = {
	B11111,
	B00100,
	B00100,
	B00100,
	B11111
};

prog_char uppercase_i[5] = {
	B00000,
	B10001,
	B11111,
	B10001,
	B00000
};

prog_char uppercase_j[5] = {
	B00010,
	B00001,
	B10001,
	B11110,
	B10000
};

prog_char uppercase_k[5] = {
	B11111,
	B00100,
	B00100,
	B01010,
	B10001
};

prog_char uppercase_l[5] = {
	B11111,
	B00001,
	B00001,
	B00001,
	B00001
};

prog_char uppercase_m[5] = {
	B11111,
	B01000,
	B00100,
	B01000,
	B11111
};

prog_char uppercase_n[5] = {
	B11111,
	B01000,
	B00100,
	B00010,
	B11111
};

prog_char uppercase_o[5] = {
	B01110,
	B10001,
	B10001,
	B10001,
	B01110
};

prog_char uppercase_p[5] = {
	B11111,
	B10100,
	B10100,
	B10100,
	B01000
};

prog_char uppercase_q[5] = {
	B01110,
	B10001,
	B10101,
	B10011,
	B01111
};

prog_char uppercase_r[5] = {
	B11111,
	B10100,
	B10100,
	B10100,
	B01011
};

prog_char uppercase_s[5] = {
	B01001,
	B10101,
	B10101,
	B10101,
	B10010
};

prog_char uppercase_t[5] = {
	B10000,
	B10000,
	B11111,
	B10000,
	B10000
};

prog_char uppercase_u[5] = {
	B11110,
	B00001,
	B00001,
	B00001,
	B11110
};

prog_char uppercase_v[5] = {
	B11000,
	B00110,
	B00001,
	B00110,
	B11000
};

prog_char uppercase_w[5] = {
	B11100,
	B00011,
	B11100,
	B00011,
	B11100
};

prog_char uppercase_x[5] = {
	B10001,
	B01010,
	B00100,
	B01010,
	B10001
};

prog_char uppercase_y[5] = {
	B10000,
	B01000,
	B00111,
	B01000,
	B10000
};

prog_char uppercase_z[5] = {
	B10001,
	B10011,
	B10101,
	B11001,
	B10001
};

prog_char open_bracket[5] = {
	B00000,
	B00000,
	B11111,
	B10001,
	B00000
};

prog_char back_slash[5] = {
	B10000,
	B01000,
	B00100,
	B00010,
	B00001
};

prog_char close_bracket[5] = {
  B00000,
  B10001,
	B11111,
	B00000,
	B00000
};

prog_char caret[5] = {
	B00000,
	B01000,
	B10000,
	B01000,
	B00000
};

prog_char underscore[5] = {
	B00001,
	B00001,
	B00001,
	B00001,
	B00001
};

prog_char backtick[5] = {
	B00000,
	B01000,
	B10000,
	B00000,
	B00000
};

prog_char open_curly[5] = {
	B00000,
	B00100,
	B11111,
	B10001,
	B00000
};

prog_char pipe_symbol[5] = {
	B00000,
	B00000,
	B11111,
	B00000,
	B00000
};

prog_char close_curly[5] = {
  B00000,
  B10001,
	B11111,
	B00100,
	B00000
};

prog_char tilde[5] = {
	B00100,
	B01000,
	B00100,
	B00010,
	B00100
};

PROGMEM const char *ASCII[] = {
	unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, 
	unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, 
	unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, 
	unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, unprintable, 

  space, exclamation_mark, double_quote, octothorpe, dollar_sign, percent_sign, ampersand, single_quote,
  open_parenthesis, close_parenthesis, asterisk, plus_sign, comma, minus_sign, period, forward_slash,
  zero, one, two, three, four, five, six, seven, 
  eight, nine, colon, semicolon, less_than_sign, equal_sign, greater_than_sign, question_mark,

  at_sign, uppercase_a, uppercase_b, uppercase_c, uppercase_d, uppercase_e, uppercase_f, uppercase_g,
  uppercase_h, uppercase_i, uppercase_j, uppercase_k, uppercase_l, uppercase_m, uppercase_n, uppercase_o,
  uppercase_p, uppercase_q, uppercase_r, uppercase_s, uppercase_t, uppercase_u, uppercase_v, uppercase_w,
  uppercase_x, uppercase_y, uppercase_z, open_bracket, back_slash, close_bracket, caret, underscore,

  backtick, uppercase_a, uppercase_b, uppercase_c, uppercase_d, uppercase_e, uppercase_f, uppercase_g,
  uppercase_h, uppercase_i, uppercase_j, uppercase_k, uppercase_l, uppercase_m, uppercase_n, uppercase_o,
  uppercase_p, uppercase_q, uppercase_r, uppercase_s, uppercase_t, uppercase_u, uppercase_v, uppercase_w,
  uppercase_x, uppercase_y, uppercase_z, open_curly, pipe_symbol, close_curly, tilde, unprintable
};

prog_char character_width = 5;
prog_char pixel_delay = 3;
prog_char letter_spacing = 1;

void setup() {                
  // initialize the digital pin as an output.
  DDRB = DDRB | B00011111;
}

char *string = "MAKE SOMETHING AWESOME!!!";

void loop() {
	for (int i = 0; i < strlen(string); i ++) {
		const char *letter = (char *)pgm_read_word(&(ASCII[string[i]]));
										
		for (int j = 0; j < character_width; j ++) {
			PORTB = letter[j] & B00011111;
			delay(pixel_delay);
		}
		
		PORTB = B00000 & B00011111;
		delay(pixel_delay * letter_spacing);
	}
	
	delay(pixel_delay * (character_width + letter_spacing) * 3);
}
