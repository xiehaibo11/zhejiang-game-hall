
undefined4 FUN_00a47728(char *param_1,long *param_2,long *param_3,char *param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  __uid_t __uid;
  FILE *__stream;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  undefined4 uVar12;
  int local_4a4;
  passwd *local_4a0;
  passwd pStack_498;
  char acStack_468 [1024];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((char *)*param_2 == (char *)0x0) {
    bVar4 = false;
    if (param_4 != (char *)0x0) goto LAB_00a47778;
LAB_00a4779c:
    pcVar9 = (char *)FUN_00a451ac(&DAT_013c61d8);
    if (pcVar9 == (char *)0x0) {
                    /* try { // try from 00a47ba4 to 00b47bc3 has its CatchHandler @ 00a47c5c */
      __uid = geteuid();
      uVar7 = getpwuid_r(__uid,&pStack_498,acStack_468,0x400,&local_4a0);
      pcVar11 = (char *)(ulong)uVar7;
      bVar2 = false;
      if ((uVar7 == 0) && (local_4a0 != (passwd *)0x0)) {
        pcVar11 = (char *)(*(code *)PTR_strdup_01769a10)(pStack_498.pw_dir);
        if (pcVar11 == (char *)0x0) {
          uVar12 = 0x1b;
          goto LAB_00a47c28;
        }
        bVar2 = true;
        pcVar9 = pcVar11;
      }
      if (pcVar9 != (char *)0x0) {
                    /* try { // try from 00a47bfc to 00b47c0f has its CatchHandler @ 00a47c58 */
        pcVar11 = (char *)FUN_00a24258("%s%s%s",pcVar9,&DAT_0144b7ba,&DAT_013c61dd);
        pcVar8 = pcVar11;
                    /* try { // try from 00a47c10 to 00b47c77 has its CatchHandler @ 00a47b1c */
        if (bVar2) goto LAB_00a477d4;
        goto LAB_00a477e8;
      }
    }
    else {
      pcVar8 = (char *)FUN_00a24258("%s%s%s",pcVar9,&DAT_0144b7ba,&DAT_013c61dd);
LAB_00a477d4:
      pcVar11 = (char *)(*(code *)PTR_free_01769a00)(pcVar9);
LAB_00a477e8:
      if (pcVar8 == (char *)0x0) {
        uVar12 = 0xffffffff;
        goto LAB_00a47c28;
      }
      __stream = fopen(pcVar8,"r");
      pcVar11 = (char *)(*(code *)PTR_free_01769a00)(pcVar8);
      if (__stream != (FILE *)0x0) goto LAB_00a47818;
    }
LAB_00a47c1c:
    uVar12 = 1;
    goto LAB_00a47c28;
  }
  bVar4 = *(char *)*param_2 != '\0';
  if (param_4 == (char *)0x0) goto LAB_00a4779c;
LAB_00a47778:
  __stream = fopen(param_4,"r");
  if (__stream == (FILE *)0x0) {
    pcVar11 = (char *)0x0;
    goto LAB_00a47c1c;
  }
LAB_00a47818:
  bVar3 = false;
  bVar2 = false;
  iVar5 = 0;
  uVar12 = 1;
  local_4a4 = 0;
  while (pcVar11 = fgets(acStack_468,0x100,__stream), pcVar11 != (char *)0x0) {
    pcVar11 = strtok_r(acStack_468," \t\n",&pStack_498.pw_name);
    if (pcVar11 != (char *)0x0) {
      if (bVar4) {
        do {
          pcVar9 = (char *)*param_2;
          if (((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) &&
             (((char *)*param_3 != (char *)0x0 && (*(char *)*param_3 != '\0')))) goto LAB_00a47b94;
          if (iVar5 == 0) {
            iVar5 = FUN_00a4a0f8("machine",pcVar11);
            if (iVar5 == 0) {
              pcVar8 = "default";
              goto LAB_00a479c4;
            }
            iVar5 = 1;
          }
          else {
            pcVar8 = param_1;
            if (iVar5 == 1) {
LAB_00a479c4:
              iVar6 = FUN_00a4a0f8(pcVar8,pcVar11);
                    /* try { // try from 00a479cc to 00b479d7 has its CatchHandler @ 00a47a30 */
              if (iVar6 != 0) {
                uVar12 = 0;
              }
                    /* try { // try from 00a479d8 to 00b47a9b has its CatchHandler @ 00a47920 */
              iVar5 = 0;
              if (iVar6 != 0) {
                iVar5 = 2;
              }
            }
            else {
                    /* try { // try from 00a47920 to 00b4796f has its CatchHandler @ 00a47920
                       catch() { ... } // from try @ 00a47920 with catch @ 00a47920
                       catch() { ... } // from try @ 00a47980 with catch @ 00a47920
                       catch() { ... } // from try @ 00a479d8 with catch @ 00a47920 */
              if (iVar5 == 2) {
                if (bVar2) {
                  local_4a4 = FUN_00a4a0f8(pcVar9,pcVar11);
                  bVar2 = false;
                  iVar5 = 2;
                }
                else {
                    /* try { // try from 00a47970 to 00b4797f has its CatchHandler @ 00a47a38 */
                  if (bVar3) {
                    if (local_4a4 == 0) {
                      bVar2 = false;
                      bVar3 = false;
                      local_4a4 = 0;
                      iVar5 = 2;
                    }
                    else {
                    /* try { // try from 00a47980 to 00b479cb has its CatchHandler @ 00a47920 */
                      (*(code *)PTR_free_01769a00)(*param_3);
                      lVar10 = (*(code *)PTR_strdup_01769a10)(pcVar11);
                      *param_3 = lVar10;
                      if (lVar10 == 0) goto LAB_00a47c5c;
                      bVar2 = false;
                      bVar3 = false;
                      iVar5 = 2;
                    }
                  }
                  else {
                    iVar5 = FUN_00a4a0f8("login",pcVar11);
                    if (iVar5 == 0) {
                      iVar5 = FUN_00a4a0f8("password",pcVar11);
                      if (iVar5 == 0) {
                        iVar6 = FUN_00a4a0f8("machine",pcVar11);
                        iVar5 = 1;
                        if (iVar6 == 0) {
                          iVar5 = 2;
                        }
                        bVar2 = false;
                        bVar3 = false;
                        if (iVar6 != 0) {
                          local_4a4 = 0;
                        }
                      }
                      else {
                        bVar2 = false;
                        bVar3 = true;
                        iVar5 = 2;
                      }
                    }
                    else {
                      bVar3 = false;
                      bVar2 = true;
                      iVar5 = 2;
                    }
                  }
                }
              }
            }
          }
          pcVar11 = strtok_r((char *)0x0," \t\n",&pStack_498.pw_name);
        } while (pcVar11 != (char *)0x0);
      }
      else {
        do {
                    /* catch() { ... } // from try @ 00a479cc with catch @ 00a47a30 */
                    /* catch() { ... } // from try @ 00a47970 with catch @ 00a47a38 */
          if (((((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 != '\0')) &&
              ((char *)*param_3 != (char *)0x0)) && (*(char *)*param_3 != '\0')) goto LAB_00a47b94;
          if (iVar5 == 2) {
            if (bVar2) {
              (*(code *)PTR_free_01769a00)();
              lVar10 = (*(code *)PTR_strdup_01769a10)(pcVar11);
              *param_2 = lVar10;
              if (lVar10 == 0) goto LAB_00a47c5c;
              bVar2 = false;
            }
            else if (bVar3) {
              (*(code *)PTR_free_01769a00)(*param_3);
              lVar10 = (*(code *)PTR_strdup_01769a10)(pcVar11);
              *param_3 = lVar10;
              if (lVar10 == 0) goto LAB_00a47c5c;
                    /* try { // try from 00a47b1c to 00b47ba3 has its CatchHandler @ 00a47b1c
                       catch() { ... } // from try @ 00a47b1c with catch @ 00a47b1c
                       catch() { ... } // from try @ 00a47c10 with catch @ 00a47b1c */
              bVar2 = false;
              bVar3 = false;
            }
            else {
              iVar5 = FUN_00a4a0f8("login",pcVar11);
              if (iVar5 == 0) {
                iVar5 = FUN_00a4a0f8("password",pcVar11);
                if (iVar5 == 0) {
                  iVar6 = FUN_00a4a0f8("machine",pcVar11);
                  iVar5 = 1;
                  if (iVar6 == 0) {
                    iVar5 = 2;
                  }
                  bVar2 = false;
                  bVar3 = false;
                  if (iVar6 != 0) {
                    local_4a4 = 0;
                  }
                  goto LAB_00a47b68;
                }
                bVar2 = false;
                bVar3 = true;
              }
              else {
                bVar3 = false;
                bVar2 = true;
              }
            }
            iVar5 = 2;
          }
          else {
            pcVar9 = param_1;
            if (iVar5 == 1) {
LAB_00a47ac8:
              iVar6 = FUN_00a4a0f8(pcVar9,pcVar11);
              if (iVar6 != 0) {
                uVar12 = 0;
              }
              iVar5 = 0;
              if (iVar6 != 0) {
                iVar5 = 2;
              }
            }
            else if (iVar5 == 0) {
              iVar5 = FUN_00a4a0f8("machine",pcVar11);
              if (iVar5 == 0) {
                pcVar9 = "default";
                goto LAB_00a47ac8;
              }
              iVar5 = 1;
            }
          }
LAB_00a47b68:
          pcVar11 = strtok_r((char *)0x0," \t\n",&pStack_498.pw_name);
        } while (pcVar11 != (char *)0x0);
      }
    }
  }
  goto LAB_00a47b94;
LAB_00a47c5c:
                    /* catch() { ... } // from try @ 00a47ba4 with catch @ 00a47c5c */
  uVar12 = 0xffffffff;
LAB_00a47b94:
  uVar7 = fclose(__stream);
  pcVar11 = (char *)(ulong)uVar7;
LAB_00a47c28:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar11);
  }
                    /* catch() { ... } // from try @ 00a47bfc with catch @ 00a47c58 */
  return uVar12;
}

