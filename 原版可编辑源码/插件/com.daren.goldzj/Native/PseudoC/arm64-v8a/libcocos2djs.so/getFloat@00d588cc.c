
/* spine::Json::getFloat(spine::Json*, char const*, float) */

undefined1  [16] spine::Json::getFloat(Json *param_1,char *param_2,float param_3)

{
  int iVar1;
  char *__s1;
  long *plVar2;
  undefined4 in_register_00005004;
  ulong uVar3;
  undefined8 in_register_00005008;
  undefined1 auVar4 [16];
  
  uVar3 = CONCAT44(in_register_00005004,param_3);
  plVar2 = *(long **)(param_1 + 8);
  do {
    if (plVar2 == (long *)0x0) {
LAB_00d58928:
      auVar4._8_8_ = in_register_00005008;
      auVar4._0_8_ = uVar3;
      return auVar4;
    }
    __s1 = (char *)plVar2[5];
    if ((param_2 == (char *)0x0) || (__s1 == (char *)0x0)) {
      if ((param_2 <= __s1) && (__s1 == param_2)) goto LAB_00d58924;
    }
    else {
      iVar1 = strcasecmp(__s1,param_2);
      if (iVar1 == 0) {
LAB_00d58924:
        uVar3 = (ulong)*(uint *)((long)plVar2 + 0x24);
        in_register_00005008 = 0;
        goto LAB_00d58928;
      }
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}

