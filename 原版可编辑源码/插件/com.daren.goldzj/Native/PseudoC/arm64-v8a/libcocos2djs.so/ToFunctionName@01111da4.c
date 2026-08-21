
/* v8::internal::Name::ToFunctionName(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Name>) */

Isolate * v8::internal::Name::ToFunctionName(Isolate *param_1,Isolate *param_2)

{
  uint uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  long lVar4;
  ulong uVar5;
  IncrementalStringBuilder aIStack_58 [8];
  int local_50;
  int local_48;
  int local_44;
  long *local_38;
  
  uVar5 = *(ulong *)param_2;
  if (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40) {
    return param_2;
  }
  uVar1 = *(uint *)(uVar5 + 0xb);
  uVar5 = uVar5 & 0xffffffff00000000 | (ulong)uVar1;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
    if ((uVar1 & 1) == 0) goto LAB_01111e44;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar2;
    if ((uVar5 & 1) == 0) goto LAB_01111e44;
  }
  if ((int)uVar5 == *(int *)(param_1 + 0xa0)) {
    return param_1 + 200;
  }
LAB_01111e44:
  IncrementalStringBuilder::IncrementalStringBuilder(aIStack_58,param_1);
  lVar4 = (long)local_44;
  local_44 = local_44 + 1;
  if (local_50 == 0) {
    *(undefined1 *)(*local_38 + lVar4 + 0xb) = 0x5b;
  }
  else {
    *(undefined2 *)(*local_38 + lVar4 * 2 + 0xb) = 0x5b;
  }
  if (local_44 == local_48) {
    IncrementalStringBuilder::Extend(aIStack_58);
  }
  IncrementalStringBuilder::AppendString(aIStack_58,puVar2);
  lVar4 = (long)local_44;
  local_44 = local_44 + 1;
  if (local_50 == 0) {
    *(undefined1 *)(*local_38 + lVar4 + 0xb) = 0x5d;
  }
  else {
    *(undefined2 *)(*local_38 + lVar4 * 2 + 0xb) = 0x5d;
  }
  if (local_44 == local_48) {
    IncrementalStringBuilder::Extend(aIStack_58);
  }
  pIVar3 = (Isolate *)IncrementalStringBuilder::Finish(aIStack_58);
  return pIVar3;
}

