
undefined4 FUN_00a30d40(char *param_1,long *param_2,long *param_3,char *param_4)

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
    if (param_4 != (char *)0x0) goto LAB_00a30d90;
LAB_00a30db4:
    pcVar9 = (char *)FUN_00a2e7c4(&DAT_0189389a);
    if (pcVar9 == (char *)0x0) {
      __uid = geteuid();
      uVar7 = getpwuid_r(__uid,&pStack_498,acStack_468,0x400,&local_4a0);
      pcVar11 = (char *)(ulong)uVar7;
      bVar2 = false;
      if ((uVar7 == 0) && (local_4a0 != (passwd *)0x0)) {
        pcVar11 = (char *)(*(code *)PTR_strdup_01d1b758)(pStack_498.pw_dir);
        if (pcVar11 == (char *)0x0) {
          uVar12 = 0x1b;
          goto LAB_00a31240;
        }
        bVar2 = true;
        pcVar9 = pcVar11;
      }
      if (pcVar9 != (char *)0x0) {
        pcVar11 = (char *)FUN_00a0e870("%s%s%s",pcVar9,"/",".netrc");
        pcVar8 = pcVar11;
        if (bVar2) goto LAB_00a30dec;
        goto LAB_00a30e00;
      }
    }
    else {
      pcVar8 = (char *)FUN_00a0e870("%s%s%s",pcVar9,"/",".netrc");
LAB_00a30dec:
      pcVar11 = (char *)(*(code *)PTR_free_01d1b748)(pcVar9);
LAB_00a30e00:
      if (pcVar8 == (char *)0x0) {
        uVar12 = 0xffffffff;
        goto LAB_00a31240;
      }
      __stream = fopen(pcVar8,"r");
                    /* catch() { ... } // from try @ 00a30ab8 with catch @ 00a30e18 */
      pcVar11 = (char *)(*(code *)PTR_free_01d1b748)(pcVar8);
      if (__stream != (FILE *)0x0) goto LAB_00a30e30;
    }
LAB_00a31234:
    uVar12 = 1;
    goto LAB_00a31240;
  }
  bVar4 = *(char *)*param_2 != '\0';
  if (param_4 == (char *)0x0) goto LAB_00a30db4;
LAB_00a30d90:
  __stream = fopen(param_4,"r");
  if (__stream == (FILE *)0x0) {
    pcVar11 = (char *)0x0;
    goto LAB_00a31234;
  }
LAB_00a30e30:
                    /* try { // try from 00a30e34 to 00b30e87 has its CatchHandler @ 00a30e34
                       catch() { ... } // from try @ 00a30e34 with catch @ 00a30e34
                       catch() { ... } // from try @ 00a30fec with catch @ 00a30e34 */
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
             (((char *)*param_3 != (char *)0x0 && (*(char *)*param_3 != '\0')))) goto LAB_00a311ac;
          if (iVar5 == 0) {
            iVar5 = FUN_00a33710("machine",pcVar11);
            if (iVar5 == 0) {
              pcVar8 = "default";
              goto LAB_00a30fdc;
            }
            iVar5 = 1;
          }
          else {
            pcVar8 = param_1;
            if (iVar5 == 1) {
LAB_00a30fdc:
              iVar6 = FUN_00a33710(pcVar8,pcVar11);
                    /* try { // try from 00a30fec to 00b310cf has its CatchHandler @ 00a30e34 */
              if (iVar6 != 0) {
                uVar12 = 0;
              }
              iVar5 = 0;
              if (iVar6 != 0) {
                iVar5 = 2;
              }
            }
            else if (iVar5 == 2) {
              if (bVar2) {
                local_4a4 = FUN_00a33710(pcVar9,pcVar11);
                bVar2 = false;
                iVar5 = 2;
              }
              else if (bVar3) {
                if (local_4a4 == 0) {
                  bVar2 = false;
                  bVar3 = false;
                    /* try { // try from 00a30ea8 to 00b30eb3 has its CatchHandler @ 00a31064 */
                  local_4a4 = 0;
                  iVar5 = 2;
                }
                else {
                  (*(code *)PTR_free_01d1b748)(*param_3);
                  lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar11);
                  *param_3 = lVar10;
                  if (lVar10 == 0) goto LAB_00a31274;
                  bVar2 = false;
                  bVar3 = false;
                  iVar5 = 2;
                }
              }
              else {
                    /* try { // try from 00a30e88 to 00b30e9f has its CatchHandler @ 00a31068 */
                iVar5 = FUN_00a33710("login",pcVar11);
                if (iVar5 == 0) {
                    /* try { // try from 00a30eb4 to 00b30ebf has its CatchHandler @ 00a31060 */
                    /* try { // try from 00a30ec0 to 00b30feb has its CatchHandler @ 00a31078 */
                  iVar5 = FUN_00a33710("password",pcVar11);
                  if (iVar5 == 0) {
                    iVar6 = FUN_00a33710("machine",pcVar11);
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
          pcVar11 = strtok_r((char *)0x0," \t\n",&pStack_498.pw_name);
        } while (pcVar11 != (char *)0x0);
      }
      else {
        do {
                    /* catch() { ... } // from try @ 00a30eb4 with catch @ 00a31060 */
          if (((((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 != '\0')) &&
              ((char *)*param_3 != (char *)0x0)) && (*(char *)*param_3 != '\0')) goto LAB_00a311ac;
                    /* catch() { ... } // from try @ 00a30ea8 with catch @ 00a31064 */
                    /* catch() { ... } // from try @ 00a30e88 with catch @ 00a31068 */
          if (iVar5 == 2) {
            if (bVar2) {
              (*(code *)PTR_free_01d1b748)();
              lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar11);
              *param_2 = lVar10;
              if (lVar10 == 0) goto LAB_00a31274;
              bVar2 = false;
            }
            else if (bVar3) {
              (*(code *)PTR_free_01d1b748)(*param_3);
                    /* try { // try from 00a31124 to 00b3113b has its CatchHandler @ 00a31304 */
              lVar10 = (*(code *)PTR_strdup_01d1b758)(pcVar11);
              *param_3 = lVar10;
              if (lVar10 == 0) goto LAB_00a31274;
              bVar2 = false;
              bVar3 = false;
            }
            else {
                    /* try { // try from 00a31144 to 00b3114f has its CatchHandler @ 00a31300 */
              iVar5 = FUN_00a33710("login",pcVar11);
                    /* try { // try from 00a31150 to 00b3115b has its CatchHandler @ 00a312fc */
              if (iVar5 == 0) {
                iVar5 = FUN_00a33710("password",pcVar11);
                if (iVar5 == 0) {
                  iVar6 = FUN_00a33710("machine",pcVar11);
                  iVar5 = 1;
                  if (iVar6 == 0) {
                    iVar5 = 2;
                  }
                  bVar2 = false;
                  bVar3 = false;
                  if (iVar6 != 0) {
                    local_4a4 = 0;
                  }
                  goto LAB_00a31180;
                }
                bVar2 = false;
                bVar3 = true;
              }
              else {
                bVar3 = false;
                bVar2 = true;
                    /* try { // try from 00a3115c to 00b31287 has its CatchHandler @ 00a31314 */
              }
            }
            iVar5 = 2;
          }
          else {
            pcVar9 = param_1;
            if (iVar5 == 1) {
LAB_00a310e0:
              iVar6 = FUN_00a33710(pcVar9,pcVar11);
              if (iVar6 != 0) {
                uVar12 = 0;
              }
              iVar5 = 0;
              if (iVar6 != 0) {
                iVar5 = 2;
              }
            }
            else if (iVar5 == 0) {
                    /* catch() { ... } // from try @ 00a30ec0 with catch @ 00a31078 */
              iVar5 = FUN_00a33710("machine",pcVar11);
              if (iVar5 == 0) {
                pcVar9 = "default";
                goto LAB_00a310e0;
              }
              iVar5 = 1;
            }
          }
LAB_00a31180:
          pcVar11 = strtok_r((char *)0x0," \t\n",&pStack_498.pw_name);
        } while (pcVar11 != (char *)0x0);
      }
    }
  }
  goto LAB_00a311ac;
LAB_00a31274:
  uVar12 = 0xffffffff;
LAB_00a311ac:
  uVar7 = fclose(__stream);
  pcVar11 = (char *)(ulong)uVar7;
LAB_00a31240:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar11);
  }
  return uVar12;
}

