
undefined8 FUN_00c14f04(long param_1)

{
  void *__s;
  int __c;
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  uint local_8;
  undefined4 uStack_4;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar1 = *(ulong *)(param_1 + 0x28);
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar2[2] = param_1;
  if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,1,0x227);
  }
  FUN_00c22594(plVar2,*plVar2 + 0x198,&local_8,uVar3,0x100);
  __s = (void *)CONCAT44(uStack_4,local_8);
  uVar3 = *(ulong *)(param_1 + 0x28);
  plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  uVar1 = *(long *)(param_1 + 0x20) + 8;
  plVar2[2] = param_1;
  if (uVar1 < uVar3) {
    FUN_00c22594(plVar2,*plVar2 + 0xd8,&local_8,uVar1,0x200);
    __c = 0;
    if ((*(long *)(param_1 + 0x20) + 0x10U < *(ulong *)(param_1 + 0x28)) &&
       (*(long *)(*(long *)(param_1 + 0x20) + 0x10) != -1)) {
      __c = FUN_00c1363c(param_1,3);
    }
    memset(__s,__c,(ulong)local_8);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb458(param_1,2,0x227);
}

