
/* v8::internal::Factory::NewSymbol(v8::internal::AllocationType) */

ulong * __thiscall v8::internal::Factory::NewSymbol(Factory *this,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar7 = *(undefined8 *)(this + 0xf8);
  if ((param_2 & 0xff) == 0) {
    lVar5 = *(long *)(this + 0x8938);
    lVar1 = *(long *)(lVar5 + 0x68);
    if (((0xf < (ulong)(*(long *)(lVar5 + 0x70) - lVar1)) && (FLAG_inline_new != '\0')) &&
       (FLAG_gc_interval == 0)) {
      uVar3 = lVar1 + 1;
      *(long *)(lVar5 + 0x68) = lVar1 + 0x10;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,0x10,1,1);
      goto LAB_00f702f4;
    }
  }
  uVar3 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x10,param_2,1,0);
LAB_00f702f4:
  *(int *)(uVar3 - 1) = (int)uVar7;
  iVar2 = Isolate::GenerateIdentityHash((Isolate *)this,0x1fffffff);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
    uVar3 = *puVar4;
  }
  *(uint *)(uVar3 + 3) = iVar2 << 3 | 2;
  uVar8 = *puVar4;
  uVar3 = *(ulong *)(this + 0xa0);
  *(int *)(uVar8 + 0xb) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar6 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar3);
      uVar6 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar3);
    }
  }
  *(undefined4 *)(*puVar4 + 7) = 0;
  return puVar4;
}

