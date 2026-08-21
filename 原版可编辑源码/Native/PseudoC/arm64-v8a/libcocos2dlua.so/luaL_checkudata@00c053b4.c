
long luaL_checkudata(long param_1,undefined4 param_2,char *param_3)

{
  ulong *puVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = (ulong *)FUN_00c03214();
  if ((int)((long)*puVar1 >> 0x2f) == -0xd) {
    uVar4 = *puVar1 & 0x7fffffffffff;
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x10) + 0xd0);
    sVar2 = strlen(param_3);
    uVar3 = FUN_00bfba1c(param_1,param_3,sVar2);
    puVar1 = (ulong *)FUN_00c1bc28(uVar5 & 0x7fffffffffff,uVar3);
    if (((puVar1 != (ulong *)0x0) && ((int)((long)*puVar1 >> 0x2f) == -0xc)) &&
       ((*puVar1 & 0x7fffffffffff) == *(ulong *)(uVar4 + 0x20))) {
      return uVar4 + 0x30;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb470(param_1,param_2,param_3);
}

