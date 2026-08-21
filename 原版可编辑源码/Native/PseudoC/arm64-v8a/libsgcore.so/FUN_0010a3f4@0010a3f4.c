
void FUN_0010a3f4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  char acStack_260 [520];
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_0010a508;
  while( true ) {
    acStack_260[0] = '\0';
    acStack_260[1] = '\0';
    acStack_260[2] = '\0';
    acStack_260[3] = '\0';
    acStack_260[4] = '\0';
    acStack_260[5] = '\0';
    acStack_260[6] = '\0';
    acStack_260[7] = '\0';
    sprintf(acStack_260,"%d",param_2 & 0xffffffff);
    memset(acStack_260 + 8,0,0x200);
    pvVar2 = (void *)thunk_FUN_00109db4(param_3);
    __system_property_get(pvVar2,acStack_260 + 8);
    free(pvVar2);
    if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
LAB_0010a508:
    acStack_260[0] = '\0';
    acStack_260[1] = '\0';
    acStack_260[2] = '\0';
    acStack_260[3] = '\0';
    acStack_260[4] = '\0';
    acStack_260[5] = '\0';
    acStack_260[6] = '\0';
    acStack_260[7] = '\0';
    sprintf(acStack_260,"%d",param_2 & 0xffffffff);
    memset(acStack_260 + 8,0,0x200);
    pvVar2 = (void *)thunk_FUN_00109db4(param_3);
    __system_property_get(pvVar2,acStack_260 + 8);
    free(pvVar2);
  }
  if (acStack_260[8] == '\0') {
    while( true ) {
      uVar3 = FUN_0010e924(DAT_00113158);
      FUN_0010e468(param_1,acStack_260,uVar3);
      uVar4 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar4)) break;
      uVar3 = FUN_0010e924(DAT_00113158);
      FUN_0010e468(param_1,acStack_260,uVar3);
    }
  }
  else {
    while( true ) {
      uVar3 = FUN_0010e924(acStack_260 + 8);
      FUN_0010e468(param_1,acStack_260,uVar3);
      uVar4 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar4 & 1) == 0)) break;
      uVar3 = FUN_0010e924(acStack_260 + 8);
      FUN_0010e468(param_1,acStack_260,uVar3);
    }
  }
  if ((9 < DAT_00113190) && ((uVar4 & 1) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(long *)(lVar1 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

