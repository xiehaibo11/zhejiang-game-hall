
/* v8::Context::SlowGetEmbedderData(int) */

void __thiscall v8::Context::SlowGetEmbedderData(Context *this,int param_1)

{
  uint *puVar1;
  long *plVar2;
  CanonicalHandleScope *this_00;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  plVar2 = (long *)FUN_00ea45f0(this,param_1,0,"v8::Context::GetEmbedderData()");
  if (plVar2 != (long *)0x0) {
    puVar1 = (uint *)(*plVar2 + ((long)(param_1 << 3) | 7U));
    this_00 = *(CanonicalHandleScope **)((ulong)*(uint *)(this + 4) << 0x20 | 0x95b8);
    uVar5 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1;
    if (this_00 == (CanonicalHandleScope *)0x0) {
      pIVar4 = (Isolate *)((ulong)*(uint *)(this + 4) << 0x20);
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
  }
  return;
}

