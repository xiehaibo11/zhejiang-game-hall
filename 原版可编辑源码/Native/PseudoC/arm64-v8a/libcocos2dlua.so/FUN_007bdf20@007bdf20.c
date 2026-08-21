
void FUN_007bdf20(void)

{
  long lVar1;
  
  lVar1 = 0x288;
  do {
    if ((*(byte *)((long)&DAT_0178ef08 + lVar1) & 1) != 0) {
      operator_delete(*(void **)((long)&cocos2d::PUBaseForceAffector::DEFAULT_FORCE_VECTOR +
                                lVar1 + 4));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}

