
int FUN_01832738(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_2 < 0x1000) {
    if ((DAT_01d53e20 & 1) != 0) {
      return param_2;
    }
    iVar1 = __cxa_guard_acquire(&DAT_01d53e20);
    if (iVar1 == 0) {
      return param_2;
    }
    puVar2 = &DAT_01d53e20;
    DAT_01d53e18 = &PTR__error_category_01cde928;
  }
  else {
    if ((DAT_01d53e30 & 1) != 0) {
      return param_2;
    }
    iVar1 = __cxa_guard_acquire(&DAT_01d53e30);
    if (iVar1 == 0) {
      return param_2;
    }
    DAT_01d53e28 = &PTR__error_category_01cde988;
    puVar2 = &DAT_01d53e30;
  }
  __cxa_guard_release(puVar2);
  return param_2;
}

