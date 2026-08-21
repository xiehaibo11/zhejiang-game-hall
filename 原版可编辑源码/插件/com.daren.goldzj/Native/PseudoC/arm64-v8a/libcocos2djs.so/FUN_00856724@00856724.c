
void FUN_00856724(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    if ((*(byte *)(lVar1 + 0x1d534c8) & 1) != 0) {
      operator_delete(*(void **)(&DAT_01d534d8 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}

