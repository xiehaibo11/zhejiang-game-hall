
void FUN_007bde54(void)

{
  long lVar1;
  
  lVar1 = 24000;
  do {
    if ((*(byte *)((long)&DAT_01789078 + lVar1) & 1) != 0) {
      operator_delete(*(void **)((long)&DAT_01789088 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}

