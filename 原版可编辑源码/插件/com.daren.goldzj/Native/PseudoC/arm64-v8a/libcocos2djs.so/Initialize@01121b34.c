
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Initialize(v8::internal::Isolate*,
   int) */

void __thiscall
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Initialize
          (SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary> *this,Isolate *param_1,
          int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = param_2 + 1;
  }
  *(char *)(*(long *)this + 9) = (char)(iVar1 >> 1);
  *(undefined1 *)(*(long *)this + 7) = 0;
  uVar11 = (ulong)(uint)param_2;
  *(undefined1 *)(*(long *)this + 8) = 0;
  *(undefined1 *)(*(long *)this + 10) = 0;
  memset((void *)(*(long *)this + (long)(param_2 * 0xc) + 0xb),0xff,(long)((iVar1 >> 1) + param_2));
  uVar6 = *(ulong *)this;
  if ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
    if (0 < param_2) {
      lVar8 = 0xc00000000;
      while( true ) {
        uVar11 = uVar11 - 1;
        uVar12 = *(ulong *)(param_1 + 0xa8);
        uVar9 = lVar8 >> 0x20;
        lVar13 = uVar9 - 1;
        *(int *)(uVar6 + lVar13) = (int)uVar12;
        uVar6 = *(ulong *)this;
        if ((uVar12 & 1) != 0) {
          uVar4 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
          lVar3 = uVar6 + lVar13;
          if (((uint)uVar4 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar6,lVar3,uVar12);
            uVar6 = *(ulong *)this;
            uVar4 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
            lVar3 = uVar6 + lVar13;
          }
          if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar6,lVar3,uVar12);
            uVar6 = *(ulong *)this;
          }
        }
        uVar12 = *(ulong *)(param_1 + 0xa8);
        uVar4 = uVar9 | 3;
        *(int *)(uVar6 + uVar4) = (int)uVar12;
        uVar6 = *(ulong *)this;
        if ((uVar12 & 1) != 0) {
          uVar5 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
          lVar13 = uVar6 + uVar4;
          if (((uint)uVar5 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar6,lVar13,uVar12);
            uVar6 = *(ulong *)this;
            uVar5 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
            lVar13 = uVar6 + uVar4;
          }
          if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar6,lVar13,uVar12);
            uVar6 = *(ulong *)this;
          }
        }
        uVar12 = *(ulong *)(param_1 + 0xa8);
        lVar13 = uVar9 + 7;
        *(int *)(uVar6 + lVar13) = (int)uVar12;
        if ((uVar12 & 1) != 0) {
          uVar6 = *(ulong *)this;
          uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
          lVar3 = uVar6 + lVar13;
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar6,lVar3,uVar12);
            uVar6 = *(ulong *)this;
            uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
            lVar3 = uVar6 + lVar13;
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar6,lVar3,uVar12);
          }
        }
        if (uVar11 == 0) break;
        uVar6 = *(ulong *)this;
        lVar8 = lVar8 + 0xc00000000;
      }
    }
  }
  else if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xa8);
    uVar11 = (ulong)(param_2 * 3);
    if ((uint)(param_2 * 3) < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar11 & 0xfffffffffffffff8;
      puVar10 = (undefined8 *)(uVar6 + 0x1b);
      uVar12 = uVar9;
      do {
        puVar10[-1] = CONCAT44(uVar2,uVar2);
        puVar10[-2] = CONCAT44(uVar2,uVar2);
        puVar10[1] = CONCAT44(uVar2,uVar2);
        *puVar10 = CONCAT44(uVar2,uVar2);
        uVar12 = uVar12 - 8;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar9 == uVar11) {
        return;
      }
    }
    lVar8 = uVar11 - uVar9;
    puVar7 = (undefined4 *)(uVar6 + 0xb + uVar9 * 4);
    do {
      lVar8 = lVar8 + -1;
      *puVar7 = uVar2;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  return;
}

