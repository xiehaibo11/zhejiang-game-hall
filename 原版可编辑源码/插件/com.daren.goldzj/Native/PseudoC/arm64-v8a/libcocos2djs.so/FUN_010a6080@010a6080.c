
void FUN_010a6080(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4,long *param_5,
                 ulong param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long extraout_x1;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  FUN_010a6da4();
  lVar7 = *param_3;
  lVar5 = *param_5;
  uVar6 = param_6 & 0xffffffff;
  if ((param_4 & 0xff) == 0xe) {
    FUN_01082628(extraout_x1,lVar7,0,lVar5,3,0);
    return;
  }
  if ((int)param_6 < 0) {
    uVar2 = *(int *)(lVar7 + 3) >> 1;
    uVar3 = *(int *)(lVar5 + 3) >> 1;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    uVar6 = (ulong)uVar2;
    uVar3 = uVar3 - uVar2;
    if (0 < (int)uVar3) {
      uVar4 = *(undefined4 *)(extraout_x1 + 0xa8);
      lVar1 = lVar5 + (int)(uVar2 << 2);
      uVar9 = (ulong)uVar3;
      if (uVar3 < 8) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar9 & 0xfffffff8;
        puVar12 = (undefined8 *)(lVar1 + 0x17);
        uVar13 = uVar11;
        do {
          puVar12[-1] = CONCAT44(uVar4,uVar4);
          puVar12[-2] = CONCAT44(uVar4,uVar4);
          puVar12[1] = CONCAT44(uVar4,uVar4);
          *puVar12 = CONCAT44(uVar4,uVar4);
          uVar13 = uVar13 - 8;
          puVar12 = puVar12 + 4;
        } while (uVar13 != 0);
        if (uVar11 == uVar9) goto LAB_010a6148;
      }
      lVar10 = uVar9 - uVar11;
      puVar8 = (undefined4 *)(lVar1 + 7 + uVar11 * 4);
      do {
        lVar10 = lVar10 + -1;
        *puVar8 = uVar4;
        puVar8 = puVar8 + 1;
      } while (lVar10 != 0);
    }
  }
LAB_010a6148:
  if ((int)uVar6 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(extraout_x1 + 0x8850),lVar5,lVar5 + 7,lVar7 + 7,uVar6,4);
    return;
  }
  return;
}

