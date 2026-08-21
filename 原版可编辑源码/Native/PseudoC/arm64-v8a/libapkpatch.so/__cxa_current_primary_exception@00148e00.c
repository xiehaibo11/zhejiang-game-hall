
long __cxa_current_primary_exception(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)__cxa_get_globals_fast();
  if (((plVar1 == (long *)0x0) || (lVar2 = *plVar1, lVar2 == 0)) ||
     (*(ulong *)(lVar2 + 0x60) >> 8 != 0x434c4e47432b2b)) {
    lVar3 = 0;
  }
  else {
    if ((*(ulong *)(lVar2 + 0x60) & 0xff) == 1) {
      lVar2 = *(long *)(lVar2 + 8) + -0x80;
    }
    lVar3 = lVar2 + 0x80;
    FUN_001655f0(1,lVar2 + 8);
  }
  return lVar3;
}

