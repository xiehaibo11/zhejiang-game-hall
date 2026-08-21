
void * FUN_001026dc(long *param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  size_t __n;
  void *__dest;
  uint uVar6;
  char *pcStack_90;
  char acStack_88 [4];
  undefined1 auStack_84 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  if ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0)) goto LAB_00102828;
  while( true ) {
    auStack_84[0] = 0;
    uStack_60 = 0xcda9bbc08f;
    uStack_78 = 0x596d5d2665262395;
    uStack_80 = 0x62af10765d680023;
    uStack_68 = 0x875bb372b9;
    uStack_63 = 0xae6c8d;
    uStack_70 = 0xaea77f2aacf7f8b2;
    pcVar2 = (char *)thunk_FUN_00109db4(&uStack_80);
    acStack_88[0] = '@';
    acStack_88[1] = '\0';
    pcStack_90 = (char *)0x0;
    pcVar3 = strtok_r(pcVar2,acStack_88,&pcStack_90);
    pcVar4 = strtok_r((char *)0x0,acStack_88,&pcStack_90);
    uVar5 = FUN_001010fc(param_1,auStack_84,param_2,pcVar3,pcVar4);
    pcVar3 = (char *)(**(code **)(*param_1 + 0x548))(param_1,uVar5,0);
    uVar6 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar6)) break;
LAB_00102828:
    auStack_84[0] = 0;
    uStack_60 = 0xcda9bbc08f;
    uStack_78 = 0x596d5d2665262395;
    uStack_80 = 0x62af10765d680023;
    uStack_68 = 0x875bb372b9;
    uStack_63 = 0xae6c8d;
    uStack_70 = 0xaea77f2aacf7f8b2;
    pcVar2 = (char *)thunk_FUN_00109db4(&uStack_80);
    acStack_88[0] = '@';
    acStack_88[1] = '\0';
    pcStack_90 = (char *)0x0;
    pcVar2 = strtok_r(pcVar2,acStack_88,&pcStack_90);
    pcVar3 = strtok_r((char *)0x0,acStack_88,&pcStack_90);
    uVar5 = FUN_001010fc(param_1,auStack_84,param_2,pcVar2,pcVar3);
    (**(code **)(*param_1 + 0x548))(param_1,uVar5,0);
  }
  if (pcVar3 == (char *)0x0) {
    __dest = (void *)0x0;
  }
  else {
    if ((9 < DAT_00113190) && ((uVar6 & 1) != 0)) goto LAB_0010294c;
    while( true ) {
      __n = strlen(pcVar3);
      __dest = malloc(__n + 1);
      memset((void *)((long)__dest + __n),0,(ulong)(__n != 0xffffffffffffffff));
      memcpy(__dest,pcVar3,__n);
      (**(code **)(*param_1 + 0x550))(param_1,uVar5,pcVar3);
      uVar6 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar6)) break;
LAB_0010294c:
      (**(code **)(*param_1 + 0x550))(param_1,uVar5,pcVar3);
    }
  }
  do {
  } while (9 < DAT_00113190 && (uVar6 & 1) != 0);
  if (pcVar2 != (char *)0x0) {
    while( true ) {
      free(pcVar2);
      uVar6 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar6 & 1) == 0)) break;
      free(pcVar2);
    }
  }
  do {
  } while (9 < DAT_00113190 && (uVar6 & 1) != 0);
  if (*(long *)(lVar1 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __dest;
}

