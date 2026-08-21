
/* v8::internal::CompilationCacheShape::StringSharedHash(v8::internal::String,
   v8::internal::SharedFunctionInfo, v8::internal::LanguageMode, int) */

uint v8::internal::CompilationCacheShape::StringSharedHash
               (long param_1,ulong param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_38;
  
  if ((*(uint *)(param_1 + 3) & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 3) >> 3;
  }
  else {
    local_38 = param_1;
    uVar2 = String::ComputeAndSetHash((String *)&local_38);
  }
  uVar5 = param_2 & 0xffffffff00000000;
  uVar6 = uVar5 | 7;
  uVar4 = uVar5 | *(uint *)(param_2 + 0xf);
  uVar7 = uVar4;
  if (*(short *)(uVar6 + *(uint *)(uVar4 - 1)) == 0x5b) {
    uVar7 = (ulong)*(uint *)(uVar4 + 0xb);
  }
  if ((uint)uVar7 != *(uint *)(uVar5 + 0xa0)) {
    uVar7 = uVar4;
    if (*(short *)(uVar6 + *(uint *)(uVar4 - 1)) == 0x5b) {
      uVar7 = uVar5 | *(uint *)(uVar4 + 0xb);
    }
    if ((*(uint *)(uVar7 + 3) != *(uint *)(uVar5 + 0xa0)) || ((*(uint *)(uVar7 + 3) & 1) == 0)) {
      if (*(short *)(uVar6 + *(uint *)(uVar4 - 1)) == 0x5b) {
        uVar4 = uVar5 | *(uint *)(uVar4 + 0xb);
      }
      local_38 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 3);
      if ((*(uint *)(local_38 + 3) & 1) == 0) {
        uVar3 = *(uint *)(local_38 + 3) >> 3;
      }
      else {
        uVar3 = String::ComputeAndSetHash((String *)&local_38);
      }
      uVar1 = uVar3 ^ uVar2 ^ 0x8000;
      if ((param_3 & 1) == 0) {
        uVar1 = uVar3 ^ uVar2;
      }
      uVar2 = uVar1 + param_4;
    }
  }
  return uVar2;
}

