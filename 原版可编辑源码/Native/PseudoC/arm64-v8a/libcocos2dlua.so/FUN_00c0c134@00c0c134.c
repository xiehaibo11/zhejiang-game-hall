
int FUN_00c0c134(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  FUN_00c0ad38(param_1,param_2,0);
  iVar2 = *(int *)((long)param_1 + 0x34);
  iVar4 = 1;
  do {
    if (iVar2 != 0x2c) {
      return iVar4;
    }
    FUN_00c079c0(param_1);
    lVar3 = *param_1;
    FUN_00c08060(lVar3,param_2);
    if (param_2[2] == 0xc) {
      FUN_00c07f1c(lVar3,*param_2);
    }
    uVar1 = *(int *)(lVar3 + 0x34) + 1;
    if (*(byte *)(lVar3 + 0x5a) < uVar1) {
      if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
        entry(lVar3);
      }
      *(char *)(lVar3 + 0x5a) = (char)uVar1;
    }
    *(uint *)(lVar3 + 0x34) = uVar1;
    iVar4 = iVar4 + 1;
    FUN_00c08ac0(lVar3,param_2);
    FUN_00c0ad38(param_1,param_2,0);
    iVar2 = *(int *)((long)param_1 + 0x34);
  } while( true );
}

