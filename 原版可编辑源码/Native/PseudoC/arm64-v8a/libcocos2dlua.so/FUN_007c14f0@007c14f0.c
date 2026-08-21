
void FUN_007c14f0(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    if (((&DAT_01794790)[lVar1] & 1) != 0) {
      operator_delete(*(void **)(&DAT_017947a0 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}

