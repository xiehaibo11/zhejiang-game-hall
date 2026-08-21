
undefined8 FUN_00a17b58(void)

{
  undefined8 uVar1;
  
  if ((DAT_01d38bc4 & 1) != 0) {
    return 1;
  }
  DAT_01d38bc4 = 1;
  uVar1 = FUN_00a461a0();
  return uVar1;
}

