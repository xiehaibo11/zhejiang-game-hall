
void FUN_008566e4(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    if (((&DAT_01d53280)[lVar1] & 1) != 0) {
      operator_delete(*(void **)(&DAT_01d53290 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}

