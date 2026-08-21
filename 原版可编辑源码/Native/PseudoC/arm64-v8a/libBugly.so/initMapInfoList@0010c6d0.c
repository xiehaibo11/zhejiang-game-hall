
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initMapInfoList(uint param_1,char param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *__s;
  FILE *__stream;
  char *pcVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  byte *pbVar12;
  size_t __size;
  undefined8 *puVar13;
  char *pcVar14;
  undefined1 uVar15;
  char *__src;
  byte bVar16;
  int local_34;
  char *local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  char local_10;
  char local_f;
  char local_e;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((int)param_1 < 2) {
    puVar13 = (void *)0x0;
  }
  else {
    puVar13 = (void *)0x0;
    pcVar6 = calloc(1,0x100);
    __s = calloc(1,0x400);
    sprintf(pcVar6,"/proc/%d/maps",(ulong)param_1);
    log2Console(4,"CrashReport-Native","Create map list by maps file: %s",pcVar6);
    __stream = fopen(pcVar6,"r");
    if (__stream == (FILE *)0x0) {
      piVar11 = (int *)__errno();
      pcVar6 = strerror(*piVar11);
      log2Console(4,"CrashReport-Native","Failed to open maps file for: %s",pcVar6);
      puVar13 = (void *)0x0;
    }
    else {
      while (pcVar7 = fgets(__s,0x400,__stream), pcVar7 != (char *)0x0) {
        if ((__s != (char *)0x0) && (sVar8 = strlen(__s), 0x31 < sVar8)) {
          log2Console(3,"CrashReport-Native","Parsing line: %s",__s);
          pcVar7 = strchr(__s,0x28);
          if (pcVar7 == (char *)0x0) {
            iVar4 = sscanf(__s,"%lx-%lx %4s %lx %*x:%*x %lu%n",&local_30,&local_28,&local_10,
                           &local_20,&local_18,&local_34);
            if (iVar4 == 5) {
              sVar8 = strlen(&local_10);
              pcVar14 = local_28;
              pcVar7 = local_30;
              if (sVar8 == 4) {
                if (local_10 == 'r') {
                  bVar2 = 1;
                  if (local_f == 'w') goto LAB_0010ca5c;
                  uVar15 = 0;
                  bVar2 = 1;
                }
                else if (local_f == 'w') {
                  bVar2 = 0;
LAB_0010ca5c:
                  uVar15 = 1;
                }
                else {
                  uVar15 = 0;
                  bVar2 = 0;
                }
                if (local_e != 'x') goto LAB_0010c864;
                bVar1 = 1;
              }
              else {
                uVar15 = 0;
                bVar2 = 0;
LAB_0010c864:
                if (param_2 != '\0') goto LAB_0010c7b8;
                bVar1 = 0;
              }
              if ((local_30 != (char *)0x0) && (local_30 != local_28)) {
                pbVar12 = (byte *)(__s + local_34);
                iVar4 = local_34;
                do {
                  local_34 = iVar4;
                  __src = (char *)pbVar12;
                  iVar4 = local_34 + 1;
                  bVar16 = *__src;
                  iVar5 = isspace((uint)bVar16);
                  pbVar12 = (byte *)(__src + 1);
                } while (iVar5 != 0);
                if (bVar16 == 0) {
LAB_0010c964:
                  __size = 0x4f;
                  sVar8 = 6;
                  __src = "<null>";
                }
                else {
                  sVar8 = 0;
                  do {
                    bVar3 = bVar16 != 10;
                    bVar16 = *pbVar12;
                    if (bVar3) {
                      sVar8 = sVar8 + 1;
                    }
                    pbVar12 = pbVar12 + 1;
                  } while (bVar16 != 0);
                  __size = sVar8 + 0x49;
                  if (sVar8 == 0) goto LAB_0010c964;
                }
                puVar9 = calloc(1,__size);
                if (puVar9 == (void *)0x0) {
                  log2Console(4,"CrashReport-Native","Failed to alloc memory for MapInfo.");
                }
                else {
                  puVar9[1] = pcVar7;
                  if ((((((bool)(bVar2 & bVar1)) && (param_3 != '\0')) && (*pcVar7 == '\x7f')) &&
                      ((pcVar7[1] == 'E' && (pcVar7[2] == 'L')))) && (pcVar7[3] == 'F')) {
                    uVar10 = get_elf_exec_load_bias(pcVar7);
                    puVar9[5] = uVar10;
                    pcVar14 = local_28;
                  }
                  puVar9[3] = local_20;
                  puVar9[2] = pcVar14;
                  puVar9[4] = local_18;
                  *(byte *)(puVar9 + 8) = bVar2;
                  *(undefined1 *)((long)puVar9 + 0x41) = uVar15;
                  *(byte *)((long)puVar9 + 0x42) = bVar1;
                  memcpy((void *)((long)puVar9 + 0x43),__src,sVar8);
                  *(undefined1 *)((long)puVar9 + sVar8 + 0x43) = 0;
                  if ((puVar13 == (void *)0x0) || (puVar9[1] != *(long *)((long)puVar13 + 8))) {
                    *puVar9 = puVar13;
                    puVar13 = puVar9;
                  }
                }
              }
            }
            else {
              log2Console(5,"CrashReport-Native","Failed to parse the line of maps file.");
            }
          }
        }
LAB_0010c7b8:
        memset(__s,0,0x400);
      }
      free(__s);
      free(pcVar6);
      fclose(__stream);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar13);
  }
  return;
}

