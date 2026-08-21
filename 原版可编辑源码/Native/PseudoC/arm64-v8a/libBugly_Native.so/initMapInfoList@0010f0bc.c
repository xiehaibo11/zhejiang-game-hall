
void * initMapInfoList(ulong param_1,uint param_2,uint param_3)

{
  size_t __n;
  long lVar1;
  bool bVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *__s;
  FILE *__stream;
  char *pcVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  size_t sVar15;
  int *piVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  char *local_78;
  char local_70;
  char local_6f;
  char local_6e;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((int)param_1 < 2) {
    puVar20 = (void *)0x0;
  }
  else {
    pcVar11 = calloc(1,0x100);
    __s = calloc(1,0x400);
    sprintf(pcVar11,"/proc/%d/maps",param_1 & 0xffffffff);
    log2Console(4,"eup","Create map list by maps file: %s",pcVar11);
    __stream = fopen(pcVar11,"r");
    if (__stream == (FILE *)0x0) {
      piVar16 = (int *)__errno();
      pcVar11 = strerror(*piVar16);
      param_1 = log2Console(4,"eup","Failed to open maps file for: %s",pcVar11);
      puVar20 = (void *)0x0;
    }
    else {
      pcVar12 = fgets(__s,0x400,__stream);
      if (pcVar12 != (char *)0x0) {
        puVar20 = (void *)0x0;
LAB_0010f420:
        if ((__s != (char *)0x0) && (sVar15 = strlen(__s), 0x31 < sVar15)) {
          log2Console(3,"eup","Parsing line: %s",__s);
          pcVar12 = strchr(__s,0x28);
          if (pcVar12 == (char *)0x0) {
            iVar8 = sscanf(__s,"%lx-%lx %4s %lx %*x:%*x %lu%n",&local_78,&local_80,&local_70,
                           &uStack_88,&local_90,&local_94);
            if (iVar8 == 5) {
              sVar15 = strlen(&local_70);
              cVar4 = local_6e;
              pcVar3 = local_78;
              pcVar12 = local_80;
              iVar8 = local_94;
              bVar5 = sVar15 == 4;
              bVar6 = local_70 == 'r';
              bVar7 = local_6f == 'w';
              bVar2 = bVar5 && local_6e == 'x';
              if (((bVar2 || ((param_2 ^ 1) & 1) != 0) && (local_78 != (char *)0x0)) &&
                 (local_78 != local_80)) {
                lVar19 = (long)local_94;
                pbVar18 = (byte *)(__s + lVar19);
                iVar9 = isspace((uint)*pbVar18);
                if (iVar9 != 0) {
                  lVar21 = lVar19 << 0x20;
                  pbVar18 = (byte *)(__s + lVar19 + 1);
                  do {
                    iVar8 = iVar8 + 1;
                    local_94 = iVar8;
                    iVar9 = isspace((uint)*pbVar18);
                    lVar21 = lVar21 + 0x100000000;
                    pbVar18 = pbVar18 + 1;
                  } while (iVar9 != 0);
                  pbVar18 = (byte *)(__s + (lVar21 >> 0x20));
                }
                sVar15 = 0;
                pbVar17 = pbVar18;
                do {
                  if (*pbVar17 != 10) {
                    if (*pbVar17 == 0) goto LAB_0010f310;
                    sVar15 = sVar15 + 1;
                  }
                  pbVar17 = pbVar17 + 1;
                } while( true );
              }
            }
            else {
              log2Console(5,"eup","Failed to parse the line of maps file.");
            }
          }
        }
        goto LAB_0010f45c;
      }
      puVar20 = (void *)0x0;
LAB_0010f4bc:
      free(__s);
      free(pcVar11);
      uVar10 = fclose(__stream);
      param_1 = (ulong)uVar10;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return puVar20;
LAB_0010f310:
  pbVar17 = (byte *)"<null>";
  if (sVar15 != 0) {
    pbVar17 = pbVar18;
  }
  __n = 6;
  if (sVar15 != 0) {
    __n = sVar15;
  }
  puVar13 = calloc(1,__n + 0x49);
  if (puVar13 == (void *)0x0) {
    log2Console(4,"eup","Failed to alloc memory for MapInfo.");
  }
  else {
    puVar13[1] = pcVar3;
    if (((((bVar5 && bVar6) && ((param_3 & 1) != 0)) &&
         ((cVar4 == 'x' && ((*pcVar3 == '\x7f' && (pcVar3[1] == 'E')))))) && (pcVar3[2] == 'L')) &&
       (pcVar3[3] == 'F')) {
      uVar14 = get_elf_exec_load_bias();
      puVar13[5] = uVar14;
      pcVar12 = local_80;
    }
    *(bool *)(puVar13 + 8) = bVar5 && bVar6;
    *(bool *)((long)puVar13 + 0x41) = bVar5 && bVar7;
    *(bool *)((long)puVar13 + 0x42) = bVar2;
    puVar13[2] = pcVar12;
    puVar13[3] = uStack_88;
    puVar13[4] = local_90;
    memcpy((void *)((long)puVar13 + 0x43),pbVar17,__n);
    *(undefined1 *)((long)puVar13 + 0x43 + __n) = 0;
    if ((puVar13 != (void *)0x0) &&
       ((puVar20 == (void *)0x0 || (puVar13[1] != *(long *)((long)puVar20 + 8))))) {
      *puVar13 = puVar20;
      puVar20 = puVar13;
    }
  }
LAB_0010f45c:
  memset(__s,0,0x400);
  pcVar12 = fgets(__s,0x400,__stream);
  if (pcVar12 == (char *)0x0) goto LAB_0010f4bc;
  goto LAB_0010f420;
}

