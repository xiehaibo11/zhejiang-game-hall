
undefined8
Java_com_kwai_sgcore_SGCore_getMagic
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *__dest;
  undefined8 uVar6;
  long lVar7;
  size_t sVar8;
  uint uVar9;
  int iStack_78;
  undefined4 uStack_74;
  void *pvStack_70;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  if ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0)) goto LAB_001043dc;
  while( true ) {
    pvVar5 = (void *)(**(code **)(*param_1 + 0x5c0))(param_1,param_4,0);
    iVar3 = (**(code **)(*param_1 + 0x558))(param_1,param_4);
    __dest = malloc((long)(iVar3 + 1));
    sVar8 = 0;
    if (iVar3 != -1) {
      sVar8 = (long)(iVar3 + 1) - (long)iVar3;
    }
    memset((undefined1 *)((long)__dest + (long)iVar3),0,sVar8);
    memcpy(__dest,pvVar5,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    (**(code **)(*param_1 + 0x600))(param_1,param_4,pvVar5,2);
    if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
LAB_001043dc:
    uVar6 = (**(code **)(*param_1 + 0x5c0))(param_1,param_4,0);
    (**(code **)(*param_1 + 0x558))(param_1,param_4);
    (**(code **)(*param_1 + 0x600))(param_1,param_4,uVar6,2);
  }
  if (param_5 < 1) {
    while( true ) {
      lVar7 = (**(code **)(*param_1 + 0xa8))(param_1,param_3);
      uVar9 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar9)) break;
      (**(code **)(*param_1 + 0xa8))(param_1,param_3);
    }
    if (lVar7 == 0) {
      uVar6 = 0;
      uVar9 = (DAT_00113194 + -1) * DAT_00113194;
    }
    else {
      if ((9 < DAT_00113190) && ((uVar9 & 1) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (DAT_00113060 == (char *)0x0) {
        while( true ) {
          DAT_00113060 = (char *)FUN_001026dc(param_1,param_3);
          uVar9 = (DAT_00113194 + -1) * DAT_00113194;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar9)) break;
          DAT_00113060 = (char *)FUN_001026dc(param_1,param_3);
        }
      }
      else {
        uVar9 = (DAT_00113194 + -1) * DAT_00113194;
      }
      if ((9 < DAT_00113190) && ((uVar9 & 1) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (DAT_00113068 == 0) {
        while( true ) {
          DAT_00113068 = FUN_00102a08(param_1,param_3);
          uVar9 = (DAT_00113194 + -1) * DAT_00113194;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar9)) break;
          DAT_00113068 = FUN_00102a08(param_1,param_3);
        }
      }
      if ((9 < DAT_00113190) && ((uVar9 & 1) != 0)) goto LAB_0010476c;
      while( true ) {
        pcVar2 = DAT_00113060;
        sVar8 = strlen(DAT_00113060);
        uVar6 = FUN_0010978c(0,pcVar2,sVar8);
        uVar4 = FUN_0010978c(uVar6,DAT_00113068,0x20);
        FUN_00101ae8(__dest,&pvStack_70,&iStack_78);
        pvVar5 = (void *)FUN_001022d8(pvStack_70,CONCAT44(uStack_74,iStack_78),uVar4);
        uVar6 = (**(code **)(*param_1 + 0x580))(param_1,iStack_78 + 8);
        (**(code **)(*param_1 + 0x680))(param_1,uVar6,0,iStack_78 + 8,pvVar5);
        (**(code **)(*param_1 + 0xb0))(param_1,lVar7);
        free(pvStack_70);
        free(pvVar5);
        uVar9 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar9)) break;
LAB_0010476c:
        pcVar2 = DAT_00113060;
        sVar8 = strlen(DAT_00113060);
        uVar6 = FUN_0010978c(0,pcVar2,sVar8);
        uVar4 = FUN_0010978c(uVar6,DAT_00113068,0x20);
        FUN_00101ae8(__dest,&pvStack_70,&iStack_78);
        pvVar5 = (void *)FUN_001022d8(pvStack_70,CONCAT44(uStack_74,iStack_78),uVar4);
        uVar6 = (**(code **)(*param_1 + 0x580))(param_1,iStack_78 + 8);
        (**(code **)(*param_1 + 0x680))(param_1,uVar6,0,iStack_78 + 8,pvVar5);
        (**(code **)(*param_1 + 0xb0))(param_1,lVar7);
        free(pvStack_70);
        free(pvVar5);
      }
    }
    if ((-1 < DAT_00113190) && ((int)uVar9 < 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    while( true ) {
      FUN_00101ae8(__dest,&pvStack_70,&iStack_78);
      uVar6 = (**(code **)(*param_1 + 0x580))(param_1,iStack_78);
      (**(code **)(*param_1 + 0x680))(param_1,uVar6,0,iStack_78,pvStack_70);
      free(pvStack_70);
      uVar9 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar9)) break;
      FUN_00101ae8(__dest,&pvStack_70,&iStack_78);
      uVar6 = (**(code **)(*param_1 + 0x580))(param_1,iStack_78);
      (**(code **)(*param_1 + 0x680))(param_1,uVar6,0,iStack_78,pvStack_70);
      free(pvStack_70);
    }
  }
  if ((9 < DAT_00113190) && ((uVar9 & 1) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(long *)(lVar1 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

