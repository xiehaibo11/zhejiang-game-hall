
long * FUN_010ac060(long param_1,long *param_2,byte param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  Factory *this;
  
  this = (Factory *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  plVar5 = (long *)v8::internal::Factory::NewUninitializedFixedArray(this,param_4);
  if ((param_3 < 5) && ((param_3 & 1) == 0)) {
    lVar6 = *param_2;
    lVar7 = *plVar5;
  }
  else {
    lVar6 = *param_2;
    lVar7 = *plVar5;
    if (param_3 == 0x10) {
      FUN_01082628(this,lVar6,0,lVar7,3,0,0xffffffff);
      return plVar5;
    }
  }
  uVar2 = *(int *)(lVar6 + 3) >> 1;
  uVar3 = *(int *)(lVar7 + 3) >> 1;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  uVar3 = uVar3 - uVar2;
  if (0 < (int)uVar3) {
    uVar4 = *(undefined4 *)(this + 0xa8);
    lVar1 = lVar7 + (int)(uVar2 << 2);
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
      if (uVar11 == uVar9) goto LAB_010ac170;
    }
    lVar10 = uVar9 - uVar11;
    puVar8 = (undefined4 *)(lVar1 + 7 + uVar11 * 4);
    do {
      lVar10 = lVar10 + -1;
      *puVar8 = uVar4;
      puVar8 = puVar8 + 1;
    } while (lVar10 != 0);
  }
LAB_010ac170:
  if (uVar2 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),lVar7,lVar7 + 7,lVar6 + 7,uVar2,4);
  }
  return plVar5;
}

