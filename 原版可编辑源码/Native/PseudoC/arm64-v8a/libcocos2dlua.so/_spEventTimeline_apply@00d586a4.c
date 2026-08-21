
void _spEventTimeline_apply
               (float param_1,float param_2,long param_3,undefined8 param_4,long param_5,
               int *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_5 != 0) {
    if (param_1 <= param_2) {
      pfVar4 = *(float **)(param_3 + 0x18);
      if (pfVar4[(long)*(int *)(param_3 + 0x10) + -1] <= param_1) {
        return;
      }
    }
    else {
      _spEventTimeline_apply(param_1,0x4f000000,param_3,param_4,param_5,param_6);
      pfVar4 = *(float **)(param_3 + 0x18);
      param_1 = -1.0;
    }
    if (*pfVar4 <= param_2) {
      iVar3 = *(int *)(param_3 + 0x10);
      if (*pfVar4 <= param_1) {
        iVar9 = iVar3 + -2;
        if (iVar9 == 0) {
          lVar6 = 1;
        }
        else {
          iVar7 = 0;
          iVar8 = iVar9;
          do {
            iVar2 = iVar9 >> 1;
            if (pfVar4[iVar2 + 1] <= param_1) {
              iVar7 = iVar2 + 1;
              iVar2 = iVar8;
            }
            iVar9 = iVar7 + iVar2;
            iVar8 = iVar2;
          } while (iVar7 != iVar2);
          lVar6 = (long)(iVar7 + 1);
        }
        lVar1 = lVar6;
        do {
          lVar5 = lVar1;
          if (lVar5 < 1) break;
          lVar1 = lVar5 + -1;
        } while (pfVar4[lVar5 + -1] == pfVar4[lVar6]);
        if (iVar3 <= (int)lVar5) {
          return;
        }
      }
      else {
        lVar5 = 0;
        if (iVar3 < 1) {
          return;
        }
      }
      lVar6 = (long)(int)lVar5;
      do {
        if (param_2 < *(float *)(*(long *)(param_3 + 0x18) + lVar6 * 4)) {
          return;
        }
        iVar3 = *param_6;
        lVar1 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        *(undefined8 *)(param_5 + (long)iVar3 * 8) =
             *(undefined8 *)(*(long *)(param_3 + 0x20) + lVar1);
        *param_6 = iVar3 + 1;
      } while (lVar6 < *(int *)(param_3 + 0x10));
    }
  }
  return;
}

