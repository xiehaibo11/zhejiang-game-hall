
void FUN_00e1c47c(long *param_1,long param_2,char *param_3,undefined8 *param_4,long param_5,
                 undefined8 *param_6)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  void *pvVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  
  *param_4 = 0;
  if (param_2 == 0) {
    *param_4 = 0;
    param_4[1] = 0;
    *param_6 = 0x5100000051;
    param_4[2] = 0;
    *(undefined4 *)(param_6 + 1) = 0;
    lVar10 = *param_1;
    lVar4 = FUN_00e20f2c(lVar10,param_3,&DAT_0197573f);
    if (lVar4 == 0) {
      iVar3 = 0x40;
    }
    else {
      lVar9 = *param_1;
      puVar7 = (undefined8 *)(**(code **)(lVar9 + 8))(lVar9,0x50);
      if (puVar7 == (undefined8 *)0x0) {
        iVar3 = 0x40;
      }
      else {
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[7] = lVar9;
        iVar3 = FUN_00e85014(puVar7,lVar4);
        puVar7[4] = lVar4;
        if (iVar3 == 0) {
          puVar7[7] = lVar9;
          iVar3 = FUN_00e20c14(puVar7,0x51607,param_5 + 0x10);
          lVar9 = puVar7[7];
          if ((code *)puVar7[6] != (code *)0x0) {
            (*(code *)puVar7[6])(puVar7);
          }
          (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
          if (iVar3 == 0) {
            param_4[2] = lVar4;
            goto LAB_00e1c75c;
          }
        }
        else {
          (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
        }
      }
      (**(code **)(lVar10 + 0x10))(lVar10,lVar4);
    }
LAB_00e1c75c:
    *(int *)(param_6 + 1) = iVar3;
    param_4[3] = 0;
    *(undefined4 *)((long)param_6 + 0xc) = 0;
    sVar5 = strlen(param_3);
    sVar1 = sVar5 + 0x12;
    if ((long)sVar1 < 0x80000000) {
      if ((long)sVar1 < 1) {
        if (sVar1 == 0) {
          pvVar6 = (void *)0x0;
          goto LAB_00e1c91c;
        }
        uVar2 = 6;
      }
      else {
        pvVar6 = (void *)(**(code **)(*param_1 + 8))(*param_1,sVar1);
        if (pvVar6 == (void *)0x0) {
          uVar2 = 0x40;
        }
        else {
          memset(pvVar6,0,sVar1);
LAB_00e1c91c:
          memcpy(pvVar6,param_3,sVar5);
          uVar2 = 0;
          builtin_strncpy((char *)((long)pvVar6 + sVar5),"/..namedfork/rsrc",0x12);
          param_4[3] = pvVar6;
          *(undefined8 *)(param_5 + 0x18) = 0;
        }
      }
    }
    else {
      uVar2 = 10;
    }
    *(undefined4 *)((long)param_6 + 0xc) = uVar2;
    param_4[4] = 0;
    *(undefined4 *)(param_6 + 2) = 0;
    sVar5 = strlen(param_3);
    sVar1 = sVar5 + 6;
    if ((long)sVar1 < 0x80000000) {
      if ((long)sVar1 < 1) {
        if (sVar1 == 0) {
          pvVar6 = (void *)0x0;
          goto LAB_00e1cae8;
        }
        uVar2 = 6;
      }
      else {
        pvVar6 = (void *)(**(code **)(*param_1 + 8))(*param_1,sVar1);
        if (pvVar6 == (void *)0x0) {
          uVar2 = 0x40;
        }
        else {
          memset(pvVar6,0,sVar1);
LAB_00e1cae8:
          memcpy(pvVar6,param_3,sVar5);
          uVar2 = 0;
          *(undefined2 *)((undefined4 *)((long)pvVar6 + sVar5) + 1) = 99;
          *(undefined4 *)((long)pvVar6 + sVar5) = 0x7273722f;
          param_4[4] = pvVar6;
          *(undefined8 *)(param_5 + 0x20) = 0;
        }
      }
    }
    else {
      uVar2 = 10;
    }
    *(undefined4 *)(param_6 + 2) = uVar2;
    param_4[5] = 0;
    *(undefined4 *)((long)param_6 + 0x14) = 0;
    lVar4 = FUN_00e20f2c(*param_1,param_3,"resource.frk/");
    if (lVar4 == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0;
      param_4[5] = lVar4;
      *(undefined8 *)(param_5 + 0x28) = 0;
    }
    *(undefined4 *)((long)param_6 + 0x14) = uVar2;
    param_4[6] = 0;
    *(undefined4 *)(param_6 + 3) = 0;
    lVar4 = FUN_00e20f2c(*param_1,param_3,".resource/");
    if (lVar4 == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0;
      param_4[6] = lVar4;
      *(undefined8 *)(param_5 + 0x30) = 0;
    }
    *(undefined4 *)(param_6 + 3) = uVar2;
    param_4[7] = 0;
    *(undefined4 *)((long)param_6 + 0x1c) = 0;
    lVar10 = *param_1;
    lVar4 = FUN_00e20f2c(lVar10,param_3,"%");
    if (lVar4 == 0) {
      iVar3 = 0x40;
    }
    else {
      lVar9 = *param_1;
      puVar7 = (undefined8 *)(**(code **)(lVar9 + 8))(lVar9,0x50);
      if (puVar7 == (undefined8 *)0x0) {
        iVar3 = 0x40;
      }
      else {
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[7] = lVar9;
        iVar3 = FUN_00e85014(puVar7,lVar4);
        puVar7[4] = lVar4;
        if (iVar3 == 0) {
          puVar7[7] = lVar9;
          iVar3 = FUN_00e20c14(puVar7,0x51607,param_5 + 0x38);
          lVar9 = puVar7[7];
          if ((code *)puVar7[6] != (code *)0x0) {
            (*(code *)puVar7[6])(puVar7);
          }
          (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
          if (iVar3 == 0) {
            param_4[7] = lVar4;
            goto LAB_00e1cc34;
          }
        }
        else {
          (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
        }
      }
      (**(code **)(lVar10 + 0x10))(lVar10,lVar4);
    }
LAB_00e1cc34:
    *(int *)((long)param_6 + 0x1c) = iVar3;
    param_4[8] = 0;
    *(undefined4 *)(param_6 + 4) = 0;
    lVar4 = *param_1;
    lVar10 = FUN_00e20f2c(lVar4,param_3,".AppleDouble/");
    if (lVar10 != 0) {
      lVar9 = *param_1;
      puVar7 = (undefined8 *)(**(code **)(lVar9 + 8))(lVar9,0x50);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00e1d098;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[7] = lVar9;
      iVar3 = FUN_00e85014(puVar7,lVar10);
      puVar7[4] = lVar10;
      if (iVar3 == 0) {
        puVar7[7] = lVar9;
        iVar3 = FUN_00e20c14(puVar7,0x51607,param_5 + 0x40);
        pcVar8 = (code *)puVar7[6];
        lVar9 = puVar7[7];
        goto joined_r0x00e1cd24;
      }
      (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
      goto LAB_00e1d09c;
    }
  }
  else {
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar4 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar4 == 0)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)param_6 = 0;
      *param_4 = 0;
      uVar2 = FUN_00e20c14(param_2,0x51607,param_5);
      *(undefined4 *)param_6 = uVar2;
      param_4[1] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
      if (pcVar8 != (code *)0x0) goto LAB_00e1c52c;
LAB_00e1c55c:
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)((long)param_6 + 4) = 0;
      param_4[1] = 0;
      uVar2 = FUN_00e20c14(param_2,0x51600,param_5 + 8);
      *(undefined4 *)((long)param_6 + 4) = uVar2;
      param_4[2] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
      if (pcVar8 == (code *)0x0) goto LAB_00e1c5b8;
LAB_00e1c588:
      lVar4 = (*pcVar8)(param_2,0,0,0);
      if (lVar4 == 0) goto LAB_00e1c5b8;
      *(undefined4 *)(param_6 + 1) = 0x55;
      param_4[3] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
joined_r0x00e1c6dc:
      if (pcVar8 == (code *)0x0) goto LAB_00e1c824;
LAB_00e1c714:
      lVar4 = (*pcVar8)(param_2,0,0,0);
      if (lVar4 == 0) goto LAB_00e1c824;
      *(undefined4 *)((long)param_6 + 0xc) = 0x55;
      param_4[4] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
joined_r0x00e1c910:
      if (pcVar8 != (code *)0x0) goto LAB_00e1ca14;
LAB_00e1ca44:
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_6 + 2) = 0;
      sVar5 = strlen(param_3);
      sVar1 = sVar5 + 6;
      if ((long)sVar1 < 0x80000000) {
        if ((long)sVar1 < 1) {
          if (sVar1 == 0) {
            pvVar6 = (void *)0x0;
            goto LAB_00e1cd50;
          }
          *(undefined4 *)(param_6 + 2) = 6;
          param_4[5] = 0;
          pcVar8 = *(code **)(param_2 + 0x28);
        }
        else {
          pvVar6 = (void *)(**(code **)(*param_1 + 8))(*param_1,sVar1);
          if (pvVar6 != (void *)0x0) {
            memset(pvVar6,0,sVar1);
LAB_00e1cd50:
            memcpy(pvVar6,param_3,sVar5);
            *(undefined2 *)((undefined4 *)((long)pvVar6 + sVar5) + 1) = 99;
            *(undefined4 *)((long)pvVar6 + sVar5) = 0x7273722f;
            param_4[4] = pvVar6;
            *(undefined8 *)(param_5 + 0x20) = 0;
            *(undefined4 *)(param_6 + 2) = 0;
            param_4[5] = 0;
            pcVar8 = *(code **)(param_2 + 0x28);
            goto joined_r0x00e1ca3c;
          }
          *(undefined4 *)(param_6 + 2) = 0x40;
          param_4[5] = 0;
          pcVar8 = *(code **)(param_2 + 0x28);
        }
      }
      else {
        *(undefined4 *)(param_6 + 2) = 10;
        param_4[5] = 0;
        pcVar8 = *(code **)(param_2 + 0x28);
      }
      if (pcVar8 != (code *)0x0) goto LAB_00e1cd94;
LAB_00e1cdc4:
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)((long)param_6 + 0x14) = 0;
      lVar4 = FUN_00e20f2c(*param_1,param_3,"resource.frk/");
      if (lVar4 == 0) {
        *(undefined4 *)((long)param_6 + 0x14) = 0x40;
        param_4[6] = 0;
        pcVar8 = *(code **)(param_2 + 0x28);
        goto joined_r0x00e1ce14;
      }
      param_4[5] = lVar4;
      *(undefined8 *)(param_5 + 0x28) = 0;
      *(undefined4 *)((long)param_6 + 0x14) = 0;
      param_4[6] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
      if (pcVar8 != (code *)0x0) goto LAB_00e1ce18;
LAB_00e1ce48:
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_6 + 3) = 0;
      lVar4 = FUN_00e20f2c(*param_1,param_3,".resource/");
      if (lVar4 == 0) {
        *(undefined4 *)(param_6 + 3) = 0x40;
        param_4[7] = 0;
        pcVar8 = *(code **)(param_2 + 0x28);
        goto joined_r0x00e1ce40;
      }
      param_4[6] = lVar4;
      *(undefined8 *)(param_5 + 0x30) = 0;
      *(undefined4 *)(param_6 + 3) = 0;
      param_4[7] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
      if (pcVar8 != (code *)0x0) goto LAB_00e1ce9c;
LAB_00e1cecc:
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)((long)param_6 + 0x1c) = 0;
      lVar10 = *param_1;
      lVar4 = FUN_00e20f2c(lVar10,param_3,"%");
      if (lVar4 == 0) {
        *(undefined4 *)((long)param_6 + 0x1c) = 0x40;
        param_4[8] = 0;
        pcVar8 = *(code **)(param_2 + 0x28);
      }
      else {
        lVar9 = *param_1;
        puVar7 = (undefined8 *)(**(code **)(lVar9 + 8))(lVar9,0x50);
        if (puVar7 == (undefined8 *)0x0) {
          iVar3 = 0x40;
        }
        else {
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[7] = 0;
          puVar7[6] = 0;
          puVar7[9] = 0;
          puVar7[8] = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          puVar7[3] = 0;
          puVar7[2] = 0;
          puVar7[7] = lVar9;
          iVar3 = FUN_00e85014(puVar7,lVar4);
          puVar7[4] = lVar4;
          if (iVar3 == 0) {
            puVar7[7] = lVar9;
            iVar3 = FUN_00e20c14(puVar7,0x51607,param_5 + 0x38);
            lVar9 = puVar7[7];
            if ((code *)puVar7[6] != (code *)0x0) {
              (*(code *)puVar7[6])(puVar7);
            }
            (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
            if (iVar3 == 0) {
              param_4[7] = lVar4;
              *(undefined4 *)((long)param_6 + 0x1c) = 0;
              param_4[8] = 0;
              pcVar8 = *(code **)(param_2 + 0x28);
              goto joined_r0x00e1d00c;
            }
          }
          else {
            (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
          }
        }
        (**(code **)(lVar10 + 0x10))(lVar10,lVar4);
        *(int *)((long)param_6 + 0x1c) = iVar3;
        param_4[8] = 0;
        pcVar8 = *(code **)(param_2 + 0x28);
      }
    }
    else {
      *(undefined4 *)param_6 = 0x55;
      param_4[1] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
      if (pcVar8 == (code *)0x0) goto LAB_00e1c55c;
LAB_00e1c52c:
      lVar4 = (*pcVar8)(param_2,0,0,0);
      if (lVar4 == 0) goto LAB_00e1c55c;
      *(undefined4 *)((long)param_6 + 4) = 0x55;
      param_4[2] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
      if (pcVar8 != (code *)0x0) goto LAB_00e1c588;
LAB_00e1c5b8:
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_6 + 1) = 0;
      lVar10 = *param_1;
      lVar4 = FUN_00e20f2c(lVar10,param_3,&DAT_0197573f);
      if (lVar4 == 0) {
        *(undefined4 *)(param_6 + 1) = 0x40;
        param_4[3] = 0;
        pcVar8 = *(code **)(param_2 + 0x28);
        goto joined_r0x00e1c6dc;
      }
      lVar9 = *param_1;
      puVar7 = (undefined8 *)(**(code **)(lVar9 + 8))(lVar9,0x50);
      if (puVar7 == (undefined8 *)0x0) {
        iVar3 = 0x40;
      }
      else {
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[7] = lVar9;
        iVar3 = FUN_00e85014(puVar7,lVar4);
        puVar7[4] = lVar4;
        if (iVar3 == 0) {
          puVar7[7] = lVar9;
          iVar3 = FUN_00e20c14(puVar7,0x51607,param_5 + 0x10);
          lVar9 = puVar7[7];
          if ((code *)puVar7[6] != (code *)0x0) {
            (*(code *)puVar7[6])(puVar7);
          }
          (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
          if (iVar3 == 0) {
            param_4[2] = lVar4;
            *(undefined4 *)(param_6 + 1) = 0;
            param_4[3] = 0;
            pcVar8 = *(code **)(param_2 + 0x28);
            goto joined_r0x00e1c6dc;
          }
        }
        else {
          (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
        }
      }
      (**(code **)(lVar10 + 0x10))(lVar10,lVar4);
      *(int *)(param_6 + 1) = iVar3;
      param_4[3] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
      if (pcVar8 != (code *)0x0) goto LAB_00e1c714;
LAB_00e1c824:
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)((long)param_6 + 0xc) = 0;
      sVar5 = strlen(param_3);
      sVar1 = sVar5 + 0x12;
      if ((long)sVar1 < 0x80000000) {
        if ((long)sVar1 < 1) {
          if (sVar1 != 0) {
            *(undefined4 *)((long)param_6 + 0xc) = 6;
            param_4[4] = 0;
            pcVar8 = *(code **)(param_2 + 0x28);
            goto joined_r0x00e1c854;
          }
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = (void *)(**(code **)(*param_1 + 8))(*param_1,sVar1);
          if (pvVar6 == (void *)0x0) {
            *(undefined4 *)((long)param_6 + 0xc) = 0x40;
            param_4[4] = 0;
            pcVar8 = *(code **)(param_2 + 0x28);
            goto joined_r0x00e1c910;
          }
          memset(pvVar6,0,sVar1);
        }
        memcpy(pvVar6,param_3,sVar5);
        builtin_strncpy((char *)((long)pvVar6 + sVar5),"/..namedfork/rsrc",0x12);
        param_4[3] = pvVar6;
        *(undefined8 *)(param_5 + 0x18) = 0;
        *(undefined4 *)((long)param_6 + 0xc) = 0;
        param_4[4] = 0;
        pcVar8 = *(code **)(param_2 + 0x28);
      }
      else {
        *(undefined4 *)((long)param_6 + 0xc) = 10;
        param_4[4] = 0;
        pcVar8 = *(code **)(param_2 + 0x28);
      }
joined_r0x00e1c854:
      if (pcVar8 == (code *)0x0) goto LAB_00e1ca44;
LAB_00e1ca14:
      lVar4 = (*pcVar8)(param_2,0,0,0);
      if (lVar4 == 0) goto LAB_00e1ca44;
      *(undefined4 *)(param_6 + 2) = 0x55;
      param_4[5] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
joined_r0x00e1ca3c:
      if (pcVar8 == (code *)0x0) goto LAB_00e1cdc4;
LAB_00e1cd94:
      lVar4 = (*pcVar8)(param_2,0,0,0);
      if (lVar4 == 0) goto LAB_00e1cdc4;
      *(undefined4 *)((long)param_6 + 0x14) = 0x55;
      param_4[6] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
joined_r0x00e1ce14:
      if (pcVar8 == (code *)0x0) goto LAB_00e1ce48;
LAB_00e1ce18:
      lVar4 = (*pcVar8)(param_2,0,0,0);
      if (lVar4 == 0) goto LAB_00e1ce48;
      *(undefined4 *)(param_6 + 3) = 0x55;
      param_4[7] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
joined_r0x00e1ce40:
      if (pcVar8 == (code *)0x0) goto LAB_00e1cecc;
LAB_00e1ce9c:
      lVar4 = (*pcVar8)(param_2,0,0,0);
      if (lVar4 == 0) goto LAB_00e1cecc;
      *(undefined4 *)((long)param_6 + 0x1c) = 0x55;
      param_4[8] = 0;
      pcVar8 = *(code **)(param_2 + 0x28);
    }
joined_r0x00e1d00c:
    if ((pcVar8 != (code *)0x0) && (lVar4 = (*pcVar8)(param_2,0,0,0), lVar4 != 0)) {
      *(undefined4 *)(param_6 + 4) = 0x55;
      return;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_6 + 4) = 0;
    lVar4 = *param_1;
    lVar10 = FUN_00e20f2c(lVar4,param_3,".AppleDouble/");
    if (lVar10 != 0) {
      lVar9 = *param_1;
      puVar7 = (undefined8 *)(**(code **)(lVar9 + 8))(lVar9,0x50);
      if (puVar7 == (undefined8 *)0x0) {
LAB_00e1d098:
        iVar3 = 0x40;
      }
      else {
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        puVar7[9] = 0;
        puVar7[8] = 0;
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[7] = lVar9;
        iVar3 = FUN_00e85014(puVar7,lVar10);
        puVar7[4] = lVar10;
        if (iVar3 == 0) {
          puVar7[7] = lVar9;
          iVar3 = FUN_00e20c14(puVar7,0x51607,param_5 + 0x40);
          pcVar8 = (code *)puVar7[6];
          lVar9 = puVar7[7];
joined_r0x00e1cd24:
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(puVar7);
          }
          (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
          if (iVar3 == 0) {
            param_4[8] = lVar10;
            goto LAB_00e1d0ac;
          }
        }
        else {
          (**(code **)(lVar9 + 0x10))(lVar9,puVar7);
        }
      }
LAB_00e1d09c:
      (**(code **)(lVar4 + 0x10))(lVar4,lVar10);
      goto LAB_00e1d0ac;
    }
  }
  iVar3 = 0x40;
LAB_00e1d0ac:
  *(int *)(param_6 + 4) = iVar3;
  return;
}

