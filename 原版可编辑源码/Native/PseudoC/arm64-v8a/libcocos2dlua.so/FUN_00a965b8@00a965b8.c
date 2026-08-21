
void FUN_00a965b8(void)

{
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float fStack0000000000000000;
  float fStack0000000000000004;
  long in_stack_00000008;
  
  cocos2d::Director::getWinSizeInPixels();
  if (fStack0000000000000000 <= fStack0000000000000004) {
    fStack0000000000000000 = fStack0000000000000004;
  }
  fVar2 = unaff_s10 * (1136.0 / fStack0000000000000000);
  if (*(char *)(unaff_x19 + 0x58) == '\0') {
    fVar3 = 0.0;
    if (fVar2 <= 1000.0) goto LAB_00a966b0;
    fVar3 = -1000.0;
    fVar4 = 1000.0;
  }
  else {
    fVar3 = 0.0;
    if (fVar2 <= 500.0) goto LAB_00a966b0;
    fVar3 = -500.0;
    fVar4 = 500.0;
  }
  fVar4 = (fVar2 + fVar3) / fVar4;
  fVar4 = fVar4 * fVar4;
  if (fVar4 == 0.0) {
    fVar3 = 0.0;
  }
  else {
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    lVar1 = 0xa4;
    if (unaff_w20 != 0) {
      lVar1 = 0xa8;
    }
    *(float *)(unaff_x19 + lVar1) = unaff_s9 * fVar4;
    fVar2 = logf(60.0 / (fVar2 * fVar4));
    fVar3 = logf(*(float *)(unaff_x19 + 0x54));
    fVar3 = (fVar2 / fVar3) / 60.0;
    unaff_d8 = (ulong)(uint)((float)(int)(unaff_s9 * fVar4 * fVar3 * 0.4) + (float)unaff_d8);
  }
LAB_00a966b0:
  if (fVar3 <= 0.3) {
    fVar3 = 0.3;
  }
  lVar1 = 0xec;
  if (unaff_w20 != 0) {
    lVar1 = 0xf0;
  }
  *(float *)(unaff_x19 + lVar1) = fVar3;
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000008) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(unaff_d8);
}

