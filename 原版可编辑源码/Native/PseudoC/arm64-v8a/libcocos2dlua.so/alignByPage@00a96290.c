
/* fairygui::ScrollPane::alignByPage(float, int, bool) */

undefined1  [16] __thiscall
fairygui::ScrollPane::alignByPage(ScrollPane *this,float param_1,int param_2,bool param_3)

{
  int iVar1;
  ScrollPane *pSVar2;
  int iVar3;
  ScrollPane *pSVar4;
  ScrollPane *pSVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined4 in_register_00005004;
  ulong uVar11;
  undefined8 in_register_00005008;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar11 = CONCAT44(in_register_00005004,param_1);
  pSVar2 = this + 0x6c;
  pSVar4 = this + 0x74;
  pSVar5 = this + 0x7c;
  if (param_2 != 0) {
    pSVar2 = this + 0x70;
    pSVar4 = this + 0x78;
    pSVar5 = this + 0x80;
  }
  fVar14 = *(float *)pSVar5;
  fVar17 = *(float *)pSVar2;
  fVar16 = -*(float *)pSVar4;
  fVar15 = fVar17 / fVar14;
  if (param_1 <= 0.0) {
    if (param_1 < fVar16) {
      iVar9 = (int)((float)(int)fVar15 + -1.0);
    }
    else {
      iVar9 = (int)(-param_1 / fVar14);
      if (param_3) {
        pSVar2 = this + 0x84;
        if (param_2 != 0) {
          pSVar2 = this + 0x88;
        }
        fVar18 = *(float *)pSVar2;
      }
      else {
        lVar10 = *(long *)(this + 0x108);
        fVar18 = *(float *)(lVar10 + 0x50);
        lVar6 = (**(code **)(**(long **)(lVar10 + 400) + 0x168))();
        if (param_2 != 0) {
          fVar18 = *(float *)(lVar6 + 4) - *(float *)(lVar10 + 0x54);
        }
      }
      fVar17 = fVar17 - fVar14 * (float)(iVar9 + 1);
      fVar13 = fVar14;
      if (fVar17 <= fVar14) {
        fVar13 = fVar17;
      }
      if (ABS(param_1 - fVar18) <= fVar14) {
        fVar17 = 0.3;
        if (0.0 <= param_1 - fVar18) {
          fVar17 = 0.7;
        }
      }
      else {
        fVar17 = 0.5;
      }
      if (fVar13 * fVar17 < -param_1 - fVar14 * (float)iVar9) {
        iVar9 = iVar9 + 1;
      }
      fVar17 = fVar16;
      if (fVar16 <= fVar14 * (float)-iVar9) {
        fVar17 = fVar14 * (float)-iVar9;
      }
      in_register_00005008 = 0;
      uVar11 = (ulong)(uint)fVar17;
    }
  }
  else {
    iVar9 = 0;
  }
  if (param_3) {
    pSVar2 = this + 0xd4;
    if (param_2 != 0) {
      pSVar2 = this + 0xd8;
    }
    fVar17 = *(float *)pSVar2;
    if (fVar17 <= 0.0) {
      if (fVar16 <= fVar17) {
                    /* try { // try from 00a9644c to 00b9647f has its CatchHandler @ 00a9654c */
        iVar7 = (int)(-fVar17 / fVar14);
      }
      else {
        iVar7 = (int)((float)(int)fVar15 + -1.0);
      }
    }
    else {
      iVar7 = 0;
    }
    pSVar2 = this + 0x84;
    if (param_2 != 0) {
      pSVar2 = this + 0x88;
    }
    iVar8 = (int)(-*(float *)pSVar2 / fVar14);
    iVar3 = iVar9 - iVar8;
    iVar1 = -iVar3;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
                    /* try { // try from 00a96480 to 00b96493 has its CatchHandler @ 00a96518 */
    if (1 < iVar1) {
      iVar7 = iVar7 - iVar8;
      iVar1 = -iVar7;
      if (-1 < iVar7) {
        iVar1 = iVar7;
      }
      if (iVar1 < 2) {
                    /* try { // try from 00a96498 to 00b964cb has its CatchHandler @ 00a9651c */
        iVar7 = -1;
        if (iVar8 < iVar9) {
          iVar7 = 1;
        }
        uVar11 = (ulong)(uint)(fVar14 * (float)-(iVar7 + iVar8));
        in_register_00005008 = 0;
      }
    }
  }
  auVar12._8_8_ = in_register_00005008;
  auVar12._0_8_ = uVar11;
                    /* try { // try from 00a964cc to 00b96567 has its CatchHandler @ 00a95efc */
  return auVar12;
}

