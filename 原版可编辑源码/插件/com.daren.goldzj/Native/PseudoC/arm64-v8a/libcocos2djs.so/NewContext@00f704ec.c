
/* v8::internal::Factory::NewContext(v8::internal::Handle<v8::internal::Map>, int, int,
   v8::internal::AllocationType) */

void __thiscall
v8::internal::Factory::NewContext
          (Factory *this,ulong *param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  if (((int)param_3 < 0x20001) && ((param_5 & 0xff) == 0)) {
    lVar5 = *(long *)(this + 0x8938);
    lVar6 = *(long *)(lVar5 + 0x68);
    if (((ulong)param_3 <= (ulong)(*(long *)(lVar5 + 0x70) - lVar6)) &&
       ((FLAG_inline_new != '\0' && (FLAG_gc_interval == 0)))) {
      uVar2 = lVar6 + 1;
      *(long *)(lVar5 + 0x68) = lVar6 + (int)param_3;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar6,param_3,1,1);
      goto LAB_00f705a0;
    }
  }
  uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),param_3,param_5,1,0);
LAB_00f705a0:
  uVar4 = *param_2;
  *(int *)(uVar2 - 1) = (int)uVar4;
  if (((uVar4 & 1) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar2,0);
  }
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    uVar2 = *puVar3;
  }
  *(int *)(uVar2 + 3) = param_4 << 1;
  if (0x10 < (int)param_3) {
    uVar2 = (ulong)param_3 - 0x10 >> 2;
    if (uVar2 != 0) {
      uVar4 = *puVar3;
      uVar1 = *(undefined4 *)(this + 0xa0);
      if ((ulong)param_3 - 0x10 < 0x20) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar2 & 0x3ffffffffffffff8;
        puVar9 = (undefined8 *)(uVar4 + 0x1f);
        uVar10 = uVar8;
        do {
          puVar9[-1] = CONCAT44(uVar1,uVar1);
          puVar9[-2] = CONCAT44(uVar1,uVar1);
          puVar9[1] = CONCAT44(uVar1,uVar1);
          *puVar9 = CONCAT44(uVar1,uVar1);
          uVar10 = uVar10 - 8;
          puVar9 = puVar9 + 4;
        } while (uVar10 != 0);
        if (uVar2 == uVar8) {
          return;
        }
      }
      lVar6 = uVar2 - uVar8;
      puVar7 = (undefined4 *)(uVar4 + 0xf + uVar8 * 4);
      do {
        lVar6 = lVar6 + -1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
  }
  return;
}

