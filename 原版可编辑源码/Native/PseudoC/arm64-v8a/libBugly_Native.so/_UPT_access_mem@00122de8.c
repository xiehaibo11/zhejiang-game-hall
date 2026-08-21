
undefined8
_UPT_access_mem(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_5 == (uint *)0x0) {
LAB_00122e80:
    uVar4 = 0xfffffff8;
  }
  else {
    uVar1 = *param_5;
    piVar2 = (int *)__errno();
    *piVar2 = 0;
    if (param_4 == 0) {
      lVar3 = ptrace(PTRACE_PEEKDATA,(ulong)uVar1,param_2,0);
      *param_3 = lVar3;
      if (*piVar2 != 0) goto LAB_00122e80;
      log2Console(3,"Bugly-libunwind","mem[%lx] -> %lx\n",param_2,lVar3);
    }
    else {
      log2Console(3,"Bugly-libunwind","mem[%lx] <- %lx\n",param_2,*param_3);
      ptrace(PTRACE_POKEDATA,(ulong)uVar1,param_2,*param_3);
      if (*piVar2 != 0) goto LAB_00122e80;
    }
    uVar4 = 0;
  }
  return uVar4;
}

