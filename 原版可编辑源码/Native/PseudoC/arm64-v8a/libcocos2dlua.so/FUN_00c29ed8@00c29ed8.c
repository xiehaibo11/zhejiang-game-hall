
int FUN_00c29ed8(undefined8 param_1,undefined4 param_2,int param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 < 0) {
    lVar3 = FUN_00c29ac0();
  }
  else {
    lVar3 = FUN_00c29b44();
  }
  if (lVar3 != 0) {
    uVar4 = (uint)*param_4;
    uVar1 = *(uint *)(lVar3 + 0x10);
    if (*param_4 != 0) {
      iVar5 = 0;
      do {
        if ((uVar4 == uVar1) &&
           (iVar2 = memcmp((void *)(lVar3 + 0x18),param_4 + 1,(ulong)(byte)uVar4), iVar2 == 0)) {
          return iVar5;
        }
        param_4 = param_4 + (int)(uVar4 + 1);
        uVar4 = (uint)*param_4;
        iVar5 = iVar5 + 1;
      } while (uVar4 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3b8(param_1,param_2,0x49b,(void *)(lVar3 + 0x18));
  }
  return param_3;
}

