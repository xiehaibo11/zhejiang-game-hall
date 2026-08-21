
/* fairygui::ScrollPane::updateTargetAndDuration(float, int) */

void __thiscall
fairygui::ScrollPane::updateTargetAndDuration(ScrollPane *this,float param_1,int param_2)

{
  ScrollPane *pSVar1;
  ScrollPane *pSVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 in_register_00005004;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_60;
  float fStack_5c;
  
  uVar7 = CONCAT44(in_register_00005004,param_1);
  lVar4 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a9644c with catch @ 00a9654c */
  lVar5 = *(long *)(lVar4 + 0x28);
  pSVar1 = this + 0xa4;
  if (param_2 != 0) {
    pSVar1 = this + 0xa8;
  }
  fVar9 = 0.0;
  if (0.0 < param_1) {
    uVar8 = 0;
  }
  else {
    pSVar2 = this + 0x74;
    if (param_2 != 0) {
      pSVar2 = this + 0x78;
    }
    uVar8 = (ulong)(uint)-*(float *)pSVar2;
    if (-*(float *)pSVar2 <= param_1) {
      fVar11 = *(float *)pSVar1;
      fVar9 = *(float *)(this + 0xac);
      cocos2d::Director::getInstance();
      cocos2d::Director::getWinSizeInPixels();
      if (fStack_60 <= fStack_5c) {
        fStack_60 = fStack_5c;
      }
      fVar6 = ABS(fVar11) * fVar9 * (1136.0 / fStack_60);
      uVar8 = uVar7;
      if (this[0x58] == (ScrollPane)0x0) {
        fVar9 = 0.0;
        if (fVar6 <= 1000.0) goto LAB_00a966b4;
        fVar9 = -1000.0;
        fVar10 = 1000.0;
      }
      else {
        fVar9 = 0.0;
        if (fVar6 <= 500.0) goto LAB_00a966b4;
        fVar9 = -500.0;
        fVar10 = 500.0;
      }
      fVar10 = (fVar6 + fVar9) / fVar10;
      fVar10 = fVar10 * fVar10;
      if (fVar10 == 0.0) {
        fVar9 = 0.0;
      }
      else {
        if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
        lVar3 = 0xa4;
        if (param_2 != 0) {
          lVar3 = 0xa8;
        }
        fVar11 = fVar11 * fVar10;
        *(float *)(this + lVar3) = fVar11;
        fVar9 = logf(60.0 / (fVar6 * fVar10));
        fVar6 = logf(*(float *)(this + 0x54));
        fVar9 = (fVar9 / fVar6) / 60.0;
        uVar8 = (ulong)(uint)((float)(int)(fVar11 * fVar9 * 0.4) + param_1);
      }
    }
  }
LAB_00a966b4:
  if (fVar9 <= 0.3) {
    fVar9 = 0.3;
  }
  lVar3 = 0xec;
  if (param_2 != 0) {
    lVar3 = 0xf0;
  }
  *(float *)(this + lVar3) = fVar9;
  if (*(long *)(lVar4 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

