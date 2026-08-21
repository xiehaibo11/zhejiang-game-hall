
void spSlot_setToSetupPose(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  spColor_setFromColor(param_1 + 2,*param_1 + 0x20);
  if (param_1[4] != 0) {
    spColor_setFromColor(param_1[4],*(undefined8 *)(*param_1 + 0x30));
  }
  if (*(long *)((undefined4 *)*param_1 + 6) == 0) {
    if (param_1[5] == 0) {
      return;
    }
    lVar3 = param_1[1];
    param_1[5] = 0;
  }
  else {
    lVar2 = spSkeleton_getAttachmentForSlotIndex
                      (*(undefined8 *)(param_1[1] + 8),*(undefined4 *)*param_1);
    param_1[5] = 0;
    if (lVar2 == 0) {
      return;
    }
    lVar3 = param_1[1];
    param_1[5] = lVar2;
  }
  uVar1 = *(undefined4 *)(*(long *)(lVar3 + 8) + 0x80);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}

