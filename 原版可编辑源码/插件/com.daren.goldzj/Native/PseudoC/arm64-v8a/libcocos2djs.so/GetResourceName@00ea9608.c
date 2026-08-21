
/* v8::ScriptOrModule::GetResourceName() */

void __thiscall v8::ScriptOrModule::GetResourceName(ScriptOrModule *this)

{
  uint uVar1;
  undefined4 uVar2;
  CanonicalHandleScope *this_00;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(this + 4);
  pIVar4 = (Isolate *)((ulong)uVar1 << 0x20);
  uVar2 = *(undefined4 *)(pIVar4 + 0x2c60);
  *(undefined4 *)(pIVar4 + 0x2c60) = 5;
  this_00 = *(CanonicalHandleScope **)((ulong)uVar1 << 0x20 | 0x95b8);
  uVar5 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  if (this_00 == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar3 = (ulong *)internal::HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    internal::CanonicalHandleScope::Lookup(this_00,uVar5);
  }
  *(undefined4 *)(pIVar4 + 0x2c60) = uVar2;
  return;
}

