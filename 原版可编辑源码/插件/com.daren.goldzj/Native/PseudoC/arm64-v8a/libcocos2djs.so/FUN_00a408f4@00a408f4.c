
/* WARNING: Removing unreachable block (ram,0x00a40d38) */
/* WARNING: Removing unreachable block (ram,0x00a40c78) */

int FUN_00a408f4(long *param_1,ulong param_2)

{
  int iVar1;
  __uid_t __uid;
  __pid_t _Var2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  passwd *local_4a8;
  passwd pStack_4a0;
  int local_470;
  int local_46c;
  char acStack_468 [1024];
  long local_68;
  
                    /* try { // try from 00a408f4 to 00b409d7 has its CatchHandler @ 00a4072c */
  lVar13 = tpidr_el0;
  local_68 = *(long *)(lVar13 + 0x28);
  if ((param_2 & 1) == 0) {
    lVar9 = *param_1;
    plVar14 = param_1 + 0x87;
    plVar8 = param_1 + 0x43;
    plVar15 = param_1 + 0x96;
    lVar11 = 0x8bf8;
  }
  else {
    lVar9 = *param_1;
    plVar14 = param_1 + 0x84;
    plVar8 = param_1 + 0x31;
    plVar15 = param_1 + 0x9a;
    lVar11 = 0x8c18;
  }
  lVar9 = lVar9 + lVar11;
  pcVar10 = (char *)*plVar8;
  *(undefined1 *)(lVar9 + 0x18) = 0;
                    /* catch() { ... } // from try @ 00a407ac with catch @ 00a40968 */
                    /* catch() { ... } // from try @ 00a407a0 with catch @ 00a4096c */
  pcVar7 = "";
                    /* catch() { ... } // from try @ 00a40780 with catch @ 00a40970 */
  pcVar3 = pcVar7;
  if (pcVar10 != (char *)0x0) {
    pcVar3 = pcVar10;
  }
  if ((int)*plVar15 == 2) {
    lVar11 = FUN_00a0e870("TT %s\n",param_1[0x9f]);
    if (lVar11 == 0) {
      iVar1 = 0x1b;
    }
    else {
      iVar1 = FUN_00a40e7c(param_1,lVar11,(int)*plVar15);
                    /* try { // try from 00a409d8 to 00b40a2b has its CatchHandler @ 00a409d8
                       catch() { ... } // from try @ 00a409d8 with catch @ 00a409d8
                       catch() { ... } // from try @ 00a40b9c with catch @ 00a409d8 */
      (*(code *)PTR_free_01d1b748)(lVar11);
      if (iVar1 == 0) {
        (*(code *)PTR_free_01d1b748)(*plVar14);
        pcVar3 = "Proxy-";
        if ((param_2 & 1) == 0) {
          pcVar3 = pcVar7;
        }
        lVar11 = FUN_00a0e870("%sAuthorization: %s\r\n",pcVar3,param_1[0xa0]);
        *plVar14 = lVar11;
                    /* try { // try from 00a40a2c to 00b40a43 has its CatchHandler @ 00a40c18 */
        *(int *)plVar15 = 3;
        *(undefined1 *)(lVar9 + 0x18) = 1;
        FUN_00a407d8(param_1);
      }
    }
    goto LAB_00a40acc;
  }
                    /* catch() { ... } // from try @ 00a407b8 with catch @ 00a40980 */
  if ((int)*plVar15 == 3) {
    (*(code *)PTR_free_01d1b748)(*plVar14);
    iVar1 = 0;
    *plVar14 = 0;
    *(undefined1 *)(lVar9 + 0x18) = 1;
    goto LAB_00a40acc;
  }
                    /* try { // try from 00a40a4c to 00b40a57 has its CatchHandler @ 00a40c14 */
  if (((int)param_1[0x9e] == -1) && (*(int *)((long)param_1 + 0x4f4) == 0)) {
    if (*pcVar3 == '\0') {
      pcVar10 = getenv("NTLMUSER");
                    /* try { // try from 00a40b9c to 00b40c7f has its CatchHandler @ 00a409d8 */
      if ((((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) &&
          ((pcVar10 = getenv("LOGNAME"), pcVar10 == (char *)0x0 || (*pcVar10 == '\0')))) &&
         ((pcVar4 = getenv("USER"), pcVar4 == (char *)0x0 || (pcVar10 = pcVar4, *pcVar4 == '\0'))))
      {
        __uid = geteuid();
        iVar1 = getpwuid_r(__uid,&pStack_4a0,acStack_468,0x400,&local_4a8);
        pcVar10 = pStack_4a0.pw_name;
        if (local_4a8 == (passwd *)0x0 || iVar1 != 0) {
          pcVar10 = pcVar4;
        }
        if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) goto LAB_00a40b08;
      }
    }
    else {
LAB_00a40b08:
      pcVar10 = pcVar3;
    }
    pcVar3 = strpbrk(pcVar10,"\\/");
    if (pcVar3 == (char *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (*(code *)PTR_strdup_01d1b758)(pcVar10);
      if (lVar9 == 0) {
        iVar1 = 0x1b;
        goto LAB_00a40acc;
      }
      pcVar3[lVar9 - (long)pcVar10] = '\0';
      pcVar10 = pcVar3 + 1;
    }
    iVar1 = access("/usr/bin/ntlm_auth",1);
    if (iVar1 == 0) {
      iVar1 = socketpair(1,1,0,&local_470);
      if (iVar1 == 0) {
        _Var2 = fork();
                    /* try { // try from 00a40c80 to 00b40cd7 has its CatchHandler @ 00a40c80
                       catch() { ... } // from try @ 00a40c80 with catch @ 00a40c80
                       catch() { ... } // from try @ 00a40e38 with catch @ 00a40c80 */
        if (_Var2 != -1) {
          if (_Var2 == 0) {
            close(local_470);
            iVar1 = dup2(local_46c,0);
            if (iVar1 == -1) {
              puVar5 = (undefined4 *)__errno();
              uVar12 = *puVar5;
              lVar13 = *param_1;
              uVar6 = FUN_00a155d4(param_1,uVar12);
              pcVar7 = "Could not redirect child stdin. errno %d: %s";
            }
            else {
              iVar1 = dup2(local_46c,1);
              if (iVar1 == -1) {
                puVar5 = (undefined4 *)__errno();
                uVar12 = *puVar5;
                lVar13 = *param_1;
                uVar6 = FUN_00a155d4(param_1,uVar12);
                pcVar7 = "Could not redirect child stdout. errno %d: %s";
              }
              else {
                if (lVar9 == 0) {
                  pcVar7 = (char *)0x0;
                }
                else {
                  pcVar7 = "--domain";
                }
                    /* try { // try from 00a40e38 to 00b40f1f has its CatchHandler @ 00a40c80 */
                iVar1 = execl("/usr/bin/ntlm_auth","/usr/bin/ntlm_auth","--helper-protocol",
                              "ntlmssp-client-1","--use-cached-creds","--username",pcVar10,pcVar7);
                puVar5 = (undefined4 *)__errno(iVar1);
                uVar12 = *puVar5;
                close(local_46c);
                lVar13 = *param_1;
                uVar6 = FUN_00a155d4(param_1,uVar12);
                pcVar7 = "Could not execl(). errno %d: %s";
              }
            }
            FUN_00a23020(lVar13,pcVar7,uVar12,uVar6);
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          close(local_46c);
          *(__pid_t *)((long)param_1 + 0x4f4) = _Var2;
          *(int *)(param_1 + 0x9e) = local_470;
          (*(code *)PTR_free_01d1b748)(lVar9);
          (*(code *)PTR_free_01d1b748)(0);
          goto LAB_00a40a5c;
        }
        puVar5 = (undefined4 *)__errno();
        uVar12 = *puVar5;
                    /* try { // try from 00a40cd8 to 00b40cef has its CatchHandler @ 00a40eb8 */
        close(local_470);
        close(local_46c);
        lVar11 = *param_1;
        uVar6 = FUN_00a155d4(param_1,uVar12);
                    /* try { // try from 00a40cf8 to 00b40d03 has its CatchHandler @ 00a40eb4 */
        pcVar7 = "Could not fork. errno %d: %s";
      }
      else {
        puVar5 = (undefined4 *)__errno();
        uVar12 = *puVar5;
        lVar11 = *param_1;
        uVar6 = FUN_00a155d4(param_1,uVar12);
        pcVar7 = "Could not open socket pair. errno %d: %s";
      }
                    /* try { // try from 00a40d04 to 00b40d0f has its CatchHandler @ 00a40eb0 */
      FUN_00a23020(lVar11,pcVar7,uVar12,uVar6);
    }
    else {
      puVar5 = (undefined4 *)__errno();
      uVar12 = *puVar5;
      lVar11 = *param_1;
      uVar6 = FUN_00a155d4(param_1,uVar12);
                    /* catch() { ... } // from try @ 00a40a58 with catch @ 00a40c10 */
                    /* catch() { ... } // from try @ 00a40a4c with catch @ 00a40c14 */
                    /* catch() { ... } // from try @ 00a40a2c with catch @ 00a40c18 */
                    /* catch() { ... } // from try @ 00a40a64 with catch @ 00a40c28 */
      FUN_00a23020(lVar11,"Could not access ntlm_auth: %s errno %d: %s","/usr/bin/ntlm_auth",uVar12,
                   uVar6);
    }
                    /* try { // try from 00a40d10 to 00b40e37 has its CatchHandler @ 00a40ec8 */
    (*(code *)PTR_free_01d1b748)(lVar9);
    (*(code *)PTR_free_01d1b748)(0);
    iVar1 = 9;
  }
  else {
LAB_00a40a5c:
                    /* try { // try from 00a40a64 to 00b40b9b has its CatchHandler @ 00a40c28 */
    iVar1 = FUN_00a40e7c(param_1,&DAT_0189692d,(int)*plVar15);
    if (iVar1 == 0) {
      (*(code *)PTR_free_01d1b748)(*plVar14);
      pcVar3 = "Proxy-";
      if ((param_2 & 1) == 0) {
        pcVar3 = pcVar7;
      }
      lVar9 = FUN_00a0e870("%sAuthorization: %s\r\n",pcVar3,param_1[0xa0]);
      *plVar14 = lVar9;
      (*(code *)PTR_free_01d1b748)(param_1[0xa0]);
      iVar1 = 0;
      param_1[0xa0] = 0;
    }
  }
LAB_00a40acc:
  if (*(long *)(lVar13 + 0x28) == local_68) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

