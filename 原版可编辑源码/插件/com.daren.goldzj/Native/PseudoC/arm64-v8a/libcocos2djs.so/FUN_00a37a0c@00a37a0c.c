
int FUN_00a37a0c(undefined8 *param_1,undefined4 param_2,long param_3,long param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_48;
  
  lVar3 = 0;
  *param_5 = 0;
  while( true ) {
    do {
      lVar2 = FUN_00a0f850(*param_1,0,1);
      if (lVar2 < 0) {
        return 0x1c;
      }
      iVar1 = FUN_00a159e8(param_2,0xffffffff,0xffffffff,lVar2);
      if (iVar1 < 1) {
        return -1;
      }
      iVar1 = FUN_00a239a0(param_2,param_3,param_4,&local_48);
    } while (iVar1 == 0x51);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_4 - local_48 == 0) break;
    if (local_48 == 0) {
      return -1;
    }
    param_3 = param_3 + local_48;
    lVar3 = local_48 + lVar3;
    param_4 = param_4 - local_48;
  }
  *param_5 = param_4 + lVar3;
  return 0;
}

