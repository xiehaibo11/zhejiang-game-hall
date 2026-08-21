
undefined8 GetAbortMessageBeforeQ(long *param_1,char *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  
  log2Console(3,"eup","get abort message before Q");
  if (param_1 == (long *)0x0) {
    pcVar4 = "the maps is NULL";
  }
  else {
    do {
      iVar2 = strcmp((char *)((long)param_1 + 0x43),"/system/lib64/libc.so");
      if ((iVar2 == 0) && (param_1[3] == 0)) {
        lVar6 = param_1[1];
        goto LAB_0010d5b4;
      }
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
    lVar6 = 0;
LAB_0010d5b4:
    plVar3 = (long *)searchSymbol((long)param_1 + 0x43,"__abort_message_ptr");
    if (plVar3 != (long *)0x0) {
      uVar5 = *(ulong *)**(long **)(*plVar3 + lVar6);
      uVar1 = (long)param_3;
      if (uVar5 <= (ulong)(long)param_3) {
        uVar1 = uVar5;
      }
      if (0 < (int)uVar1) {
        strncpy(param_2,(char *)((ulong *)**(long **)(*plVar3 + lVar6) + 1),(long)(int)uVar1);
        param_2[(long)((uVar1 << 0x20) + 0x100000000) >> 0x20] = '\0';
        log2Console(3,"eup","the abort msg is %s",param_2);
      }
      return 1;
    }
    pcVar4 = "find __abort_message_ptr failed";
  }
  log2Console(4,"eup",pcVar4);
  return 0;
}

