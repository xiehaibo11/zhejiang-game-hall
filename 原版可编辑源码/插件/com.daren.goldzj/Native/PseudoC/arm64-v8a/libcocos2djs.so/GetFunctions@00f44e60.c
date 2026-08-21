
/* v8::internal::JavaScriptFrame::GetFunctions(std::__ndk1::vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo> > >*) const */

void __thiscall v8::internal::JavaScriptFrame::GetFunctions(JavaScriptFrame *this,vector *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong *local_70;
  ulong *local_68;
  ulong *local_60;
  undefined8 uStack_58;
  
  local_60 = (ulong *)0x0;
  uStack_58 = 0;
  local_68 = (ulong *)0x0;
  (**(code **)(*(long *)this + 0xa0))(this,&local_68);
  puVar2 = local_60;
  for (puVar1 = local_68; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    uVar6 = *puVar1;
    uVar3 = (**(code **)(*(long *)this + 0x98))(this);
    pIVar5 = (Isolate *)(uVar3 & 0xffffffff00000000);
    if (*(CanonicalHandleScope **)((ulong)pIVar5 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar6;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar5 | 0x95b8),uVar6);
    }
    local_70 = puVar4;
    if (*(long **)(param_1 + 8) < *(long **)(param_1 + 0x10)) {
      **(long **)(param_1 + 8) = (long)puVar4;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    }
    else {
      std::__ndk1::
      vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
      ::__push_back_slow_path<v8::internal::Handle<v8::internal::SharedFunctionInfo>>
                ((vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
                  *)param_1,(Handle *)&local_70);
    }
  }
  if (local_68 != (ulong *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  return;
}

