
int FUN_00161df4(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_240 [528];
  
  if ((char)param_1[0x4d] == '\0') {
    if (*(char *)((long)param_1 + 0x26a) == '\0') {
      lVar1 = param_1[1];
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
      iVar2 = FUN_001624c4(lVar1,uVar3,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269);
    }
    else {
      memset(auStack_240,0,0x210);
      iVar2 = FUN_00162288(param_1,auStack_240);
    }
    if (iVar2 != 1) {
      return iVar2;
    }
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if ((char)param_1[0x4d] == '\0') {
      return 1;
    }
  }
  return 0;
}

