
undefined8 __cxa_current_exception_type(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    if (lVar3 == 0) {
      return 0;
    }
    if (*(ulong *)(lVar3 + 0x60) >> 8 != 0x434c4e47432b2b) {
      return 0;
    }
    uVar2 = *(undefined8 *)(lVar3 + 8);
  }
  return uVar2;
}

