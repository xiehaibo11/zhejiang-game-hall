
void FUN_007c1538(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    if ((*(byte *)(lVar1 + 0x17949d8) & 1) != 0) {
      operator_delete(*(void **)(&DAT_017949e8 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}

