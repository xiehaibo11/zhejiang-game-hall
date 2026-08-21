
/* v8::internal::TransitionArray::SearchDetails(int, v8::internal::PropertyKind,
   v8::internal::PropertyAttributes, int*) */

int __thiscall
v8::internal::TransitionArray::SearchDetails
          (TransitionArray *this,int param_1,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  uVar7 = *(ulong *)this;
  if (*(int *)(uVar7 + 3) < 4) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(uVar7 + 0xb) >> 1;
  }
  iVar4 = param_1 * 8;
  iVar6 = param_1;
  if (param_1 < iVar8) {
    iVar9 = iVar4 + 0xc;
    do {
      iVar6 = param_1;
      if (*(int *)(uVar7 + (long)(iVar9 + 3)) != *(int *)(uVar7 + ((long)(iVar4 + 8) | 7U))) break;
      uVar10 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 7 + (long)iVar9) & 0xfffffffd;
      uVar2 = *(int *)(((long)(int)((*(uint *)(uVar10 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                        0x1000000000 >> 0x20 | 3U) +
                      (uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0x17))) >> 1;
      uVar1 = uVar2 & 1;
      bVar5 = SBORROW4(uVar1,param_3);
      iVar3 = uVar1 - param_3;
      if (uVar1 == param_3) {
        uVar1 = uVar2 >> 3 & 7;
        bVar5 = SBORROW4(uVar1,param_4);
        iVar3 = uVar1 - param_4;
        if (uVar1 == param_4) {
          return param_1;
        }
      }
      if (iVar3 < 0 == bVar5) break;
      param_1 = param_1 + 1;
      iVar9 = iVar9 + 8;
      iVar6 = iVar8;
    } while (iVar8 != param_1);
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar6;
  }
  return -1;
}

