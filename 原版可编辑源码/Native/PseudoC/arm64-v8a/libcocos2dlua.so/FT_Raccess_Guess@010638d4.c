
void FT_Raccess_Guess(long *param_1,long param_2,char *param_3,undefined8 *param_4,long param_5,
                     undefined4 *param_6)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  void *pvVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  
  *param_4 = 0;
  if (param_2 == 0) {
    *param_6 = 0x51;
    *param_4 = 0;
    param_4[1] = 0;
    param_6[1] = 0x51;
    param_4[2] = 0;
    param_6[2] = 0;
    lVar9 = *param_1;
    lVar4 = FUN_01066efc(lVar9,param_3,&DAT_0145cbbb);
    if (lVar4 == 0) {
      iVar3 = 0x40;
    }
    else {
      lVar8 = *param_1;
      pvVar6 = (void *)(**(code **)(lVar8 + 8))(lVar8,0x50);
      if (pvVar6 == (void *)0x0) {
                    /* try { // try from 01063bd8 to 01163bdb has its CatchHandler @ 01063cfc */
        iVar3 = 0x40;
      }
      else {
        memset(pvVar6,0,0x50);
        *(long *)((long)pvVar6 + 0x38) = lVar8;
        iVar3 = FT_Stream_Open(pvVar6,lVar4);
        *(long *)((long)pvVar6 + 0x20) = lVar4;
        if (iVar3 == 0) {
                    /* try { // try from 01063cb4 to 01163ceb has its CatchHandler @ 01063a34 */
          *(long *)((long)pvVar6 + 0x38) = lVar8;
          iVar3 = FUN_01066be4(pvVar6,0x51607,param_5 + 0x10);
          lVar8 = *(long *)((long)pvVar6 + 0x38);
          if (*(code **)((long)pvVar6 + 0x30) != (code *)0x0) {
            (**(code **)((long)pvVar6 + 0x30))(pvVar6);
          }
                    /* try { // try from 01063cec to 01163cf3 has its CatchHandler @ 01063d14 */
          (**(code **)(lVar8 + 0x10))(lVar8,pvVar6);
                    /* try { // try from 01063cf4 to 01163cfb has its CatchHandler @ 01063cfc */
                    /* catch() { ... } // from try @ 01063bd8 with catch @ 01063cfc
                       catch() { ... } // from try @ 01063cf4 with catch @ 01063cfc
                       try { // try from 01063cfc to 01163dc3 has its CatchHandler @ 01063a34 */
          if (iVar3 == 0) {
            param_4[2] = lVar4;
            goto LAB_01063bf8;
          }
        }
        else {
          (**(code **)(lVar8 + 0x10))(lVar8,pvVar6);
        }
      }
      (**(code **)(lVar9 + 0x10))(lVar9,lVar4);
    }
LAB_01063bf8:
    param_6[2] = iVar3;
    param_4[3] = 0;
                    /* try { // try from 01063c04 to 01163c17 has its CatchHandler @ 01063d80 */
    param_6[3] = 0;
    sVar5 = strlen(param_3);
    if ((long)sVar5 < 0x7fffffee) {
      sVar1 = sVar5 + 0x12;
      if ((long)sVar5 < -0x11) {
        if (sVar1 == 0) {
          pvVar6 = (void *)0x0;
          goto LAB_01063df4;
        }
        uVar2 = 6;
      }
      else {
                    /* try { // try from 01063c38 to 01163c3f has its CatchHandler @ 01063d28 */
        pvVar6 = (void *)(**(code **)(*param_1 + 8))(*param_1,sVar1);
        if (pvVar6 == (void *)0x0) {
          uVar2 = 0x40;
        }
        else {
          memset(pvVar6,0,sVar1);
LAB_01063df4:
          memcpy(pvVar6,param_3,sVar5);
          uVar2 = 0;
          builtin_strncpy((char *)((long)pvVar6 + sVar5),"/..namedfork/rsrc",0x12);
          param_4[3] = pvVar6;
          *(undefined8 *)(param_5 + 0x18) = 0;
        }
      }
    }
    else {
                    /* try { // try from 01063c18 to 01163c2b has its CatchHandler @ 01063d60 */
      uVar2 = 10;
    }
    param_6[3] = uVar2;
    param_4[4] = 0;
    param_6[4] = 0;
    sVar5 = strlen(param_3);
    if ((long)sVar5 < 0x7ffffffa) {
      sVar1 = sVar5 + 6;
      if ((long)sVar5 < -5) {
        if (sVar1 == 0) {
          pvVar6 = (void *)0x0;
          goto LAB_010641a4;
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
LAB_010641a4:
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
    param_6[4] = uVar2;
    param_4[5] = 0;
                    /* catch() { ... } // from try @ 01064388 with catch @ 010641e0
                       catch() { ... } // from try @ 01064560 with catch @ 010641e0 */
    param_6[5] = 0;
    lVar4 = FUN_01066efc(*param_1,param_3,"resource.frk/");
    if (lVar4 == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0;
      param_4[5] = lVar4;
      *(undefined8 *)(param_5 + 0x28) = 0;
    }
    param_6[5] = uVar2;
    param_4[6] = 0;
    param_6[6] = 0;
    lVar4 = FUN_01066efc(*param_1,param_3,".resource/");
    if (lVar4 == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0;
      param_4[6] = lVar4;
      *(undefined8 *)(param_5 + 0x30) = 0;
    }
    param_6[6] = uVar2;
    param_4[7] = 0;
                    /* try { // try from 01064250 to 01164257 has its CatchHandler @ 01064614 */
    param_6[7] = 0;
    lVar9 = *param_1;
                    /* try { // try from 01064260 to 01164267 has its CatchHandler @ 0106460c */
    lVar4 = FUN_01066efc(lVar9,param_3,"%");
    if (lVar4 == 0) {
                    /* try { // try from 010642d4 to 011642e3 has its CatchHandler @ 01064604 */
      iVar3 = 0x40;
    }
    else {
      lVar8 = *param_1;
      pvVar6 = (void *)(**(code **)(lVar8 + 8))(lVar8,0x50);
      if (pvVar6 == (void *)0x0) {
        iVar3 = 0x40;
      }
      else {
        memset(pvVar6,0,0x50);
        *(long *)((long)pvVar6 + 0x38) = lVar8;
        iVar3 = FT_Stream_Open(pvVar6,lVar4);
        *(long *)((long)pvVar6 + 0x20) = lVar4;
        if (iVar3 == 0) {
          *(long *)((long)pvVar6 + 0x38) = lVar8;
          iVar3 = FUN_01066be4(pvVar6,0x51607,param_5 + 0x38);
          lVar8 = *(long *)((long)pvVar6 + 0x38);
          if (*(code **)((long)pvVar6 + 0x30) != (code *)0x0) {
            (**(code **)((long)pvVar6 + 0x30))(pvVar6);
          }
          (**(code **)(lVar8 + 0x10))(lVar8,pvVar6);
          if (iVar3 == 0) {
            param_4[7] = lVar4;
            goto LAB_010642f4;
          }
        }
        else {
                    /* try { // try from 010642c4 to 011642cf has its CatchHandler @ 01064640 */
          (**(code **)(lVar8 + 0x10))(lVar8,pvVar6);
        }
      }
                    /* try { // try from 010642e4 to 0116430f has its CatchHandler @ 01064638 */
      (**(code **)(lVar9 + 0x10))(lVar9,lVar4);
    }
LAB_010642f4:
    param_6[7] = iVar3;
    param_4[8] = 0;
    param_6[8] = 0;
    lVar9 = *param_1;
                    /* try { // try from 01064310 to 01164317 has its CatchHandler @ 01064634 */
    lVar4 = FUN_01066efc(lVar9,param_3,".AppleDouble/");
    if (lVar4 == 0) goto LAB_0106437c;
                    /* try { // try from 01064320 to 01164337 has its CatchHandler @ 01064678 */
    lVar8 = *param_1;
    pvVar6 = (void *)(**(code **)(lVar8 + 8))(lVar8,0x50);
    if (pvVar6 == (void *)0x0) goto LAB_01064384;
                    /* try { // try from 0106433c to 0116434b has its CatchHandler @ 01064600 */
    memset(pvVar6,0,0x50);
    *(long *)((long)pvVar6 + 0x38) = lVar8;
    iVar3 = FT_Stream_Open(pvVar6,lVar4);
                    /* try { // try from 01064360 to 0116436f has its CatchHandler @ 010645f8 */
    *(long *)((long)pvVar6 + 0x20) = lVar4;
    if (iVar3 == 0) {
                    /* try { // try from 010643e0 to 011643f7 has its CatchHandler @ 01064634 */
      *(long *)((long)pvVar6 + 0x38) = lVar8;
      goto LAB_010643ec;
    }
    pcVar7 = *(code **)(lVar8 + 0x10);
LAB_01064370:
    (*pcVar7)(lVar8,pvVar6);
  }
  else {
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar4 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar4 == 0)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *param_6 = 0;
      *param_4 = 0;
      uVar2 = FUN_01066be4(param_2,0x51607,param_5);
    }
    else {
      uVar2 = 0x55;
    }
    *param_6 = uVar2;
    param_4[1] = 0;
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar4 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar4 == 0)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[1] = 0;
      param_4[1] = 0;
      uVar2 = FUN_01066be4(param_2,0x51600,param_5 + 8);
      param_6[1] = uVar2;
    }
    else {
      param_6[1] = 0x55;
    }
    param_4[2] = 0;
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar4 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar4 == 0)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[2] = 0;
      lVar9 = *param_1;
      lVar4 = FUN_01066efc(lVar9,param_3,&DAT_0145cbbb);
      if (lVar4 == 0) {
        iVar3 = 0x40;
      }
      else {
        lVar8 = *param_1;
        pvVar6 = (void *)(**(code **)(lVar8 + 8))(lVar8,0x50);
                    /* try { // try from 01063a34 to 01163b83 has its CatchHandler @ 01063a34
                       catch() { ... } // from try @ 01063a34 with catch @ 01063a34
                       catch() { ... } // from try @ 01063cb4 with catch @ 01063a34
                       catch() { ... } // from try @ 01063cfc with catch @ 01063a34 */
        if (pvVar6 == (void *)0x0) {
          iVar3 = 0x40;
        }
        else {
          memset(pvVar6,0,0x50);
          *(long *)((long)pvVar6 + 0x38) = lVar8;
          iVar3 = FT_Stream_Open(pvVar6,lVar4);
          *(long *)((long)pvVar6 + 0x20) = lVar4;
          if (iVar3 == 0) {
            *(long *)((long)pvVar6 + 0x38) = lVar8;
                    /* try { // try from 01063c7c to 01163cb3 has its CatchHandler @ 01063da4 */
            iVar3 = FUN_01066be4(pvVar6,0x51607,param_5 + 0x10);
            lVar8 = *(long *)((long)pvVar6 + 0x38);
            if (*(code **)((long)pvVar6 + 0x30) != (code *)0x0) {
              (**(code **)((long)pvVar6 + 0x30))(pvVar6);
            }
            (**(code **)(lVar8 + 0x10))(lVar8,pvVar6);
            if (iVar3 == 0) {
              param_4[2] = lVar4;
              goto LAB_01063b38;
            }
          }
          else {
            (**(code **)(lVar8 + 0x10))(lVar8,pvVar6);
          }
        }
        (**(code **)(lVar9 + 0x10))(lVar9,lVar4);
      }
LAB_01063b38:
      param_6[2] = iVar3;
    }
    else {
      param_6[2] = 0x55;
    }
    param_4[3] = 0;
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar4 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar4 == 0)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[3] = 0;
      sVar5 = strlen(param_3);
                    /* try { // try from 01063b84 to 01163b87 has its CatchHandler @ 01063d14 */
      if ((long)sVar5 < 0x7fffffee) {
        sVar1 = sVar5 + 0x12;
        if ((long)sVar5 < -0x11) {
          if (sVar1 == 0) {
            pvVar6 = (void *)0x0;
            goto LAB_01063d14;
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
LAB_01063d14:
                    /* catch() { ... } // from try @ 01063b84 with catch @ 01063d14
                       catch() { ... } // from try @ 01063cec with catch @ 01063d14 */
            memcpy(pvVar6,param_3,sVar5);
                    /* catch() { ... } // from try @ 01063c38 with catch @ 01063d28 */
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
    }
    else {
      uVar2 = 0x55;
    }
    param_6[3] = uVar2;
    param_4[4] = 0;
                    /* catch() { ... } // from try @ 01063c18 with catch @ 01063d60 */
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar4 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar4 == 0)) {
                    /* catch() { ... } // from try @ 01063c04 with catch @ 01063d80 */
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[4] = 0;
      sVar5 = strlen(param_3);
      if ((long)sVar5 < 0x7ffffffa) {
                    /* catch() { ... } // from try @ 01063c7c with catch @ 01063da4 */
        sVar1 = sVar5 + 6;
        if ((long)sVar5 < -5) {
          if (sVar1 == 0) {
            pvVar6 = (void *)0x0;
            goto LAB_01063ea8;
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
LAB_01063ea8:
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
    }
    else {
      uVar2 = 0x55;
    }
    param_6[4] = uVar2;
    param_4[5] = 0;
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar4 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar4 == 0)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[5] = 0;
      lVar4 = FUN_01066efc(*param_1,param_3,"resource.frk/");
      if (lVar4 == 0) {
        uVar2 = 0x40;
      }
      else {
        uVar2 = 0;
        param_4[5] = lVar4;
        *(undefined8 *)(param_5 + 0x28) = 0;
      }
    }
    else {
      uVar2 = 0x55;
    }
    param_6[5] = uVar2;
    param_4[6] = 0;
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar4 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar4 == 0)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[6] = 0;
      lVar4 = FUN_01066efc(*param_1,param_3,".resource/");
      if (lVar4 == 0) {
        uVar2 = 0x40;
      }
      else {
        uVar2 = 0;
        param_4[6] = lVar4;
        *(undefined8 *)(param_5 + 0x30) = 0;
      }
    }
    else {
      uVar2 = 0x55;
    }
    param_6[6] = uVar2;
    param_4[7] = 0;
    if ((*(code **)(param_2 + 0x28) == (code *)0x0) ||
       (lVar4 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar4 == 0)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_6[7] = 0;
      lVar9 = *param_1;
      lVar4 = FUN_01066efc(lVar9,param_3,"%");
      if (lVar4 == 0) {
        iVar3 = 0x40;
      }
      else {
        lVar8 = *param_1;
        pvVar6 = (void *)(**(code **)(lVar8 + 8))(lVar8,0x50);
        if (pvVar6 == (void *)0x0) {
          iVar3 = 0x40;
        }
        else {
          memset(pvVar6,0,0x50);
          *(long *)((long)pvVar6 + 0x38) = lVar8;
          iVar3 = FT_Stream_Open(pvVar6,lVar4);
          *(long *)((long)pvVar6 + 0x20) = lVar4;
          if (iVar3 == 0) {
            *(long *)((long)pvVar6 + 0x38) = lVar8;
            iVar3 = FUN_01066be4(pvVar6,0x51607,param_5 + 0x38);
            lVar8 = *(long *)((long)pvVar6 + 0x38);
            if (*(code **)((long)pvVar6 + 0x30) != (code *)0x0) {
              (**(code **)((long)pvVar6 + 0x30))(pvVar6);
            }
            (**(code **)(lVar8 + 0x10))(lVar8,pvVar6);
            if (iVar3 == 0) {
              param_4[7] = lVar4;
              goto LAB_01064080;
            }
          }
          else {
            (**(code **)(lVar8 + 0x10))(lVar8,pvVar6);
          }
        }
        (**(code **)(lVar9 + 0x10))(lVar9,lVar4);
      }
LAB_01064080:
      param_6[7] = iVar3;
    }
    else {
      param_6[7] = 0x55;
    }
    param_4[8] = 0;
    if ((*(code **)(param_2 + 0x28) != (code *)0x0) &&
       (lVar4 = (**(code **)(param_2 + 0x28))(param_2,0,0,0), lVar4 != 0)) {
      param_6[8] = 0x55;
      return;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    param_6[8] = 0;
    lVar9 = *param_1;
    lVar4 = FUN_01066efc(lVar9,param_3,".AppleDouble/");
    if (lVar4 == 0) {
LAB_0106437c:
                    /* try { // try from 0106437c to 01164387 has its CatchHandler @ 010645f4 */
      iVar3 = 0x40;
      goto LAB_01064428;
    }
    lVar8 = *param_1;
    pvVar6 = (void *)(**(code **)(lVar8 + 8))(lVar8,0x50);
    if (pvVar6 == (void *)0x0) {
LAB_01064384:
      iVar3 = 0x40;
                    /* try { // try from 01064388 to 011643df has its CatchHandler @ 010641e0 */
    }
    else {
      memset(pvVar6,0,0x50);
      *(long *)((long)pvVar6 + 0x38) = lVar8;
      iVar3 = FT_Stream_Open(pvVar6,lVar4);
      *(long *)((long)pvVar6 + 0x20) = lVar4;
      if (iVar3 != 0) {
        pcVar7 = *(code **)(lVar8 + 0x10);
        goto LAB_01064370;
      }
      *(long *)((long)pvVar6 + 0x38) = lVar8;
LAB_010643ec:
      iVar3 = FUN_01066be4(pvVar6,0x51607,param_5 + 0x40);
      lVar8 = *(long *)((long)pvVar6 + 0x38);
      if (*(code **)((long)pvVar6 + 0x30) != (code *)0x0) {
                    /* try { // try from 010643fc to 01164407 has its CatchHandler @ 010645ec */
        (**(code **)((long)pvVar6 + 0x30))(pvVar6);
      }
      (**(code **)(lVar8 + 0x10))(lVar8,pvVar6);
      if (iVar3 == 0) {
        param_4[8] = lVar4;
                    /* try { // try from 01064450 to 0116445b has its CatchHandler @ 010645e8 */
        goto LAB_01064428;
      }
    }
  }
  (**(code **)(lVar9 + 0x10))(lVar9,lVar4);
LAB_01064428:
  param_6[8] = iVar3;
  return;
}

