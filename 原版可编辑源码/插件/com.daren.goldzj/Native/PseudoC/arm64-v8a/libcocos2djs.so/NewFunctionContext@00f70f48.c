
/* v8::internal::Factory::NewFunctionContext(v8::internal::Handle<v8::internal::Context>,
   v8::internal::Handle<v8::internal::ScopeInfo>) */

ulong * __thiscall
v8::internal::Factory::NewFunctionContext(Factory *this,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong local_48;
  
  local_48 = *param_3;
  cVar2 = ScopeInfo::scope_type((ScopeInfo *)&local_48);
  if (cVar2 == '\x02') {
    uVar5 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    puVar7 = (uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13))
                     + 0x1a7);
  }
  else {
    if (cVar2 != '\x01') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar5 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    puVar7 = (uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13))
                     + 0x1af);
  }
  uVar1 = *puVar7;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar5 | uVar1;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar5 | uVar1);
  }
  local_48 = *param_3;
  iVar3 = ScopeInfo::ContextLength((ScopeInfo *)&local_48);
  puVar4 = (ulong *)NewContext(this,puVar4,iVar3 * 4 + 8,iVar3,0);
  uVar8 = *puVar4;
  uVar5 = *param_3;
  *(int *)(uVar8 + 7) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 7,uVar5);
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 7,uVar5);
    }
  }
  uVar8 = *puVar4;
  uVar5 = *param_2;
  *(int *)(uVar8 + 0xb) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0xb,uVar5);
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0xb,uVar5);
    }
  }
  return puVar4;
}

