
/* se::NativePtrToObjectMap::init() */

bool se::NativePtrToObjectMap::init(void)

{
  if ((__nativePtrToObjectMap == (undefined8 *)0x0) &&
     (__nativePtrToObjectMap = operator_new(0x28,(nothrow_t *)&std::nothrow),
     __nativePtrToObjectMap != (undefined8 *)0x0)) {
    __nativePtrToObjectMap[1] = 0;
    *__nativePtrToObjectMap = 0;
    __nativePtrToObjectMap[3] = 0;
    __nativePtrToObjectMap[2] = 0;
    *(undefined4 *)(__nativePtrToObjectMap + 4) = 0x3f800000;
  }
  return __nativePtrToObjectMap != (undefined8 *)0x0;
}

