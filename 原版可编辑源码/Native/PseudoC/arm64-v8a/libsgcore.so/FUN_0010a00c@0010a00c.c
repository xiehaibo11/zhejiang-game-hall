
undefined8 FUN_0010a00c(long *param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *__s;
  char *__s_00;
  size_t sVar4;
  undefined8 uVar5;
  uint uVar6;
  code *pcVar7;
  char *pcStack_e0;
  char acStack_d4 [4];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined3 uStack_c4;
  undefined1 auStack_c0 [88];
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  if ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0)) goto LAB_0010a1a8;
  while( true ) {
    uStack_c4 = 0x801f47;
    uStack_c8 = 0x6f440005;
    DAT_00113150 = param_1;
    DAT_00113158 = thunk_FUN_00109db4(&uStack_c8);
    uStack_d0 = 0x52801f476f440006;
    DAT_00113160 = thunk_FUN_00109db4(&uStack_d0);
    memcpy(auStack_c0,&DAT_0011007b,0x56);
    pcVar2 = (char *)thunk_FUN_00109db4(auStack_c0);
    acStack_d4[0] = '@';
    acStack_d4[1] = '\0';
    pcStack_e0 = (char *)0x0;
    pcVar3 = strtok_r(pcVar2,acStack_d4,&pcStack_e0);
    __s = strtok_r((char *)0x0,acStack_d4,&pcStack_e0);
    __s_00 = strtok_r((char *)0x0,acStack_d4,&pcStack_e0);
    sVar4 = strlen(__s);
    DAT_00113168 = calloc(sVar4 + 1,1);
    strcpy(DAT_00113168,__s);
    uVar6 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 10) || ((uVar6 & 1) == 0)) break;
LAB_0010a1a8:
    uStack_c4 = 0x801f47;
    uStack_c8 = 0x6f440005;
    DAT_00113150 = param_1;
    DAT_00113158 = thunk_FUN_00109db4(&uStack_c8);
    uStack_d0 = 0x52801f476f440006;
    DAT_00113160 = thunk_FUN_00109db4(&uStack_d0);
    memcpy(auStack_c0,&DAT_0011007b,0x56);
    pcVar2 = (char *)thunk_FUN_00109db4(auStack_c0);
    acStack_d4[0] = '@';
    acStack_d4[1] = '\0';
    pcStack_e0 = (char *)0x0;
    strtok_r(pcVar2,acStack_d4,&pcStack_e0);
    pcVar2 = strtok_r((char *)0x0,acStack_d4,&pcStack_e0);
    strtok_r((char *)0x0,acStack_d4,&pcStack_e0);
    sVar4 = strlen(pcVar2);
    DAT_00113168 = calloc(sVar4 + 1,1);
    strcpy(DAT_00113168,pcVar2);
  }
  if (DAT_00113170 == 0) {
    while( true ) {
      pcVar7 = *(code **)(*param_1 + 0xa8);
      uVar5 = FUN_0010145c(param_1,pcVar3);
      DAT_00113170 = (*pcVar7)(param_1,uVar5);
      uVar6 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar6 & 1) == 0)) break;
      pcVar7 = *(code **)(*param_1 + 0xa8);
      uVar5 = FUN_0010145c(param_1,pcVar3);
      DAT_00113170 = (*pcVar7)(param_1,uVar5);
    }
  }
  if ((-1 < DAT_00113190) && ((int)uVar6 < 0)) goto LAB_0010a36c;
  while( true ) {
    sVar4 = strlen(__s_00);
    DAT_00113178 = calloc(sVar4 + 1,1);
    strcpy(DAT_00113178,__s_00);
    free(pcVar2);
    DAT_00113180 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    if ((DAT_00113190 < 10) || (((DAT_00113194 + -1) * DAT_00113194 & 1U) == 0)) break;
LAB_0010a36c:
    sVar4 = strlen(__s_00);
    DAT_00113178 = calloc(sVar4 + 1,1);
    strcpy(DAT_00113178,__s_00);
    free(pcVar2);
    DAT_00113180 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

