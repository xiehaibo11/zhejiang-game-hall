
undefined4
_UPT_access_mem(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  if (param_5 != (uint *)0x0) {
    uVar1 = *param_5;
    piVar3 = (int *)__errno();
    *piVar3 = 0;
    if (param_4 == 0) {
      lVar4 = ptrace(PTRACE_PEEKDATA,(ulong)uVar1,param_2,0);
      iVar2 = *piVar3;
      *param_3 = lVar4;
      if (iVar2 == 0) {
        log2Console(3,"Bugly-libunwind","mem[%lx] -> %lx\n",param_2,lVar4);
        return 0;
      }
    }
    else {
      log2Console(3,"Bugly-libunwind","mem[%lx] <- %lx\n",param_2,*param_3);
      ptrace(PTRACE_POKEDATA,(ulong)uVar1,param_2,*param_3);
      if (*piVar3 == 0) {
        return 0;
      }
    }
  }
  return 0xfffffff8;
}

