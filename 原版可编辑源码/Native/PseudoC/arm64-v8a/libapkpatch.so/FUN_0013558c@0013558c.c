
undefined8 FUN_0013558c(long *param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  __off64_t _Var4;
  uint uVar5;
  ulong uVar6;
  FILE *__stream;
  long lVar7;
  
  uVar1 = param_4 - param_3;
  if (uVar1 == 0) {
    return 1;
  }
  lVar7 = *param_1;
  if ((uVar1 <= *(ulong *)(lVar7 + 8)) && (param_2 <= *(ulong *)(lVar7 + 8) - uVar1)) {
    if (*(int *)(lVar7 + 0x40) == 0) {
      uVar6 = *(ulong *)(lVar7 + 0x28);
    }
    else {
      uVar6 = 0xffffffffffffffff;
      *(undefined4 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0xffffffffffffffff;
    }
    if (uVar6 == param_2) {
LAB_001355ec:
      uVar3 = FUN_00134fa0(*(undefined8 *)(lVar7 + 0x20),param_3,param_3 + uVar1);
      if ((int)uVar3 != 0) {
        uVar1 = uVar1 + param_2;
        *(ulong *)(lVar7 + 0x28) = uVar1;
        if (uVar1 <= *(ulong *)(lVar7 + 0x48)) {
          uVar1 = *(ulong *)(lVar7 + 0x48);
        }
        *(ulong *)(lVar7 + 0x48) = uVar1;
        return 1;
      }
      goto LAB_00135638;
    }
    if ((*(int *)(lVar7 + 0x3c) != 0) && (iVar2 = fflush(*(FILE **)(lVar7 + 0x20)), iVar2 == 0)) {
      __stream = *(FILE **)(lVar7 + 0x20);
      if (param_2 == (long)(int)param_2) {
        iVar2 = fseek(__stream,param_2,0);
        uVar5 = (uint)(iVar2 == 0);
      }
      else {
        iVar2 = feof(__stream);
        if (iVar2 != 0) {
          rewind(__stream);
        }
        setbuf(__stream,(char *)0x0);
        iVar2 = fileno(__stream);
        if (iVar2 < 0) goto LAB_00135634;
        _Var4 = lseek64(iVar2,param_2,0);
        uVar5 = (uint)((ulong)_Var4 >> 0x3f) ^ 1;
      }
      if (uVar5 != 0) {
        *(ulong *)(lVar7 + 0x28) = param_2;
        goto LAB_001355ec;
      }
    }
  }
LAB_00135634:
  uVar3 = 0;
LAB_00135638:
  *(undefined4 *)(lVar7 + 0x38) = 1;
  *(undefined8 *)(lVar7 + 0x28) = 0xffffffffffffffff;
  return uVar3;
}

