
void Java_com_kwai_sgcore_SGCore_getClock
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 uVar9;
  void *__ptr;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 auStack_e0 [88];
  byte abStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar5 = tpidr_el0;
  lStack_68 = *(long *)(lVar5 + 0x28);
  uVar10 = (DAT_00113194 + -1) * DAT_00113194;
  do {
  } while (9 < DAT_00113190 && (uVar10 & 1) != 0);
  if (param_4 == 0) {
    if (DAT_00113190 >= 0 && -1 >= (int)uVar10) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar7 = 0;
  }
  else {
    if (DAT_00113190 < 0 || -1 < (int)uVar10) goto LAB_00103b24;
    do {
      (**(code **)(*param_1 + 0x5c0))(param_1,param_4,0);
      (**(code **)(*param_1 + 0x558))(param_1,param_4);
LAB_00103b24:
      uVar7 = (**(code **)(*param_1 + 0x5c0))(param_1,param_4,0);
      uVar6 = (**(code **)(*param_1 + 0x558))(param_1,param_4);
      uVar10 = (DAT_00113194 + -1) * DAT_00113194;
    } while ((9 < DAT_00113190) && ((uVar10 & 1) != 0));
    if (DAT_00113058 == (char *)0x0) {
      if ((-1 < DAT_00113190) && ((int)uVar10 < 0)) goto LAB_00103bfc;
      while( true ) {
        DAT_00113058 = (char *)FUN_00101ee4(&DAT_0010f79b,0x10);
        uVar10 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar10 & 1) == 0)) break;
LAB_00103bfc:
        DAT_00113058 = (char *)FUN_00101ee4(&DAT_0010f79b,0x10);
      }
    }
    do {
    } while (9 < DAT_00113190 && (uVar10 & 1) != 0);
    if (DAT_00113060 == (char *)0x0) {
      if (-1 < DAT_00113190 && (int)uVar10 < 0) goto LAB_00103c88;
      while( true ) {
        DAT_00113060 = (char *)FUN_001026dc(param_1,param_3);
        uVar10 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar10 & 1) == 0)) break;
LAB_00103c88:
        DAT_00113060 = (char *)FUN_001026dc(param_1,param_3);
      }
    }
    do {
    } while (9 < DAT_00113190 && (uVar10 & 1) != 0);
    if (DAT_00113068 == 0) {
      while( true ) {
        DAT_00113068 = FUN_00102a08(param_1,param_3);
        uVar10 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar10 & 1) == 0)) break;
        DAT_00113068 = FUN_00102a08(param_1,param_3);
      }
    }
    do {
    } while (9 < DAT_00113190 && (uVar10 & 1) != 0);
    if (((DAT_00113060 != (char *)0x0) && (DAT_00113058 != (char *)0x0)) && (DAT_00113068 != 0)) {
      while( true ) {
        uStack_78 = 0;
        uStack_70 = 0;
        sVar8 = strlen(DAT_00113058);
        FUN_0010654c(auStack_e0);
        FUN_00106608(auStack_e0,uVar7,uVar6);
        uVar10 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar10 & 1) == 0)) break;
        uStack_78 = 0;
        uStack_70 = 0;
        FUN_0010654c(auStack_e0);
        FUN_00106608(auStack_e0,uVar7,uVar6);
      }
      if ((DAT_00113190 < 10) || ((uVar10 & 1) == 0)) {
        lVar11 = 0;
LAB_00103dec:
        if (lVar11 < (int)sVar8) goto LAB_00103e0c;
        if (-1 >= DAT_00113190 || (int)uVar10 >= 0) goto LAB_00103efc;
        do {
          FUN_00106980(auStack_e0);
LAB_00103efc:
          FUN_00106980(auStack_e0);
          uVar10 = (DAT_00113194 + -1) * DAT_00113194;
        } while ((9 < DAT_00113190) && ((uVar10 & 1) != 0));
        if (-1 < DAT_00113190 && (int)uVar10 < 0) {
LAB_00103f78:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        lVar11 = 0;
        while (lVar11 != 0x10) {
          *(byte *)((long)&uStack_78 + lVar11) = abStack_88[lVar11];
          lVar11 = lVar11 + 1;
          if (-1 < DAT_00113190 && (int)uVar10 < 0) goto LAB_00103f78;
        }
        uVar10 = 0;
        lVar11 = 0;
        do {
          pbVar1 = (byte *)((long)&uStack_78 + lVar11);
          lVar11 = lVar11 + 1;
          uVar10 = uVar10 + *pbVar1;
        } while (lVar11 != 0xf);
        lVar11 = 0;
        uVar3 = -uVar10;
        if (uVar10 < 0x100) {
          uVar3 = uVar10;
        }
        do {
          bVar4 = (byte)uVar3;
          *(byte *)((long)&uStack_78 + lVar11) =
               *(byte *)((long)&uStack_78 + lVar11) ^ bVar4 ^ (byte)lVar11;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0xf);
        while( true ) {
          pcVar2 = DAT_00113060;
          uStack_70 = CONCAT17(bVar4,(undefined7)uStack_70);
          sVar8 = strlen(DAT_00113060);
          uVar9 = FUN_0010978c(0,pcVar2,sVar8);
          uVar6 = FUN_0010978c(uVar9,DAT_00113068,0x20);
          __ptr = (void *)FUN_001022d8(&uStack_78,0x10,uVar6);
          (**(code **)(*param_1 + 0x600))(param_1,param_4,uVar7,2);
          pcVar2 = DAT_00113060;
          uStack_f0 = 0;
          uVar10 = (DAT_00113194 + -1) * DAT_00113194;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          if ((DAT_00113190 < 10) || ((uVar10 & 1) == 0)) break;
          uStack_70 = CONCAT17(bVar4,(undefined7)uStack_70);
          sVar8 = strlen(DAT_00113060);
          uVar9 = FUN_0010978c(0,pcVar2,sVar8);
          uVar6 = FUN_0010978c(uVar9,DAT_00113068,0x20);
          FUN_001022d8(&uStack_78,0x10,uVar6);
          (**(code **)(*param_1 + 0x600))(param_1,param_4,uVar7,2);
          uStack_f0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
        }
        if ((-1 < DAT_00113190) && ((int)uVar10 < 0)) {
LAB_0010417c:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        lVar11 = 0;
        while (lVar11 != 0x18) {
          bVar4 = *(byte *)((long)__ptr + lVar11);
          pcVar2 = (char *)((long)&uStack_120 + lVar11 * 2);
          while ((sprintf(pcVar2,"%02x",(ulong)bVar4), 9 < DAT_00113190 &&
                 (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0))) {
            sprintf(pcVar2,"%02x",(ulong)*(byte *)((long)__ptr + lVar11));
            bVar4 = *(byte *)((long)__ptr + lVar11);
          }
          lVar11 = lVar11 + 1;
          if ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0)) goto LAB_0010417c;
        }
        free(__ptr);
        auVar12 = (**(code **)(*param_1 + 0x538))(param_1,&uStack_120);
        uVar10 = (DAT_00113194 + -1) * DAT_00113194;
        while ((-1 < DAT_00113190 && ((int)uVar10 < 0))) {
          free(__ptr);
          (**(code **)(*param_1 + 0x538))(param_1,&uStack_120);
          free(__ptr);
          auVar12 = (**(code **)(*param_1 + 0x538))(param_1,&uStack_120);
          uVar10 = (DAT_00113194 + -1) * DAT_00113194;
        }
        goto LAB_00104210;
      }
LAB_00103ea8:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (DAT_00113190 < 0 || -1 < (int)uVar10) goto LAB_00103eb4;
    do {
      (*(code *)param_1[0xa7])(param_1,&DAT_0011035f);
LAB_00103eb4:
      auVar12 = (*(code *)param_1[0xa7])(param_1,&DAT_0011035f);
      uVar10 = (DAT_00113194 + -1) * DAT_00113194;
    } while ((-1 < DAT_00113190) && ((int)uVar10 < 0));
LAB_00104210:
    param_2 = auVar12._8_8_;
    uVar7 = auVar12._0_8_;
    do {
    } while (9 < DAT_00113190 && (uVar10 & 1) != 0);
  }
  do {
  } while (-1 < DAT_00113190 && (int)uVar10 < 0);
  if (*(long *)(lVar5 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7,param_2);
  }
  return;
LAB_00103e0c:
  if (-1 < DAT_00113190 && (int)uVar10 < 0) goto LAB_00103e64;
  while( true ) {
    sprintf((char *)&uStack_78,"%c%c",(ulong)(byte)DAT_00113058[lVar11],
            (ulong)(byte)(DAT_00113058 + lVar11)[1]);
    FUN_00106608(auStack_e0,&uStack_78,2);
    uVar10 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 10) || ((uVar10 & 1) == 0)) break;
LAB_00103e64:
    sprintf((char *)&uStack_78,"%c%c",(ulong)(byte)DAT_00113058[lVar11],
            (ulong)(byte)(DAT_00113058 + lVar11)[1]);
    FUN_00106608(auStack_e0,&uStack_78,2);
  }
  lVar11 = lVar11 + 2;
  if ((DAT_00113190 < 10) || ((uVar10 & 1) == 0)) goto LAB_00103dec;
  goto LAB_00103ea8;
}

