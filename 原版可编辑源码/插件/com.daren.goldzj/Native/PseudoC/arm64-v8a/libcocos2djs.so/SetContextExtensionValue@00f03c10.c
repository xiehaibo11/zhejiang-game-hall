
/* v8::internal::ScopeIterator::SetContextExtensionValue(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::ScopeIterator::SetContextExtensionValue
          (ScopeIterator *this,ulong *param_2,undefined8 param_3)

{
  ushort uVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  Isolate *pIVar5;
  undefined8 local_a0;
  undefined8 local_94;
  ulong local_88;
  ulong *local_80;
  undefined8 uStack_78;
  ulong *local_70;
  undefined8 uStack_68;
  ulong *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_48;
  
  local_48 = **(ulong **)(this + 0x28);
  local_a0 = Context::scope_info((Context *)&local_48);
  uVar2 = ScopeInfo::HasContextExtensionSlot((ScopeInfo *)&local_a0);
  if (((uVar2 & 1) != 0) &&
     (*(int *)(local_48 + 0xf) != *(int *)((local_48 & 0xffffffff00000000) + 0xa0))) {
    local_a0 = **(undefined8 **)(this + 0x28);
    uVar2 = Context::extension_object((Context *)&local_a0);
    pIVar5 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar2;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar2);
    }
    uVar2 = *(ulong *)this;
    if (((*puVar3 & 1) == 0) ||
       (local_60 = puVar3, *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(*puVar3 - 1)) < 0xa9)) {
      local_60 = (ulong *)LookupIterator::GetRootForNonJSReceiver(uVar2,puVar3,0xffffffffffffffff);
    }
    if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x40) {
      uVar4 = ~*(uint *)(*param_2 + 7) & 1;
    }
    else {
      uVar4 = 1;
    }
    local_a0 = CONCAT44(local_a0._4_4_,uVar4);
    local_94 = 0xc000000000;
    local_80 = param_2;
    local_88 = uVar2;
    if ((*(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) & 0xffe0)
        == 0x20) {
      local_80 = (ulong *)StringTable::LookupString(uVar2,param_2);
    }
    uStack_78 = 0;
    uStack_68 = 0;
    local_50 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_70 = puVar3;
    LookupIterator::Start<false>((LookupIterator *)&local_a0);
    uVar1 = JSReceiver::HasOwnProperty(puVar3,param_2);
    if ((uVar1 & 0xff) == 0) {
      v8::V8::FromJustIsNothing();
    }
    if (0xff < uVar1) {
      uVar1 = Object::SetDataProperty(&local_a0,param_3);
      if ((uVar1 & 0xff) == 0) {
        v8::V8::FromJustIsNothing();
      }
      if (0xff < uVar1) {
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Object::SetDataProperty(&it, new_value).ToChecked()");
    }
  }
  return 0;
}

