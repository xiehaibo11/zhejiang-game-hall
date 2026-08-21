
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
LAB_00ab3448:
    if (((int)param_1[2] == 0) || ((int)param_1[1] + 7 < *(int *)((long)param_1 + 0xc))) {
                    /* try { // try from 00ab346c to 00bb3473 has its CatchHandler @ 00ab35d4 */
      iVar5 = sprintf(acStack_88,"%X\r\n");
                    /* try { // try from 00ab3474 to 00bb35d7 has its CatchHandler @ 00ab3420 */
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
LAB_00ab34e0:
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
        goto LAB_00ab34e0;
      }
      iVar11 = (int)param_2[3];
      if (iVar11 != 0) goto LAB_00ab32c8;
      if (*pcVar17 == '$') break;
      pcVar17 = pcVar17 + 1;
      iVar11 = iVar14 + -6;
      iVar14 = iVar14 + 1;
      *(int *)(param_1 + 1) = iVar11;
      if (pcVar9 + lVar12 <= pcVar17) goto LAB_00ab3448;
    }
    iVar11 = 0;
    *param_2 = (ulong)pcVar17;
LAB_00ab32c8:
    cVar2 = *pcVar17;
    *(int *)(param_2 + 3) = iVar11 + 1;
    *(char *)((long)param_2 + (long)iVar11 + 8) = cVar2;
    sVar13 = (size_t)(int)param_2[3];
    if (((int)param_2[3] == 0xf) || (uVar10 = param_2[6], (int)uVar10 < 1)) {
LAB_00ab33a4:
      *(undefined1 *)((long)param_2 + sVar13 + 8) = 0;
      memcpy((void *)*param_2,param_2 + 1,(long)(int)param_2[3]);
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      pcVar17 = (char *)*param_2;
LAB_00ab33cc:
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
      if (iVar14 == 0) goto LAB_00ab33a4;
      if ((iVar14 == 1) &&
         (sVar6 = strlen(*(char **)(param_2[5] + (long)iVar11 * 8)), sVar6 == sVar13)) {
        pcVar7 = (char *)(*(code *)param_2[7])(param_2[4],iVar11);
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab3474 with catch @ 00ab3420
                        */
        memcpy((void *)*param_2,pcVar9,(long)iVar14);
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        pcVar17 = (char *)(*param_2 + 1);
        goto LAB_00ab33cc;
      }
    }
    pcVar9 = (char *)*param_1;
    lVar12 = (long)iVar5;
    pcVar17 = pcVar17 + 1;
    if (pcVar9 + lVar12 <= pcVar17) goto LAB_00ab3448;
    iVar14 = (int)param_1[1];
  } while( true );
}

