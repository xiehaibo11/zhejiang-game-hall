
void FUN_0107b378(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  size_t __n;
  void *__dest;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  byte *pbVar17;
  void *local_b8;
  uint local_a4;
  undefined4 local_6c;
  undefined1 local_68;
  int local_64;
  
  lVar16 = param_2[4];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107b244 with catch @ 0107b3a8
                        */
  puVar15 = *(undefined8 **)(param_1 + 0x308);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107b1a4 with catch @ 0107b3ac
                        */
  pcVar12 = (char *)param_2[2];
  uVar5 = (*(code *)param_2[9])(param_2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107b26c with catch @ 0107b3bc
                        */
  if (-1 < (int)uVar5) {
    if (uVar5 == 0) {
      return;
    }
    if ((int)param_2[3] != 0) {
      return;
    }
    plVar1 = param_2 + 0x26;
    plVar2 = param_2 + 0x32;
    plVar3 = param_2 + 0x3e;
    if ((int)param_2[0x25] == 0) {
      local_64 = (**(code **)*puVar15)(plVar2,uVar5 + 6,lVar16);
      if (((local_64 != 0) ||
          (local_64 = (**(code **)*puVar15)(plVar1,uVar5 + 6,lVar16), local_64 != 0)) ||
         (local_64 = (**(code **)*puVar15)(plVar3,4,lVar16), local_64 != 0)) goto LAB_0107b85c;
      local_64 = 0;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107b1ec with catch @ 0107b3f8
                        */
    uVar8 = 0;
    local_a4 = 0;
    bVar4 = false;
LAB_0107b410:
    plVar10 = param_2 + 3;
    (*(code *)param_2[7])(param_2);
    pcVar13 = (char *)*param_2;
    if (pcVar13 < pcVar12) {
      if (uVar8 != 0) {
        do {
          if (pcVar13 + 3 < pcVar12) {
            switch(pcVar13[3]) {
            case '\0':
            case '\t':
            case '\n':
            case '\f':
            case '\r':
            case ' ':
            case '%':
            case '(':
            case ')':
            case '/':
            case '<':
            case '>':
            case '[':
            case ']':
            case '{':
            case '}':
              if (*pcVar13 == 'e') {
                if ((pcVar13[1] == 'n') && (pcVar13[2] == 'd')) goto LAB_0107b90c;
              }
              else if ((*pcVar13 == 'd') && ((pcVar13[1] == 'e' && (pcVar13[2] == 'f'))))
              goto LAB_0107b90c;
            }
          }
          (*(code *)param_2[8])(param_2);
          pcVar14 = (char *)*param_2;
          if (pcVar12 <= pcVar14) goto LAB_0107b858;
          if ((int)*plVar10 != 0) {
            return;
          }
          if (*pcVar13 == '/') {
            if (pcVar12 <= pcVar13 + 2) goto LAB_0107b858;
            pbVar17 = (byte *)param_2[2];
            lVar9 = *(long *)(*(long *)(param_1 + 0xf0) + 0x60);
            (*(code *)param_2[7])(param_2);
            if ((pbVar17 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) goto LAB_0107b8f4;
            __n = (*(code *)param_2[9])(param_2);
            (*(code *)param_2[8])(param_2);
            if ((long)__n < 0) goto LAB_0107b8f4;
            local_b8 = (void *)(*param_2 + 1);
            if ((long)pbVar17 - (long)local_b8 <= (long)__n) goto LAB_0107b8f4;
            *param_2 = *param_2 + __n + 1;
            if ((int)param_2[3] != 0) {
              return;
            }
            if ((int)param_2[0x25] == 0) goto LAB_0107b6d8;
          }
          (*(code *)param_2[7])(param_2);
          pcVar13 = (char *)*param_2;
          if (pcVar12 <= pcVar13) goto LAB_0107b90c;
        } while( true );
      }
LAB_0107b59c:
      if (pcVar13 + 3 < pcVar12) {
        switch(pcVar13[3]) {
        case '\0':
        case '\t':
        case '\n':
        case '\f':
        case '\r':
        case ' ':
        case '%':
        case '(':
        case ')':
        case '/':
        case '<':
        case '>':
        case '[':
        case ']':
        case '{':
        case '}':
          if (((*pcVar13 != 'e') || (pcVar13[1] != 'n')) || (pcVar13[2] != 'd'))
          goto switchD_0107b5c4_caseD_1;
          break;
        default:
          goto switchD_0107b5c4_caseD_1;
        }
        goto LAB_0107b914;
      }
switchD_0107b5c4_caseD_1:
      (*(code *)param_2[8])(param_2);
      pcVar14 = (char *)*param_2;
      if (pcVar12 <= pcVar14) goto LAB_0107b858;
      if ((int)*plVar10 != 0) {
        return;
      }
      if (*pcVar13 != '/') {
LAB_0107b6bc:
        (*(code *)param_2[7])(param_2);
        pcVar13 = (char *)*param_2;
                    /* try { // try from 0107b6cc to 0117b6f3 has its CatchHandler @ 0107b714 */
        if (pcVar12 <= pcVar13) {
LAB_0107b914:
          uVar11 = 0;
          goto LAB_0107b918;
        }
        goto LAB_0107b59c;
      }
      if (pcVar12 <= pcVar13 + 2) goto LAB_0107b858;
      pbVar17 = (byte *)param_2[2];
      lVar9 = *(long *)(*(long *)(param_1 + 0xf0) + 0x60);
      (*(code *)param_2[7])(param_2);
      if ((pbVar17 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_0107b8f4:
        if (lVar9 != 0) {
          return;
        }
        *(undefined4 *)plVar10 = 3;
        return;
      }
      __n = (*(code *)param_2[9])(param_2);
      (*(code *)param_2[8])(param_2);
                    /* try { // try from 0107b67c to 0117b6cb has its CatchHandler @ 0107b67c
                       catch() { ... } // from try @ 0107b67c with catch @ 0107b67c
                       catch() { ... } // from try @ 0107b700 with catch @ 0107b67c */
      if ((long)__n < 0) goto LAB_0107b8f4;
      local_b8 = (void *)(*param_2 + 1);
      if ((long)pbVar17 - (long)local_b8 <= (long)__n) goto LAB_0107b8f4;
      *param_2 = *param_2 + __n + 1;
      if ((int)param_2[3] != 0) {
        return;
      }
      if ((int)param_2[0x25] != 0) goto LAB_0107b6bc;
      uVar7 = 0;
      goto LAB_0107b6f0;
    }
LAB_0107b90c:
    uVar11 = (undefined4)uVar8;
LAB_0107b918:
    *(undefined4 *)(param_2 + 0x25) = uVar11;
    if (bVar4) {
      pcVar12 = *(char **)param_2[0x2b];
      iVar6 = strcmp(".notdef",pcVar12);
      if (iVar6 == 0) {
        return;
      }
      local_64 = (*(code *)param_2[0x48])(plVar3,0,pcVar12,*(undefined8 *)param_2[0x2c]);
      if ((local_64 == 0) &&
         (local_64 = (*(code *)param_2[0x48])
                               (plVar3,1,*(undefined8 *)param_2[0x37],*(undefined8 *)param_2[0x38]),
         local_64 == 0)) {
        lVar16 = (ulong)local_a4 * 8;
                    /* try { // try from 0107b9b4 to 0117b9ef has its CatchHandler @ 0107b9b4
                       catch() { ... } // from try @ 0107b9b4 with catch @ 0107b9b4
                       catch() { ... } // from try @ 0107ba74 with catch @ 0107b9b4 */
        local_64 = (*(code *)param_2[0x48])
                             (plVar3,2,*(undefined8 *)(param_2[0x2b] + lVar16),
                              *(undefined8 *)(param_2[0x2c] + lVar16));
                    /* try { // try from 0107b9f0 to 0117ba73 has its CatchHandler @ 0107ba78 */
                    /* try { // try from 0107ba74 to 0117bad7 has its CatchHandler @ 0107b9b4 */
                    /* catch() { ... } // from try @ 0107b9f0 with catch @ 0107ba78 */
        if (((local_64 == 0) &&
            (((local_64 = (*(code *)param_2[0x48])
                                    (plVar3,3,*(undefined8 *)(param_2[0x37] + lVar16),
                                     *(undefined8 *)(param_2[0x38] + lVar16)), local_64 == 0 &&
              (local_64 = (*(code *)param_2[0x30])
                                    (plVar1,local_a4,*(undefined8 *)param_2[0x43],
                                     *(undefined8 *)param_2[0x44]), local_64 == 0)) &&
             (local_64 = (*(code *)param_2[0x3c])
                                   (plVar2,local_a4,*(undefined8 *)(param_2[0x43] + 8),
                                    *(undefined8 *)(param_2[0x44] + 8)), local_64 == 0)))) &&
           ((local_64 = (*(code *)param_2[0x30])
                                  (plVar1,0,*(undefined8 *)(param_2[0x43] + 0x10),
                                   *(undefined8 *)(param_2[0x44] + 0x10)), local_64 == 0 &&
            (local_64 = (*(code *)param_2[0x3c])
                                  (plVar2,0,*(undefined8 *)(param_2[0x43] + 0x18),
                                   *(undefined8 *)(param_2[0x44] + 0x18)), local_64 == 0)))) {
          return;
        }
      }
    }
    else {
      local_68 = 0xe;
      local_6c = 0xde1f78b;
      local_64 = (*(code *)param_2[0x48])
                           (plVar3,0,*(undefined8 *)param_2[0x2b],*(undefined8 *)param_2[0x2c]);
      if (((((local_64 == 0) &&
            (local_64 = (*(code *)param_2[0x48])
                                  (plVar3,1,*(undefined8 *)param_2[0x37],
                                   *(undefined8 *)param_2[0x38]), local_64 == 0)) &&
           (local_64 = (*(code *)param_2[0x30])(plVar1,0,".notdef",8), local_64 == 0)) &&
          ((local_64 = (*(code *)param_2[0x3c])(plVar2,0,&local_6c,5), local_64 == 0 &&
           (local_64 = (*(code *)param_2[0x30])
                                 (plVar1,uVar11,*(undefined8 *)param_2[0x43],
                                  *(undefined8 *)param_2[0x44]), local_64 == 0)))) &&
         (local_64 = (*(code *)param_2[0x3c])
                               (plVar2,uVar11,*(undefined8 *)(param_2[0x43] + 8),
                                *(undefined8 *)(param_2[0x44] + 8)), local_64 == 0)) {
        *(int *)(param_2 + 0x25) = (int)param_2[0x25] + 1;
        return;
      }
    }
    goto LAB_0107b85c;
  }
LAB_0107b858:
  local_64 = 3;
LAB_0107b85c:
  *(int *)(param_2 + 3) = local_64;
  return;
LAB_0107b6d8:
  uVar7 = uVar8 & 0xffffffff;
LAB_0107b6f0:
  pcVar13 = pcVar13 + 1;
                    /* try { // try from 0107b6fc to 0117b6ff has its CatchHandler @ 0107b71c */
                    /* try { // try from 0107b700 to 0117b75b has its CatchHandler @ 0107b67c */
  local_64 = (*(code *)param_2[0x30])(plVar1,uVar7,pcVar13,pcVar14 + (1 - (long)pcVar13));
                    /* catch() { ... } // from try @ 0107b6cc with catch @ 0107b714 */
                    /* catch() { ... } // from try @ 0107b6fc with catch @ 0107b71c */
  if (local_64 != 0) goto LAB_0107b85c;
  pcVar14[*(long *)(param_2[0x2b] + uVar8 * 8) - (long)pcVar13] = '\0';
  if (*pcVar13 == '.') {
    iVar6 = strcmp(".notdef",*(char **)(param_2[0x2b] + uVar8 * 8));
                    /* try { // try from 0107b75c to 0117b7d7 has its CatchHandler @ 0107b75c
                       catch() { ... } // from try @ 0107b75c with catch @ 0107b75c
                       catch() { ... } // from try @ 0107b7dc with catch @ 0107b75c */
    if (iVar6 == 0) {
      bVar4 = true;
      local_a4 = (uint)uVar7;
    }
  }
  if (((long)uVar8 < (long)(((ulong)uVar5 << 0x20) + 0x500000000) >> 0x20) &&
     (-1 < *(int *)(param_1 + 0x13c))) {
    if ((long)__n <= (long)*(int *)(param_1 + 0x13c)) goto LAB_0107b858;
    __dest = (void *)ft_mem_alloc(lVar16,__n,&local_64);
    if (local_64 != 0) goto LAB_0107b85c;
                    /* try { // try from 0107b7d8 to 0117b7db has its CatchHandler @ 0107b7ec */
    memcpy(__dest,local_b8,__n);
                    /* try { // try from 0107b7dc to 0117b823 has its CatchHandler @ 0107b75c */
                    /* catch() { ... } // from try @ 0107b7d8 with catch @ 0107b7ec */
    (*(code *)puVar15[4])(__dest,__n,0x10ea);
    local_64 = (*(code *)param_2[0x3c])
                         (plVar2,uVar7,(long)__dest + (long)*(int *)(param_1 + 0x13c),
                          __n - (long)*(int *)(param_1 + 0x13c));
    ft_mem_free(lVar16,__dest);
  }
  else {
    local_64 = (*(code *)param_2[0x3c])(plVar2,uVar7,local_b8,__n);
  }
  uVar8 = uVar8 + 1;
  if (local_64 != 0) goto LAB_0107b85c;
  goto LAB_0107b410;
}

