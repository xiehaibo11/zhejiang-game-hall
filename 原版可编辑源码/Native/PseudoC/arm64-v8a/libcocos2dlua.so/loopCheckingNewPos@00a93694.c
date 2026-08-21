
/* fairygui::ScrollPane::loopCheckingNewPos(float&, int) */

void __thiscall
fairygui::ScrollPane::loopCheckingNewPos(ScrollPane *this,float *param_1,int param_2)

{
  ScrollPane *pSVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  
  pSVar1 = this + 0x74;
  if (param_2 != 0) {
    pSVar1 = this + 0x78;
  }
  fVar4 = *(float *)pSVar1;
  if (fVar4 != 0.0) {
    fVar6 = *param_1;
    lVar2 = 0x5c;
    if (param_2 != 0) {
      lVar2 = 0x60;
    }
    fVar5 = *(float *)(this + lVar2);
    if (0.001 <= fVar6) {
      if (fVar4 <= fVar6) {
        lVar2 = 0x2f4;
        pSVar1 = this + 0x6c;
        if (param_2 != 0) {
          lVar2 = 0x2f0;
          pSVar1 = this + 0x70;
        }
        iVar7 = *(int *)(*(long *)(this + 0xf8) + lVar2);
        fVar6 = fVar6 + (*(float *)pSVar1 + (float)iVar7) * -0.5;
        *param_1 = fVar6;
        if (fVar6 < fVar5) {
          pSVar1 = this + 0x6c;
          if (param_2 != 0) {
            pSVar1 = this + 0x70;
          }
          fVar8 = (*(float *)pSVar1 + (float)iVar7) / 6.0;
          fVar5 = fVar5 - fVar8 * (float)(int)((fVar5 - fVar6) / fVar8);
          goto LAB_00a937f8;
        }
      }
    }
    else {
      lVar2 = 0x2f4;
      pSVar1 = this + 0x6c;
      if (param_2 != 0) {
        lVar2 = 0x2f0;
        pSVar1 = this + 0x70;
      }
      iVar7 = *(int *)(*(long *)(this + 0xf8) + lVar2);
      fVar6 = fVar6 + (*(float *)pSVar1 + (float)iVar7) * 0.5;
      *param_1 = fVar6;
      if (fVar5 < fVar6) {
        pSVar1 = this + 0x6c;
        if (param_2 != 0) {
          pSVar1 = this + 0x70;
        }
        fVar8 = (*(float *)pSVar1 + (float)iVar7) / 6.0;
        fVar5 = fVar5 + fVar8 * (float)(int)((fVar6 - fVar5) / fVar8);
LAB_00a937f8:
        fVar6 = (float)NEON_fminnm(fVar4,0);
        if (fVar6 <= fVar5) {
          if (fVar4 <= 0.0) {
            fVar4 = 0.0;
          }
          fVar6 = fVar5;
          if (fVar4 <= fVar5) {
            fVar6 = fVar4;
          }
        }
        plVar3 = *(long **)(this + 0x108);
        if (param_2 == 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0xd8);
          fVar4 = (float)-(int)fVar6;
        }
        else {
          lVar2 = (**(code **)(*(long *)plVar3[0x32] + 0x168))();
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0xe8);
          fVar4 = *(float *)(lVar2 + 4) - (float)-(int)fVar6;
        }
                    /* WARNING: Could not recover jumptable at 0x00a9386c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(fVar4,plVar3);
        return;
      }
    }
  }
  return;
}

