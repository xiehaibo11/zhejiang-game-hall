
long FUN_00a33064(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  
  plVar11 = *(long **)(param_1 + 0x938);
  if (((plVar11 == (long *)0x0) || (plVar11[3] == 0)) ||
     (plVar11 = (long *)*plVar11, plVar11 == (long *)0x0)) {
LAB_00a33190:
    lVar8 = 0;
  }
  else {
    pcVar1 = "";
    lVar12 = 0;
    do {
      pcVar10 = (char *)plVar11[5];
      lVar8 = lVar12;
      if (pcVar10 != (char *)0x0) {
        pcVar2 = "#HttpOnly_";
        if (*(char *)((long)plVar11 + 0x5a) == '\0') {
          pcVar2 = pcVar1;
        }
        pcVar9 = pcVar1;
        if (((char)plVar11[8] != '\0') && (pcVar9 = ".", *pcVar10 == '.')) {
          pcVar9 = pcVar1;
        }
        pcVar3 = "TRUE";
        if ((char)plVar11[8] == '\0') {
          pcVar3 = "FALSE";
        }
        puVar4 = &DAT_0144b7ba;
        if ((undefined *)plVar11[3] != (undefined *)0x0) {
          puVar4 = (undefined *)plVar11[3];
        }
        pcVar5 = "TRUE";
        if ((char)plVar11[0xb] == '\0') {
          pcVar5 = "FALSE";
        }
        pcVar6 = pcVar1;
        if ((char *)plVar11[2] != (char *)0x0) {
          pcVar6 = (char *)plVar11[2];
        }
        lVar7 = FUN_00a24258("%s%s%s\t%s\t%s\t%s\t%ld\t%s\t%s",pcVar2,pcVar9,pcVar10,pcVar3,puVar4,
                             pcVar5,plVar11[6],plVar11[1],pcVar6);
        if (lVar7 != 0) {
          lVar8 = FUN_00a2c440(lVar12,lVar7);
          if (lVar8 != 0) goto LAB_00a33164;
          (*(code *)PTR_free_01769a00)(lVar7);
        }
        FUN_00a2c624(lVar12);
        goto LAB_00a33190;
      }
LAB_00a33164:
      plVar11 = (long *)*plVar11;
      lVar12 = lVar8;
    } while (plVar11 != (long *)0x0);
  }
  return lVar8;
}

