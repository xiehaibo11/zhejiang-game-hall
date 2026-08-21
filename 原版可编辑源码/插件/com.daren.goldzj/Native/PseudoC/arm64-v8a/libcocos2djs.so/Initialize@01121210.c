
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Initialize(v8::internal::Isolate*,
   int) */

void __thiscall
v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Initialize
          (SmallOrderedHashTable<v8::internal::SmallOrderedHashSet> *this,Isolate *param_1,
          int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = param_2 + 1;
  }
  *(char *)(*(long *)this + 5) = (char)(iVar1 >> 1);
  *(undefined1 *)(*(long *)this + 3) = 0;
  *(undefined1 *)(*(long *)this + 4) = 0;
  *(undefined1 *)(*(long *)this + 6) = 0;
  memset((void *)(*(long *)this + (long)(param_2 << 2) + 7),0xff,(long)((iVar1 >> 1) + param_2));
  uVar5 = *(ulong *)this;
  if ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
    if (0 < param_2) {
      lVar8 = 4;
      while( true ) {
        uVar7 = *(ulong *)(param_1 + 0xa8);
        lVar11 = (long)((int)lVar8 + 4) + -1;
        *(int *)(uVar5 + lVar11) = (int)uVar7;
        if ((uVar7 & 1) != 0) {
          uVar5 = *(ulong *)this;
          uVar4 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          lVar3 = uVar5 + lVar11;
          if (((uint)uVar4 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar5,lVar3,uVar7);
            uVar5 = *(ulong *)this;
            uVar4 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
            lVar3 = uVar5 + lVar11;
          }
          if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar5,lVar3,uVar7);
          }
        }
        if ((ulong)(uint)param_2 * 4 - lVar8 == 0) break;
        uVar5 = *(ulong *)this;
        lVar8 = lVar8 + 4;
      }
    }
  }
  else if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xa8);
    uVar7 = (ulong)param_2;
    if ((uint)param_2 < 8) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar7 & 0xfffffffffffffff8;
      puVar10 = (undefined8 *)(uVar5 + 0x17);
      uVar4 = uVar9;
      do {
        puVar10[-1] = CONCAT44(uVar2,uVar2);
        puVar10[-2] = CONCAT44(uVar2,uVar2);
        puVar10[1] = CONCAT44(uVar2,uVar2);
        *puVar10 = CONCAT44(uVar2,uVar2);
        uVar4 = uVar4 - 8;
        puVar10 = puVar10 + 4;
      } while (uVar4 != 0);
      if (uVar9 == uVar7) {
        return;
      }
    }
    lVar8 = uVar7 - uVar9;
    puVar6 = (undefined4 *)(uVar5 + 7 + uVar9 * 4);
    do {
      lVar8 = lVar8 + -1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    } while (lVar8 != 0);
  }
  return;
}

