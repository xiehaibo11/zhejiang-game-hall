
/* v8::internal::RegExpResultsCache::Lookup(v8::internal::Heap*, v8::internal::String,
   v8::internal::Object, v8::internal::FixedArray*,
   v8::internal::RegExpResultsCache::ResultsCacheType) */

ulong v8::internal::RegExpResultsCache::Lookup
                (long param_1,ulong param_2,ulong param_3,ulong *param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  
  if (*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) < 0x20) {
    if (param_5 == 1) {
      if (((param_3 & 1) == 0) ||
         (0x1f < *(ushort *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1))))
      goto LAB_011bd4e8;
      lVar2 = -0x7930;
    }
    else {
      lVar2 = -0x7928;
    }
    uVar4 = *(ulong *)(param_1 + lVar2);
    if ((*(uint *)(param_2 + 3) & 1) == 0) {
      uVar1 = *(uint *)(param_2 + 3) >> 3;
    }
    else {
      local_38 = param_2;
      uVar1 = String::ComputeAndSetHash((String *)&local_38);
    }
    uVar1 = (uVar1 & 0xfc) * 4;
    uVar3 = (ulong)uVar1;
    if ((*(int *)(uVar4 + (uVar3 | 7)) != (int)param_2) ||
       (*(int *)((uVar1 | 4) + uVar4 + 7) != (int)param_3)) {
      uVar1 = uVar1 + 0x10 & 0x3f0;
      uVar3 = (ulong)uVar1;
      if ((*(int *)(uVar4 + (uVar3 | 7)) != (int)param_2) ||
         (*(int *)((uVar1 | 4) + uVar4 + 7) != (int)param_3)) goto LAB_011bd4e8;
    }
    *param_4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(((uint)uVar3 | 0xc) + uVar4 + 7);
    uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (uVar3 | 0xf));
  }
  else {
LAB_011bd4e8:
    uVar4 = 0;
  }
  return uVar4;
}

