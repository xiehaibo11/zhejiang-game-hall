
undefined4 png_set_text_2(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  char *pcVar7;
  size_t __n;
  void *pvVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 *puVar14;
  size_t __n_00;
  long *plVar15;
  undefined8 *puVar16;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_4 < 1) {
    return 0;
  }
  iVar3 = *(int *)(param_2 + 0x94);
  if (*(int *)(param_2 + 0x98) - iVar3 < param_4) {
                    /* try { // try from 010d4524 to 011d452f has its CatchHandler @ 010d521c */
    if (param_4 <= 0x7fffffff - iVar3) {
                    /* try { // try from 010d4530 to 011d459b has its CatchHandler @ 010d4230 */
      uVar1 = iVar3 + param_4 + 8U & 0xfffffff8;
      if (0x7ffffff6 < iVar3 + param_4) {
        uVar1 = 0x7fffffff;
      }
      lVar4 = png_realloc_array(param_1,*(undefined8 *)(param_2 + 0xa0),iVar3,uVar1 - iVar3,0x38);
      if (lVar4 != 0) {
        png_free(param_1,*(undefined8 *)(param_2 + 0xa0));
        *(long *)(param_2 + 0xa0) = lVar4;
        *(uint *)(param_2 + 0x98) = uVar1;
        *(uint *)(param_2 + 0x11c) = *(uint *)(param_2 + 0x11c) | 0x4000;
        goto LAB_010d4584;
      }
    }
    pcVar7 = "too many text chunks";
LAB_010d47cc:
    uVar12 = 1;
                    /* try { // try from 010d47d0 to 011d47db has its CatchHandler @ 010d5204 */
    png_chunk_report(param_1,pcVar7,1);
  }
  else {
LAB_010d4584:
    if (0 < param_4) {
      lVar4 = 0;
      puVar16 = (undefined8 *)(param_3 + 0x30);
                    /* try { // try from 010d459c to 011d45a7 has its CatchHandler @ 010d5218 */
      do {
                    /* try { // try from 010d45a8 to 011d4613 has its CatchHandler @ 010d4230 */
        if ((char *)puVar16[-5] != (char *)0x0) {
          iVar3 = *(int *)(puVar16 + -6);
          if (iVar3 + 1U < 4) {
            lVar11 = *(long *)(param_2 + 0xa0);
            lVar10 = (long)*(int *)(param_2 + 0x94);
            piVar9 = (int *)(lVar11 + lVar10 * 0x38);
            sVar5 = strlen((char *)puVar16[-5]);
            if (iVar3 < 1) {
              sVar6 = 0;
LAB_010d461c:
              __n_00 = 0;
                    /* try { // try from 010d4620 to 011d468b has its CatchHandler @ 010d4230 */
              pcVar7 = (char *)puVar16[-4];
              if (pcVar7 == (char *)0x0) goto LAB_010d4660;
LAB_010d4628:
              if (*pcVar7 == '\0') goto LAB_010d4660;
              __n = strlen(pcVar7);
              *piVar9 = iVar3;
            }
            else {
              if ((char *)puVar16[-1] == (char *)0x0) {
                sVar6 = 0;
                pcVar7 = (char *)*puVar16;
              }
              else {
                sVar6 = strlen((char *)puVar16[-1]);
                pcVar7 = (char *)*puVar16;
              }
              if (pcVar7 == (char *)0x0) goto LAB_010d461c;
              __n_00 = strlen(pcVar7);
              pcVar7 = (char *)puVar16[-4];
              if (pcVar7 != (char *)0x0) goto LAB_010d4628;
LAB_010d4660:
              iVar2 = -1;
              if (0 < iVar3) {
                iVar2 = 1;
              }
              __n = 0;
              *piVar9 = iVar2;
            }
                    /* try { // try from 010d468c to 011d4697 has its CatchHandler @ 010d5210 */
            pvVar8 = (void *)png_malloc_base(param_1,sVar5 + sVar6 + __n_00 + __n + 4);
            plVar15 = (long *)(lVar11 + lVar10 * 0x38 + 8);
            *plVar15 = (long)pvVar8;
                    /* try { // try from 010d4698 to 011d4703 has its CatchHandler @ 010d4230 */
            if (pvVar8 == (void *)0x0) {
              pcVar7 = "text chunk: out of memory";
              goto LAB_010d47cc;
            }
            memcpy(pvVar8,(void *)puVar16[-5],sVar5);
            *(undefined1 *)(*plVar15 + sVar5) = 0;
            if (*(int *)(puVar16 + -6) < 1) {
              lVar13 = lVar11 + lVar10 * 0x38;
              *(undefined8 *)(lVar13 + 0x28) = 0;
              *(undefined8 *)(lVar13 + 0x30) = 0;
            }
            else {
              pvVar8 = (void *)(*plVar15 + sVar5 + 1);
              lVar13 = lVar11 + lVar10 * 0x38;
              *(void **)(lVar13 + 0x28) = pvVar8;
              memcpy(pvVar8,(void *)puVar16[-1],sVar6);
              plVar15 = (long *)(lVar13 + 0x30);
              *(undefined1 *)(*(long *)(lVar13 + 0x28) + sVar6) = 0;
              pvVar8 = (void *)(*(long *)(lVar13 + 0x28) + sVar6 + 1);
              *(void **)(lVar13 + 0x30) = pvVar8;
                    /* try { // try from 010d4704 to 011d470f has its CatchHandler @ 010d520c */
              memcpy(pvVar8,(void *)*puVar16,__n_00);
                    /* try { // try from 010d4710 to 011d4757 has its CatchHandler @ 010d4230 */
              *(undefined1 *)(*(long *)(lVar13 + 0x30) + __n_00) = 0;
              sVar5 = __n_00;
            }
            pvVar8 = (void *)(*plVar15 + sVar5 + 1);
            puVar14 = (undefined8 *)(lVar11 + lVar10 * 0x38 + 0x10);
            *puVar14 = pvVar8;
            if (__n != 0) {
              memcpy(pvVar8,(void *)puVar16[-4],__n);
              pvVar8 = (void *)*puVar14;
            }
                    /* try { // try from 010d4758 to 011d4763 has its CatchHandler @ 010d5208 */
            *(undefined1 *)((long)pvVar8 + __n) = 0;
                    /* try { // try from 010d4764 to 011d47cf has its CatchHandler @ 010d4230 */
            lVar11 = lVar11 + lVar10 * 0x38;
            sVar5 = __n;
            sVar6 = 0;
            if (*piVar9 < 1) {
              sVar5 = 0;
              sVar6 = __n;
            }
            *(size_t *)(lVar11 + 0x18) = sVar6;
            *(size_t *)(lVar11 + 0x20) = sVar5;
            *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + 1;
          }
          else {
            png_chunk_report(param_1,"text compression mode is out of range",1);
          }
        }
        lVar4 = lVar4 + 1;
        puVar16 = puVar16 + 7;
      } while (lVar4 < param_4);
    }
    uVar12 = 0;
  }
                    /* try { // try from 010d47dc to 011d4847 has its CatchHandler @ 010d4230 */
  return uVar12;
}

