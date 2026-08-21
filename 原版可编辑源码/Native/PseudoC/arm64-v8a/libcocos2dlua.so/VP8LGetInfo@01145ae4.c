
undefined8 VP8LGetInfo(char *param_1,ulong param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_68 [36];
  int local_44;
  
  if ((((param_1 != (char *)0x0) && (4 < param_2)) && (*param_1 == '/')) &&
     ((byte)param_1[4] < 0x20)) {
    FUN_0115f1e0(auStack_68,param_1,param_2);
    iVar1 = FUN_0115f344(auStack_68,8);
    if (iVar1 == 0x2f) {
      iVar1 = FUN_0115f344(auStack_68,0xe);
      iVar2 = FUN_0115f344(auStack_68,0xe);
      uVar3 = FUN_0115f344(auStack_68,1);
      iVar4 = FUN_0115f344(auStack_68,3);
      if ((iVar4 == 0) && (local_44 == 0)) {
        if (param_3 != (int *)0x0) {
          *param_3 = iVar1 + 1;
        }
        if (param_4 != (int *)0x0) {
          *param_4 = iVar2 + 1;
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = uVar3;
        }
        return 1;
      }
    }
  }
  return 0;
}

