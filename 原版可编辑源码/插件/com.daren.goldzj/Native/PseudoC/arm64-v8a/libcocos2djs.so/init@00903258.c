
/* se::NonRefNativePtrCreatedByCtorMap::init() */

bool se::NonRefNativePtrCreatedByCtorMap::init(void)

{
  if ((__nonRefNativeObjectCreatedByCtorMap == (undefined8 *)0x0) &&
     (__nonRefNativeObjectCreatedByCtorMap = operator_new(0x28,(nothrow_t *)&std::nothrow),
     __nonRefNativeObjectCreatedByCtorMap != (undefined8 *)0x0)) {
    __nonRefNativeObjectCreatedByCtorMap[1] = 0;
    *__nonRefNativeObjectCreatedByCtorMap = 0;
    __nonRefNativeObjectCreatedByCtorMap[3] = 0;
    __nonRefNativeObjectCreatedByCtorMap[2] = 0;
    *(undefined4 *)(__nonRefNativeObjectCreatedByCtorMap + 4) = 0x3f800000;
  }
  return __nonRefNativeObjectCreatedByCtorMap != (undefined8 *)0x0;
}

