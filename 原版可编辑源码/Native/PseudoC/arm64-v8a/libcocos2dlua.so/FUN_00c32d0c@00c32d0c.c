
undefined8 FUN_00c32d0c(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 == *(long **)(param_1 + 0x28)) || (*plVar4 == -1)) {
    iVar1 = luaJIT_setmode(param_1,0,param_2);
  }
  else {
    iVar1 = (int)(*plVar4 >> 0x2f);
    if (iVar1 + 9U < 2) {
      uVar3 = 1;
    }
    else {
      if (iVar1 != -3) goto LAB_00c32d98;
      uVar3 = 0;
    }
    if ((plVar4 + 1 < *(long **)(param_1 + 0x28)) &&
       (iVar1 = (int)(plVar4[1] >> 0x2f), iVar1 + 3U < 2)) {
      uVar2 = 3;
      if (iVar1 == -2) {
        uVar2 = 4;
      }
      param_2 = param_2 | uVar2;
    }
    else {
      param_2 = param_2 | 2;
    }
    iVar1 = luaJIT_setmode(param_1,uVar3,param_2);
  }
  if (iVar1 == 1) {
    return 0;
  }
  if ((param_2 & 0xff) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1,0x7bf);
  }
LAB_00c32d98:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,1,6);
}

