
/* WARNING: Removing unreachable block (ram,0x00a0a854) */

void * unzOpen2(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_1d0 [12];
  byte local_1c4 [4];
  code *local_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  code *local_1a8;
  code *local_1a0;
  code *pcStack_198;
  code *local_190;
  undefined8 local_188;
  long local_180;
  ulong local_178;
  ulong local_170;
  long local_168;
  ulong local_148;
  long local_140;
  long alStack_138 [19];
  undefined8 local_a0;
  undefined4 local_98;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (param_2 == (undefined8 *)0x0) {
    fill_fopen_filefunc(&local_1c0);
  }
  else {
    pcStack_198 = (code *)param_2[5];
    local_1a0 = (code *)param_2[4];
    local_188 = param_2[7];
    local_190 = (code *)param_2[6];
    pcStack_1b8 = (code *)param_2[1];
    local_1c0 = (code *)*param_2;
    local_1a8 = (code *)param_2[3];
    uStack_1b0 = param_2[2];
  }
  lVar6 = (*local_1c0)(local_188,param_1,5);
  local_180 = lVar6;
  if (lVar6 != 0) {
    lVar7 = (*local_1a0)(local_188,lVar6,0,2);
    if (lVar7 == 0) {
      uVar8 = (*local_1a8)(local_188,lVar6);
      uVar14 = uVar8;
      if (0xfffe < uVar8) {
        uVar14 = 0xffff;
      }
      pvVar9 = malloc(0x404);
      if (pvVar9 != (void *)0x0) {
        uVar15 = ~uVar8;
        uVar16 = 4;
        do {
          uVar13 = uVar16;
          if (uVar14 <= uVar13) {
LAB_00a0a890:
            free(pvVar9);
            break;
          }
          uVar16 = uVar14;
          if (uVar13 + 0x400 <= uVar14) {
            uVar16 = uVar13 + 0x400;
          }
          uVar11 = uVar16;
          if (0x403 < uVar16) {
            uVar11 = 0x404;
          }
          lVar7 = (*local_1a0)(local_188,lVar6,uVar8 - uVar16,0);
          if ((lVar7 != 0) ||
             (uVar10 = (*pcStack_1b8)(local_188,lVar6,pvVar9,uVar11), uVar10 != uVar11))
          goto LAB_00a0a890;
          if (3 < (uint)uVar11) {
            uVar11 = -uVar13 - 0x401;
            uVar13 = uVar15;
            if (uVar15 <= uVar11) {
              uVar13 = uVar11;
            }
            if (uVar13 < 0xfffffffffffffbfc) {
              uVar13 = 0xfffffffffffffbfb;
            }
            lVar7 = -2 - uVar13;
            do {
              if ((((*(char *)((long)pvVar9 + lVar7 + -3) == 'P') &&
                   (*(char *)((long)pvVar9 + lVar7 + -2) == 'K')) &&
                  (*(char *)((long)pvVar9 + lVar7 + -1) == '\x05')) &&
                 (*(char *)((long)pvVar9 + lVar7) == '\x06')) {
                uVar13 = uVar15;
                if (uVar15 <= uVar11) {
                  uVar13 = uVar11;
                }
                if (uVar13 < 0xffffffffffff0001) {
                  uVar13 = 0xffffffffffff0000;
                }
                uVar13 = (uVar8 + uVar13 + lVar7) - 2;
                if (uVar13 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0a5b8 with catch @ 00a0a884
                        */
                  free(pvVar9);
                  iVar3 = 0;
                  goto LAB_00a0a8a0;
                }
                break;
              }
              lVar12 = lVar7 + -3;
              lVar7 = lVar7 + -1;
            } while (0 < lVar12);
          }
        } while( true );
      }
    }
    uVar13 = 0;
    iVar3 = -1;
LAB_00a0a8a0:
    lVar7 = (*local_1a0)(local_188,local_180,uVar13,0);
    iVar2 = FUN_00a0ac94(&local_1c0,local_180,auStack_1d0);
    lVar6 = local_180;
                    /* try { // try from 00a0a8e0 to 00b0a957 has its CatchHandler @ 00a0a8e0
                       catch() { ... } // from try @ 00a0a8e0 with catch @ 00a0a8e0
                       catch() { ... } // from try @ 00a0a95c with catch @ 00a0a8e0
                       catch() { ... } // from try @ 00a0aa4c with catch @ 00a0a8e0
                       catch() { ... } // from try @ 00a0ab30 with catch @ 00a0a8e0 */
    if (iVar2 != 0 || lVar7 != 0) {
      iVar3 = -1;
    }
    iVar2 = (*pcStack_1b8)(local_188,local_180,local_1c4,1);
    if (iVar2 == 1) {
      uVar14 = (ulong)local_1c4[0];
LAB_00a0a914:
      iVar2 = (*pcStack_1b8)(local_188,lVar6,local_1c4,1);
      if (iVar2 == 1) {
        uVar8 = (ulong)local_1c4[0];
      }
      else {
        iVar2 = (*local_190)(local_188,lVar6);
        uVar8 = uVar14;
        if (iVar2 != 0) goto LAB_00a0a954;
      }
                    /* try { // try from 00a0a95c to 00b0a9b3 has its CatchHandler @ 00a0a8e0 */
      uVar14 = uVar14 | uVar8 << 8;
    }
    else {
      iVar2 = (*local_190)(local_188,lVar6);
      uVar14 = 0;
      if (iVar2 == 0) goto LAB_00a0a914;
LAB_00a0a954:
      uVar14 = 0;
      iVar3 = -1;
                    /* try { // try from 00a0a958 to 00b0a95b has its CatchHandler @ 00a0ab44 */
    }
    lVar6 = local_180;
    iVar2 = (*pcStack_1b8)(local_188,local_180,local_1c4,1);
    if (iVar2 == 1) {
      uVar8 = (ulong)local_1c4[0];
LAB_00a0a99c:
      iVar2 = (*pcStack_1b8)(local_188,lVar6,local_1c4,1);
                    /* try { // try from 00a0a9b4 to 00b0aa13 has its CatchHandler @ 00a0ab40 */
      if (iVar2 == 1) {
        uVar16 = (ulong)local_1c4[0];
      }
      else {
        iVar2 = (*local_190)(local_188,lVar6);
        uVar16 = uVar8;
        if (iVar2 != 0) goto LAB_00a0a9dc;
      }
      uVar8 = uVar8 | uVar16 << 8;
    }
    else {
      iVar2 = (*local_190)(local_188,lVar6);
      uVar8 = 0;
      if (iVar2 == 0) goto LAB_00a0a99c;
LAB_00a0a9dc:
      uVar8 = 0;
      iVar3 = -1;
    }
    lVar6 = local_180;
    iVar2 = (*pcStack_1b8)(local_188,local_180,local_1c4,1);
    if (iVar2 == 1) {
      uVar16 = (ulong)local_1c4[0];
LAB_00a0aa24:
                    /* try { // try from 00a0aa24 to 00b0aa33 has its CatchHandler @ 00a0ab3c */
      iVar2 = (*pcStack_1b8)(local_188,lVar6,local_1c4,1);
                    /* try { // try from 00a0aa3c to 00b0aa4b has its CatchHandler @ 00a0ab40 */
      if (iVar2 == 1) {
        uVar15 = (ulong)local_1c4[0];
      }
      else {
                    /* try { // try from 00a0aa4c to 00b0ab2b has its CatchHandler @ 00a0a8e0 */
        iVar2 = (*local_190)(local_188,lVar6);
        uVar15 = uVar16;
        if (iVar2 != 0) goto LAB_00a0aa64;
      }
      local_178 = uVar16 | uVar15 << 8;
    }
    else {
      iVar2 = (*local_190)(local_188,lVar6);
      uVar16 = 0;
      if (iVar2 == 0) goto LAB_00a0aa24;
LAB_00a0aa64:
      local_178 = 0;
      iVar3 = -1;
    }
    lVar6 = local_180;
    iVar2 = (*pcStack_1b8)(local_188,local_180,local_1c4,1);
    if (iVar2 == 1) {
      uVar16 = (ulong)local_1c4[0];
LAB_00a0aab0:
      iVar2 = (*pcStack_1b8)(local_188,lVar6,local_1c4,1);
      if (iVar2 == 1) {
        uVar15 = (ulong)local_1c4[0];
      }
      else {
        iVar2 = (*local_190)(local_188,lVar6);
        uVar15 = uVar16;
        if (iVar2 != 0) goto LAB_00a0aaf0;
      }
      uVar16 = uVar16 | uVar15 << 8;
    }
    else {
      iVar2 = (*local_190)(local_188,lVar6);
      uVar16 = 0;
      if (iVar2 == 0) goto LAB_00a0aab0;
LAB_00a0aaf0:
      uVar16 = 0;
      iVar3 = -1;
    }
    iVar2 = -0x67;
    if (uVar16 == local_178 && (uVar8 == 0 && uVar14 == 0)) {
      iVar2 = iVar3;
    }
    iVar3 = FUN_00a0ac94(&local_1c0,local_180,&local_140);
                    /* try { // try from 00a0ab2c to 00b0ab2f has its CatchHandler @ 00a0ab38 */
                    /* try { // try from 00a0ab30 to 00b0ab57 has its CatchHandler @ 00a0a8e0 */
    iVar4 = FUN_00a0ac94(&local_1c0,local_180,alStack_138);
    lVar6 = local_180;
                    /* catch() { ... } // from try @ 00a0ab2c with catch @ 00a0ab38 */
                    /* catch() { ... } // from try @ 00a0aa24 with catch @ 00a0ab3c */
                    /* catch() { ... } // from try @ 00a0a9b4 with catch @ 00a0ab40
                       catch() { ... } // from try @ 00a0aa3c with catch @ 00a0ab40 */
                    /* catch() { ... } // from try @ 00a0a958 with catch @ 00a0ab44 */
    iVar5 = (*pcStack_1b8)(local_188,local_180,local_1c4,1);
                    /* try { // try from 00a0ab58 to 00b0ac3f has its CatchHandler @ 00a0ab58
                       catch() { ... } // from try @ 00a0ab58 with catch @ 00a0ab58
                       catch() { ... } // from try @ 00a0b080 with catch @ 00a0ab58
                       catch() { ... } // from try @ 00a0b150 with catch @ 00a0ab58 */
    if (iVar5 == 1) {
      uVar14 = (ulong)local_1c4[0];
LAB_00a0ab7c:
      iVar5 = (*pcStack_1b8)(local_188,lVar6,local_1c4,1);
      if (iVar5 == 1) {
        uVar8 = (ulong)local_1c4[0];
      }
      else {
        iVar5 = (*local_190)(local_188,lVar6);
        uVar8 = uVar14;
        if (iVar5 != 0) goto LAB_00a0abb8;
      }
      local_170 = uVar14 | uVar8 << 8;
      if (((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) &&
         ((ulong)(local_140 + alStack_138[0]) <= uVar13)) {
        local_a0 = 0;
        local_98 = 0;
        local_168 = uVar13 - (local_140 + alStack_138[0]);
        local_148 = uVar13;
        pvVar9 = malloc(0x150);
                    /* try { // try from 00a0ac40 to 00b0ac53 has its CatchHandler @ 00a0b1ac */
        memcpy(pvVar9,&local_1c0,0x150);
        if (pvVar9 != (void *)0x0) {
                    /* try { // try from 00a0ac58 to 00b0ac5f has its CatchHandler @ 00a0b1a0 */
                    /* try { // try from 00a0ac64 to 00b0acc7 has its CatchHandler @ 00a0b1cc */
          *(undefined8 *)((long)pvVar9 + 0x60) = 0;
          *(undefined8 *)((long)pvVar9 + 0x68) = *(undefined8 *)((long)pvVar9 + 0x88);
          iVar3 = FUN_00a0aff0(pvVar9,(long)pvVar9 + 0x90,(long)pvVar9 + 0x118,0,0,0,0,0,0);
          *(ulong *)((long)pvVar9 + 0x70) = (ulong)(iVar3 == 0);
        }
        goto LAB_00a0abcc;
      }
    }
    else {
      iVar5 = (*local_190)(local_188,lVar6);
      if (iVar5 == 0) {
        uVar14 = 0;
        goto LAB_00a0ab7c;
      }
LAB_00a0abb8:
      local_170 = 0;
    }
    (*pcStack_198)(local_188,local_180);
  }
  pvVar9 = (void *)0x0;
LAB_00a0abcc:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar9;
}

