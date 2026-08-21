
/* v8::internal::Factory::NewPropertyCell(v8::internal::Handle<v8::internal::Name>,
   v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewPropertyCell(Factory *this,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar6 = *(undefined8 *)(this + 0x130);
  if ((param_3 & 0xff) == 0) {
    lVar4 = *(long *)(this + 0x8938);
    lVar1 = *(long *)(lVar4 + 0x68);
    if (((0x13 < (ulong)(*(long *)(lVar4 + 0x70) - lVar1)) && (FLAG_inline_new != '\0')) &&
       (FLAG_gc_interval == 0)) {
      uVar2 = lVar1 + 1;
      *(long *)(lVar4 + 0x68) = lVar1 + 0x14;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,0x14,1,1);
      goto LAB_00f72f6c;
    }
  }
  uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x14,param_3,1,0);
LAB_00f72f6c:
  *(int *)(uVar2 - 1) = (int)uVar6;
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
  *(undefined4 *)(uVar2 + 0xf) = *(undefined4 *)(this + 0x420);
  *(undefined4 *)(*puVar3 + 7) = 0;
  uVar7 = *puVar3;
  uVar2 = *param_2;
  *(int *)(uVar7 + 3) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar5 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 3,uVar2);
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 3,uVar2);
    }
  }
  uVar7 = *puVar3;
  uVar2 = *(ulong *)(this + 0xa8);
  *(int *)(uVar7 + 0xb) = (int)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar5 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar2);
      uVar5 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar2);
    }
  }
  return puVar3;
}

