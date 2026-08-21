
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
  ulong uVar12;
  ulong uVar13;
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
      uVar12 = uVar8;
      if (0xfffe < uVar8) {
        uVar12 = 0xffff;
      }
      pvVar9 = malloc(0x404);
      if (pvVar9 != (void *)0x0) {
        uVar13 = 4;
        do {
          if (uVar12 <= uVar13) {
LAB_009f2d60:
            free(pvVar9);
            break;
          }
          uVar11 = uVar13 + 0x400;
          uVar13 = uVar12;
          if (uVar11 <= uVar12) {
            uVar13 = uVar11;
          }
          uVar11 = uVar13;
          if (0x403 < uVar13) {
            uVar11 = 0x404;
          }
          lVar7 = (*local_1a0)(local_188,lVar6,uVar8 - uVar13,0);
          if ((lVar7 != 0) ||
             (uVar10 = (*pcStack_1b8)(local_188,lVar6,pvVar9,uVar11), uVar10 != uVar11))
          goto LAB_009f2d60;
          if (3 < (uint)uVar11) {
            do {
              if ((((*(char *)((long)pvVar9 + (uVar11 - 4)) == 'P') &&
                   (*(char *)((long)pvVar9 + (uVar11 - 3)) == 'K')) &&
                  (*(char *)((long)pvVar9 + (uVar11 - 2)) == '\x05')) &&
                 (*(char *)((long)pvVar9 + (uVar11 - 1)) == '\x06')) {
                uVar11 = ((uVar8 - 4) - uVar13) + uVar11;
                if (uVar11 != 0) {
                  free(pvVar9);
                  iVar3 = 0;
                  goto LAB_009f2d70;
                }
                break;
              }
              lVar7 = uVar11 - 4;
              uVar11 = uVar11 - 1;
            } while (0 < lVar7);
          }
        } while( true );
      }
    }
    uVar11 = 0;
    iVar3 = -1;
LAB_009f2d70:
    lVar7 = (*local_1a0)(local_188,local_180,uVar11,0);
    iVar2 = FUN_009f3164(&local_1c0,local_180,auStack_1d0);
    lVar6 = local_180;
    if (iVar2 != 0 || lVar7 != 0) {
      iVar3 = -1;
    }
    iVar2 = (*pcStack_1b8)(local_188,local_180,local_1c4,1);
    if (iVar2 == 1) {
      uVar12 = (ulong)local_1c4[0];
LAB_009f2de4:
      iVar2 = (*pcStack_1b8)(local_188,lVar6,local_1c4,1);
      if (iVar2 == 1) {
        uVar8 = (ulong)local_1c4[0];
      }
      else {
        iVar2 = (*local_190)(local_188,lVar6);
        uVar8 = uVar12;
        if (iVar2 != 0) goto LAB_009f2e24;
      }
      uVar12 = uVar12 | uVar8 << 8;
    }
    else {
      iVar2 = (*local_190)(local_188,lVar6);
      uVar12 = 0;
      if (iVar2 == 0) goto LAB_009f2de4;
LAB_009f2e24:
      uVar12 = 0;
      iVar3 = -1;
    }
    lVar6 = local_180;
    iVar2 = (*pcStack_1b8)(local_188,local_180,local_1c4,1);
    if (iVar2 == 1) {
      uVar8 = (ulong)local_1c4[0];
LAB_009f2e6c:
      iVar2 = (*pcStack_1b8)(local_188,lVar6,local_1c4,1);
      if (iVar2 == 1) {
        uVar13 = (ulong)local_1c4[0];
      }
      else {
        iVar2 = (*local_190)(local_188,lVar6);
        uVar13 = uVar8;
        if (iVar2 != 0) goto LAB_009f2eac;
      }
      uVar8 = uVar8 | uVar13 << 8;
    }
    else {
      iVar2 = (*local_190)(local_188,lVar6);
      uVar8 = 0;
      if (iVar2 == 0) goto LAB_009f2e6c;
LAB_009f2eac:
      uVar8 = 0;
      iVar3 = -1;
    }
    lVar6 = local_180;
    iVar2 = (*pcStack_1b8)(local_188,local_180,local_1c4,1);
                    /* try { // try from 009f2ed4 to 00af2f2b has its CatchHandler @ 009f2ed4
                       catch() { ... } // from try @ 009f2ed4 with catch @ 009f2ed4
                       catch() { ... } // from try @ 009f2f30 with catch @ 009f2ed4 */
    if (iVar2 == 1) {
      uVar13 = (ulong)local_1c4[0];
LAB_009f2ef4:
      iVar2 = (*pcStack_1b8)(local_188,lVar6,local_1c4,1);
      if (iVar2 == 1) {
        uVar10 = (ulong)local_1c4[0];
      }
      else {
        iVar2 = (*local_190)(local_188,lVar6);
                    /* try { // try from 009f2f2c to 00af2f2f has its CatchHandler @ 009f2f8c */
        uVar10 = uVar13;
        if (iVar2 != 0) goto LAB_009f2f34;
      }
      local_178 = uVar13 | uVar10 << 8;
    }
    else {
      iVar2 = (*local_190)(local_188,lVar6);
      uVar13 = 0;
      if (iVar2 == 0) goto LAB_009f2ef4;
LAB_009f2f34:
      local_178 = 0;
      iVar3 = -1;
    }
    lVar6 = local_180;
    iVar2 = (*pcStack_1b8)(local_188,local_180,local_1c4,1);
    if (iVar2 == 1) {
      uVar13 = (ulong)local_1c4[0];
LAB_009f2f80:
                    /* catch() { ... } // from try @ 009f2f2c with catch @ 009f2f8c */
      iVar2 = (*pcStack_1b8)(local_188,lVar6,local_1c4,1);
      if (iVar2 == 1) {
        uVar10 = (ulong)local_1c4[0];
      }
      else {
        iVar2 = (*local_190)(local_188,lVar6);
        uVar10 = uVar13;
        if (iVar2 != 0) goto LAB_009f2fc0;
      }
      uVar13 = uVar13 | uVar10 << 8;
    }
    else {
      iVar2 = (*local_190)(local_188,lVar6);
      uVar13 = 0;
      if (iVar2 == 0) goto LAB_009f2f80;
LAB_009f2fc0:
      uVar13 = 0;
      iVar3 = -1;
    }
    iVar2 = -0x67;
    if (uVar13 == local_178 && (uVar8 == 0 && uVar12 == 0)) {
      iVar2 = iVar3;
    }
    iVar3 = FUN_009f3164(&local_1c0,local_180,&local_140);
    iVar4 = FUN_009f3164(&local_1c0,local_180,alStack_138);
    lVar6 = local_180;
    iVar5 = (*pcStack_1b8)(local_188,local_180,local_1c4,1);
                    /* try { // try from 009f302c to 00af307b has its CatchHandler @ 009f302c
                       catch() { ... } // from try @ 009f302c with catch @ 009f302c
                       catch() { ... } // from try @ 009f30a4 with catch @ 009f302c
                       catch() { ... } // from try @ 009f3110 with catch @ 009f302c */
    if (iVar5 == 1) {
      uVar12 = (ulong)local_1c4[0];
LAB_009f304c:
      iVar5 = (*pcStack_1b8)(local_188,lVar6,local_1c4,1);
      if (iVar5 == 1) {
        uVar8 = (ulong)local_1c4[0];
      }
      else {
                    /* try { // try from 009f307c to 00af30a3 has its CatchHandler @ 009f3118 */
        iVar5 = (*local_190)(local_188,lVar6);
        uVar8 = uVar12;
        if (iVar5 != 0) goto LAB_009f3088;
      }
      local_170 = uVar12 | uVar8 << 8;
      if (((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) &&
         ((ulong)(local_140 + alStack_138[0]) <= uVar11)) {
                    /* try { // try from 009f30fc to 00af310f has its CatchHandler @ 009f3118 */
        local_a0 = 0;
        local_98 = 0;
        local_168 = uVar11 - (local_140 + alStack_138[0]);
        local_148 = uVar11;
        pvVar9 = malloc(0x150);
                    /* try { // try from 009f3110 to 00af3133 has its CatchHandler @ 009f302c */
                    /* catch() { ... } // from try @ 009f307c with catch @ 009f3118
                       catch() { ... } // from try @ 009f30fc with catch @ 009f3118 */
        memcpy(pvVar9,&local_1c0,0x150);
        if (pvVar9 != (void *)0x0) {
          *(undefined8 *)((long)pvVar9 + 0x60) = 0;
          *(undefined8 *)((long)pvVar9 + 0x68) = *(undefined8 *)((long)pvVar9 + 0x88);
          iVar3 = FUN_009f34c0(pvVar9,(long)pvVar9 + 0x90,(long)pvVar9 + 0x118,0,0,0,0,0,0);
          *(ulong *)((long)pvVar9 + 0x70) = (ulong)(iVar3 == 0);
        }
        goto LAB_009f309c;
      }
    }
    else {
      iVar5 = (*local_190)(local_188,lVar6);
      if (iVar5 == 0) {
        uVar12 = 0;
        goto LAB_009f304c;
      }
LAB_009f3088:
      local_170 = 0;
    }
    (*pcStack_198)(local_188,local_180);
  }
  pvVar9 = (void *)0x0;
LAB_009f309c:
                    /* try { // try from 009f30a4 to 00af30fb has its CatchHandler @ 009f302c */
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar9;
}

