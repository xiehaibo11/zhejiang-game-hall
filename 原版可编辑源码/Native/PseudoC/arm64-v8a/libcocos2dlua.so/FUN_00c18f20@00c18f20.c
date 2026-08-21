
void FUN_00c18f20(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x170);
  do {
    while( true ) {
      lVar1 = *plVar2;
      plVar2 = plVar2 + 1;
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 8) & 3) != 0)) break;
      if (plVar2 == (long *)(param_1 + 0x2a0)) {
        return;
      }
    }
    FUN_00c18e3c(param_1);
  } while (plVar2 != (long *)(param_1 + 0x2a0));
  return;
}

