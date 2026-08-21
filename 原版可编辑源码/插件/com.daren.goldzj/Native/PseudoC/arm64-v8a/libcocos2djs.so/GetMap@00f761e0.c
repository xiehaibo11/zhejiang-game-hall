
/* v8::internal::NewFunctionArgs::GetMap(v8::internal::Isolate*) const */

void __thiscall v8::internal::NewFunctionArgs::GetMap(NewFunctionArgs *this,Isolate *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  
  if (*(long *)(this + 8) == 0) {
    if (*(long *)(this + 0x28) == 0) {
      uVar3 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar4 = uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (this[0x31] == (NewFunctionArgs)0x0) {
        puVar5 = (uint *)(uVar4 + 0x2b3);
      }
      else {
        puVar5 = (uint *)(uVar4 + 0x2c7);
      }
    }
    else if (*(int *)(this + 0x38) == 1) {
      uVar3 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar4 = uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (this[0x31] == (NewFunctionArgs)0x0) {
        puVar5 = (uint *)(uVar4 + 0x2b7);
      }
      else {
        puVar5 = (uint *)(uVar4 + 0x2c3);
      }
    }
    else {
      if (*(int *)(this + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar3 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar4 = uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (this[0x31] == (NewFunctionArgs)0x0) {
        puVar5 = (uint *)(uVar4 + 0x2ab);
      }
      else {
        puVar5 = (uint *)(uVar4 + 699);
      }
    }
    uVar1 = *puVar5;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3 | uVar1;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3 | uVar1);
    }
  }
  return;
}

