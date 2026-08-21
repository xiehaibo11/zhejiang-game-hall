
/* v8::internal::Factory::NewExternal(void*) */

ulong * __thiscall v8::internal::Factory::NewExternal(Factory *this,void *param_1)

{
  short sVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  puVar3 = (ulong *)NewForeign(this,(ulong)param_1);
  lVar7 = *(long *)(this + 0x8938);
  lVar8 = *(long *)(lVar7 + 0x68);
  uVar6 = (ulong)*(byte *)(*(long *)(this + 0xe78) + 3) * 4;
  if ((((ulong)(*(long *)(lVar7 + 0x70) - lVar8) < uVar6) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar6,0,1,0);
  }
  else {
    uVar4 = lVar8 + 1;
    *(ulong *)(lVar7 + 0x68) = lVar8 + uVar6;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar8,uVar6,1,1);
  }
  *(undefined4 *)(uVar4 - 1) = *(undefined4 *)(this + 0xe78);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0x95a0);
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
  }
  InitializeJSObjectFromMap(this,puVar5,this + 0x168,this + 0xe78);
  uVar9 = *puVar5;
  uVar4 = *puVar3;
  uVar6 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1);
  sVar1 = *(short *)(uVar6 + 7);
  if (sVar1 == 0x421) {
    lVar8 = 0xc;
  }
  else {
    iVar2 = JSObject::GetHeaderSize(sVar1,*(char *)(uVar6 + 9) < '\0');
    lVar8 = (long)iVar2;
  }
  *(int *)(lVar8 + uVar9 + -1) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar6 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    lVar7 = lVar8 + (uVar9 - 1);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,lVar7,uVar4);
      uVar6 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,lVar7,uVar4);
    }
  }
  *(undefined4 *)(lVar8 + uVar9 + 3) = 0;
  return puVar5;
}

