
void _spAttachmentTimeline_apply
               (undefined1 param_1 [16],float param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6,int param_7,int param_8)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  
  plVar8 = *(long **)(*(long *)(param_4 + 0x28) + (long)*(int *)(param_3 + 0x20) * 8);
  if ((param_7 != 0) || (param_8 != 1)) {
    pfVar4 = *(float **)(param_3 + 0x18);
    if (*pfVar4 <= param_2) {
      iVar5 = *(int *)(param_3 + 0x10) + -1;
      if (param_2 < pfVar4[iVar5]) {
        iVar5 = 0;
        iVar7 = *(int *)(param_3 + 0x10) + -2;
        iVar6 = iVar7;
        if (iVar7 != 0) {
          do {
            iVar1 = iVar7 >> 1;
            if (pfVar4[iVar1 + 1] <= param_2) {
              iVar5 = iVar1 + 1;
              iVar1 = iVar6;
            }
            iVar7 = iVar5 + iVar1;
            iVar6 = iVar1;
          } while (iVar5 != iVar1);
        }
      }
      lVar3 = *(long *)(*(long *)(param_3 + 0x28) + (long)iVar5 * 8);
      goto joined_r0x00d577f8;
    }
    if (param_7 != 0) {
      return;
    }
  }
  lVar3 = *(long *)(*plVar8 + 0x18);
joined_r0x00d577f8:
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = spSkeleton_getAttachmentForSlotIndex(param_4,*(int *)(param_3 + 0x20));
  }
  spSlot_setAttachment(plVar8,uVar2);
  return;
}

