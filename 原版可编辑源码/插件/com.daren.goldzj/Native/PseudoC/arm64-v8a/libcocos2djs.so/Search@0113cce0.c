
/* v8::internal::TransitionArray::Search(v8::internal::PropertyKind, v8::internal::Name,
   v8::internal::PropertyAttributes, int*) */

undefined8 __thiscall
v8::internal::TransitionArray::Search
          (TransitionArray *this,undefined4 param_2,long param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  
  uVar4 = *(ulong *)this;
  if (3 < *(int *)(uVar4 + 3)) {
    iVar5 = *(int *)(uVar4 + 0xb);
    uVar1 = iVar5 >> 1;
    if (uVar1 != 0) {
      if (iVar5 < 0x12) {
        if (param_5 != (uint *)0x0) {
          uVar1 = *(int *)(uVar4 + 0xb) >> 1;
          if (1 < *(int *)(uVar4 + 0xb)) {
            uVar3 = 0;
            iVar5 = 0xf;
            do {
              if (*(uint *)(param_3 + 3) <
                  *(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (long)iVar5)) + 3
                           )) {
                *param_5 = (uint)uVar3;
                return 0xffffffff;
              }
              if (*(uint *)(uVar4 + (long)iVar5) == (uint)param_3) goto LAB_0113cdb0;
              uVar3 = uVar3 + 1;
              iVar5 = iVar5 + 8;
            } while (uVar1 != uVar3);
          }
          *param_5 = uVar1;
          return 0xffffffff;
        }
        if (iVar5 < 2) {
          return 0xffffffff;
        }
        uVar3 = 0;
        iVar5 = 0xf;
        while (*(uint *)(uVar4 + (long)iVar5) != (uint)param_3) {
          uVar3 = uVar3 + 1;
          iVar5 = iVar5 + 8;
          if (uVar1 == uVar3) {
            return 0xffffffff;
          }
        }
      }
      else {
        uVar1 = BinarySearch<(v8::internal::SearchMode)0,v8::internal::TransitionArray>
                          (this,param_3,uVar1,param_5);
        uVar3 = (ulong)uVar1;
      }
LAB_0113cdb0:
      if ((int)uVar3 == -1) {
        return 0xffffffff;
      }
      uVar2 = SearchDetails(this,uVar3,param_2,param_4,param_5);
      return uVar2;
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  return 0xffffffff;
}

