
/* v8::internal::Script::GetEvalPosition(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>) */

int v8::internal::Script::GetEvalPosition(Isolate *param_1,ulong *param_2)

{
  int iVar1;
  ulong *puVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_50;
  undefined8 local_48;
  
  uVar4 = *param_2;
  piVar3 = (int *)(uVar4 + 0x27);
  iVar1 = *piVar3 >> 1;
  if (*piVar3 < 0) {
    if (((*(uint *)(uVar4 + 0x23) & 1) == 0) ||
       (uVar5 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0x23),
       *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0xa6)) {
      iVar1 = 0;
    }
    else {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(param_1 + 0x95a0);
        if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar5;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      }
      SharedFunctionInfo::EnsureSourcePositionsAvailable(param_1,puVar2);
      local_50 = *puVar2;
      local_48 = SharedFunctionInfo::abstract_code((SharedFunctionInfo *)&local_50);
      iVar1 = AbstractCode::SourcePosition((AbstractCode *)&local_48,-iVar1);
      piVar3 = (int *)(*param_2 + 0x27);
    }
    *piVar3 = iVar1 << 1;
  }
  return iVar1;
}

