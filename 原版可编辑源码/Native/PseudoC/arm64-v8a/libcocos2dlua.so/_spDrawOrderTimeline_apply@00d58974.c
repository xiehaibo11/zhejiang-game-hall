
void _spDrawOrderTimeline_apply
               (undefined1 param_1 [16],float param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6,int param_7,int param_8)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  if ((param_7 != 0) || (param_8 != 1)) {
    pfVar2 = *(float **)(param_3 + 0x18);
    if (*pfVar2 <= param_2) {
      iVar4 = *(int *)(param_3 + 0x10) + -1;
      if (param_2 < pfVar2[iVar4]) {
        iVar4 = 0;
        iVar7 = *(int *)(param_3 + 0x10) + -2;
        iVar5 = iVar7;
        if (iVar7 != 0) {
          do {
            iVar1 = iVar7 >> 1;
            if (pfVar2[iVar1 + 1] <= param_2) {
              iVar4 = iVar1 + 1;
              iVar1 = iVar5;
            }
            iVar7 = iVar4 + iVar1;
            iVar5 = iVar1;
          } while (iVar4 != iVar1);
        }
      }
      lVar3 = *(long *)(*(long *)(param_3 + 0x20) + (long)iVar4 * 8);
      if (lVar3 != 0) {
        iVar4 = *(int *)(param_3 + 0x28);
        if (iVar4 < 1) {
          return;
        }
        lVar6 = 0;
        do {
          *(undefined8 *)(*(long *)(param_4 + 0x30) + lVar6 * 8) =
               *(undefined8 *)(*(long *)(param_4 + 0x28) + (long)*(int *)(lVar3 + lVar6 * 4) * 8);
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar4);
        return;
      }
    }
    else if (param_7 != 0) {
      return;
    }
  }
  memcpy(*(void **)(param_4 + 0x30),*(void **)(param_4 + 0x28),(long)*(int *)(param_3 + 0x28) << 3);
  return;
}

