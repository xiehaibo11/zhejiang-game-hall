
/* JSBClassType::init() */

bool JSBClassType::init(void)

{
  if ((__jsbClassTypeMap == (undefined8 *)0x0) &&
     (__jsbClassTypeMap = operator_new(0x28,(nothrow_t *)&std::nothrow),
     __jsbClassTypeMap != (undefined8 *)0x0)) {
    __jsbClassTypeMap[1] = 0;
    *__jsbClassTypeMap = 0;
    __jsbClassTypeMap[3] = 0;
    __jsbClassTypeMap[2] = 0;
    *(undefined4 *)(__jsbClassTypeMap + 4) = 0x3f800000;
  }
  return __jsbClassTypeMap != (undefined8 *)0x0;
}

