
undefined * FUN_00a2f97c(void)

{
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_017824c8 & 1) == 0) {
    iVar2 = FUN_00a4acc8(&DAT_017824d0,7,FUN_00a4b2cc,FUN_00a4b304,FUN_00a2f9ec);
    if (iVar2 == 0) {
      DAT_017824c8 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  puVar1 = (undefined *)0x0;
  if (iVar2 == 0) {
    puVar1 = &DAT_017824d0;
  }
  return puVar1;
}

