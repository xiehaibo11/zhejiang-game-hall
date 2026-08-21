
/* v8::internal::SharedFunctionInfo::ScriptIterator::ScriptIterator(v8::internal::Isolate*,
   v8::internal::Script) */

void __thiscall
v8::internal::SharedFunctionInfo::ScriptIterator::ScriptIterator
          (ScriptIterator *this,Isolate *param_1,ulong param_3)

{
  CanonicalHandleScope *this_00;
  ulong *puVar1;
  ulong uVar2;
  
  if ((*(uint *)(param_3 + 0x17) & 0xfffffffe) == 6) {
    uVar2 = *(ulong *)((param_3 & 0xffffffff00000000) + 0x420);
    this_00 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
  }
  else {
    uVar2 = param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0x2b);
    this_00 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
  }
  if (this_00 == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar2);
  }
  *(ulong **)this = puVar1;
  *(undefined4 *)(this + 8) = 0;
  return;
}

