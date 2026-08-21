
/* v8::internal::Factory::NewFunctionForTest(v8::internal::Handle<v8::internal::String>) */

void __thiscall v8::internal::Factory::NewFunctionForTest(Factory *this,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_88;
  ulong *puStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined1 local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) +
                                              0x13)) + 0x2ab);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puStack_80 = *(ulong **)(this + 0x95a0);
    if (puStack_80 == *(ulong **)(this + 0x95a8)) {
      puStack_80 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puStack_80 + 1;
    *puStack_80 = uVar2;
  }
  else {
    puStack_80 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
  }
  local_70 = 0;
  local_64 = 0;
  local_60 = 0;
  local_78 = 0;
  local_6c = 0xffffffffffffffff;
  local_54 = 0x97;
  local_58 = 1;
  local_88 = param_2;
  NewFunction(this,(NewFunctionArgs *)&local_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

