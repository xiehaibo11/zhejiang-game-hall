
int FUN_01211db4(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_2 < 0x1000) {
    if ((DAT_01795330 & 1) != 0) {
      return param_2;
    }
    iVar1 = __cxa_guard_acquire(&DAT_01795330);
    if (iVar1 == 0) {
      return param_2;
    }
    puVar2 = &DAT_01795330;
    DAT_01795328 = &PTR__error_category_017312e8;
  }
  else {
    if ((DAT_01795340 & 1) != 0) {
      return param_2;
    }
    iVar1 = __cxa_guard_acquire(&DAT_01795340);
    if (iVar1 == 0) {
      return param_2;
    }
    DAT_01795338 = &PTR__error_category_01731348;
    puVar2 = &DAT_01795340;
  }
  __cxa_guard_release(puVar2);
  return param_2;
}

