
void * FUN_00109db4(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_00109e88;
  while( true ) {
    iVar5 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00113128);
    FUN_001097c0(iVar5);
    FUN_00109b0c("Vuz4fCHxn1CO");
    iVar5 = DAT_00113190;
    uVar1 = *param_1;
    uVar8 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 10) || ((uVar8 & 1) == 0)) break;
LAB_00109e88:
    iVar5 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00113128);
    FUN_001097c0(iVar5);
    FUN_00109b0c("Vuz4fCHxn1CO");
  }
  if (uVar1 != 0) {
    bVar3 = -1 < DAT_00113190;
    do {
      pvVar6 = calloc((ulong)uVar1 + 1,1);
    } while (bVar3 && (int)uVar8 < 0);
    if ((iVar5 < 10) || ((uVar8 & 1) == 0)) {
      uVar7 = 0;
      do {
        if (uVar7 == uVar1) {
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_00113128);
          uVar8 = (DAT_00113194 + -1) * DAT_00113194;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar8)) goto LAB_00109fd0;
          goto LAB_00109fa0;
        }
        while( true ) {
          uVar4 = FUN_00109958(*(undefined1 *)((long)param_1 + uVar7 + 2));
          iVar2 = DAT_00113194;
          iVar5 = DAT_00113190;
          *(undefined1 *)((long)pvVar6 + uVar7) = uVar4;
          if ((iVar5 < 0) || (-1 < (iVar2 + -1) * iVar2)) break;
          FUN_00109958(*(undefined1 *)((long)param_1 + uVar7 + 2));
        }
        uVar7 = uVar7 + 1;
      } while ((iVar5 < 10) || (((iVar2 + -1) * iVar2 & 1U) == 0));
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pvVar6 = (void *)0x0;
  if ((-1 < DAT_00113190) && ((int)uVar8 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  goto LAB_00109fd0;
  while ((int)uVar8 < 0) {
LAB_00109fa0:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00113128);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00113128);
    uVar8 = (DAT_00113194 + -1) * DAT_00113194;
    if (DAT_00113190 < 0) break;
  }
LAB_00109fd0:
  do {
  } while (-1 < DAT_00113190 && (int)uVar8 < 0);
  return pvVar6;
}

