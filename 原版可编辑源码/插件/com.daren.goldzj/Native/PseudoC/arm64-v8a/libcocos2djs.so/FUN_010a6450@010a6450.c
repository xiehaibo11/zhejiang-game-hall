
void FUN_010a6450(undefined8 param_1,ulong param_2,int param_3,char param_4,long *param_5,
                 int param_6,uint param_7)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  lVar7 = *param_5;
  uVar5 = param_2 & 0xffffffff00000000;
  uVar6 = uVar5 | *(uint *)(param_2 + 7);
  if (param_4 == '\x0e') {
    FUN_01082628();
    return;
  }
  if ((int)param_7 < 0) {
    iVar2 = *(int *)(lVar7 + 3) >> 1;
    param_7 = (*(int *)(uVar6 + 3) >> 1) - param_3;
    uVar4 = iVar2 - param_6;
    if (uVar4 <= param_7) {
      param_7 = uVar4;
    }
    uVar4 = iVar2 - (param_7 + param_6);
    if (0 < (int)uVar4) {
      uVar3 = *(undefined4 *)(uVar5 + 0xa8);
      lVar1 = lVar7 + (int)((param_7 + param_6) * 4);
      uVar9 = (ulong)uVar4;
      if (uVar4 < 8) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar9 & 0xfffffff8;
        puVar12 = (undefined8 *)(lVar1 + 0x17);
        uVar13 = uVar11;
        do {
          puVar12[-1] = CONCAT44(uVar3,uVar3);
          puVar12[-2] = CONCAT44(uVar3,uVar3);
          puVar12[1] = CONCAT44(uVar3,uVar3);
          *puVar12 = CONCAT44(uVar3,uVar3);
          uVar13 = uVar13 - 8;
          puVar12 = puVar12 + 4;
        } while (uVar13 != 0);
        if (uVar11 == uVar9) goto LAB_010a6518;
      }
      lVar10 = uVar9 - uVar11;
      puVar8 = (undefined4 *)(lVar1 + 7 + uVar11 * 4);
      do {
        lVar10 = lVar10 + -1;
        *puVar8 = uVar3;
        puVar8 = puVar8 + 1;
      } while (lVar10 != 0);
    }
  }
LAB_010a6518:
  if (param_7 == 0) {
    return;
  }
  v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
            ((Heap *)(uVar5 + 0x8850),lVar7,lVar7 + (param_6 << 2) + 7,
             uVar6 + (long)(param_3 << 2) + 7,param_7,4);
  return;
}

