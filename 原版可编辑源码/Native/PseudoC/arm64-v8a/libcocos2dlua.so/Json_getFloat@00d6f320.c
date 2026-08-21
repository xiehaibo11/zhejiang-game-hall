
undefined1  [16] Json_getFloat(undefined1 param_1 [16],long param_2,char *param_3)

{
  int iVar1;
  char *__s1;
  long *plVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = param_1._8_8_;
  uVar4 = param_1._0_8_;
  plVar2 = *(long **)(param_2 + 8);
  do {
    if (plVar2 == (long *)0x0) {
LAB_00d6f380:
      auVar3._8_8_ = uVar5;
      auVar3._0_8_ = uVar4;
      return auVar3;
    }
    __s1 = (char *)plVar2[5];
    if ((param_3 == (char *)0x0) || (__s1 == (char *)0x0)) {
      if ((param_3 <= __s1) && (__s1 == param_3)) goto LAB_00d6f37c;
    }
    else {
      iVar1 = strcasecmp(__s1,param_3);
      if (iVar1 == 0) {
LAB_00d6f37c:
        uVar4 = (ulong)*(uint *)((long)plVar2 + 0x24);
        uVar5 = 0;
        goto LAB_00d6f380;
      }
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}

