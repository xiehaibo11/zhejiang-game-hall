
void FUN_0010c518(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  
  if ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0)) goto LAB_0010c5e4;
  while( true ) {
    __ptr = (void *)FUN_00101a04(param_3);
    uVar7 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 10) || ((uVar7 & 1) == 0)) break;
LAB_0010c5e4:
    FUN_00101a04(param_3);
  }
  if (DAT_00113170 == 0) {
    if (-1 < DAT_00113190 && (int)uVar7 < 0) goto LAB_0010c668;
    while( true ) {
      uVar4 = FUN_0010e924(DAT_00113158);
      FUN_0010e468(param_2,__ptr,uVar4);
      free(__ptr);
      uVar7 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar7)) break;
LAB_0010c668:
      uVar4 = FUN_0010e924(DAT_00113158);
      FUN_0010e468(param_2,__ptr,uVar4);
      free(__ptr);
    }
    goto LAB_0010c698;
  }
  if (-1 >= DAT_00113190 || (int)uVar7 >= 0) goto LAB_0010c6c8;
  do {
    uVar4 = thunk_FUN_00109db4(param_5);
    (**(code **)(*param_1 + 0x538))(param_1,uVar4);
    (**(code **)(*param_1 + 0x720))(param_1);
LAB_0010c6c8:
    __ptr_00 = (void *)thunk_FUN_00109db4(param_5);
    uVar4 = (**(code **)(*param_1 + 0x538))(param_1,__ptr_00);
    cVar3 = (**(code **)(*param_1 + 0x720))(param_1);
  } while ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0));
  if (cVar3 == '\0') {
    while( true ) {
      lVar5 = FUN_001016c4(param_1,0,DAT_00113170,DAT_00113168,DAT_00113178,param_4,uVar4);
      free(__ptr_00);
      uVar7 = (DAT_00113194 + -1) * DAT_00113194;
      uVar8 = uVar7 & 1;
      if ((DAT_00113190 < 10) || (uVar8 == 0)) break;
      FUN_001016c4(param_1,0,DAT_00113170,DAT_00113168,DAT_00113178,param_4,uVar4);
      free(__ptr_00);
    }
    if (lVar5 == 0) {
      bVar2 = true;
LAB_0010cb40:
      if ((9 < DAT_00113190) && (uVar8 != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (bVar2) {
        while( true ) {
          uVar4 = FUN_0010e924(DAT_00113158);
          FUN_0010e468(param_2,__ptr,uVar4);
          uVar7 = (DAT_00113194 + -1) * DAT_00113194;
          if ((DAT_00113190 < 10) || ((uVar7 & 1) == 0)) break;
          uVar4 = FUN_0010e924(DAT_00113158);
          FUN_0010e468(param_2,__ptr,uVar4);
        }
      }
      do {
      } while (-1 < DAT_00113190 && (int)uVar7 < 0);
    }
    else {
      pcVar6 = (char *)(**(code **)(*param_1 + 0x548))(param_1,lVar5,0);
      uVar7 = (DAT_00113194 + -1) * DAT_00113194;
      if (DAT_00113190 < 10) {
        if (pcVar6 != (char *)0x0) goto LAB_0010c914;
LAB_0010c9ac:
        (**(code **)(*param_1 + 0x88))(param_1);
        bVar2 = true;
        if ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0)) {
          bVar2 = true;
          do {
            (**(code **)(*param_1 + 0x88))(param_1);
            (**(code **)(*param_1 + 0x88))(param_1);
            if (DAT_00113190 < 0) break;
          } while ((DAT_00113194 + -1) * DAT_00113194 < 0);
        }
      }
      else {
        do {
          if ((uVar7 & 1) == 0) break;
          (**(code **)(*param_1 + 0x548))(param_1,lVar5,0);
          pcVar6 = (char *)(**(code **)(*param_1 + 0x548))(param_1,lVar5,0);
          uVar7 = (DAT_00113194 + -1) * DAT_00113194;
        } while (9 < DAT_00113190);
        if (pcVar6 == (char *)0x0) goto LAB_0010c9ac;
LAB_0010c914:
        if ((-1 < DAT_00113190) && ((int)uVar7 < 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (*pcVar6 == '\0') goto LAB_0010c9ac;
        while( true ) {
          uVar4 = FUN_0010e924(pcVar6);
          FUN_0010e468(param_2,__ptr,uVar4);
          bVar2 = false;
          if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
          uVar4 = FUN_0010e924(pcVar6);
          FUN_0010e468(param_2,__ptr,uVar4);
        }
      }
      while( true ) {
        (**(code **)(*param_1 + 0x550))(param_1,lVar5,pcVar6);
        cVar3 = (**(code **)(*param_1 + 0x720))(param_1);
        uVar7 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar7)) break;
        (**(code **)(*param_1 + 0x550))(param_1,lVar5,pcVar6);
        (**(code **)(*param_1 + 0x720))(param_1);
      }
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        if ((9 < DAT_00113190) && ((uVar7 & 1) != 0)) goto LAB_0010caf8;
        while( true ) {
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
          bVar1 = true;
          uVar7 = (DAT_00113194 + -1) * DAT_00113194;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar7)) break;
LAB_0010caf8:
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
      }
      uVar8 = uVar7 & 1;
      do {
      } while (9 < DAT_00113190 && (uVar7 & 1) != 0);
      if (!bVar1) goto LAB_0010cb40;
    }
    if ((-1 < DAT_00113190) && ((int)uVar7 < 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    while( true ) {
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
      free(__ptr_00);
      uVar7 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar7 & 1) == 0)) break;
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
      free(__ptr_00);
    }
  }
  do {
  } while (9 < DAT_00113190 && (uVar7 & 1) != 0);
LAB_0010c698:
  if ((-1 < DAT_00113190) && ((int)uVar7 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return;
}

