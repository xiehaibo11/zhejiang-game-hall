
void FUN_010ab90c(undefined8 param_1,long param_2,long *param_3,char param_4,long *param_5,
                 uint param_6)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  lVar5 = *param_3;
  lVar4 = *param_5;
  if (param_4 == '\x10') {
    FUN_01082628(param_2,lVar5,0,lVar4,3,0);
    return;
  }
  if ((int)param_6 < 0) {
    param_6 = *(int *)(lVar5 + 3) >> 1;
    uVar2 = *(int *)(lVar4 + 3) >> 1;
    if (uVar2 <= param_6) {
      param_6 = uVar2;
    }
    uVar2 = uVar2 - param_6;
    if (0 < (int)uVar2) {
      uVar3 = *(undefined4 *)(param_2 + 0xa8);
      lVar1 = lVar4 + (int)(param_6 << 2);
      uVar7 = (ulong)uVar2;
      if (uVar2 < 8) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar7 & 0xfffffff8;
        puVar10 = (undefined8 *)(lVar1 + 0x17);
        uVar11 = uVar9;
        do {
          puVar10[-1] = CONCAT44(uVar3,uVar3);
          puVar10[-2] = CONCAT44(uVar3,uVar3);
          puVar10[1] = CONCAT44(uVar3,uVar3);
          *puVar10 = CONCAT44(uVar3,uVar3);
          uVar11 = uVar11 - 8;
          puVar10 = puVar10 + 4;
        } while (uVar11 != 0);
        if (uVar9 == uVar7) goto LAB_010ab9c8;
      }
      lVar8 = uVar7 - uVar9;
      puVar6 = (undefined4 *)(lVar1 + 7 + uVar9 * 4);
      do {
        lVar8 = lVar8 + -1;
        *puVar6 = uVar3;
        puVar6 = puVar6 + 1;
      } while (lVar8 != 0);
    }
  }
LAB_010ab9c8:
  if (param_6 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(param_2 + 0x8850),lVar4,lVar4 + 7,lVar5 + 7,param_6,4);
    return;
  }
  return;
}

