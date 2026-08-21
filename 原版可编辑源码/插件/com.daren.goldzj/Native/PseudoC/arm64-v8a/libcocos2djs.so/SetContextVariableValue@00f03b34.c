
/* v8::internal::ScopeIterator::SetContextVariableValue(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::ScopeIterator::SetContextVariableValue
          (ScopeIterator *this,undefined8 *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_48;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  local_48 = **(undefined8 **)(this + 0x28);
  uVar3 = Context::scope_info((Context *)&local_48);
  iVar2 = ScopeInfo::ContextSlotIndex(uVar3,*param_2,auStack_34,auStack_38,auStack_3c,auStack_40);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = *param_3;
    uVar6 = **(ulong **)(this + 0x28);
    lVar1 = uVar6 + (long)(iVar2 << 2);
    *(int *)(lVar1 + 7) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,lVar1,uVar5);
        uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar5);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

