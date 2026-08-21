
/* v8::internal::TransitionArray::SearchAndGetTarget(v8::internal::PropertyKind, v8::internal::Name,
   v8::internal::PropertyAttributes) */

undefined8
v8::internal::TransitionArray::SearchAndGetTarget
          (TransitionArray *param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = *(ulong *)param_1;
  if (*(int *)(uVar4 + 3) < 4) {
    return 0;
  }
  iVar6 = *(int *)(uVar4 + 0xb);
  if (iVar6 >> 1 == 0) {
    return 0;
  }
  if (iVar6 < 0x12) {
    if (iVar6 < 2) {
      return 0;
    }
    uVar3 = 0;
    iVar5 = 0xf;
    while (*(uint *)(uVar4 + (long)iVar5) != (uint)param_3) {
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 8;
      if ((uint)(iVar6 >> 1) == uVar3) {
        return 0;
      }
    }
  }
  else {
    iVar6 = *(int *)(uVar4 + 0xb) >> 1;
    iVar5 = iVar6 + -1;
    if (iVar5 != 0) {
      iVar7 = 0;
      do {
        iVar1 = iVar5 - iVar7;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar7 + (iVar1 >> 1);
        if (*(uint *)((uVar4 & 0xffffffff00000000 |
                      (ulong)*(uint *)(uVar4 + ((long)(iVar1 * 8 + 8) | 7U))) + 3) <
            *(uint *)(param_3 + 3)) {
          iVar7 = iVar1 + 1;
          iVar1 = iVar5;
        }
        iVar5 = iVar1;
      } while (iVar5 != iVar7);
      if (iVar6 <= iVar5) {
        return 0;
      }
    }
    uVar3 = (ulong)iVar5;
    iVar6 = iVar6 - iVar5;
    iVar5 = iVar5 * 8 + 0xf;
    while( true ) {
      if (*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (long)iVar5)) + 3) !=
          *(uint *)(param_3 + 3)) {
        return 0;
      }
      if (*(uint *)(uVar4 + (long)iVar5) == (uint)param_3) break;
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + -1;
      iVar5 = iVar5 + 8;
      if (iVar6 == 0) {
        return 0;
      }
    }
  }
  if ((int)uVar3 == -1) {
    return 0;
  }
  uVar2 = SearchDetailsAndGetTarget(param_1,uVar3,param_2);
  return uVar2;
}

