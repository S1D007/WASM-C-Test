#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;
typedef float f32;
typedef double f64;

const f64 NaN = 0e+0/0e+0;
const f64 Infinity = 1e+0/0e+0;

struct ReturnValue {
  f64 value;
  i32 type;
};

char _memory[1245184];

void i32_store(i32 align, i32 offset, i32 pointer, i32 value) {
  *((i32*)(_memory + offset + pointer)) = value;
}

void i32_store8(i32 align, i32 offset, i32 pointer, u8 value) {
  *((u8*)(_memory + offset + pointer)) = value;
}

i32 i32_load8_u(i32 align, i32 offset, i32 pointer) {
  return *((u8*)(_memory + offset + pointer));
}

f64 f64_load(i32 align, i32 offset, i32 pointer) {
  return *((f64*)(_memory + offset + pointer));
}

i32 i32_load(i32 align, i32 offset, i32 pointer) {
  return *((i32*)(_memory + offset + pointer));
}

void i32_store16(i32 align, i32 offset, i32 pointer, u16 value) {
  *((u16*)(_memory + offset + pointer)) = value;
}

struct ReturnValue __Porffor_numberLog(f64 arg, i32 argjjtype);
struct ReturnValue __Porffor_concatStrings(f64 a, i32 ajjtype, f64 b, i32 bjjtype);
f64 f64_uuuuu(f64 x, f64 y);
struct ReturnValue __ecma262_ToString(f64 argument, i32 argumentjjtype);
i32 __Porffor_allocate();
struct ReturnValue __Number_prototype_toString(f64 _this, i32 _thisjjtype, f64 radix, i32 radixjjtype);
f64 __Number_isFinite(f64 x);
f64 __Number_isNaN(f64 x);
f64 __Math_trunc(f64 x);
f64 f64_ll(f64 x, f64 y);
f64 __Math_round(f64 x);
struct ReturnValue __Boolean_prototype_toString(f64 _this, i32 _thisjjtype);
struct ReturnValue __Symbol_prototype_toString(f64 _this, i32 _thisjjtype);
struct ReturnValue __Symbol_prototype_descriptionkkget(f64 _this, i32 _thisjjtype);
struct ReturnValue __Function_prototype_toString(f64 _this, i32 _thisjjtype);
struct ReturnValue __Object_prototype_toString(f64 _this, i32 _thisjjtype);
i32 __Porffor_allocateBytes(i32 x);
struct ReturnValue __Porffor_bytestring_appendStr(f64 str, i32 strjjtype, f64 appendage, i32 appendagejjtype);
struct ReturnValue __Porffor_bytestring_appendChar(f64 str, i32 strjjtype, f64 _char, i32 charjjtype);
struct ReturnValue __Promise_prototype_toString(f64 _this, i32 _thisjjtype);
struct ReturnValue __Array_prototype_toString(f64 _this, i32 _thisjjtype);
struct ReturnValue __ByteString_prototype_toString(i32 _this, i32 _thisjjtype);
struct ReturnValue __Porffor_strcat(i32 a, i32 ajjtype, i32 b, i32 bjjtype);

f64 a = 0;
i32 ajjtype = 0;
f64 b = 0;
i32 bjjtype = 0;
f64 i = 0;
i32 ijjtype = 0;
f64 t = 0;
i32 tjjtype = 0;
f64 jjporfjjdescStore = 0;
i32 jjporfjjdescStorejjglbl_inited = 0;
i32 currentPtr = 0;
i32 bytesWritten = 65536;

struct ReturnValue __Porffor_numberLog(f64 arg, i32 argjjtype) {
  f64 _get0;
  _get0 = arg;
  printf("%g\n", _get0);
  putchar((int)(10));
  return (struct ReturnValue){ 0, 128 };
}

f64 f64_uuuuu(f64 x, f64 y) {
  f64 _get1;
  f64 _get0;
  _get0 = x;
  _get1 = y;
  return (f64)((i32)(_get0) | (i32)(_get1));
}

i32 __Porffor_allocate() {
  return (1 * 65536);
}

f64 __Number_isFinite(f64 x) {
  f64 _get3;
  f64 _get2;
  f64 _get1;
  f64 _get0;
  f64 a = 0;

  _get0 = x;
  _get1 = x;
  a = _get0 - _get1;
  _get2 = a;
  _get3 = a;
  return (f64)(_get2 == _get3);
}

f64 __Number_isNaN(f64 x) {
  f64 _get1;
  f64 _get0;
  _get0 = x;
  _get1 = x;
  return (f64)(_get0 != _get1);
}

f64 __Math_trunc(f64 x) {
  f64 _get0;
  _get0 = x;
  return (i32)(_get0);
}

f64 f64_ll(f64 x, f64 y) {
  f64 _get3;
  f64 _get2;
  f64 _get1;
  f64 _get0;
  _get0 = x;
  _get1 = x;
  _get2 = y;
  _get3 = y;
  return (_get0 - ((i32)(_get1 / _get2) * _get3));
}

f64 __Math_round(f64 x) {
  f64 _get0;
  _get0 = x;
  return round(_get0);
}

struct ReturnValue __Number_prototype_toString(f64 _this, i32 _thisjjtype, f64 radix, i32 radixjjtype) {
  f64 _get253;
  f64 _get252;
  f64 _get251;
  f64 _get250;
  i32 _get249;
  f64 _get248;
  f64 _get247;
  f64 _get246;
  f64 _get245;
  f64 _get244;
  f64 _get243;
  f64 _get242;
  f64 _get241;
  f64 _get240;
  f64 _get239;
  f64 _get238;
  f64 _get237;
  f64 _get236;
  f64 _get235;
  f64 _get234;
  f64 _get233;
  f64 _get232;
  f64 _get231;
  f64 _get230;
  f64 _get229;
  f64 _get228;
  f64 _get227;
  f64 _get226;
  f64 _get225;
  f64 _get224;
  f64 _get223;
  f64 _get222;
  f64 _get221;
  f64 _get220;
  f64 _get219;
  f64 _get218;
  f64 _get217;
  f64 _get216;
  f64 _get215;
  f64 _get214;
  f64 _get213;
  f64 _get212;
  f64 _get211;
  f64 _get210;
  f64 _get209;
  f64 _get208;
  f64 _get207;
  f64 _get206;
  f64 _get205;
  f64 _get204;
  f64 _get203;
  f64 _get202;
  f64 _get201;
  f64 _get200;
  f64 _get199;
  f64 _get198;
  f64 _get197;
  f64 _get196;
  f64 _get195;
  f64 _get194;
  f64 _get193;
  f64 _get192;
  f64 _get191;
  f64 _get190;
  f64 _get189;
  f64 _get188;
  f64 _get187;
  f64 _get186;
  f64 _get185;
  f64 _get184;
  f64 _get183;
  f64 _get182;
  i32 _get181;
  f64 _get180;
  f64 _get179;
  f64 _get178;
  f64 _get177;
  f64 _get176;
  f64 _get175;
  f64 _get174;
  f64 _get173;
  f64 _get172;
  f64 _get171;
  f64 _get170;
  f64 _get169;
  f64 _get168;
  f64 _get167;
  f64 _get166;
  f64 _get165;
  f64 _get164;
  f64 _get163;
  f64 _get162;
  f64 _get161;
  f64 _get160;
  f64 _get159;
  f64 _get158;
  f64 _get157;
  f64 _get156;
  f64 _get155;
  f64 _get154;
  f64 _get153;
  f64 _get152;
  f64 _get151;
  f64 _get150;
  f64 _get149;
  f64 _get148;
  f64 _get147;
  f64 _get146;
  f64 _get145;
  f64 _get144;
  f64 _get143;
  f64 _get142;
  f64 _get141;
  f64 _get140;
  f64 _get139;
  f64 _get138;
  f64 _get137;
  f64 _get136;
  f64 _get135;
  f64 _get134;
  f64 _get133;
  f64 _get132;
  f64 _get131;
  f64 _get130;
  f64 _get129;
  f64 _get128;
  f64 _get127;
  f64 _get126;
  f64 _get125;
  f64 _get124;
  f64 _get123;
  f64 _get122;
  f64 _get121;
  f64 _get120;
  f64 _get119;
  f64 _get118;
  f64 _get117;
  f64 _get116;
  f64 _get115;
  f64 _get114;
  f64 _get113;
  f64 _get112;
  i32 _get111;
  f64 _get110;
  f64 _get109;
  f64 _get108;
  f64 _get107;
  f64 _get106;
  f64 _get105;
  f64 _get104;
  f64 _get103;
  f64 _get102;
  f64 _get101;
  f64 _get100;
  f64 _get99;
  f64 _get98;
  f64 _get97;
  f64 _get96;
  f64 _get95;
  f64 _get94;
  f64 _get93;
  f64 _get92;
  f64 _get91;
  f64 _get90;
  f64 _get89;
  f64 _get88;
  f64 _get87;
  f64 _get86;
  f64 _get85;
  f64 _get84;
  f64 _get83;
  f64 _get82;
  f64 _get81;
  f64 _get80;
  f64 _get79;
  f64 _get78;
  f64 _get77;
  f64 _get76;
  f64 _get75;
  f64 _get74;
  f64 _get73;
  f64 _get72;
  f64 _get71;
  f64 _get70;
  f64 _get69;
  f64 _get68;
  f64 _get67;
  f64 _get66;
  f64 _get65;
  f64 _get64;
  f64 _get63;
  f64 _get62;
  f64 _get61;
  f64 _get60;
  f64 _get59;
  f64 _get58;
  f64 _get57;
  f64 _get56;
  f64 _get55;
  f64 _get54;
  f64 _get53;
  f64 _get52;
  f64 _get51;
  f64 _get50;
  f64 _get49;
  f64 _get48;
  f64 _get47;
  f64 _get46;
  f64 _get45;
  f64 _get44;
  i32 _get43;
  i32 _get42;
  i32 _get41;
  f64 _get40;
  f64 _get39;
  i32 _get38;
  f64 _get37;
  i32 _get36;
  f64 _get35;
  f64 _get34;
  f64 _get33;
  f64 _get32;
  i32 _get31;
  f64 _get30;
  i32 _get29;
  i32 _get28;
  i32 _get27;
  i32 _get26;
  i32 _get25;
  i32 _get24;
  i32 _get23;
  i32 _get22;
  i32 _get21;
  i32 _get20;
  i32 _get19;
  f64 _get18;
  f64 _get17;
  i32 _get16;
  i32 _get15;
  i32 _get14;
  i32 _get13;
  i32 _get12;
  i32 _get11;
  i32 _get10;
  i32 _get9;
  i32 _get8;
  i32 _get7;
  f64 _get6;
  f64 _get5;
  f64 _get4;
  f64 _get3;
  f64 _get2;
  f64 _get1;
  i32 _get0;
  f64 out = 0;
  f64 outPtr = 0;
  i32 jjmakearray_pointer_tmp = 0;
  i32 logictmpi = 0;
  i32 jjlast_type = 0;
  f64 i = 0;
  f64 digits = 0;
  f64 l = 0;
  f64 trailing = 0;
  f64 e = 0;
  f64 digit = 0;
  f64 digitsPtr = 0;
  f64 endPtr = 0;
  f64 dotPlace = 0;
  f64 __length_setter_tmp = 0;
  i32 __member_setter_ptr_tmp = 0;
  f64 decimal = 0;
  f64 intPart = 0;
  f64 decimalDigits = 0;
  f64 j = 0;

  _get0 = _thisjjtype;
  // if 
    if (_get0 != 1) {
      printf("Uncaught TypeError: Number.prototype.toString expects 'this' to be a Number\n");
      exit(1);
    }
  // end
  j14:;
  out = (f64)__Porffor_allocate();
  _get1 = out;
  outPtr = _get1;
  _get2 = _this;
  // if 
    if (__Number_isFinite(_get2) == 0) {
      _get3 = _this;
      // if 
        if (((u32)__Number_isNaN(_get3)) != 0) {
          out = 65536;
          _get4 = out;
          return (struct ReturnValue){ _get4, 195 };
        }
      // end
      j16:;
      _get5 = _this;
      // if 
        if (_get5 == Infinity) {
          _get6 = out;
          jjmakearray_pointer_tmp = (u32)_get6;
          _get7 = jjmakearray_pointer_tmp;
          i32_store(1, 0, _get7, 8);
          _get8 = jjmakearray_pointer_tmp;
          i32_store8(0, 4, _get8, 73);
          _get9 = jjmakearray_pointer_tmp;
          i32_store8(0, 5, _get9, 110);
          _get10 = jjmakearray_pointer_tmp;
          i32_store8(0, 6, _get10, 102);
          _get11 = jjmakearray_pointer_tmp;
          i32_store8(0, 7, _get11, 105);
          _get12 = jjmakearray_pointer_tmp;
          i32_store8(0, 8, _get12, 110);
          _get13 = jjmakearray_pointer_tmp;
          i32_store8(0, 9, _get13, 105);
          _get14 = jjmakearray_pointer_tmp;
          i32_store8(0, 10, _get14, 116);
          _get15 = jjmakearray_pointer_tmp;
          i32_store8(0, 11, _get15, 121);
          _get16 = jjmakearray_pointer_tmp;
          out = (f64)_get16;
          _get17 = out;
          return (struct ReturnValue){ _get17, 195 };
        }
      // end
      j17:;
      _get18 = out;
      jjmakearray_pointer_tmp = (u32)_get18;
      _get19 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get19, 9);
      _get20 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get20, 45);
      _get21 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get21, 73);
      _get22 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get22, 110);
      _get23 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get23, 102);
      _get24 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get24, 105);
      _get25 = jjmakearray_pointer_tmp;
      i32_store8(0, 9, _get25, 110);
      _get26 = jjmakearray_pointer_tmp;
      i32_store8(0, 10, _get26, 105);
      _get27 = jjmakearray_pointer_tmp;
      i32_store8(0, 11, _get27, 116);
      _get28 = jjmakearray_pointer_tmp;
      i32_store8(0, 12, _get28, 121);
      _get29 = jjmakearray_pointer_tmp;
      out = (f64)_get29;
      _get30 = out;
      return (struct ReturnValue){ _get30, 195 };
    }
  // end
  j15:;
  _get31 = radixjjtype;
  // if 
    if (_get31 != 1) {
      radix = 10;
      _get32 = radix;
      radixjjtype = 1;
    }
  // end
  j18:;
  _get33 = radix;
  radix = f64_uuuuu(_get33, 0);
  _get34 = radix;
  radixjjtype = 1;
  _get35 = radix;
  logictmpi = _get35 < 2;
  _get36 = logictmpi;
  // if i32
  i32 _r19;
    if ((_get36) == 0) {
      _get37 = radix;
      jjlast_type = 2;
      _r19 = _get37 > 36;
    } else {
      _get38 = logictmpi;
      jjlast_type = 2;
      _r19 = _get38;
    }
  // end
  j19:;
  // if 
    if ((_r19) != 0) {
      printf("Uncaught RangeError: toString() radix argument must be between 2 and 36\n");
      exit(1);
    }
  // end
  j20:;
  _get39 = _this;
  // if 
    if (_get39 == 0) {
      _get40 = out;
      jjmakearray_pointer_tmp = (u32)_get40;
      _get41 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get41, 1);
      _get42 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get42, 48);
      _get43 = jjmakearray_pointer_tmp;
      out = (f64)_get43;
      _get44 = out;
      return (struct ReturnValue){ _get44, 195 };
    }
  // end
  j21:;
  _get45 = _this;
  // if 
    if (_get45 < 0) {
      _get46 = _this;
      _this = -_get46;
      _get47 = outPtr;
      _get48 = outPtr;
      outPtr = _get48 + 1;
      i32_store8(0, 4, (i32)_get47, 45);
    }
  // end
  j22:;
  _get49 = _this;
  i = __Math_trunc(_get49);
  digits = 131072;
  l = 0;
  _get50 = radix;
  // if 
    if (_get50 == 10) {
      _get51 = i;
      // if 
        if (_get51 >= 1e+21) {
          trailing = 1;
          e = -1;
          // loop 
          j25:;
            _get52 = i;
            // if 
              if (_get52 > 0) {
                _get53 = i;
                _get54 = radix;
                digit = f64_ll(_get53, _get54);
                _get55 = i;
                _get56 = radix;
                i = __Math_trunc(_get55 / _get56);
                _get57 = e;
                e = _get57 + 1;
                _get58 = trailing;
                // if 
                  if (((u32)_get58) != 0) {
                    _get59 = digit;
                    // if 
                      if (_get59 == 0) {
                        goto j25;
                      }
                    // end
                    j28:;
                    trailing = 0;
                  }
                // end
                j27:;
                _get60 = digits;
                _get61 = l;
                _get62 = digit;
                i32_store8(0, 4, (i32)(_get60 + _get61), (i32)_get62);
                _get63 = l;
                l = _get63 + 1;
                goto j25;
              }
            // end
            j26:;
          // end
          _get64 = digits;
          _get65 = l;
          digitsPtr = _get64 + _get65;
          _get66 = outPtr;
          _get67 = l;
          endPtr = _get66 + _get67;
          _get68 = outPtr;
          dotPlace = _get68 + 1;
          // loop 
          j29:;
            _get69 = outPtr;
            _get70 = endPtr;
            // if 
              if (_get69 < _get70) {
                _get71 = outPtr;
                _get72 = dotPlace;
                // if 
                  if (_get71 == _get72) {
                    _get73 = outPtr;
                    _get74 = outPtr;
                    outPtr = _get74 + 1;
                    i32_store8(0, 4, (i32)_get73, 46);
                    _get75 = endPtr;
                    endPtr = _get75 + 1;
                  }
                // end
                j31:;
                _get76 = digitsPtr;
                digitsPtr = _get76 - 1;
                _get77 = digitsPtr;
                digit = (f64)i32_load8_u(0, 4, (i32)_get77);
                _get78 = digit;
                // if 
                  if (_get78 < 10) {
                    _get79 = digit;
                    digit = _get79 + 48;
                  } else {
                    _get80 = digit;
                    digit = _get80 + 87;
                  }
                // end
                j32:;
                _get81 = outPtr;
                _get82 = outPtr;
                outPtr = _get82 + 1;
                _get83 = digit;
                i32_store8(0, 4, (i32)_get81, (i32)_get83);
                goto j29;
              }
            // end
            j30:;
          // end
          _get84 = outPtr;
          _get85 = outPtr;
          outPtr = _get85 + 1;
          i32_store8(0, 4, (i32)_get84, 101);
          _get86 = outPtr;
          _get87 = outPtr;
          outPtr = _get87 + 1;
          i32_store8(0, 4, (i32)_get86, 43);
          l = 0;
          // loop 
          j33:;
            _get88 = e;
            // if 
              if (_get88 > 0) {
                _get89 = digits;
                _get90 = l;
                _get91 = e;
                _get92 = radix;
                i32_store8(0, 4, (i32)(_get89 + _get90), (i32)f64_ll(_get91, _get92));
                _get93 = e;
                _get94 = radix;
                e = __Math_trunc(_get93 / _get94);
                _get95 = l;
                l = _get95 + 1;
                goto j33;
              }
            // end
            j34:;
          // end
          _get96 = digits;
          _get97 = l;
          digitsPtr = _get96 + _get97;
          _get98 = outPtr;
          _get99 = l;
          endPtr = _get98 + _get99;
          // loop 
          j35:;
            _get100 = outPtr;
            _get101 = endPtr;
            // if 
              if (_get100 < _get101) {
                _get102 = digitsPtr;
                digitsPtr = _get102 - 1;
                _get103 = digitsPtr;
                digit = (f64)i32_load8_u(0, 4, (i32)_get103);
                _get104 = digit;
                // if 
                  if (_get104 < 10) {
                    _get105 = digit;
                    digit = _get105 + 48;
                  } else {
                    _get106 = digit;
                    digit = _get106 + 87;
                  }
                // end
                j37:;
                _get107 = outPtr;
                _get108 = outPtr;
                outPtr = _get108 + 1;
                _get109 = digit;
                i32_store8(0, 4, (i32)_get107, (i32)_get109);
                goto j35;
              }
            // end
            j36:;
          // end
          _get110 = out;
          __member_setter_ptr_tmp = (u32)_get110;
          _get111 = __member_setter_ptr_tmp;
          _get112 = outPtr;
          _get113 = out;
          __length_setter_tmp = _get112 - _get113;
          _get114 = __length_setter_tmp;
          i32_store(1, 0, _get111, (u32)_get114);
          _get115 = out;
          return (struct ReturnValue){ _get115, 195 };
        }
      // end
      j24:;
      _get116 = _this;
      // if 
        if (_get116 < 0.000001) {
          _get117 = _this;
          decimal = _get117;
          e = 1;
          // loop 
          j39:;
            _get118 = decimal;
            _get119 = radix;
            decimal = _get118 * _get119;
            _get120 = decimal;
            intPart = __Math_trunc(_get120);
            _get121 = intPart;
            // if 
              if (_get121 > 0) {
                _get122 = decimal;
                _get123 = intPart;
                // if 
                  if ((_get122 - _get123) < 1e-10) {
                    goto j40;
                  }
                // end
                j41:;
              } else {
                _get124 = e;
                e = _get124 + 1;
              }
            // end
            j40:;
            goto j39;
          // end
          // loop 
          j42:;
            _get125 = decimal;
            // if 
              if (_get125 > 0) {
                _get126 = decimal;
                _get127 = radix;
                digit = f64_ll(_get126, _get127);
                _get128 = decimal;
                _get129 = radix;
                decimal = __Math_trunc(_get128 / _get129);
                _get130 = digits;
                _get131 = l;
                _get132 = digit;
                i32_store8(0, 4, (i32)(_get130 + _get131), (i32)_get132);
                _get133 = l;
                l = _get133 + 1;
                goto j42;
              }
            // end
            j43:;
          // end
          _get134 = digits;
          _get135 = l;
          digitsPtr = _get134 + _get135;
          _get136 = outPtr;
          _get137 = l;
          endPtr = _get136 + _get137;
          _get138 = outPtr;
          dotPlace = _get138 + 1;
          // loop 
          j44:;
            _get139 = outPtr;
            _get140 = endPtr;
            // if 
              if (_get139 < _get140) {
                _get141 = digitsPtr;
                digitsPtr = _get141 - 1;
                _get142 = digitsPtr;
                digit = (f64)i32_load8_u(0, 4, (i32)_get142);
                _get143 = outPtr;
                _get144 = dotPlace;
                // if 
                  if (_get143 == _get144) {
                    _get145 = outPtr;
                    _get146 = outPtr;
                    outPtr = _get146 + 1;
                    i32_store8(0, 4, (i32)_get145, 46);
                    _get147 = endPtr;
                    endPtr = _get147 + 1;
                  }
                // end
                j46:;
                _get148 = digit;
                // if 
                  if (_get148 < 10) {
                    _get149 = digit;
                    digit = _get149 + 48;
                  } else {
                    _get150 = digit;
                    digit = _get150 + 87;
                  }
                // end
                j47:;
                _get151 = outPtr;
                _get152 = outPtr;
                outPtr = _get152 + 1;
                _get153 = digit;
                i32_store8(0, 4, (i32)_get151, (i32)_get153);
                goto j44;
              }
            // end
            j45:;
          // end
          _get154 = outPtr;
          _get155 = outPtr;
          outPtr = _get155 + 1;
          i32_store8(0, 4, (i32)_get154, 101);
          _get156 = outPtr;
          _get157 = outPtr;
          outPtr = _get157 + 1;
          i32_store8(0, 4, (i32)_get156, 45);
          l = 0;
          // loop 
          j48:;
            _get158 = e;
            // if 
              if (_get158 > 0) {
                _get159 = digits;
                _get160 = l;
                _get161 = e;
                _get162 = radix;
                i32_store8(0, 4, (i32)(_get159 + _get160), (i32)f64_ll(_get161, _get162));
                _get163 = e;
                _get164 = radix;
                e = __Math_trunc(_get163 / _get164);
                _get165 = l;
                l = _get165 + 1;
                goto j48;
              }
            // end
            j49:;
          // end
          _get166 = digits;
          _get167 = l;
          digitsPtr = _get166 + _get167;
          _get168 = outPtr;
          _get169 = l;
          endPtr = _get168 + _get169;
          // loop 
          j50:;
            _get170 = outPtr;
            _get171 = endPtr;
            // if 
              if (_get170 < _get171) {
                _get172 = digitsPtr;
                digitsPtr = _get172 - 1;
                _get173 = digitsPtr;
                digit = (f64)i32_load8_u(0, 4, (i32)_get173);
                _get174 = digit;
                // if 
                  if (_get174 < 10) {
                    _get175 = digit;
                    digit = _get175 + 48;
                  } else {
                    _get176 = digit;
                    digit = _get176 + 87;
                  }
                // end
                j52:;
                _get177 = outPtr;
                _get178 = outPtr;
                outPtr = _get178 + 1;
                _get179 = digit;
                i32_store8(0, 4, (i32)_get177, (i32)_get179);
                goto j50;
              }
            // end
            j51:;
          // end
          _get180 = out;
          __member_setter_ptr_tmp = (u32)_get180;
          _get181 = __member_setter_ptr_tmp;
          _get182 = outPtr;
          _get183 = out;
          __length_setter_tmp = _get182 - _get183;
          _get184 = __length_setter_tmp;
          i32_store(1, 0, _get181, (u32)_get184);
          _get185 = out;
          return (struct ReturnValue){ _get185, 195 };
        }
      // end
      j38:;
    }
  // end
  j23:;
  _get186 = i;
  // if 
    if (_get186 == 0) {
      _get187 = digits;
      i32_store8(0, 4, (i32)_get187, 0);
      l = 1;
    } else {
      // loop 
      j54:;
        _get188 = i;
        // if 
          if (_get188 > 0) {
            _get189 = digits;
            _get190 = l;
            _get191 = i;
            _get192 = radix;
            i32_store8(0, 4, (i32)(_get189 + _get190), (i32)f64_ll(_get191, _get192));
            _get193 = i;
            _get194 = radix;
            i = __Math_trunc(_get193 / _get194);
            _get195 = l;
            l = _get195 + 1;
            goto j54;
          }
        // end
        j55:;
      // end
    }
  // end
  j53:;
  _get196 = digits;
  _get197 = l;
  digitsPtr = _get196 + _get197;
  _get198 = outPtr;
  _get199 = l;
  endPtr = _get198 + _get199;
  // loop 
  j56:;
    _get200 = outPtr;
    _get201 = endPtr;
    // if 
      if (_get200 < _get201) {
        _get202 = digitsPtr;
        digitsPtr = _get202 - 1;
        _get203 = digitsPtr;
        digit = (f64)i32_load8_u(0, 4, (i32)_get203);
        _get204 = digit;
        // if 
          if (_get204 < 10) {
            _get205 = digit;
            digit = _get205 + 48;
          } else {
            _get206 = digit;
            digit = _get206 + 87;
          }
        // end
        j58:;
        _get207 = outPtr;
        _get208 = outPtr;
        outPtr = _get208 + 1;
        _get209 = digit;
        i32_store8(0, 4, (i32)_get207, (i32)_get209);
        goto j56;
      }
    // end
    j57:;
  // end
  _get210 = _this;
  _get211 = _this;
  decimal = _get210 - __Math_trunc(_get211);
  _get212 = decimal;
  // if 
    if (_get212 > 0) {
      _get213 = outPtr;
      _get214 = outPtr;
      outPtr = _get214 + 1;
      i32_store8(0, 4, (i32)_get213, 46);
      _get215 = decimal;
      decimal = _get215 + 1;
      _get216 = l;
      decimalDigits = 16 - _get216;
      j = 0;
      // loop 
      j60:;
        _get217 = j;
        _get218 = decimalDigits;
        // if 
          if (_get217 < _get218) {
            _get219 = decimal;
            _get220 = radix;
            decimal = _get219 * _get220;
            _get221 = j;
            j = _get221 + 1;
            goto j60;
          }
        // end
        j61:;
      // end
      _get222 = decimal;
      decimal = __Math_round(_get222);
      l = 0;
      trailing = 1;
      // loop 
      j62:;
        _get223 = decimal;
        // if 
          if (_get223 > 1) {
            _get224 = decimal;
            _get225 = radix;
            digit = f64_ll(_get224, _get225);
            _get226 = decimal;
            _get227 = radix;
            decimal = __Math_trunc(_get226 / _get227);
            _get228 = trailing;
            // if 
              if (((u32)_get228) != 0) {
                _get229 = digit;
                // if 
                  if (_get229 == 0) {
                    goto j62;
                  }
                // end
                j65:;
                trailing = 0;
              }
            // end
            j64:;
            _get230 = digits;
            _get231 = l;
            _get232 = digit;
            i32_store8(0, 4, (i32)(_get230 + _get231), (i32)_get232);
            _get233 = l;
            l = _get233 + 1;
            goto j62;
          }
        // end
        j63:;
      // end
      _get234 = digits;
      _get235 = l;
      digitsPtr = _get234 + _get235;
      _get236 = outPtr;
      _get237 = l;
      endPtr = _get236 + _get237;
      // loop 
      j66:;
        _get238 = outPtr;
        _get239 = endPtr;
        // if 
          if (_get238 < _get239) {
            _get240 = digitsPtr;
            digitsPtr = _get240 - 1;
            _get241 = digitsPtr;
            digit = (f64)i32_load8_u(0, 4, (i32)_get241);
            _get242 = digit;
            // if 
              if (_get242 < 10) {
                _get243 = digit;
                digit = _get243 + 48;
              } else {
                _get244 = digit;
                digit = _get244 + 87;
              }
            // end
            j68:;
            _get245 = outPtr;
            _get246 = outPtr;
            outPtr = _get246 + 1;
            _get247 = digit;
            i32_store8(0, 4, (i32)_get245, (i32)_get247);
            goto j66;
          }
        // end
        j67:;
      // end
    }
  // end
  j59:;
  _get248 = out;
  __member_setter_ptr_tmp = (u32)_get248;
  _get249 = __member_setter_ptr_tmp;
  _get250 = outPtr;
  _get251 = out;
  __length_setter_tmp = _get250 - _get251;
  _get252 = __length_setter_tmp;
  i32_store(1, 0, _get249, (u32)_get252);
  _get253 = out;
  return (struct ReturnValue){ _get253, 195 };
}

struct ReturnValue __Boolean_prototype_toString(f64 _this, i32 _thisjjtype) {
  f64 _get9;
  i32 _get8;
  i32 _get7;
  i32 _get6;
  i32 _get5;
  i32 _get4;
  i32 _get3;
  i32 _get2;
  f64 _get1;
  f64 _get0;
  f64 out = 0;
  i32 jjmakearray_pointer_tmp = 0;

  out = (f64)__Porffor_allocate();
  _get0 = _this;
  // if 
    if (((u32)_get0) != 0) {
      out = 196608;
    } else {
      _get1 = out;
      jjmakearray_pointer_tmp = (u32)_get1;
      _get2 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get2, 5);
      _get3 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get3, 102);
      _get4 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get4, 97);
      _get5 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get5, 108);
      _get6 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get6, 115);
      _get7 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get7, 101);
      _get8 = jjmakearray_pointer_tmp;
      out = (f64)_get8;
    }
  // end
  j70:;
  _get9 = out;
  return (struct ReturnValue){ _get9, 195 };
}

struct ReturnValue __Symbol_prototype_descriptionkkget(f64 _this, i32 _thisjjtype) {
  i32 _get8;
  i32 _get7;
  i32 _get6;
  f64 _get5;
  f64 _get4;
  f64 _get3;
  i32 _get2;
  i32 _get1;
  i32 _get0;
  f64 jjmember_obj = 0;
  f64 jjmember_prop = 0;
  i32 jjloadArray_offset = 0;
  i32 jjlast_type = 0;
  i32 jjmember_allocd = 0;
  i32 jjswap = 0;
  i32 jjmakearray_pointer_tmp = 0;

  _get0 = _thisjjtype;
  // if 
    if (_get0 != 5) {
      printf("Uncaught TypeError: Symbol.prototype.description$get expects 'this' to be a Symbol\n");
      exit(1);
    }
  // end
  j73:;
  // if 
    if ((jjporfjjdescStorejjglbl_inited) == 0) {
      jjporfjjdescStore = 262144;
      jjmakearray_pointer_tmp = (u32)jjporfjjdescStore;
      _get1 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get1, 0);
      _get2 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get2, 0);
      jjporfjjdescStorejjglbl_inited = 1;
    }
  // end
  j74:;
  jjmember_obj = jjporfjjdescStore;
  _get3 = _this;
  jjmember_prop = _get3 - 1;
  _get4 = jjmember_prop;
  _get5 = jjmember_obj;
  jjloadArray_offset = ((u32)(_get4) * 9) + (u32)(_get5);
  _get6 = jjloadArray_offset;
  _get7 = jjloadArray_offset;
  jjlast_type = i32_load8_u(0, 12, _get7);
  _get8 = jjlast_type;
  return (struct ReturnValue){ f64_load(0, 4, _get6), _get8 };
}

struct ReturnValue __Symbol_prototype_toString(f64 _this, i32 _thisjjtype) {
  f64 _get29;
  f64 _get28;
  f64 _get27;
  i32 _get26;
  f64 _get25;
  f64 _get24;
  f64 _get23;
  f64 _get22;
  f64 _get21;
  f64 _get20;
  f64 _get19;
  f64 _get18;
  f64 _get17;
  f64 _get16;
  f64 _get15;
  f64 _get14;
  f64 _get13;
  f64 _get12;
  i32 _get11;
  f64 _get10;
  i32 _get9;
  f64 _get8;
  f64 _get7;
  f64 _get6;
  f64 _get5;
  f64 _get4;
  f64 _get3;
  f64 _get2;
  f64 _get1;
  i32 _get0;
  f64 out = 0;
  f64 description = 0;
  i32 descriptionjjtype = 0;
  f64 jjmember_obj = 0;
  i32 jjmember_objjjtype = 0;
  i32 jjlast_type = 0;
  f64 descLen = 0;
  f64 outPtr = 0;
  f64 descPtr = 0;
  f64 descPtrEnd = 0;
  f64 __length_setter_tmp = 0;
  i32 __member_setter_ptr_tmp = 0;

  _get0 = _thisjjtype;
  // if 
    if (_get0 != 5) {
      printf("Uncaught TypeError: Symbol.prototype.toString expects 'this' to be a Symbol\n");
      exit(1);
    }
  // end
  j72:;
  out = (f64)__Porffor_allocate();
  _get1 = out;
  i32_store8(0, 4, (i32)_get1, 83);
  _get2 = out;
  i32_store8(0, 5, (i32)_get2, 121);
  _get3 = out;
  i32_store8(0, 6, (i32)_get3, 109);
  _get4 = out;
  i32_store8(0, 7, (i32)_get4, 98);
  _get5 = out;
  i32_store8(0, 8, (i32)_get5, 111);
  _get6 = out;
  i32_store8(0, 9, (i32)_get6, 108);
  _get7 = out;
  i32_store8(0, 10, (i32)_get7, 40);
  _get8 = _this;
  const struct ReturnValue _0 = __Symbol_prototype_descriptionkkget(_get8, 5);
  jjlast_type = _0.type;
  _get9 = jjlast_type;
  descriptionjjtype = _get9;
  description = _0.value;
  descLen = 0;
  _get10 = description;
  _get11 = descriptionjjtype;
  // if 
    if (((_get10 != 0) | ((_get11 | 128) != 128)) != 0) {
      _get12 = description;
      descLen = (f64)i32_load(1, 0, (u32)_get12);
      _get13 = out;
      outPtr = _get13 + 7;
      _get14 = description;
      descPtr = _get14;
      _get15 = descPtr;
      _get16 = descLen;
      descPtrEnd = _get15 + _get16;
      // loop 
      j76:;
        _get17 = descPtr;
        _get18 = descPtrEnd;
        // if 
          if (_get17 < _get18) {
            _get19 = outPtr;
            _get20 = outPtr;
            outPtr = _get20 + 1;
            _get21 = descPtr;
            _get22 = descPtr;
            descPtr = _get22 + 1;
            i32_store8(0, 4, (i32)_get19, i32_load8_u(0, 4, (i32)_get21));
            goto j76;
          }
        // end
        j77:;
      // end
    }
  // end
  j75:;
  _get23 = out;
  _get24 = descLen;
  i32_store8(0, 11, (i32)(_get23 + _get24), 41);
  _get25 = out;
  __member_setter_ptr_tmp = (u32)_get25;
  _get26 = __member_setter_ptr_tmp;
  _get27 = descLen;
  __length_setter_tmp = 8 + _get27;
  _get28 = __length_setter_tmp;
  i32_store(1, 0, _get26, (u32)_get28);
  _get29 = out;
  return (struct ReturnValue){ _get29, 195 };
}

struct ReturnValue __Function_prototype_toString(f64 _this, i32 _thisjjtype) {
  f64 _get0;
  f64 out = 0;

  out = 327680;
  _get0 = out;
  return (struct ReturnValue){ _get0, 195 };
}

struct ReturnValue __Object_prototype_toString(f64 _this, i32 _thisjjtype) {
  f64 _get182;
  i32 _get181;
  i32 _get180;
  i32 _get179;
  i32 _get178;
  i32 _get177;
  i32 _get176;
  i32 _get175;
  i32 _get174;
  i32 _get173;
  i32 _get172;
  i32 _get171;
  i32 _get170;
  i32 _get169;
  i32 _get168;
  i32 _get167;
  i32 _get166;
  i32 _get165;
  f64 _get164;
  f64 _get163;
  i32 _get162;
  i32 _get161;
  i32 _get160;
  i32 _get159;
  i32 _get158;
  i32 _get157;
  i32 _get156;
  i32 _get155;
  i32 _get154;
  i32 _get153;
  i32 _get152;
  i32 _get151;
  i32 _get150;
  i32 _get149;
  i32 _get148;
  i32 _get147;
  i32 _get146;
  f64 _get145;
  f64 _get144;
  f64 _get143;
  i32 _get142;
  i32 _get141;
  i32 _get140;
  i32 _get139;
  i32 _get138;
  i32 _get137;
  i32 _get136;
  i32 _get135;
  i32 _get134;
  i32 _get133;
  i32 _get132;
  i32 _get131;
  i32 _get130;
  i32 _get129;
  i32 _get128;
  f64 _get127;
  f64 _get126;
  f64 _get125;
  i32 _get124;
  i32 _get123;
  i32 _get122;
  i32 _get121;
  i32 _get120;
  i32 _get119;
  i32 _get118;
  i32 _get117;
  i32 _get116;
  i32 _get115;
  i32 _get114;
  i32 _get113;
  i32 _get112;
  i32 _get111;
  i32 _get110;
  i32 _get109;
  i32 _get108;
  f64 _get107;
  f64 _get106;
  f64 _get105;
  f64 _get104;
  i32 _get103;
  i32 _get102;
  i32 _get101;
  i32 _get100;
  i32 _get99;
  i32 _get98;
  i32 _get97;
  i32 _get96;
  i32 _get95;
  i32 _get94;
  i32 _get93;
  i32 _get92;
  i32 _get91;
  i32 _get90;
  i32 _get89;
  i32 _get88;
  i32 _get87;
  f64 _get86;
  f64 _get85;
  f64 _get84;
  i32 _get83;
  i32 _get82;
  i32 _get81;
  i32 _get80;
  i32 _get79;
  i32 _get78;
  i32 _get77;
  i32 _get76;
  i32 _get75;
  i32 _get74;
  i32 _get73;
  i32 _get72;
  i32 _get71;
  i32 _get70;
  i32 _get69;
  i32 _get68;
  i32 _get67;
  i32 _get66;
  f64 _get65;
  f64 _get64;
  f64 _get63;
  i32 _get62;
  i32 _get61;
  i32 _get60;
  i32 _get59;
  i32 _get58;
  i32 _get57;
  i32 _get56;
  i32 _get55;
  i32 _get54;
  i32 _get53;
  i32 _get52;
  i32 _get51;
  i32 _get50;
  i32 _get49;
  i32 _get48;
  i32 _get47;
  i32 _get46;
  i32 _get45;
  i32 _get44;
  f64 _get43;
  f64 _get42;
  f64 _get41;
  i32 _get40;
  i32 _get39;
  i32 _get38;
  i32 _get37;
  i32 _get36;
  i32 _get35;
  i32 _get34;
  i32 _get33;
  i32 _get32;
  i32 _get31;
  i32 _get30;
  i32 _get29;
  i32 _get28;
  i32 _get27;
  i32 _get26;
  i32 _get25;
  f64 _get24;
  f64 _get23;
  i32 _get22;
  f64 _get21;
  i32 _get20;
  i32 _get19;
  i32 _get18;
  i32 _get17;
  i32 _get16;
  i32 _get15;
  i32 _get14;
  i32 _get13;
  i32 _get12;
  i32 _get11;
  i32 _get10;
  i32 _get9;
  i32 _get8;
  i32 _get7;
  i32 _get6;
  f64 _get5;
  i32 _get4;
  f64 _get3;
  f64 _get2;
  i32 _get1;
  f64 _get0;
  f64 out = 0;
  i32 jjmakearray_pointer_tmp = 0;
  f64 t = 0;

  out = (f64)__Porffor_allocate();
  _get0 = _this;
  _get1 = _thisjjtype;
  // if 
    if (((_get0 == 0) & ((_get1 | 128) == 128)) != 0) {
      out = 393216;
      _get2 = out;
      return (struct ReturnValue){ _get2, 195 };
    }
  // end
  j80:;
  _get3 = _this;
  _get4 = _thisjjtype;
  // if 
    if (((_get3 == 0) & ((_get4 | 128) == 135)) != 0) {
      _get5 = out;
      jjmakearray_pointer_tmp = (u32)_get5;
      _get6 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get6, 13);
      _get7 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get7, 91);
      _get8 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get8, 111);
      _get9 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get9, 98);
      _get10 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get10, 106);
      _get11 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get11, 101);
      _get12 = jjmakearray_pointer_tmp;
      i32_store8(0, 9, _get12, 99);
      _get13 = jjmakearray_pointer_tmp;
      i32_store8(0, 10, _get13, 116);
      _get14 = jjmakearray_pointer_tmp;
      i32_store8(0, 11, _get14, 32);
      _get15 = jjmakearray_pointer_tmp;
      i32_store8(0, 12, _get15, 78);
      _get16 = jjmakearray_pointer_tmp;
      i32_store8(0, 13, _get16, 117);
      _get17 = jjmakearray_pointer_tmp;
      i32_store8(0, 14, _get17, 108);
      _get18 = jjmakearray_pointer_tmp;
      i32_store8(0, 15, _get18, 108);
      _get19 = jjmakearray_pointer_tmp;
      i32_store8(0, 16, _get19, 93);
      _get20 = jjmakearray_pointer_tmp;
      out = (f64)_get20;
      _get21 = out;
      return (struct ReturnValue){ _get21, 195 };
    }
  // end
  j81:;
  _get22 = _thisjjtype;
  t = (f64)_get22;
  _get23 = t;
  // if 
    if (_get23 == 80) {
      _get24 = out;
      jjmakearray_pointer_tmp = (u32)_get24;
      _get25 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get25, 14);
      _get26 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get26, 91);
      _get27 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get27, 111);
      _get28 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get28, 98);
      _get29 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get29, 106);
      _get30 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get30, 101);
      _get31 = jjmakearray_pointer_tmp;
      i32_store8(0, 9, _get31, 99);
      _get32 = jjmakearray_pointer_tmp;
      i32_store8(0, 10, _get32, 116);
      _get33 = jjmakearray_pointer_tmp;
      i32_store8(0, 11, _get33, 32);
      _get34 = jjmakearray_pointer_tmp;
      i32_store8(0, 12, _get34, 65);
      _get35 = jjmakearray_pointer_tmp;
      i32_store8(0, 13, _get35, 114);
      _get36 = jjmakearray_pointer_tmp;
      i32_store8(0, 14, _get36, 114);
      _get37 = jjmakearray_pointer_tmp;
      i32_store8(0, 15, _get37, 97);
      _get38 = jjmakearray_pointer_tmp;
      i32_store8(0, 16, _get38, 121);
      _get39 = jjmakearray_pointer_tmp;
      i32_store8(0, 17, _get39, 93);
      _get40 = jjmakearray_pointer_tmp;
      out = (f64)_get40;
      _get41 = out;
      return (struct ReturnValue){ _get41, 195 };
    }
  // end
  j82:;
  _get42 = t;
  // if 
    if (_get42 == 6) {
      _get43 = out;
      jjmakearray_pointer_tmp = (u32)_get43;
      _get44 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get44, 17);
      _get45 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get45, 91);
      _get46 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get46, 111);
      _get47 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get47, 98);
      _get48 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get48, 106);
      _get49 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get49, 101);
      _get50 = jjmakearray_pointer_tmp;
      i32_store8(0, 9, _get50, 99);
      _get51 = jjmakearray_pointer_tmp;
      i32_store8(0, 10, _get51, 116);
      _get52 = jjmakearray_pointer_tmp;
      i32_store8(0, 11, _get52, 32);
      _get53 = jjmakearray_pointer_tmp;
      i32_store8(0, 12, _get53, 70);
      _get54 = jjmakearray_pointer_tmp;
      i32_store8(0, 13, _get54, 117);
      _get55 = jjmakearray_pointer_tmp;
      i32_store8(0, 14, _get55, 110);
      _get56 = jjmakearray_pointer_tmp;
      i32_store8(0, 15, _get56, 99);
      _get57 = jjmakearray_pointer_tmp;
      i32_store8(0, 16, _get57, 116);
      _get58 = jjmakearray_pointer_tmp;
      i32_store8(0, 17, _get58, 105);
      _get59 = jjmakearray_pointer_tmp;
      i32_store8(0, 18, _get59, 111);
      _get60 = jjmakearray_pointer_tmp;
      i32_store8(0, 19, _get60, 110);
      _get61 = jjmakearray_pointer_tmp;
      i32_store8(0, 20, _get61, 93);
      _get62 = jjmakearray_pointer_tmp;
      out = (f64)_get62;
      _get63 = out;
      return (struct ReturnValue){ _get63, 195 };
    }
  // end
  j83:;
  _get64 = t;
  // if 
    if (_get64 == 2) {
      _get65 = out;
      jjmakearray_pointer_tmp = (u32)_get65;
      _get66 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get66, 16);
      _get67 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get67, 91);
      _get68 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get68, 111);
      _get69 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get69, 98);
      _get70 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get70, 106);
      _get71 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get71, 101);
      _get72 = jjmakearray_pointer_tmp;
      i32_store8(0, 9, _get72, 99);
      _get73 = jjmakearray_pointer_tmp;
      i32_store8(0, 10, _get73, 116);
      _get74 = jjmakearray_pointer_tmp;
      i32_store8(0, 11, _get74, 32);
      _get75 = jjmakearray_pointer_tmp;
      i32_store8(0, 12, _get75, 66);
      _get76 = jjmakearray_pointer_tmp;
      i32_store8(0, 13, _get76, 111);
      _get77 = jjmakearray_pointer_tmp;
      i32_store8(0, 14, _get77, 111);
      _get78 = jjmakearray_pointer_tmp;
      i32_store8(0, 15, _get78, 108);
      _get79 = jjmakearray_pointer_tmp;
      i32_store8(0, 16, _get79, 101);
      _get80 = jjmakearray_pointer_tmp;
      i32_store8(0, 17, _get80, 97);
      _get81 = jjmakearray_pointer_tmp;
      i32_store8(0, 18, _get81, 110);
      _get82 = jjmakearray_pointer_tmp;
      i32_store8(0, 19, _get82, 93);
      _get83 = jjmakearray_pointer_tmp;
      out = (f64)_get83;
      _get84 = out;
      return (struct ReturnValue){ _get84, 195 };
    }
  // end
  j84:;
  _get85 = t;
  // if 
    if (_get85 == 1) {
      _get86 = out;
      jjmakearray_pointer_tmp = (u32)_get86;
      _get87 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get87, 15);
      _get88 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get88, 91);
      _get89 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get89, 111);
      _get90 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get90, 98);
      _get91 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get91, 106);
      _get92 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get92, 101);
      _get93 = jjmakearray_pointer_tmp;
      i32_store8(0, 9, _get93, 99);
      _get94 = jjmakearray_pointer_tmp;
      i32_store8(0, 10, _get94, 116);
      _get95 = jjmakearray_pointer_tmp;
      i32_store8(0, 11, _get95, 32);
      _get96 = jjmakearray_pointer_tmp;
      i32_store8(0, 12, _get96, 78);
      _get97 = jjmakearray_pointer_tmp;
      i32_store8(0, 13, _get97, 117);
      _get98 = jjmakearray_pointer_tmp;
      i32_store8(0, 14, _get98, 109);
      _get99 = jjmakearray_pointer_tmp;
      i32_store8(0, 15, _get99, 98);
      _get100 = jjmakearray_pointer_tmp;
      i32_store8(0, 16, _get100, 101);
      _get101 = jjmakearray_pointer_tmp;
      i32_store8(0, 17, _get101, 114);
      _get102 = jjmakearray_pointer_tmp;
      i32_store8(0, 18, _get102, 93);
      _get103 = jjmakearray_pointer_tmp;
      out = (f64)_get103;
      _get104 = out;
      return (struct ReturnValue){ _get104, 195 };
    }
  // end
  j85:;
  _get105 = t;
  _get106 = t;
  // if 
    if (((_get105 == 67) | (_get106 == 195)) != 0) {
      _get107 = out;
      jjmakearray_pointer_tmp = (u32)_get107;
      _get108 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get108, 15);
      _get109 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get109, 91);
      _get110 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get110, 111);
      _get111 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get111, 98);
      _get112 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get112, 106);
      _get113 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get113, 101);
      _get114 = jjmakearray_pointer_tmp;
      i32_store8(0, 9, _get114, 99);
      _get115 = jjmakearray_pointer_tmp;
      i32_store8(0, 10, _get115, 116);
      _get116 = jjmakearray_pointer_tmp;
      i32_store8(0, 11, _get116, 32);
      _get117 = jjmakearray_pointer_tmp;
      i32_store8(0, 12, _get117, 83);
      _get118 = jjmakearray_pointer_tmp;
      i32_store8(0, 13, _get118, 116);
      _get119 = jjmakearray_pointer_tmp;
      i32_store8(0, 14, _get119, 114);
      _get120 = jjmakearray_pointer_tmp;
      i32_store8(0, 15, _get120, 105);
      _get121 = jjmakearray_pointer_tmp;
      i32_store8(0, 16, _get121, 110);
      _get122 = jjmakearray_pointer_tmp;
      i32_store8(0, 17, _get122, 103);
      _get123 = jjmakearray_pointer_tmp;
      i32_store8(0, 18, _get123, 93);
      _get124 = jjmakearray_pointer_tmp;
      out = (f64)_get124;
      _get125 = out;
      return (struct ReturnValue){ _get125, 195 };
    }
  // end
  j86:;
  _get126 = t;
  // if 
    if (_get126 == 18) {
      _get127 = out;
      jjmakearray_pointer_tmp = (u32)_get127;
      _get128 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get128, 13);
      _get129 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get129, 91);
      _get130 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get130, 111);
      _get131 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get131, 98);
      _get132 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get132, 106);
      _get133 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get133, 101);
      _get134 = jjmakearray_pointer_tmp;
      i32_store8(0, 9, _get134, 99);
      _get135 = jjmakearray_pointer_tmp;
      i32_store8(0, 10, _get135, 116);
      _get136 = jjmakearray_pointer_tmp;
      i32_store8(0, 11, _get136, 32);
      _get137 = jjmakearray_pointer_tmp;
      i32_store8(0, 12, _get137, 68);
      _get138 = jjmakearray_pointer_tmp;
      i32_store8(0, 13, _get138, 97);
      _get139 = jjmakearray_pointer_tmp;
      i32_store8(0, 14, _get139, 116);
      _get140 = jjmakearray_pointer_tmp;
      i32_store8(0, 15, _get140, 101);
      _get141 = jjmakearray_pointer_tmp;
      i32_store8(0, 16, _get141, 93);
      _get142 = jjmakearray_pointer_tmp;
      out = (f64)_get142;
      _get143 = out;
      return (struct ReturnValue){ _get143, 195 };
    }
  // end
  j87:;
  _get144 = t;
  // if 
    if (_get144 == 17) {
      _get145 = out;
      jjmakearray_pointer_tmp = (u32)_get145;
      _get146 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get146, 15);
      _get147 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get147, 91);
      _get148 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get148, 111);
      _get149 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get149, 98);
      _get150 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get150, 106);
      _get151 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get151, 101);
      _get152 = jjmakearray_pointer_tmp;
      i32_store8(0, 9, _get152, 99);
      _get153 = jjmakearray_pointer_tmp;
      i32_store8(0, 10, _get153, 116);
      _get154 = jjmakearray_pointer_tmp;
      i32_store8(0, 11, _get154, 32);
      _get155 = jjmakearray_pointer_tmp;
      i32_store8(0, 12, _get155, 82);
      _get156 = jjmakearray_pointer_tmp;
      i32_store8(0, 13, _get156, 101);
      _get157 = jjmakearray_pointer_tmp;
      i32_store8(0, 14, _get157, 103);
      _get158 = jjmakearray_pointer_tmp;
      i32_store8(0, 15, _get158, 69);
      _get159 = jjmakearray_pointer_tmp;
      i32_store8(0, 16, _get159, 120);
      _get160 = jjmakearray_pointer_tmp;
      i32_store8(0, 17, _get160, 112);
      _get161 = jjmakearray_pointer_tmp;
      i32_store8(0, 18, _get161, 93);
      _get162 = jjmakearray_pointer_tmp;
      out = (f64)_get162;
      _get163 = out;
      return (struct ReturnValue){ _get163, 195 };
    }
  // end
  j88:;
  _get164 = out;
  jjmakearray_pointer_tmp = (u32)_get164;
  _get165 = jjmakearray_pointer_tmp;
  i32_store(1, 0, _get165, 15);
  _get166 = jjmakearray_pointer_tmp;
  i32_store8(0, 4, _get166, 91);
  _get167 = jjmakearray_pointer_tmp;
  i32_store8(0, 5, _get167, 111);
  _get168 = jjmakearray_pointer_tmp;
  i32_store8(0, 6, _get168, 98);
  _get169 = jjmakearray_pointer_tmp;
  i32_store8(0, 7, _get169, 106);
  _get170 = jjmakearray_pointer_tmp;
  i32_store8(0, 8, _get170, 101);
  _get171 = jjmakearray_pointer_tmp;
  i32_store8(0, 9, _get171, 99);
  _get172 = jjmakearray_pointer_tmp;
  i32_store8(0, 10, _get172, 116);
  _get173 = jjmakearray_pointer_tmp;
  i32_store8(0, 11, _get173, 32);
  _get174 = jjmakearray_pointer_tmp;
  i32_store8(0, 12, _get174, 79);
  _get175 = jjmakearray_pointer_tmp;
  i32_store8(0, 13, _get175, 98);
  _get176 = jjmakearray_pointer_tmp;
  i32_store8(0, 14, _get176, 106);
  _get177 = jjmakearray_pointer_tmp;
  i32_store8(0, 15, _get177, 101);
  _get178 = jjmakearray_pointer_tmp;
  i32_store8(0, 16, _get178, 99);
  _get179 = jjmakearray_pointer_tmp;
  i32_store8(0, 17, _get179, 116);
  _get180 = jjmakearray_pointer_tmp;
  i32_store8(0, 18, _get180, 93);
  _get181 = jjmakearray_pointer_tmp;
  out = (f64)_get181;
  _get182 = out;
  return (struct ReturnValue){ _get182, 195 };
}

struct ReturnValue __Promise_prototype_toString(f64 _this, i32 _thisjjtype) {
  f64 _get0;
  f64 str = 0;

  str = 1179648;
  _get0 = str;
  return (struct ReturnValue){ _get0, 195 };
}

struct ReturnValue __Porffor_bytestring_appendChar(f64 str, i32 strjjtype, f64 _char, i32 charjjtype) {
  f64 _get7;
  f64 _get6;
  i32 _get5;
  f64 _get4;
  f64 _get3;
  f64 _get2;
  f64 _get1;
  f64 _get0;
  f64 len = 0;
  f64 __length_setter_tmp = 0;
  i32 __member_setter_ptr_tmp = 0;

  _get0 = str;
  len = (f64)i32_load(1, 0, (u32)_get0);
  _get1 = str;
  _get2 = len;
  _get3 = _char;
  i32_store8(0, 4, (i32)(_get1 + _get2), (i32)_get3);
  _get4 = str;
  __member_setter_ptr_tmp = (u32)_get4;
  _get5 = __member_setter_ptr_tmp;
  _get6 = len;
  __length_setter_tmp = _get6 + 1;
  _get7 = __length_setter_tmp;
  i32_store(1, 0, _get5, (u32)_get7);
  return (struct ReturnValue){ 1, 1 };
}

struct ReturnValue __Porffor_bytestring_appendStr(f64 str, i32 strjjtype, f64 appendage, i32 appendagejjtype) {
  f64 _get17;
  f64 _get16;
  f64 _get15;
  i32 _get14;
  f64 _get13;
  f64 _get12;
  f64 _get11;
  f64 _get10;
  f64 _get9;
  f64 _get8;
  f64 _get7;
  f64 _get6;
  f64 _get5;
  f64 _get4;
  f64 _get3;
  f64 _get2;
  f64 _get1;
  f64 _get0;
  f64 strLen = 0;
  f64 appendageLen = 0;
  f64 strPtr = 0;
  f64 appendagePtr = 0;
  f64 endPtr = 0;
  f64 __length_setter_tmp = 0;
  i32 __member_setter_ptr_tmp = 0;

  _get0 = str;
  strLen = (f64)i32_load(1, 0, (u32)_get0);
  _get1 = appendage;
  appendageLen = (f64)i32_load(1, 0, (u32)_get1);
  _get2 = str;
  _get3 = strLen;
  strPtr = _get2 + _get3;
  _get4 = appendage;
  appendagePtr = _get4;
  _get5 = appendagePtr;
  _get6 = appendageLen;
  endPtr = _get5 + _get6;
  // loop 
  j96:;
    _get7 = appendagePtr;
    _get8 = endPtr;
    // if 
      if (_get7 < _get8) {
        _get9 = strPtr;
        _get10 = strPtr;
        strPtr = _get10 + 1;
        _get11 = appendagePtr;
        _get12 = appendagePtr;
        appendagePtr = _get12 + 1;
        i32_store8(0, 4, (i32)_get9, i32_load8_u(0, 4, (i32)_get11));
        goto j96;
      }
    // end
    j97:;
  // end
  _get13 = str;
  __member_setter_ptr_tmp = (u32)_get13;
  _get14 = __member_setter_ptr_tmp;
  _get15 = strLen;
  _get16 = appendageLen;
  __length_setter_tmp = _get15 + _get16;
  _get17 = __length_setter_tmp;
  i32_store(1, 0, _get14, (u32)_get17);
  return (struct ReturnValue){ 1, 1 };
}

struct ReturnValue __Array_prototype_toString(f64 _this, i32 _thisjjtype) {
  f64 _get26;
  i32 _get25;
  i32 _get24;
  f64 _get23;
  f64 _get22;
  i32 _get21;
  f64 _get20;
  f64 _get19;
  i32 _get18;
  f64 _get17;
  i32 _get16;
  i32 _get15;
  i32 _get14;
  i32 _get13;
  f64 _get12;
  f64 _get11;
  f64 _get10;
  f64 _get9;
  f64 _get8;
  f64 _get7;
  f64 _get6;
  f64 _get5;
  f64 _get4;
  f64 _get3;
  f64 _get2;
  i32 _get1;
  f64 _get0;
  f64 out = 0;
  f64 __length_setter_tmp = 0;
  i32 __member_setter_ptr_tmp = 0;
  f64 len = 0;
  f64 i = 0;
  i32 jjlast_type = 0;
  f64 element = 0;
  i32 elementjjtype = 0;
  f64 jjmember_obj = 0;
  f64 jjmember_prop = 0;
  i32 jjloadArray_offset = 0;
  i32 jjmember_allocd = 0;
  i32 jjswap = 0;
  f64 type = 0;
  i32 logictmpi = 0;

  out = (f64)__Porffor_allocate();
  _get0 = out;
  __member_setter_ptr_tmp = (u32)_get0;
  _get1 = __member_setter_ptr_tmp;
  __length_setter_tmp = 0;
  _get2 = __length_setter_tmp;
  i32_store(1, 0, _get1, (u32)_get2);
  _get3 = _this;
  len = (f64)i32_load(1, 0, (u32)_get3);
  i = 0;
  // loop 
  j91:;
    _get4 = i;
    _get5 = len;
    // if 
      if (_get4 < _get5) {
        _get6 = i;
        // if 
          if (_get6 > 0) {
            _get7 = out;
            const struct ReturnValue _0 = __Porffor_bytestring_appendChar(_get7, 195, 44, 1);
            jjlast_type = _0.type;
          }
        // end
        j93:;
        _get8 = _this;
        jjmember_obj = _get8;
        _get9 = i;
        _get10 = i;
        i = _get10 + 1;
        jjmember_prop = _get9;
        _get11 = jjmember_prop;
        _get12 = jjmember_obj;
        jjloadArray_offset = ((u32)(_get11) * 9) + (u32)(_get12);
        _get13 = jjloadArray_offset;
        _get14 = jjloadArray_offset;
        jjlast_type = i32_load8_u(0, 12, _get14);
        _get15 = jjlast_type;
        elementjjtype = _get15;
        element = f64_load(0, 4, _get13);
        _get16 = elementjjtype;
        type = (f64)_get16;
        _get17 = element;
        logictmpi = _get17 != 0;
        _get18 = logictmpi;
        // if i32
        i32 _r94;
          if ((_get18) == 0) {
            _get19 = type;
            _get20 = type;
            jjlast_type = 2;
            _r94 = (_get19 != 128) & (_get20 != 7);
          } else {
            _get21 = logictmpi;
            jjlast_type = 2;
            _r94 = _get21;
          }
        // end
        j94:;
        // if 
          if ((_r94) != 0) {
            _get22 = out;
            _get23 = element;
            _get24 = elementjjtype;
            const struct ReturnValue _1 = __ecma262_ToString(_get23, _get24);
            jjlast_type = _1.type;
            _get25 = jjlast_type;
            const struct ReturnValue _2 = __Porffor_bytestring_appendStr(_get22, 195, _1.value, _get25);
            jjlast_type = _2.type;
          }
        // end
        j95:;
        goto j91;
      }
    // end
    j92:;
  // end
  _get26 = out;
  return (struct ReturnValue){ _get26, 195 };
}

struct ReturnValue __ByteString_prototype_toString(i32 _this, i32 _thisjjtype) {
  i32 _get0;
  _get0 = _this;
  return (struct ReturnValue){ _get0, 195 };
}

struct ReturnValue __ecma262_ToString(f64 argument, i32 argumentjjtype) {
  i32 _get67;
  i32 _get66;
  f64 _get65;
  i32 _get64;
  f64 _get63;
  i32 _get62;
  i32 _get61;
  f64 _get60;
  i32 _get59;
  i32 _get58;
  f64 _get57;
  i32 _get56;
  i32 _get55;
  f64 _get54;
  i32 _get53;
  i32 _get52;
  f64 _get51;
  i32 _get50;
  i32 _get49;
  f64 _get48;
  i32 _get47;
  i32 _get46;
  f64 _get45;
  i32 _get44;
  i32 _get43;
  f64 _get42;
  i32 _get41;
  i32 _get40;
  i32 _get39;
  f64 _get38;
  f64 _get37;
  i32 _get36;
  i32 _get35;
  i32 _get34;
  i32 _get33;
  i32 _get32;
  i32 _get31;
  i32 _get30;
  f64 _get29;
  f64 _get28;
  i32 _get27;
  i32 _get26;
  i32 _get25;
  i32 _get24;
  i32 _get23;
  i32 _get22;
  f64 _get21;
  f64 _get20;
  f64 _get19;
  f64 _get18;
  i32 _get17;
  i32 _get16;
  i32 _get15;
  i32 _get14;
  i32 _get13;
  i32 _get12;
  f64 _get11;
  f64 _get10;
  f64 _get9;
  f64 _get8;
  f64 _get7;
  f64 _get6;
  f64 _get5;
  i32 _get4;
  f64 _get3;
  f64 _get2;
  f64 _get1;
  i32 _get0;
  f64 type = 0;
  f64 out = 0;
  i32 jjmakearray_pointer_tmp = 0;
  f64 jjproto_target = 0;
  i32 jjproto_targetjjtype = 0;
  i32 jjlast_type = 0;
  i32 jjtypeswitch_tmp1 = 0;

  _get0 = argumentjjtype;
  type = (f64)_get0;
  _get1 = type;
  _get2 = type;
  // if 
    if (((_get1 == 67) | (_get2 == 195)) != 0) {
      _get3 = argument;
      _get4 = argumentjjtype;
      return (struct ReturnValue){ _get3, _get4 };
    }
  // end
  j6:;
  _get5 = type;
  // if 
    if (_get5 == 5) {
      printf("Uncaught TypeError: Cannot convert a Symbol value to a string\n");
      exit(1);
    }
  // end
  j7:;
  out = (f64)__Porffor_allocate();
  _get6 = type;
  _get7 = type;
  // if 
    if (((_get6 == 128) | (_get7 == 0)) != 0) {
      out = 16;
      _get8 = out;
      return (struct ReturnValue){ _get8, 195 };
    }
  // end
  j8:;
  _get9 = type;
  _get10 = argument;
  // if 
    if (((_get9 == 7) & (_get10 == 0)) != 0) {
      _get11 = out;
      jjmakearray_pointer_tmp = (u32)_get11;
      _get12 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get12, 4);
      _get13 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get13, 110);
      _get14 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get14, 117);
      _get15 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get15, 108);
      _get16 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get16, 108);
      _get17 = jjmakearray_pointer_tmp;
      out = (f64)_get17;
      _get18 = out;
      return (struct ReturnValue){ _get18, 195 };
    }
  // end
  j9:;
  _get19 = type;
  // if 
    if (_get19 == 2) {
      _get20 = argument;
      // if 
        if (_get20 == 1) {
          _get21 = out;
          jjmakearray_pointer_tmp = (u32)_get21;
          _get22 = jjmakearray_pointer_tmp;
          i32_store(1, 0, _get22, 4);
          _get23 = jjmakearray_pointer_tmp;
          i32_store8(0, 4, _get23, 116);
          _get24 = jjmakearray_pointer_tmp;
          i32_store8(0, 5, _get24, 114);
          _get25 = jjmakearray_pointer_tmp;
          i32_store8(0, 6, _get25, 117);
          _get26 = jjmakearray_pointer_tmp;
          i32_store8(0, 7, _get26, 101);
          _get27 = jjmakearray_pointer_tmp;
          out = (f64)_get27;
          _get28 = out;
          return (struct ReturnValue){ _get28, 195 };
        }
      // end
      j11:;
      _get29 = out;
      jjmakearray_pointer_tmp = (u32)_get29;
      _get30 = jjmakearray_pointer_tmp;
      i32_store(1, 0, _get30, 5);
      _get31 = jjmakearray_pointer_tmp;
      i32_store8(0, 4, _get31, 102);
      _get32 = jjmakearray_pointer_tmp;
      i32_store8(0, 5, _get32, 97);
      _get33 = jjmakearray_pointer_tmp;
      i32_store8(0, 6, _get33, 108);
      _get34 = jjmakearray_pointer_tmp;
      i32_store8(0, 7, _get34, 115);
      _get35 = jjmakearray_pointer_tmp;
      i32_store8(0, 8, _get35, 101);
      _get36 = jjmakearray_pointer_tmp;
      out = (f64)_get36;
      _get37 = out;
      return (struct ReturnValue){ _get37, 195 };
    }
  // end
  j10:;
  _get38 = argument;
  jjproto_target = _get38;
  _get39 = argumentjjtype;
  jjproto_targetjjtype = _get39;
  _get40 = argumentjjtype;
  jjtypeswitch_tmp1 = _get40;
  // block f64
  f64 _r12;
    _get41 = jjtypeswitch_tmp1;
    // if 
      if (_get41 == 1) {
        _get42 = jjproto_target;
        _get43 = jjproto_targetjjtype;
        const struct ReturnValue _0 = __Number_prototype_toString(_get42, _get43, 0, 128);
        jjlast_type = _0.type;
        _r12 = _0.value;
        goto j12;
      }
    // end
    j13:;
    _get44 = jjtypeswitch_tmp1;
    // if 
      if (_get44 == 2) {
        _get45 = jjproto_target;
        _get46 = jjproto_targetjjtype;
        const struct ReturnValue _1 = __Boolean_prototype_toString(_get45, _get46);
        jjlast_type = _1.type;
        _r12 = _1.value;
        goto j12;
      }
    // end
    j69:;
    _get47 = jjtypeswitch_tmp1;
    // if 
      if (_get47 == 5) {
        _get48 = jjproto_target;
        _get49 = jjproto_targetjjtype;
        const struct ReturnValue _2 = __Symbol_prototype_toString(_get48, _get49);
        jjlast_type = _2.type;
        _r12 = _2.value;
        goto j12;
      }
    // end
    j71:;
    _get50 = jjtypeswitch_tmp1;
    // if 
      if (_get50 == 6) {
        _get51 = jjproto_target;
        _get52 = jjproto_targetjjtype;
        const struct ReturnValue _3 = __Function_prototype_toString(_get51, _get52);
        jjlast_type = _3.type;
        _r12 = _3.value;
        goto j12;
      }
    // end
    j78:;
    _get53 = jjtypeswitch_tmp1;
    // if 
      if (_get53 == 7) {
        _get54 = jjproto_target;
        _get55 = jjproto_targetjjtype;
        const struct ReturnValue _4 = __Object_prototype_toString(_get54, _get55);
        jjlast_type = _4.type;
        _r12 = _4.value;
        goto j12;
      }
    // end
    j79:;
    _get56 = jjtypeswitch_tmp1;
    // if 
      if (_get56 == 36) {
        _get57 = jjproto_target;
        _get58 = jjproto_targetjjtype;
        const struct ReturnValue _5 = __Promise_prototype_toString(_get57, _get58);
        jjlast_type = _5.type;
        _r12 = _5.value;
        goto j12;
      }
    // end
    j89:;
    _get59 = jjtypeswitch_tmp1;
    // if 
      if (_get59 == 80) {
        _get60 = jjproto_target;
        _get61 = jjproto_targetjjtype;
        const struct ReturnValue _6 = __Array_prototype_toString(_get60, _get61);
        jjlast_type = _6.type;
        _r12 = _6.value;
        goto j12;
      }
    // end
    j90:;
    _get62 = jjtypeswitch_tmp1;
    // if 
      if (_get62 == 195) {
        _get63 = jjproto_target;
        _get64 = jjproto_targetjjtype;
        const struct ReturnValue _7 = __ByteString_prototype_toString((i32)_get63, _get64);
        jjlast_type = _7.type;
        _r12 = (f64)_7.value;
        goto j12;
      }
    // end
    j98:;
    _get65 = jjproto_target;
    _get66 = jjproto_targetjjtype;
    const struct ReturnValue _8 = __Object_prototype_toString(_get65, _get66);
    jjlast_type = _8.type;
    _r12 = _8.value;
  // end
  j12:;
  _get67 = jjlast_type;
  return (struct ReturnValue){ _r12, _get67 };
}

i32 __Porffor_allocateBytes(i32 x) {
  i32 _get4;
  i32 _get3;
  i32 _get2;
  i32 _get1;
  i32 _get0;
  _get0 = x;
  bytesWritten = _get0 + bytesWritten;
  // if i32
  i32 _r102;
    if (bytesWritten >= 65536) {
      _get1 = x;
      bytesWritten = _get1;
      _get2 = x;
      currentPtr = (1 * 65536) + _get2;
      _get3 = x;
      _r102 = currentPtr - _get3;
    } else {
      _get4 = x;
      currentPtr = currentPtr + _get4;
      _r102 = currentPtr;
    }
  // end
  j102:;
  return _r102;
}

struct ReturnValue __Porffor_strcat(i32 a, i32 ajjtype, i32 b, i32 bjjtype) {
  i32 _get65;
  i32 _get64;
  i32 _get63;
  i32 _get62;
  i32 _get61;
  i32 _get60;
  i32 _get59;
  i32 _get58;
  i32 _get57;
  i32 _get56;
  i32 _get55;
  i32 _get54;
  i32 _get53;
  i32 _get52;
  i32 _get51;
  i32 _get50;
  i32 _get49;
  i32 _get48;
  i32 _get47;
  i32 _get46;
  i32 _get45;
  i32 _get44;
  i32 _get43;
  i32 _get42;
  i32 _get41;
  i32 _get40;
  i32 _get39;
  i32 _get38;
  i32 _get37;
  i32 _get36;
  i32 _get35;
  i32 _get34;
  i32 _get33;
  i32 _get32;
  i32 _get31;
  i32 _get30;
  i32 _get29;
  i32 _get28;
  i32 _get27;
  i32 _get26;
  i32 _get25;
  i32 _get24;
  i32 _get23;
  i32 _get22;
  i32 _get21;
  i32 _get20;
  i32 _get19;
  i32 _get18;
  i32 _get17;
  i32 _get16;
  i32 _get15;
  i32 _get14;
  i32 _get13;
  i32 _get12;
  i32 _get11;
  i32 _get10;
  i32 _get9;
  i32 _get8;
  i32 _get7;
  i32 _get6;
  i32 _get5;
  i32 _get4;
  i32 _get3;
  i32 _get2;
  i32 _get1;
  i32 _get0;
  i32 al = 0;
  i32 bl = 0;
  i32 out = 0;
  i32 i = 0;
  i32 ptr = 0;

  _get0 = a;
  al = i32_load(0, 0, _get0);
  _get1 = b;
  bl = i32_load(0, 0, _get1);
  _get2 = ajjtype;
  // if 
    if (_get2 == 195) {
      _get3 = bjjtype;
      // if 
        if (_get3 == 195) {
          _get4 = al;
          _get5 = bl;
          out = __Porffor_allocateBytes((4 + _get4) + _get5);
          _get6 = out;
          _get7 = al;
          _get8 = bl;
          i32_store(0, 0, _get6, _get7 + _get8);
          _get9 = out;
          _get10 = a;
          _get11 = al;
          _get12 = out;
          _get13 = al;
          _get14 = b;
          _get15 = bl;
          _get16 = out;
          return (struct ReturnValue){ _get16, 195 };
        } else {
          _get17 = al;
          _get18 = bl;
          out = __Porffor_allocateBytes(4 + ((_get17 + _get18) * 2));
          _get19 = out;
          _get20 = al;
          _get21 = bl;
          i32_store(0, 0, _get19, _get20 + _get21);
          i = 0;
          // loop 
          j103:;
            _get22 = i;
            _get23 = al;
            // if 
              if (_get22 < _get23) {
                _get24 = out;
                _get25 = i;
                _get26 = a;
                _get27 = i;
                i32_store16(0, 4, _get24 + (_get25 * 2), i32_load8_u(0, 4, _get26 + _get27));
                _get28 = i;
                i = _get28 + 1;
                goto j103;
              }
            // end
            j104:;
          // end
          _get29 = out;
          _get30 = al;
          _get31 = b;
          _get32 = bl;
          _get33 = out;
          return (struct ReturnValue){ _get33, 67 };
        }
      // end
      j101:;
    } else {
      _get34 = bjjtype;
      // if 
        if (_get34 == 195) {
          _get35 = al;
          _get36 = bl;
          out = __Porffor_allocateBytes(4 + ((_get35 + _get36) * 2));
          _get37 = out;
          _get38 = al;
          _get39 = bl;
          i32_store(0, 0, _get37, _get38 + _get39);
          _get40 = out;
          _get41 = a;
          _get42 = al;
          _get43 = out;
          _get44 = al;
          ptr = _get43 + (_get44 * 2);
          i = 0;
          // loop 
          j106:;
            _get45 = i;
            _get46 = bl;
            // if 
              if (_get45 < _get46) {
                _get47 = ptr;
                _get48 = i;
                _get49 = b;
                _get50 = i;
                i32_store16(0, 4, _get47 + (_get48 * 2), i32_load8_u(0, 4, _get49 + _get50));
                _get51 = i;
                i = _get51 + 1;
                goto j106;
              }
            // end
            j107:;
          // end
          _get52 = out;
          return (struct ReturnValue){ _get52, 67 };
        } else {
          _get53 = al;
          _get54 = bl;
          out = __Porffor_allocateBytes(4 + ((_get53 + _get54) * 2));
          _get55 = out;
          _get56 = al;
          _get57 = bl;
          i32_store(0, 0, _get55, _get56 + _get57);
          _get58 = out;
          _get59 = a;
          _get60 = al;
          _get61 = out;
          _get62 = al;
          _get63 = b;
          _get64 = bl;
          _get65 = out;
          return (struct ReturnValue){ _get65, 67 };
        }
      // end
      j105:;
    }
  // end
  j100:;
  return (struct ReturnValue){ 0, 128 };
}

struct ReturnValue __Porffor_concatStrings(f64 a, i32 ajjtype, f64 b, i32 bjjtype) {
  i32 _get16;
  i32 _get15;
  f64 _get14;
  i32 _get13;
  f64 _get12;
  i32 _get11;
  i32 _get10;
  i32 _get9;
  f64 _get8;
  f64 _get7;
  i32 _get6;
  i32 _get5;
  i32 _get4;
  f64 _get3;
  f64 _get2;
  i32 _get1;
  i32 _get0;
  f64 at = 0;
  f64 bt = 0;
  i32 jjlast_type = 0;

  _get0 = ajjtype;
  at = (f64)_get0;
  _get1 = bjjtype;
  bt = (f64)_get1;
  _get2 = at;
  // if 
    if (f64_uuuuu(_get2, 128) != 195) {
      _get3 = a;
      _get4 = ajjtype;
      const struct ReturnValue _0 = __ecma262_ToString(_get3, _get4);
      jjlast_type = _0.type;
      _get5 = jjlast_type;
      ajjtype = _get5;
      a = _0.value;
      _get6 = ajjtype;
      at = (f64)_get6;
    }
  // end
  j5:;
  _get7 = bt;
  // if 
    if (f64_uuuuu(_get7, 128) != 195) {
      _get8 = b;
      _get9 = bjjtype;
      const struct ReturnValue _1 = __ecma262_ToString(_get8, _get9);
      jjlast_type = _1.type;
      _get10 = jjlast_type;
      bjjtype = _get10;
      b = _1.value;
      _get11 = bjjtype;
      bt = (f64)_get11;
    }
  // end
  j99:;
  _get12 = a;
  _get13 = ajjtype;
  _get14 = b;
  _get15 = bjjtype;
  const struct ReturnValue _2 = __Porffor_strcat((i32)_get12, _get13, (i32)_get14, _get15);
  jjlast_type = _2.type;
  _get16 = jjlast_type;
  return (struct ReturnValue){ (f64)_2.value, _get16 };
}

int main() {
  i32 _get4;
  f64 _get3;
  f64 _get2;
  f64 _get1;
  f64 _get0;
  _memory[0]=(u8)9;_memory[1]=(u8)0;_memory[2]=(u8)0;_memory[3]=(u8)0;_memory[4]=(u8)117;_memory[5]=(u8)110;_memory[6]=(u8)100;_memory[7]=(u8)101;_memory[8]=(u8)102;_memory[9]=(u8)105;_memory[10]=(u8)110;_memory[11]=(u8)101;_memory[12]=(u8)100;
  _memory[65536]=(u8)3;_memory[65537]=(u8)0;_memory[65538]=(u8)0;_memory[65539]=(u8)0;_memory[65540]=(u8)78;_memory[65541]=(u8)97;_memory[65542]=(u8)78;
  _memory[196608]=(u8)4;_memory[196609]=(u8)0;_memory[196610]=(u8)0;_memory[196611]=(u8)0;_memory[196612]=(u8)116;_memory[196613]=(u8)114;_memory[196614]=(u8)117;_memory[196615]=(u8)101;
  _memory[327680]=(u8)14;_memory[327681]=(u8)0;_memory[327682]=(u8)0;_memory[327683]=(u8)0;_memory[327684]=(u8)102;_memory[327685]=(u8)117;_memory[327686]=(u8)110;_memory[327687]=(u8)99;_memory[327688]=(u8)116;_memory[327689]=(u8)105;_memory[327690]=(u8)111;_memory[327691]=(u8)110;_memory[327692]=(u8)32;_memory[327693]=(u8)40;_memory[327694]=(u8)41;_memory[327695]=(u8)32;_memory[327696]=(u8)123;_memory[327697]=(u8)125;
  _memory[393216]=(u8)18;_memory[393217]=(u8)0;_memory[393218]=(u8)0;_memory[393219]=(u8)0;_memory[393220]=(u8)91;_memory[393221]=(u8)111;_memory[393222]=(u8)98;_memory[393223]=(u8)106;_memory[393224]=(u8)101;_memory[393225]=(u8)99;_memory[393226]=(u8)116;_memory[393227]=(u8)32;_memory[393228]=(u8)85;_memory[393229]=(u8)110;_memory[393230]=(u8)100;_memory[393231]=(u8)101;_memory[393232]=(u8)102;_memory[393233]=(u8)105;_memory[393234]=(u8)110;_memory[393235]=(u8)101;_memory[393236]=(u8)100;_memory[393237]=(u8)93;
  _memory[458752]=(u8)12;_memory[458753]=(u8)0;_memory[458754]=(u8)0;_memory[458755]=(u8)0;_memory[458756]=(u8)73;_memory[458757]=(u8)110;_memory[458758]=(u8)118;_memory[458759]=(u8)97;_memory[458760]=(u8)108;_memory[458761]=(u8)105;_memory[458762]=(u8)100;_memory[458763]=(u8)32;_memory[458764]=(u8)68;_memory[458765]=(u8)97;_memory[458766]=(u8)116;_memory[458767]=(u8)101;
  _memory[524288]=(u8)21;_memory[524289]=(u8)0;_memory[524290]=(u8)0;_memory[524291]=(u8)0;_memory[524292]=(u8)83;_memory[524293]=(u8)117;_memory[524294]=(u8)110;_memory[524295]=(u8)77;_memory[524296]=(u8)111;_memory[524297]=(u8)110;_memory[524298]=(u8)84;_memory[524299]=(u8)117;_memory[524300]=(u8)101;_memory[524301]=(u8)87;_memory[524302]=(u8)101;_memory[524303]=(u8)100;_memory[524304]=(u8)84;_memory[524305]=(u8)104;_memory[524306]=(u8)117;_memory[524307]=(u8)70;_memory[524308]=(u8)114;_memory[524309]=(u8)105;_memory[524310]=(u8)83;_memory[524311]=(u8)97;_memory[524312]=(u8)116;
  _memory[589824]=(u8)36;_memory[589825]=(u8)0;_memory[589826]=(u8)0;_memory[589827]=(u8)0;_memory[589828]=(u8)74;_memory[589829]=(u8)97;_memory[589830]=(u8)110;_memory[589831]=(u8)70;_memory[589832]=(u8)101;_memory[589833]=(u8)98;_memory[589834]=(u8)77;_memory[589835]=(u8)97;_memory[589836]=(u8)114;_memory[589837]=(u8)65;_memory[589838]=(u8)112;_memory[589839]=(u8)114;_memory[589840]=(u8)77;_memory[589841]=(u8)97;_memory[589842]=(u8)121;_memory[589843]=(u8)74;_memory[589844]=(u8)117;_memory[589845]=(u8)110;_memory[589846]=(u8)74;_memory[589847]=(u8)117;_memory[589848]=(u8)108;_memory[589849]=(u8)65;_memory[589850]=(u8)117;_memory[589851]=(u8)103;_memory[589852]=(u8)83;_memory[589853]=(u8)101;_memory[589854]=(u8)112;_memory[589855]=(u8)79;_memory[589856]=(u8)99;_memory[589857]=(u8)116;_memory[589858]=(u8)78;_memory[589859]=(u8)111;_memory[589860]=(u8)118;_memory[589861]=(u8)68;_memory[589862]=(u8)101;_memory[589863]=(u8)99;
  _memory[655360]=(u8)3;_memory[655361]=(u8)0;_memory[655362]=(u8)0;_memory[655363]=(u8)0;_memory[655364]=(u8)78;_memory[655365]=(u8)97;_memory[655366]=(u8)78;
  _memory[786432]=(u8)11;_memory[786433]=(u8)0;_memory[786434]=(u8)0;_memory[786435]=(u8)0;_memory[786436]=(u8)43;_memory[786437]=(u8)48;_memory[786438]=(u8)48;_memory[786439]=(u8)48;_memory[786440]=(u8)48;_memory[786441]=(u8)32;_memory[786442]=(u8)40;_memory[786443]=(u8)85;_memory[786444]=(u8)84;_memory[786445]=(u8)67;_memory[786446]=(u8)41;
  _memory[851968]=(u8)12;_memory[851969]=(u8)0;_memory[851970]=(u8)0;_memory[851971]=(u8)0;_memory[851972]=(u8)91;_memory[851973]=(u8)111;_memory[851974]=(u8)98;_memory[851975]=(u8)106;_memory[851976]=(u8)101;_memory[851977]=(u8)99;_memory[851978]=(u8)116;_memory[851979]=(u8)32;_memory[851980]=(u8)83;_memory[851981]=(u8)101;_memory[851982]=(u8)116;_memory[851983]=(u8)93;
  _memory[917504]=(u8)12;_memory[917505]=(u8)0;_memory[917506]=(u8)0;_memory[917507]=(u8)0;_memory[917508]=(u8)91;_memory[917509]=(u8)111;_memory[917510]=(u8)98;_memory[917511]=(u8)106;_memory[917512]=(u8)101;_memory[917513]=(u8)99;_memory[917514]=(u8)116;_memory[917515]=(u8)32;_memory[917516]=(u8)77;_memory[917517]=(u8)97;_memory[917518]=(u8)112;_memory[917519]=(u8)93;
  _memory[983040]=(u8)16;_memory[983041]=(u8)0;_memory[983042]=(u8)0;_memory[983043]=(u8)0;_memory[983044]=(u8)91;_memory[983045]=(u8)111;_memory[983046]=(u8)98;_memory[983047]=(u8)106;_memory[983048]=(u8)101;_memory[983049]=(u8)99;_memory[983050]=(u8)116;_memory[983051]=(u8)32;_memory[983052]=(u8)87;_memory[983053]=(u8)101;_memory[983054]=(u8)97;_memory[983055]=(u8)107;_memory[983056]=(u8)82;_memory[983057]=(u8)101;_memory[983058]=(u8)102;_memory[983059]=(u8)93;
  _memory[1048576]=(u8)16;_memory[1048577]=(u8)0;_memory[1048578]=(u8)0;_memory[1048579]=(u8)0;_memory[1048580]=(u8)91;_memory[1048581]=(u8)111;_memory[1048582]=(u8)98;_memory[1048583]=(u8)106;_memory[1048584]=(u8)101;_memory[1048585]=(u8)99;_memory[1048586]=(u8)116;_memory[1048587]=(u8)32;_memory[1048588]=(u8)87;_memory[1048589]=(u8)101;_memory[1048590]=(u8)97;_memory[1048591]=(u8)107;_memory[1048592]=(u8)83;_memory[1048593]=(u8)101;_memory[1048594]=(u8)116;_memory[1048595]=(u8)93;
  _memory[1114112]=(u8)16;_memory[1114113]=(u8)0;_memory[1114114]=(u8)0;_memory[1114115]=(u8)0;_memory[1114116]=(u8)91;_memory[1114117]=(u8)111;_memory[1114118]=(u8)98;_memory[1114119]=(u8)106;_memory[1114120]=(u8)101;_memory[1114121]=(u8)99;_memory[1114122]=(u8)116;_memory[1114123]=(u8)32;_memory[1114124]=(u8)87;_memory[1114125]=(u8)101;_memory[1114126]=(u8)97;_memory[1114127]=(u8)107;_memory[1114128]=(u8)77;_memory[1114129]=(u8)97;_memory[1114130]=(u8)112;_memory[1114131]=(u8)93;
  _memory[1179648]=(u8)16;_memory[1179649]=(u8)0;_memory[1179650]=(u8)0;_memory[1179651]=(u8)0;_memory[1179652]=(u8)91;_memory[1179653]=(u8)111;_memory[1179654]=(u8)98;_memory[1179655]=(u8)106;_memory[1179656]=(u8)101;_memory[1179657]=(u8)99;_memory[1179658]=(u8)116;_memory[1179659]=(u8)32;_memory[1179660]=(u8)80;_memory[1179661]=(u8)114;_memory[1179662]=(u8)111;_memory[1179663]=(u8)109;_memory[1179664]=(u8)105;_memory[1179665]=(u8)115;_memory[1179666]=(u8)101;_memory[1179667]=(u8)93;

  i32 jjlast_type = 0;
  f64 __tmpop_left = 0;
  f64 __tmpop_right = 0;

  a = 0;
  ajjtype = 1;
  b = 1;
  bjjtype = 1;
  const struct ReturnValue _0 = __Porffor_numberLog(a, ajjtype);
  jjlast_type = _0.type;
  const struct ReturnValue _1 = __Porffor_numberLog(b, bjjtype);
  jjlast_type = _1.type;
  i = 2;
  ijjtype = 1;
  // loop 
  j0:;
    // if 
      if (i <= 45) {
        // block 
          // block f64
          f64 _r3;
            __tmpop_left = b;
            _get0 = __tmpop_left;
            __tmpop_right = a;
            _get1 = __tmpop_right;
            // if 
              if ((((bjjtype | 128) == 195) | ((ajjtype | 128) == 195)) != 0) {
                _get2 = __tmpop_left;
                _get3 = __tmpop_right;
                const struct ReturnValue _2 = __Porffor_concatStrings(_get2, bjjtype, _get3, ajjtype);
                jjlast_type = _2.type;
                _r3 = _2.value;
                goto j3;
              }
            // end
            j4:;
            jjlast_type = 1;
            _r3 = _get0 + _get1;
          // end
          j3:;
          t = _r3;
          _get4 = jjlast_type;
          tjjtype = _get4;
          a = b;
          ajjtype = bjjtype;
          b = t;
          bjjtype = tjjtype;
          const struct ReturnValue _3 = __Porffor_numberLog(t, tjjtype);
          jjlast_type = _3.type;
        // end
        j2:;
        i = i + 1;
        goto j0;
      }
    // end
    j1:;
  // end

  return 0;
}