
undefined8 FUN_00c1507c(long param_1)

{
  void *__dest;
  void *__src;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  uint local_8;
  undefined4 uStack_4;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar1 = *(ulong *)(param_1 + 0x28);
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar3[2] = param_1;
  if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,1,0x227);
  }
  FUN_00c22594(plVar3,*plVar3 + 0x198,&local_8,uVar4,0x100);
  __dest = (void *)CONCAT44(uStack_4,local_8);
  uVar4 = *(ulong *)(param_1 + 0x28);
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  uVar1 = *(long *)(param_1 + 0x20) + 8;
  plVar3[2] = param_1;
  if (uVar1 < uVar4) {
    FUN_00c22594(plVar3,*plVar3 + 0x1b0,&local_8,uVar1,0x200);
    __src = (void *)CONCAT44(uStack_4,local_8);
    uVar1 = *(long *)(param_1 + 0x20) + 0x10;
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(ulong *)(param_1 + 0x28);
    if (((int)((long)uVar4 >> 0x2f) == -5) && (uVar2 <= uVar1)) {
      local_8 = *(int *)((uVar4 & 0x7fffffffffff) + 0x10) + 1;
    }
    else {
      plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
      plVar3[2] = param_1;
      if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb458(param_1,3,0x227);
      }
      FUN_00c22594(plVar3,*plVar3 + 0xd8,&local_8,uVar1,0x300);
    }
    memcpy(__dest,__src,(ulong)local_8);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb458(param_1,2,0x227);
}

