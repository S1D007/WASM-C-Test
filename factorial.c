#include <stdint.h>
#include <stdio.h>

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

char _memory[65536];

struct ReturnValue factorial(f64 n, i32 njjtype);
struct ReturnValue __Porffor_numberLog(f64 arg, i32 argjjtype);

struct ReturnValue factorial(f64 n, i32 njjtype) {
  f64 _get3;
  f64 _get2;
  i32 _get1;
  f64 _get0;
  _get0 = n;
  _get1 = njjtype;
  // if f64
  f64 _r0;
    if (((_get0 == 0) & ((_get1 | 128) == 129)) != 0) {
      _r0 = 1;
    } else {
      _get2 = n;
      _get3 = n;
      const struct ReturnValue _0 = factorial(_get3 - 1, 1);
      _r0 = _get2 * _0.value;
    }
  // end
  j0:;
  return (struct ReturnValue){ _r0, 1 };
}

struct ReturnValue __Porffor_numberLog(f64 arg, i32 argjjtype) {
  f64 _get0;
  _get0 = arg;
  printf("%g\n", _get0);
  putchar((int)(10));
  return (struct ReturnValue){ 0, 128 };
}

int main() {
  i32 _get1;
  i32 _get0;
    i32 jjlast_type = 0;

  const struct ReturnValue _0 = factorial(10, 1);
  jjlast_type = _0.type;
  _get0 = jjlast_type;
  const struct ReturnValue _1 = __Porffor_numberLog(_0.value, _get0);
  jjlast_type = _1.type;
  _get1 = jjlast_type;

  return 0;
}