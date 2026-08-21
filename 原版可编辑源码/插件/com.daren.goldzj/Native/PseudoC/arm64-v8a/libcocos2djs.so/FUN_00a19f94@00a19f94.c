
undefined * FUN_00a19f94(void)

{
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_01d38bc8 & 1) == 0) {
    iVar2 = FUN_00a342e0(&DAT_01d38bd0,7,FUN_00a348e4,FUN_00a3491c,FUN_00a1a004);
    if (iVar2 == 0) {
      DAT_01d38bc8 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  puVar1 = (undefined *)0x0;
  if (iVar2 == 0) {
    puVar1 = &DAT_01d38bd0;
  }
  return puVar1;
}

