
/* v8::internal::compiler::VirtualClosure::VirtualClosure(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Isolate*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::VirtualClosure::VirtualClosure
          (VirtualClosure *this,ulong *param_2,Isolate *param_3,undefined8 param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  long local_48;
  
  pIVar1 = param_3 + 0x95a0;
  uVar3 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_3 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar3);
  }
  *(ulong **)this = puVar2;
  uVar3 = *param_2 & 0xffffffff00000000;
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)(*param_2 + 0x13)) + 3);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_3 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar3);
  }
  *(ulong **)(this + 8) = puVar2;
  uVar3 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_3 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar3);
  }
  local_48 = 0;
  Hints::AddConstant((Hints *)&local_48,puVar2,param_4);
  *(long *)(this + 0x10) = local_48;
  if ((local_48 != 0) && (*(long *)(local_48 + 0x10) != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","context_hints_.virtual_closures().IsEmpty()");
  }
  return;
}

