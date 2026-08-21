
undefined4 FUN_00c1363c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 local_4;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  uVar1 = *(long *)(param_1 + 0x20) + (long)(int)param_2 * 8 + -8;
  plVar2[2] = param_1;
  if (uVar1 < uVar3) {
    FUN_00c22594(plVar2,*plVar2 + 0xd8,&local_4,uVar1,(int)param_2 << 8);
    return local_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb458(param_1,param_2,0x227);
}

