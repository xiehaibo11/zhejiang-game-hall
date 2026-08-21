
int FUN_00a18a00(undefined8 param_1,char *param_2,void *param_3,ulong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  size_t sVar4;
  ulong uVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  void *local_78;
  size_t local_70;
  ulong local_68;
  char *local_58;
  
  local_58 = (char *)0x0;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == (void *)0x0) {
    return 0x5a;
  }
  if (param_4 == 0) {
    return 0x5a;
  }
  iVar2 = strncmp(param_2,"sha256//",8);
  if (iVar2 == 0) {
    lVar12 = (*(code *)PTR_malloc_01d1b740)(0x20);
    if (lVar12 == 0) {
      return 0x1b;
    }
    FUN_00a481d4(param_3,param_4,lVar12,0x20);
    iVar2 = FUN_00a19db8(param_1,lVar12,0x20,&local_78,&local_70);
    (*(code *)PTR_free_01d1b748)(lVar12);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_00a22d58(param_1,"\t public key hash: sha256//%s\n",local_78);
    sVar6 = strlen(param_2);
    pcVar11 = (char *)(*(code *)PTR_malloc_01d1b740)(sVar6 + 1);
    if (pcVar11 == (char *)0x0) {
      (*(code *)PTR_free_01d1b748)(local_78);
      return 0x1b;
    }
    memcpy(pcVar11,param_2,sVar6 + 1);
    pcVar7 = pcVar11;
    do {
      pcVar8 = strstr(pcVar7,";sha256//");
      sVar6 = local_70;
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = '\0';
      }
      sVar4 = strlen(pcVar7 + 8);
      if (sVar6 == sVar4) {
        iVar3 = memcmp(local_78,pcVar7 + 8,sVar6);
        iVar2 = 0;
        if ((iVar3 == 0) || (iVar2 = 0x5a, pcVar8 == (char *)0x0)) goto LAB_00a18cf4;
      }
      else if (pcVar8 == (char *)0x0) {
        iVar2 = 0x5a;
LAB_00a18cf4:
        (*(code *)PTR_free_01d1b748)(local_78);
        local_78 = (void *)0x0;
        (*(code *)PTR_free_01d1b748)(pcVar11);
        return iVar2;
      }
      *pcVar8 = ';';
      pcVar7 = strstr(pcVar8,"sha256//");
      iVar2 = 0x5a;
      if ((pcVar8 == (char *)0x0) || (pcVar7 == (char *)0x0)) goto LAB_00a18cf4;
    } while( true );
  }
  __stream = fopen(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    return 0x5a;
  }
  iVar2 = fseek(__stream,0,2);
  if (iVar2 == 0) {
    uVar5 = ftell(__stream);
    iVar3 = fseek(__stream,0,0);
    pcVar11 = (char *)0x0;
    iVar2 = 0x5a;
    if ((0x100000 < uVar5) || (iVar3 != 0)) goto LAB_00a18a8c;
    uVar5 = FUN_00a16d14(uVar5);
    if (uVar5 < param_4) goto LAB_00a18a84;
    pcVar11 = (char *)(*(code *)PTR_malloc_01d1b740)(uVar5 + 1);
    if ((pcVar11 != (char *)0x0) && (sVar6 = fread(pcVar11,uVar5,1,__stream), (int)sVar6 == 1)) {
      pcVar7 = pcVar11;
      if (uVar5 == param_4) {
LAB_00a18cb8:
        iVar3 = memcmp(param_3,pcVar7,param_4);
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = 0x5a;
        }
        goto LAB_00a18a8c;
      }
      pcVar11[uVar5] = '\0';
      pcVar7 = strstr(pcVar11,"-----BEGIN PUBLIC KEY-----");
      if ((pcVar7 != (char *)0x0) &&
         ((lVar12 = (long)pcVar7 - (long)pcVar11, lVar12 == 0 || (pcVar11[lVar12 + -1] == '\n')))) {
        uVar5 = lVar12 + 0x1a;
        pcVar8 = strstr(pcVar11 + uVar5,"\n-----END PUBLIC KEY-----");
        if ((pcVar8 != (char *)0x0) &&
           (lVar12 = (*(code *)PTR_malloc_01d1b740)(pcVar8 + (-0x19 - (long)(pcVar11 + lVar12))),
           lVar12 != 0)) {
          if (uVar5 < (ulong)((long)pcVar8 - (long)pcVar11)) {
            pcVar8 = pcVar8 + (-0x1a - (long)pcVar7);
            pcVar7 = pcVar11 + uVar5;
            lVar9 = 0;
            do {
              cVar1 = *pcVar7;
              lVar10 = lVar9;
              if ((cVar1 != '\n') && (cVar1 != '\r')) {
                lVar10 = lVar9 + 1;
                *(char *)(lVar12 + lVar9) = cVar1;
              }
              pcVar8 = pcVar8 + -1;
              pcVar7 = pcVar7 + 1;
              lVar9 = lVar10;
            } while (pcVar8 != (char *)0x0);
          }
          else {
            lVar10 = 0;
          }
          *(undefined1 *)(lVar12 + lVar10) = 0;
          iVar3 = FUN_00a18f14(lVar12,&local_58,&local_68);
          (*(code *)PTR_free_01d1b748)(lVar12);
          iVar2 = 0x5a;
          if ((iVar3 != 0) || (pcVar7 = local_58, local_68 != param_4)) goto LAB_00a18a8c;
          goto LAB_00a18cb8;
        }
      }
    }
  }
  else {
LAB_00a18a84:
    pcVar11 = (char *)0x0;
  }
  iVar2 = 0x5a;
LAB_00a18a8c:
  (*(code *)PTR_free_01d1b748)(pcVar11);
  (*(code *)PTR_free_01d1b748)(local_58);
  local_58 = (char *)0x0;
  fclose(__stream);
  return iVar2;
}

