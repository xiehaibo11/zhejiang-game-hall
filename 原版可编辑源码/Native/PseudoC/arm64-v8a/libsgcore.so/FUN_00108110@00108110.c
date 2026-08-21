
void FUN_00108110(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *__format;
  char *__file;
  FILE *__stream;
  size_t sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  char *pcStack_540;
  undefined2 auStack_534 [2];
  stat asStack_530 [4];
  char acStack_2ac [512];
  undefined1 auStack_ac [68];
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  if ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0)) goto LAB_00108258;
  while( true ) {
    memcpy(auStack_ac,&DAT_0010fb30,0x43);
    pcVar6 = (char *)thunk_FUN_00109db4(auStack_ac);
    auStack_534[0] = 0x40;
    pcStack_540 = (char *)0x0;
    pcVar7 = strtok_r(pcVar6,(char *)auStack_534,&pcStack_540);
    __format = strtok_r((char *)0x0,(char *)auStack_534,&pcStack_540);
    __file = strtok_r((char *)0x0,(char *)auStack_534,&pcStack_540);
    uStack_550 = 0;
    lStack_548 = 0;
    uStack_560 = 0;
    uStack_558 = 0;
    memset(acStack_2ac,0,0x200);
    memset((void *)((long)asStack_530[0].__unused + 0xc),0,0x200);
    __stream = fopen(pcVar7,"r");
    uVar10 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar10)) break;
LAB_00108258:
    memcpy(auStack_ac,&DAT_0010fb30,0x43);
    pcVar6 = (char *)thunk_FUN_00109db4(auStack_ac);
    auStack_534[0] = 0x40;
    pcStack_540 = (char *)0x0;
    pcVar6 = strtok_r(pcVar6,(char *)auStack_534,&pcStack_540);
    strtok_r((char *)0x0,(char *)auStack_534,&pcStack_540);
    strtok_r((char *)0x0,(char *)auStack_534,&pcStack_540);
    uStack_550 = 0;
    lStack_548 = 0;
    uStack_560 = 0;
    uStack_558 = 0;
    memset(acStack_2ac,0,0x200);
    memset((void *)((long)asStack_530[0].__unused + 0xc),0,0x200);
    fopen(pcVar6,"r");
  }
  bVar3 = (uVar10 & 1) == 0;
  if (__stream != (FILE *)0x0) {
    if (DAT_00113190 < 10 || bVar3) goto LAB_00108360;
    do {
      stat(__file,asStack_530);
LAB_00108360:
      iVar4 = stat(__file,asStack_530);
      iVar12 = DAT_00113190;
      iVar11 = DAT_00113194;
    } while ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0));
LAB_001083c4:
    if ((9 < iVar12) && (((iVar11 + -1) * iVar11 & 1U) != 0)) goto LAB_0010840c;
    while( true ) {
      pcVar7 = fgets((char *)((long)asStack_530[0].__unused + 0xc),0x200,__stream);
      uVar10 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar10)) break;
LAB_0010840c:
      fgets((char *)((long)asStack_530[0].__unused + 0xc),0x200,__stream);
    }
    iVar12 = DAT_00113190;
    if (pcVar7 != (char *)0x0) goto code_r0x00108424;
    goto LAB_001085b8;
  }
  if (DAT_00113190 >= 10 && !bVar3) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (pcVar6 != (char *)0x0) {
    while( true ) {
      free(pcVar6);
      uVar10 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar10)) break;
      free(pcVar6);
    }
  }
  if ((-1 < DAT_00113190) && ((int)uVar10 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  goto LAB_00108660;
code_r0x00108424:
  if ((9 < DAT_00113190) && ((uVar10 & 1) != 0)) goto LAB_00108484;
  while( true ) {
    memset(acStack_2ac,0,0x200);
    uVar5 = sscanf((char *)((long)asStack_530[0].__unused + 0xc),__format,&lStack_548,&uStack_550,
                   &uStack_558,&uStack_560,acStack_2ac);
    iVar11 = DAT_00113194;
    iVar12 = DAT_00113190;
    uVar10 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar10)) break;
LAB_00108484:
    memset(acStack_2ac,0,0x200);
    sscanf((char *)((long)asStack_530[0].__unused + 0xc),__format,&lStack_548,&uStack_550,
           &uStack_558,&uStack_560,acStack_2ac);
  }
  if ((uVar5 & 0xfffffffe) != 4) goto LAB_001083c4;
  if ((9 < DAT_00113190) && ((uVar10 & 1) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  sVar8 = strlen(acStack_2ac);
  if (sVar8 == 0) goto LAB_001083c4;
  pcVar7 = strstr(acStack_2ac,__file);
  lVar2 = lStack_548;
  if (pcVar7 == (char *)0x0) goto LAB_00108588;
  if (lStack_548 == 0) {
LAB_00108554:
    do {
    } while (9 < iVar12 && (uVar10 & 1) != 0);
    iVar9 = 0;
  }
  else {
    while ((FUN_001086b0(0,lVar2,param_1), -1 < DAT_00113190 &&
           ((DAT_00113194 + -1) * DAT_00113194 < 0))) {
      FUN_001086b0(0,lVar2,param_1);
    }
    uVar10 = (DAT_00113194 + -1) * DAT_00113194;
    iVar12 = DAT_00113190;
    iVar11 = DAT_00113194;
    if (iVar4 != -1 && ((uint)asStack_530[0].st_nlink & 0xf000) == 0x4000) goto LAB_00108554;
    iVar9 = 3;
  }
  if ((-1 < iVar12) && ((int)uVar10 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (iVar9 == 0) {
LAB_00108588:
    do {
    } while (-1 < iVar12 && (int)uVar10 < 0);
    goto LAB_001083c4;
  }
LAB_001085b8:
  if ((9 < iVar12) && ((uVar10 & 1) != 0)) goto LAB_001085f4;
  while( true ) {
    fclose(__stream);
    uVar10 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 10) || ((uVar10 & 1) == 0)) break;
LAB_001085f4:
    fclose(__stream);
  }
  if (pcVar6 != (char *)0x0) {
    if ((-1 < DAT_00113190) && ((int)uVar10 < 0)) goto LAB_0010863c;
    while( true ) {
      free(pcVar6);
      uVar10 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar10)) break;
LAB_0010863c:
      free(pcVar6);
    }
  }
  do {
  } while (9 < DAT_00113190 && (uVar10 & 1) != 0);
LAB_00108660:
  do {
  } while (9 < DAT_00113190 && (uVar10 & 1) != 0);
  if (*(long *)(lVar1 + 0x28) == lStack_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

