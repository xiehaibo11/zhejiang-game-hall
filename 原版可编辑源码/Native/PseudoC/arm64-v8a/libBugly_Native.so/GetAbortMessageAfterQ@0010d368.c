
undefined8 GetAbortMessageAfterQ(long *param_1,char *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  long *plVar4;
  
  log2Console(6,"eup","get abort message after Q");
  if (param_1 == (long *)0x0) {
    pcVar3 = "maps is null";
  }
  else {
    do {
      while (iVar2 = strcmp((char *)((long)param_1 + 0x43),"[anon:abort message]"), iVar2 != 0) {
        param_1 = (long *)*param_1;
        if (param_1 == (long *)0x0) goto LAB_0010d46c;
      }
      log2Console(3,"eup","found vma area [anon:abort message], begin check");
      plVar4 = (long *)param_1[1];
      pcVar3 = "magic 1 compare wrong";
      if ((*plVar4 == -0x4e71bf77953c7710) &&
         (pcVar3 = "magic 2 compare wrong", plVar4[1] == -0x3920458aa5e21f4b)) {
        log2Console(3,"eup","found [anon:abort message]");
        uVar1 = (long)param_3;
        if ((ulong)plVar4[2] <= (ulong)(long)param_3) {
          uVar1 = plVar4[2];
        }
        if (0 < (int)uVar1) {
          strncpy(param_2,(char *)(plVar4 + 3),(long)(int)uVar1);
          param_2[(long)((uVar1 << 0x20) + 0x100000000) >> 0x20] = '\0';
          log2Console(3,"eup","the abort msg is %s",param_2);
        }
        return 1;
      }
      log2Console(4,"eup",pcVar3);
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
LAB_0010d46c:
    pcVar3 = "oops, didn\'t found [anon:abort message]";
  }
  log2Console(4,"eup",pcVar3);
  return 0;
}

