
void lws_add_http_header_status(long param_1,uint param_2,long *param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  void *__src;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined **ppuVar12;
  size_t sVar13;
  long *plVar14;
  char acStack_a4 [60];
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  uVar1 = param_2 & 0xffff;
  uVar5 = uVar1 - 400;
  if (uVar5 < 0x12) {
    ppuVar12 = &PTR_s_Bad_Request_01728020;
LAB_0104b638:
    pcVar6 = ppuVar12[uVar5];
LAB_0104b640:
    pcVar10 = "Redirect";
    if (99 < uVar1 - 300) {
      pcVar10 = pcVar6;
    }
    uVar5 = *(uint *)(param_1 + 0x140);
    if (uVar5 < 3) goto LAB_0104b660;
LAB_0104b6b4:
    pcVar6 = "HTTP/1.0";
  }
  else {
    uVar5 = uVar1 - 500;
    if (uVar5 < 6) {
      ppuVar12 = &PTR_s_Internal_Server_Error_017280b0;
      goto LAB_0104b638;
    }
    pcVar10 = "Continue";
    if (uVar1 != 100) {
      pcVar10 = "";
    }
    pcVar6 = "OK";
    if (uVar1 != 200) {
      pcVar6 = pcVar10;
    }
    if (uVar1 != 0x130) goto LAB_0104b640;
    pcVar10 = "Not Modified";
    uVar5 = *(uint *)(param_1 + 0x140);
    if (2 < uVar5) goto LAB_0104b6b4;
LAB_0104b660:
    pcVar6 = (&PTR_s_HTTP_1_0_01728008)[uVar5];
  }
  iVar3 = sprintf(acStack_a4,"%s %u %s",pcVar6,(ulong)uVar1,pcVar10);
  sVar13 = (size_t)iVar3;
  if (param_4 <= (char *)(*param_3 + sVar13 + 3)) goto LAB_0104b984;
  memcpy((void *)*param_3,acStack_a4,sVar13);
  lVar7 = *param_3;
  *param_3 = (long)((undefined1 *)(lVar7 + sVar13) + 1);
  *(undefined1 *)(lVar7 + sVar13) = 0xd;
  puVar8 = (undefined1 *)*param_3;
  *param_3 = (long)(puVar8 + 1);
  *puVar8 = 10;
  for (plVar14 = *(long **)(*(long *)(param_1 + 0x228) + 0x1a0); plVar14 != (long *)0x0;
      plVar14 = (long *)*plVar14) {
    pcVar10 = (char *)plVar14[2];
    pcVar6 = (char *)plVar14[3];
    sVar13 = strlen(pcVar6);
    if (pcVar10 != (char *)0x0) {
      pcVar9 = (char *)*param_3;
      for (; (pcVar9 < param_4 && (cVar2 = *pcVar10, cVar2 != '\0')); pcVar10 = pcVar10 + 1) {
        *param_3 = (long)(pcVar9 + 1);
        *pcVar9 = cVar2;
        pcVar9 = (char *)*param_3;
      }
      if (pcVar9 == param_4) goto LAB_0104b984;
      *param_3 = (long)(pcVar9 + 1);
      *pcVar9 = ' ';
    }
    sVar13 = (size_t)(int)sVar13;
    if (param_4 <= (char *)(*param_3 + sVar13 + 3)) goto LAB_0104b984;
    memcpy((void *)*param_3,pcVar6,sVar13);
    lVar7 = *param_3;
    *param_3 = (long)((undefined1 *)(lVar7 + sVar13) + 1);
    *(undefined1 *)(lVar7 + sVar13) = 0xd;
    puVar8 = (undefined1 *)*param_3;
    *param_3 = (long)(puVar8 + 1);
    *puVar8 = 10;
  }
  if ((param_2 >> 0x1e & 1) == 0) {
    __src = *(void **)(*(long *)(param_1 + 0x220) + 0x868);
    if (__src == (void *)0x0) goto LAB_0104b89c;
    pcVar10 = (char *)*param_3;
    sVar13 = (size_t)*(short *)(*(long *)(param_1 + 0x220) + 0xcac);
    if (pcVar10 < param_4) {
      pcVar6 = "server:";
      do {
        cVar2 = *pcVar6;
        if (cVar2 == '\0') break;
        *param_3 = (long)(pcVar10 + 1);
        *pcVar10 = cVar2;
        pcVar10 = (char *)*param_3;
        pcVar6 = pcVar6 + 1;
      } while (pcVar10 < param_4);
    }
    if (pcVar10 != param_4) {
      *param_3 = (long)(pcVar10 + 1);
      *pcVar10 = ' ';
      if ((char *)(*param_3 + sVar13 + 3) < param_4) {
        memcpy((void *)*param_3,__src,sVar13);
        lVar7 = *param_3;
        *param_3 = (long)((undefined1 *)(lVar7 + sVar13) + 1);
        *(undefined1 *)(lVar7 + sVar13) = 0xd;
        puVar8 = (undefined1 *)*param_3;
        *param_3 = (long)(puVar8 + 1);
        *puVar8 = 10;
        goto LAB_0104b89c;
      }
    }
  }
  else {
LAB_0104b89c:
    if (-1 < *(char *)(*(long *)(param_1 + 0x228) + 0x1d9)) {
      lVar11 = *(long *)(lVar11 + 0x28);
joined_r0x0104b8bc:
      uVar4 = 0;
      if (lVar11 == local_68) {
        return;
      }
      goto LAB_0104b980;
    }
    pcVar10 = (char *)*param_3;
    if (pcVar10 < param_4) {
      pcVar6 = "Strict-Transport-Security:";
      do {
        cVar2 = *pcVar6;
        if (cVar2 == '\0') break;
        *param_3 = (long)(pcVar10 + 1);
        *pcVar10 = cVar2;
        pcVar10 = (char *)*param_3;
        pcVar6 = pcVar6 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104b94c with catch @ 0104b8f8
                        */
      } while (pcVar10 < param_4);
    }
    if (pcVar10 != param_4) {
      *param_3 = (long)(pcVar10 + 1);
      *pcVar10 = ' ';
      if ((char *)*param_3 + 0x27 < param_4) {
        builtin_strncpy((char *)*param_3,"max-age=15768000 ; includeSubDomains",0x24);
                    /* try { // try from 0104b944 to 0114b94b has its CatchHandler @ 0104bac0 */
        lVar7 = *param_3;
                    /* try { // try from 0104b94c to 0114bac3 has its CatchHandler @ 0104b8f8 */
        *param_3 = lVar7 + 0x25;
        *(undefined1 *)(lVar7 + 0x24) = 0xd;
        puVar8 = (undefined1 *)*param_3;
        *param_3 = (long)(puVar8 + 1);
        *puVar8 = 10;
        lVar11 = *(long *)(lVar11 + 0x28);
        goto joined_r0x0104b8bc;
      }
    }
  }
LAB_0104b984:
  uVar4 = 1;
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
LAB_0104b980:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

