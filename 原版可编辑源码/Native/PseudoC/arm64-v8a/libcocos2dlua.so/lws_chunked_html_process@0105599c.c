
void lws_chunked_html_process(ulong *param_1,ulong *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  size_t sVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  char *pcVar17;
  char acStack_88 [32];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar5 = (int)param_1[1];
  pcVar9 = (char *)*param_1;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_2 = (ulong)pcVar9;
  if (iVar5 < 1) {
LAB_01055bcc:
    if (((int)param_1[2] == 0) || ((int)param_1[1] + 7 < *(int *)((long)param_1 + 0xc))) {
      iVar5 = sprintf(acStack_88,"%X\r\n");
      uVar10 = *param_1;
      sVar13 = (size_t)iVar5;
      *param_1 = uVar10 - sVar13;
      memcpy((void *)(uVar10 - sVar13),acStack_88,sVar13);
      uVar10 = param_1[2];
      lVar12 = (long)(int)param_1[1] + sVar13;
      *(int *)(param_1 + 1) = (int)lVar12;
      puVar1 = (undefined2 *)(*param_1 + lVar12);
      *puVar1 = 0xa0d;
      if ((int)uVar10 == 0) {
        iVar5 = 2;
      }
      else {
        *(undefined4 *)(puVar1 + 1) = 0xd0a0d30;
        *(undefined1 *)(puVar1 + 3) = 10;
        iVar5 = 7;
      }
      uVar8 = 0;
      *(int *)(param_1 + 1) = (int)param_1[1] + iVar5;
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
    }
    else {
LAB_01055c64:
      uVar8 = 0xffffffff;
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  iVar14 = 0;
  lVar12 = (long)iVar5;
  pcVar17 = pcVar9;
  do {
    iVar14 = iVar14 + 7;
    while( true ) {
      if (*(int *)((long)param_1 + 0xc) <= iVar14) {
        _lws_log(1,"Used up interpret padding\n");
        goto LAB_01055c64;
      }
      iVar11 = (int)param_2[3];
      if (iVar11 != 0) goto LAB_01055a4c;
      if (*pcVar17 == '$') break;
      pcVar17 = pcVar17 + 1;
      iVar11 = iVar14 + -6;
                    /* try { // try from 01055a30 to 01155a3b has its CatchHandler @ 01055aec */
      iVar14 = iVar14 + 1;
      *(int *)(param_1 + 1) = iVar11;
                    /* try { // try from 01055a3c to 01155b07 has its CatchHandler @ 01055990 */
      if (pcVar9 + lVar12 <= pcVar17) goto LAB_01055bcc;
    }
    iVar11 = 0;
    *param_2 = (ulong)pcVar17;
LAB_01055a4c:
    cVar2 = *pcVar17;
    *(int *)(param_2 + 3) = iVar11 + 1;
    *(char *)((long)param_2 + (long)iVar11 + 8) = cVar2;
    sVar13 = (size_t)(int)param_2[3];
    if (((int)param_2[3] == 0xf) || (uVar10 = param_2[6], (int)uVar10 < 1)) {
LAB_01055b28:
      *(undefined1 *)((long)param_2 + sVar13 + 8) = 0;
      memcpy((void *)*param_2,param_2 + 1,(long)(int)param_2[3]);
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      pcVar17 = (char *)*param_2;
LAB_01055b50:
      *(undefined4 *)(param_2 + 3) = 0;
    }
    else {
      uVar16 = param_2[5];
      lVar15 = 0;
      iVar11 = 0;
      iVar14 = 0;
      do {
        iVar4 = strncmp((char *)(param_2 + 1),*(char **)(uVar16 + lVar15 * 8),sVar13);
        if (iVar4 == 0) {
          iVar14 = iVar14 + 1;
          iVar11 = (int)lVar15;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)uVar10);
      if (iVar14 == 0) goto LAB_01055b28;
      if ((iVar14 == 1) &&
         (sVar6 = strlen(*(char **)(param_2[5] + (long)iVar11 * 8)), sVar6 == sVar13)) {
        pcVar7 = (char *)(*(code *)param_2[7])(param_2[4],iVar11);
                    /* catch() { ... } // from try @ 01055a30 with catch @ 01055aec */
        pcVar9 = "NULL";
        if (pcVar7 != (char *)0x0) {
          pcVar9 = pcVar7;
        }
        sVar13 = strlen(pcVar9);
        *(undefined1 *)((long)param_2 + (long)(int)param_2[3] + 8) = 0;
        iVar14 = (int)sVar13;
        if ((int)param_2[3] != iVar14) {
          memmove((void *)(*param_2 + (long)iVar14),(void *)(*param_2 + (long)(int)param_2[3]),
                  (lVar12 - (long)pcVar17) + *param_1);
          iVar5 = (iVar5 + iVar14 + 1) - (int)param_2[3];
        }
        memcpy((void *)*param_2,pcVar9,(long)iVar14);
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        pcVar17 = (char *)(*param_2 + 1);
        goto LAB_01055b50;
      }
    }
    pcVar9 = (char *)*param_1;
    lVar12 = (long)iVar5;
    pcVar17 = pcVar17 + 1;
    if (pcVar9 + lVar12 <= pcVar17) goto LAB_01055bcc;
    iVar14 = (int)param_1[1];
  } while( true );
}

