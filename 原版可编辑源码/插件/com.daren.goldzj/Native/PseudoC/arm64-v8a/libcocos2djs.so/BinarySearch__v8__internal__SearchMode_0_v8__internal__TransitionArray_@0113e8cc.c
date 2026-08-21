
/* int v8::internal::BinarySearch<(v8::internal::SearchMode)0,
   v8::internal::TransitionArray>(v8::internal::TransitionArray*, v8::internal::Name, int, int*) */

int v8::internal::BinarySearch<(v8::internal::SearchMode)0,v8::internal::TransitionArray>
              (ulong *param_1,long param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *param_1;
  if (*(int *)(uVar3 + 3) < 4) {
    uVar4 = *(uint *)(param_2 + 3);
    iVar5 = 0;
    iVar6 = -1;
  }
  else {
    uVar4 = *(uint *)(param_2 + 3);
    iVar5 = *(int *)(uVar3 + 0xb) >> 1;
    iVar6 = iVar5 + -1;
    if (iVar6 == 0) goto LAB_0113e948;
  }
  iVar7 = 0;
  do {
    iVar2 = iVar6 - iVar7;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar7 + (iVar2 >> 1);
    if (*(uint *)((uVar3 & 0xffffffff00000000 |
                  (ulong)*(uint *)(uVar3 + ((long)(iVar2 * 8 + 8) | 7U))) + 3) < uVar4) {
      iVar7 = iVar2 + 1;
      iVar2 = iVar6;
    }
    iVar6 = iVar2;
  } while (iVar6 != iVar7);
LAB_0113e948:
  if (iVar6 < iVar5) {
    iVar7 = -iVar6;
    iVar6 = iVar6 * 8 + 0xf;
    do {
      uVar1 = *(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + (long)iVar6)) + 3);
      if (uVar1 != uVar4) {
        if (param_4 == (int *)0x0) {
          return -1;
        }
        *param_4 = (uint)(uVar1 <= uVar4) - iVar7;
        return -1;
      }
      if (*(uint *)(uVar3 + (long)iVar6) == (uint)param_2) {
        return -iVar7;
      }
      iVar7 = iVar7 + -1;
      iVar6 = iVar6 + 8;
    } while (-iVar5 != iVar7);
  }
  if (param_4 == (int *)0x0) {
    return -1;
  }
  *param_4 = iVar5;
  return -1;
}

