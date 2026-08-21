
void FUN_00109520(long param_1,undefined8 param_2)

{
  long lVar1;
  char *__needle;
  char *pcVar2;
  size_t __n;
  undefined8 uVar3;
  undefined8 extraout_x1;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_58;
  undefined2 uStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_00109608;
  while( true ) {
    uStack_50 = 0x2d90;
    uStack_58 = 0x6daf29705d7c0008;
    auVar7 = thunk_FUN_00109db4(&uStack_58,param_2);
    iVar5 = DAT_00113190;
    param_2 = auVar7._8_8_;
    __needle = auVar7._0_8_;
    uVar6 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar6)) break;
LAB_00109608:
    uStack_50 = 0x2d90;
    uStack_58 = 0x6daf29705d7c0008;
    thunk_FUN_00109db4(&uStack_58,param_2);
    param_2 = extraout_x1;
  }
  pcVar2 = strstr((char *)(param_1 + 0x60),__needle);
  if (pcVar2 != (char *)0x0) {
    if ((9 < iVar5) && ((uVar6 & 1) != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    pcVar2 = (char *)(param_1 + 4);
    if (*pcVar2 != '\0') {
      __n = strlen(pcVar2);
      memcpy(&DAT_00113078,pcVar2,__n);
      if (__needle != (char *)0x0) {
        while( true ) {
          free(__needle);
          uVar6 = (DAT_00113194 + -1) * DAT_00113194;
          iVar5 = DAT_00113190;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar6)) break;
          free(__needle);
        }
      }
      do {
      } while (-1 < iVar5 && (int)uVar6 < 0);
      uVar3 = 0xffffffff;
      goto LAB_00109740;
    }
  }
  if (__needle == (char *)0x0) {
    uVar4 = uVar6 & 1;
  }
  else {
    if ((9 < iVar5) && ((uVar6 & 1) != 0)) goto LAB_0010971c;
    while( true ) {
      free(__needle);
      uVar6 = (DAT_00113194 + -1) * DAT_00113194;
      uVar4 = uVar6 & 1;
      iVar5 = DAT_00113190;
      if ((DAT_00113190 < 10) || (uVar4 == 0)) break;
LAB_0010971c:
      free(__needle);
    }
  }
  uVar3 = 0;
  if ((9 < iVar5) && (uVar4 != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_00109740:
  do {
  } while (-1 < iVar5 && (int)uVar6 < 0);
  if (*(long *)(lVar1 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

