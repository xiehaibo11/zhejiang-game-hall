
/* v8::internal::HashTable<v8::internal::CompilationCacheTable,
   v8::internal::CompilationCacheShape>::EntryForProbe(v8::internal::ReadOnlyRoots,
   v8::internal::Object, int, v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>::
EntryForProbe(HashTable<v8::internal::CompilationCacheTable,v8::internal::CompilationCacheShape>
              *this,long param_2,ulong param_3,int param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong local_38;
  
  if ((param_3 & 1) == 0) {
    uVar2 = (uint)(double)((int)param_3 >> 1);
  }
  else {
    local_38 = param_3 & 0xffffffff00000000;
    if (*(short *)((local_38 | 7) + (ulong)*(uint *)(param_3 - 1)) == 0x42) {
      uVar2 = (uint)*(double *)(param_3 + 3);
    }
    else if (*(int *)(param_3 - 1) == *(int *)(param_2 + 0x68)) {
      uVar2 = CompilationCacheShape::StringSharedHash
                        (local_38 | *(uint *)(param_3 + 0xb),local_38 | *(uint *)(param_3 + 7),
                         *(uint *)(param_3 + 0xf) >> 1 & 1,*(int *)(param_3 + 0x13) >> 1);
    }
    else {
      iVar4 = *(int *)(param_3 + 0xf);
      local_38 = local_38 | *(uint *)(param_3 + 0xb);
      if ((*(uint *)(local_38 + 3) & 1) == 0) {
        uVar2 = *(uint *)(local_38 + 3) >> 3;
      }
      else {
        uVar2 = String::ComputeAndSetHash((String *)&local_38);
      }
      uVar2 = uVar2 + (iVar4 >> 1);
    }
  }
  uVar1 = (*(int *)(*(long *)this + 0xf) >> 1) - 1;
  uVar3 = (ulong)(uVar2 & uVar1);
  if (1 < param_4) {
    iVar4 = 1;
    do {
      if (uVar3 == param_5) {
        return param_5;
      }
      uVar2 = (int)uVar3 + iVar4;
      iVar4 = iVar4 + 1;
      uVar3 = (ulong)(uVar2 & uVar1);
    } while (param_4 != iVar4);
  }
  return uVar3;
}

