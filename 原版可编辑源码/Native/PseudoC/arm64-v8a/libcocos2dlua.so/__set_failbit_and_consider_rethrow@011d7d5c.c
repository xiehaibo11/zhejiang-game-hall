
/* std::__ndk1::ios_base::__set_failbit_and_consider_rethrow() */

undefined1  [16] std::__ndk1::ios_base::__set_failbit_and_consider_rethrow(void)

{
  long in_x0;
  long *plVar1;
  undefined8 in_x1;
  undefined1 auVar2 [16];
  
  *(uint *)(in_x0 + 0x20) = *(uint *)(in_x0 + 0x20) | 4;
  if ((*(byte *)(in_x0 + 0x24) >> 2 & 1) == 0) {
    auVar2._8_8_ = in_x1;
    auVar2._0_8_ = in_x0;
    return auVar2;
  }
  plVar1 = (long *)__cxa_rethrow();
  if ((*(byte *)((long)plVar1 + *(long *)(*plVar1 + -0x18) + 0x20) & 5) != 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  plVar1 = *(long **)((long)plVar1 + *(long *)(*plVar1 + -0x18) + 0x28);
  auVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0,1,0x10);
  return auVar2;
}

