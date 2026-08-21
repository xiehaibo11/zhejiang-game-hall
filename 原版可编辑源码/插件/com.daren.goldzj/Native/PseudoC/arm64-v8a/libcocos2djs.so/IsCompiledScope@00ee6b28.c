
/* v8::internal::IsCompiledScope::IsCompiledScope(v8::internal::SharedFunctionInfo,
   v8::internal::Isolate*) */

void __thiscall
v8::internal::IsCompiledScope::IsCompiledScope(IsCompiledScope *this,ulong param_2,Isolate *param_3)

{
  ulong *puVar1;
  IsCompiledScope IVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *(uint *)(param_2 + 3);
  uVar6 = param_2 & 0xffffffff00000000;
  if ((((uVar3 & 1) == 0) ||
      (*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar3) - 1)) != 0x86)) &&
     ((uVar3 = *(uint *)(param_2 + 3), (uVar3 & 1) == 0 ||
      (*(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar3) - 1)) != 0x61)))) {
    puVar1 = (ulong *)0x0;
  }
  else {
    uVar4 = uVar6 | 7;
    uVar5 = uVar6 | *(uint *)(param_2 + 0xf);
    if ((*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x5b) &&
       (*(short *)(uVar4 + *(uint *)((uVar6 | *(uint *)(uVar5 + 0x13)) - 1)) == 0x86)) {
      uVar3 = *(uint *)(uVar5 + 0xf);
    }
    else {
      uVar3 = *(uint *)(param_2 + 3);
      if (((uVar3 & 1) == 0) || (*(short *)(uVar4 + *(uint *)((uVar6 | uVar3) - 1)) != 0x86)) {
        uVar3 = *(uint *)((uVar6 | *(uint *)(param_2 + 3)) + 3);
      }
      else {
        uVar3 = *(uint *)(param_2 + 3);
      }
    }
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(param_3 + 0x95a0);
      if (puVar1 == *(ulong **)(param_3 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar6 | uVar3;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6 | uVar3);
    }
  }
  *(ulong **)this = puVar1;
  uVar3 = *(uint *)(param_2 + 3);
  if (uVar3 == 0x84) {
    IVar2 = (IsCompiledScope)0x0;
  }
  else if ((uVar3 & 1) == 0) {
    IVar2 = (IsCompiledScope)0x1;
  }
  else {
    IVar2 = (IsCompiledScope)
            (1 < *(ushort *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar3) - 1)) - 0x95);
  }
  this[8] = IVar2;
  return;
}

