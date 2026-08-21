
/* v8::internal::TransitionArray::SearchDetailsAndGetTarget(int, v8::internal::PropertyKind,
   v8::internal::PropertyAttributes) */

ulong __thiscall
v8::internal::TransitionArray::SearchDetailsAndGetTarget
          (TransitionArray *this,int param_1,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = *(ulong *)this;
  if (*(int *)(uVar6 + 3) < 4) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(uVar6 + 0xb) >> 1;
  }
  iVar8 = iVar7 - param_1;
  if (iVar8 != 0 && param_1 <= iVar7) {
    iVar7 = param_1 * 8 + 0xc;
    do {
      if (*(int *)(uVar6 + (long)(iVar7 + 3)) != *(int *)(uVar6 + ((long)(param_1 * 8 + 8) | 7U))) {
        return 0;
      }
      uVar5 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 7 + (long)iVar7) & 0xfffffffd;
      uVar2 = *(int *)(((long)(int)((*(uint *)(uVar5 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                        0x1000000000 >> 0x20 | 3U) +
                      (uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x17))) >> 1;
      uVar1 = uVar2 & 1;
      bVar4 = SBORROW4(uVar1,param_3);
      iVar3 = uVar1 - param_3;
      if (uVar1 == param_3) {
        uVar1 = uVar2 >> 3 & 7;
        bVar4 = SBORROW4(uVar1,param_4);
        iVar3 = uVar1 - param_4;
        if (uVar1 == param_4) {
          return uVar5;
        }
      }
      if (iVar3 < 0 == bVar4) {
        return 0;
      }
      iVar8 = iVar8 + -1;
      iVar7 = iVar7 + 8;
    } while (iVar8 != 0);
  }
  return 0;
}

