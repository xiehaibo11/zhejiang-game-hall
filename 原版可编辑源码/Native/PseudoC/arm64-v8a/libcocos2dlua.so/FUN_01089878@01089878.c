
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01089878(undefined8 param_1,undefined8 *param_2,int param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  long lVar6;
  short sVar7;
  bool bVar8;
  char *__nptr;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  size_t sVar17;
  void *__dest;
  uint *puVar18;
  undefined8 uVar19;
  long lVar20;
  char *pcVar21;
  code *pcVar22;
  ulong uVar23;
  uint uVar24;
  char *pcVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  byte *pbVar32;
  byte *pbVar33;
  char *pcVar34;
  byte bVar35;
  ulong *puVar36;
  undefined **ppuVar37;
  size_t sVar38;
  ulong uVar39;
  char cVar40;
  byte *pbVar41;
  uint local_24c;
  char *local_248;
  char *pcStack_240;
  char *local_238;
  uint local_230;
  code *local_218;
  code *local_210;
  code *local_208;
  code *local_1c8;
  code *local_1c0;
  long local_1b8;
  char *local_1b0;
  long local_1a8;
  byte *local_1a0;
  long local_198;
  int local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined2 uStack_170;
  undefined8 auStack_16e [32];
  long local_68;
  
                    /* try { // try from 01089880 to 0118988b has its CatchHandler @ 010898e4 */
                    /* try { // try from 0108988c to 0118990f has its CatchHandler @ 010897f4 */
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  *param_2 = 1;
  if (param_2[0x20] == 0) {
    lVar20 = FT_Get_Module_Interface(*(undefined8 *)(param_2[0x16] + 8),"psaux");
    if (lVar20 == 0) {
      uVar14 = 0xb;
      goto LAB_01089e84;
    }
    param_2[0x20] = lVar20;
    lVar20 = param_2[0x4c];
  }
  else {
    lVar20 = param_2[0x4c];
                    /* catch() { ... } // from try @ 0108984c with catch @ 010898c8 */
  }
  if (lVar20 == 0) {
    uVar13 = FT_Get_Module_Interface(*(undefined8 *)(param_2[0x16] + 8),"pshinter");
    param_2[0x4c] = uVar13;
  }
                    /* catch() { ... } // from try @ 01089880 with catch @ 010898e4 */
  uVar14 = FT_Stream_Seek(param_1,0);
  if ((int)uVar14 != 0) goto LAB_01089e84;
  uVar13 = param_2[0x17];
  lVar20 = param_2[0x18];
  local_180 = 0;
                    /* catch() { ... } // from try @ 01089870 with catch @ 010898fc */
  lVar30 = param_2[0x20];
  memset(&local_248,0,200);
  (*(code *)**(undefined8 **)(lVar30 + 8))(&local_248,0,0,uVar13);
  local_1b8 = lVar20;
  lVar30 = FT_Stream_Pos(lVar20);
  uVar10 = FT_Stream_EnterFrame(lVar20,0x1f);
  if (uVar10 == 0) {
    iVar11 = strncmp(*(char **)(lVar20 + 0x40),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
    FT_Stream_ExitFrame(lVar20);
    if (iVar11 == 0) {
                    /* try { // try from 010899ac to 011899b3 has its CatchHandler @ 01089a70 */
                    /* try { // try from 010899d0 to 01189a3f has its CatchHandler @ 01089a80 */
LAB_010899dc:
      lVar15 = FT_Stream_Pos(lVar20);
      lVar31 = *(long *)(lVar20 + 8);
      lVar16 = FT_Stream_Pos(lVar20);
      lVar31 = lVar31 - lVar16;
      if (lVar31 == 0) {
        uVar10 = 3;
      }
      else {
        lVar16 = 0x10a;
        puVar26 = &local_178;
        do {
          if (lVar31 <= lVar16) {
            lVar16 = lVar31;
          }
          uVar10 = FT_Stream_Read(lVar20,puVar26,lVar16);
          if (uVar10 != 0) goto joined_r0x0108a6dc;
          if (lVar16 < 0x100) {
            *(undefined1 *)((long)puVar26 + lVar16) = 0;
          }
          pbVar41 = (byte *)&local_178;
          pbVar32 = (byte *)((long)puVar26 + lVar16 + -10);
          if (pbVar41 < pbVar32) {
                    /* try { // try from 01089a40 to 01189abb has its CatchHandler @ 01089974 */
            pbVar33 = (byte *)&local_178;
            bVar35 = (byte)local_178;
            do {
              if ((bVar35 == 0x53) && (iVar11 = strncmp((char *)pbVar33,"StartData",9), iVar11 == 0)
                 ) {
                lVar16 = 10;
LAB_01089adc:
                uVar10 = FT_Stream_Seek(lVar20,lVar30);
                if (uVar10 != 0) goto joined_r0x0108a6dc;
                    /* try { // try from 01089afc to 01189aff has its CatchHandler @ 01089bb0 */
                pbVar33 = pbVar33 + lVar16 + (lVar15 - (long)&local_178);
                lVar15 = (long)pbVar33 - lVar30;
                uVar10 = FT_Stream_ExtractFrame(lVar20,lVar15,&local_1b0);
                pcVar21 = local_1b0;
                if (uVar10 != 0) goto joined_r0x0108a6dc;
                    /* try { // try from 01089b18 to 01189b57 has its CatchHandler @ 01089ba8 */
                local_238 = local_1b0 + lVar15;
                local_188 = -1;
                local_248 = local_1b0;
                pcStack_240 = local_1b0;
                local_1a8 = lVar15;
                local_1a0 = pbVar33;
                (*local_208)(&local_248);
                (*local_210)(&local_248);
                pcVar34 = local_248;
                (*local_208)(&local_248);
                (*local_210)(&local_248);
                pcVar9 = local_238;
                pcVar25 = local_248;
                goto joined_r0x01089b74;
              }
              pbVar41 = pbVar33 + 1;
              bVar35 = *pbVar41;
                    /* catch() { ... } // from try @ 010899ac with catch @ 01089a70 */
                    /* catch() { ... } // from try @ 010899d0 with catch @ 01089a80 */
              if ((bVar35 == 0x73) && (iVar11 = strncmp((char *)pbVar33,"/sfnts",6), iVar11 == 0)) {
                lVar16 = 7;
                goto LAB_01089adc;
              }
              pbVar33 = pbVar41;
            } while (pbVar41 < pbVar32);
          }
          uStack_170 = *(undefined2 *)(pbVar41 + 8);
          local_178 = *(undefined8 **)pbVar41;
          lVar31 = *(long *)(lVar20 + 8);
          lVar15 = lVar15 + 0x100;
          lVar16 = FT_Stream_Pos(lVar20);
          lVar31 = lVar31 - lVar16;
          lVar16 = 0x100;
          puVar26 = auStack_16e;
        } while (lVar31 != 0);
        uVar10 = 3;
      }
      goto joined_r0x0108a6dc;
    }
                    /* catch() { ... } // from try @ 01089a40 with catch @ 01089974 */
    uVar10 = 2;
  }
  goto joined_r0x0108a6dc;
joined_r0x01089b74:
  __nptr = pcVar34;
  local_248 = pcVar25;
  if (pcVar9 <= pcVar25) goto LAB_01089bf0;
  uVar10 = local_230;
  if (local_230 != 0) goto joined_r0x0108a6dc;
  if ((*pcVar25 == 'S') && (iVar11 = strncmp(pcVar25,"StartData",9), iVar11 == 0)) {
                    /* catch() { ... } // from try @ 01089c04 with catch @ 01089c3c */
    iVar11 = strncmp(pcVar21,"(Hex)",5);
    if (iVar11 == 0) {
      local_198 = atol(__nptr);
    }
    pcVar25 = local_1b0 + local_1a8;
    local_24c = 0;
    local_230 = 0;
    pcVar21 = local_1b0;
    local_238 = pcVar25;
    goto LAB_01089fd8;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01089b18 with catch @ 01089ba8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01089afc with catch @ 01089bb0
                        */
  if ((pcVar25[1] == 's') && (iVar11 = strncmp(pcVar25,"/sfnts",6), iVar11 == 0)) {
    uVar10 = 2;
    goto joined_r0x0108a6dc;
  }
  (*local_208)(&local_248);
                    /* catch() { ... } // from try @ 01089c08 with catch @ 01089bd8 */
  (*local_210)(&local_248);
  pcVar34 = pcVar25;
  pcVar25 = local_248;
  pcVar21 = __nptr;
  goto joined_r0x01089b74;
LAB_01089bf0:
  FT_Stream_ReleaseFrame(lVar20,&local_1b0);
                    /* try { // try from 01089c04 to 01189c07 has its CatchHandler @ 01089c3c */
  uVar10 = FT_Stream_Seek(lVar20,pbVar33);
                    /* try { // try from 01089c08 to 01189c53 has its CatchHandler @ 01089bd8 */
  if (uVar10 != 0) goto joined_r0x0108a6dc;
  goto LAB_010899dc;
LAB_01089fd8:
  do {
                    /* try { // try from 01089fdc to 0118a06b has its CatchHandler @ 01089fdc
                       catch() { ... } // from try @ 01089fdc with catch @ 01089fdc
                       catch() { ... } // from try @ 0108a080 with catch @ 01089fdc */
    local_248 = pcVar21;
    (*local_210)(&local_248);
    pcVar9 = local_248;
    pcVar34 = local_248 + -0x11;
    if (pcVar25 <= local_248) {
      pcVar34 = pcVar25 + -0x12;
    }
    if (pcVar21 < pcVar34) {
      do {
        if (((*pcVar21 == '%') && (iVar11 = strncmp(pcVar21,"%ADOBeginFontDict",0x11), iVar11 == 0))
           && (0 < *(int *)(param_2 + 0x47))) {
          local_188 = local_188 + 1;
        }
        pcVar21 = pcVar21 + 1;
      } while (pcVar34 != pcVar21);
    }
    if (((pcVar25 <= pcVar9) ||
        ((*local_208)(&local_248), pcVar21 = local_248, pcVar25 <= local_248)) || (local_230 != 0))
    {
      uVar10 = local_230;
      if ((-1 < param_3) && (uVar10 = local_230, local_230 == 0)) {
        local_24c = local_230;
        __dest = (void *)ft_mem_alloc(uVar13,0x50,&local_24c);
        param_2[0x4e] = __dest;
        uVar10 = local_24c;
        if (local_24c == 0) {
          if (local_198 == 0) {
            memcpy(__dest,(void *)param_2[0x18],0x50);
            pbVar41 = local_1a0;
            goto LAB_0108a180;
          }
                    /* try { // try from 0108a150 to 0118a183 has its CatchHandler @ 0108a150
                       catch() { ... } // from try @ 0108a150 with catch @ 0108a150
                       catch() { ... } // from try @ 0108a1c8 with catch @ 0108a150
                       catch() { ... } // from try @ 0108a22c with catch @ 0108a150
                       catch() { ... } // from try @ 0108a290 with catch @ 0108a150
                       catch() { ... } // from try @ 0108a2f8 with catch @ 0108a150 */
          pcVar21 = (char *)ft_mem_alloc(uVar13,local_198,&local_24c);
          lVar20 = local_198;
          param_2[0x4d] = pcVar21;
          uVar10 = local_24c;
          if (local_24c == 0) {
            lVar30 = param_2[0x18];
            iVar11 = FT_Stream_Seek(lVar30,local_1a0);
            uVar10 = local_24c;
            if (iVar11 == 0) {
              if (lVar20 < 1) goto LAB_0108a61c;
                    /* try { // try from 0108a4c4 to 0118a4ff has its CatchHandler @ 0108a4c4
                       catch() { ... } // from try @ 0108a4c4 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108a544 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108a5b0 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108a61c with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108a698 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108a708 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108a7c0 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108a878 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108a930 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108a9e8 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108aa54 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108ab0c with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108abc4 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108ac7c with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108ad34 with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108adec with catch @ 0108a4c4
                       catch() { ... } // from try @ 0108aea4 with catch @ 0108a4c4 */
              pcVar25 = pcVar21 + lVar20;
              cVar40 = '\x01';
              break;
            }
          }
        }
      }
      goto joined_r0x0108a6dc;
    }
                    /* try { // try from 0108a06c to 0118a073 has its CatchHandler @ 0108a0e0 */
                    /* try { // try from 0108a074 to 0118a07f has its CatchHandler @ 0108a0c8 */
                    /* try { // try from 0108a080 to 0118a14f has its CatchHandler @ 01089fdc */
    if ((pcVar9 + 2 < pcVar25) && (*pcVar9 == '/')) {
      sVar38 = (long)local_248 - (long)(pcVar9 + 1);
      if (sVar38 - 1 < 0x15) {
        cVar40 = pcVar9[1];
        if ((long)sVar38 < 2) {
          pcVar34 = "CIDFontName";
          ppuVar37 = &PTR_s_CIDFontName_01729918;
          do {
            if ((cVar40 == *pcVar34) && (sVar17 = strlen(pcVar34), sVar38 == sVar17))
            goto LAB_01089f08;
            ppuVar37 = ppuVar37 + 6;
            pcVar34 = *ppuVar37;
          } while (pcVar34 != (char *)0x0);
        }
        else {
          pcVar34 = "CIDFontName";
          ppuVar37 = &PTR_s_CIDFontName_01729918;
          do {
                    /* catch() { ... } // from try @ 0108a074 with catch @ 0108a0c8 */
            if ((cVar40 == *pcVar34) && (sVar17 = strlen(pcVar34), sVar38 == sVar17)) {
              lVar20 = 0;
                    /* catch() { ... } // from try @ 0108a06c with catch @ 0108a0e0 */
              while (pcVar9[lVar20 + 2] == pcVar34[lVar20 + 1]) {
                lVar30 = lVar20 + 2;
                lVar20 = lVar20 + 1;
                if ((long)sVar38 <= lVar30) goto LAB_01089f08;
              }
            }
            ppuVar37 = ppuVar37 + 6;
            pcVar34 = *ppuVar37;
          } while (pcVar34 != (char *)0x0);
        }
      }
    }
  } while( true );
LAB_0108a4fc:
                    /* try { // try from 0108a500 to 0118a513 has its CatchHandler @ 0108afc4 */
  lVar20 = FT_Stream_Pos(lVar30);
  uVar14 = *(long *)(lVar30 + 8) - lVar20;
  uVar10 = local_24c;
  if (uVar14 == 0) goto joined_r0x0108a6dc;
  if (0xff < uVar14) {
    uVar14 = 0x100;
  }
                    /* try { // try from 0108a51c to 0118a543 has its CatchHandler @ 0108b008 */
  iVar11 = FT_Stream_Read(lVar30,&local_178,uVar14);
  uVar10 = local_24c;
  if (iVar11 != 0) goto joined_r0x0108a6dc;
  pbVar41 = (byte *)&local_178;
  lVar15 = FT_Stream_Pos(lVar30);
  pbVar32 = pbVar41 + (lVar15 - lVar20);
  do {
    bVar35 = *pbVar41;
                    /* try { // try from 0108a544 to 0118a56f has its CatchHandler @ 0108a4c4 */
    uVar27 = bVar35 - 0x30;
    if (uVar27 < 10) {
      bVar8 = false;
      if (cVar40 == '\0') goto LAB_0108a5c4;
LAB_0108a5a4:
      *pcVar21 = (char)(uVar27 << 4);
      if (bVar8) goto LAB_0108a61c;
LAB_0108a5d4:
      cVar40 = '\x01' - cVar40;
                    /* try { // try from 0108a5dc to 0118a5ef has its CatchHandler @ 0108afbc */
      if (pcVar25 <= pcVar21) goto LAB_0108a61c;
    }
    else {
      uVar27 = (uint)bVar35;
      if (bVar35 - 0x61 < 6) {
        bVar8 = false;
        uVar27 = uVar27 + 0x9f;
joined_r0x0108a5f4:
                    /* try { // try from 0108a5f4 to 0118a61b has its CatchHandler @ 0108b000 */
        if (cVar40 != '\0') goto LAB_0108a5a4;
LAB_0108a5c4:
        *pcVar21 = *pcVar21 + (char)uVar27;
        pcVar21 = pcVar21 + 1;
        if (!bVar8) goto LAB_0108a5d4;
        goto LAB_0108a61c;
      }
      if (uVar27 - 0x41 < 6) {
        bVar8 = false;
        uVar27 = uVar27 + 0xc9;
        goto joined_r0x0108a5f4;
      }
      uVar10 = local_24c;
      if (0x3e < uVar27) goto joined_r0x0108a6dc;
                    /* try { // try from 0108a570 to 0118a583 has its CatchHandler @ 0108afc0 */
      if ((1L << ((ulong)bVar35 & 0x3f) & 0x100003601U) == 0) {
        if ((ulong)bVar35 == 0x3e) {
          uVar27 = 0;
                    /* try { // try from 0108a588 to 0118a5af has its CatchHandler @ 0108b004 */
          bVar8 = true;
          goto joined_r0x0108a5f4;
        }
        goto joined_r0x0108a6dc;
      }
    }
    pbVar41 = pbVar41 + 1;
  } while (pbVar41 < pbVar32);
  goto LAB_0108a4fc;
LAB_01089f08:
  if (*(int *)((long)ppuVar37 + 0xc) == 0xb) {
    (*(code *)ppuVar37[2])(param_2,&local_248);
    pcVar21 = local_248;
  }
  else {
    puVar26 = param_2 + 0x21;
    switch(*(undefined4 *)(ppuVar37 + 1)) {
    case 0:
      break;
    default:
      if ((local_188 < 0) || (*(int *)(param_2 + 0x47) <= local_188)) {
        local_230 = 0xa0;
        uVar10 = local_230;
        goto joined_r0x0108a6dc;
      }
      puVar26 = (undefined8 *)(param_2[0x48] + (long)local_188 * 0x150);
      break;
    case 2:
      puVar26 = param_2 + 0x4a;
      break;
    case 3:
      puVar26 = param_2 + 0x27;
      break;
    case 5:
      puVar26 = param_2 + 0x2e;
    }
    pcVar22 = local_1c8;
    if (*(int *)((long)ppuVar37 + 0xc) - 9U < 2) {
      pcVar22 = local_1c0;
    }
    local_178 = puVar26;
    local_230 = (*pcVar22)(&local_248,ppuVar37,&local_178,0,0);
    pcVar21 = local_248;
  }
  uVar10 = local_230;
  local_248 = pcVar21;
  if (local_230 != 0) goto joined_r0x0108a6dc;
  goto LAB_01089fd8;
LAB_0108a61c:
                    /* try { // try from 0108a61c to 0118a657 has its CatchHandler @ 0108a4c4 */
  FT_Stream_OpenMemory(param_2[0x4e],param_2[0x4d],local_198);
  pbVar41 = (byte *)0x0;
LAB_0108a180:
  uVar13 = param_2[0x17];
                    /* try { // try from 0108a184 to 0118a197 has its CatchHandler @ 0108a348 */
  lVar20 = param_2[0x4e];
  lVar30 = param_2[0x20];
                    /* try { // try from 0108a1a0 to 0118a1c7 has its CatchHandler @ 0108a35c */
  param_2[0x49] = pbVar41;
  puVar18 = (uint *)ft_mem_realloc(uVar13,0x10,0,(long)*(int *)(param_2 + 0x47),0,&local_178);
  param_2[0x4b] = puVar18;
  puVar36 = (ulong *)0x0;
  if ((uint)local_178 == 0) {
                    /* try { // try from 0108a1c8 to 0118a1eb has its CatchHandler @ 0108a150 */
    if (*(int *)(param_2 + 0x47) < 1) {
      puVar36 = (ulong *)0x0;
    }
    else {
      lVar15 = 0;
      uVar10 = 0;
      puVar36 = (ulong *)0x0;
      do {
        lVar31 = param_2[0x48];
        lVar16 = lVar31 + lVar15 * 0x150;
                    /* try { // try from 0108a1ec to 0118a1ff has its CatchHandler @ 0108a344 */
        uVar27 = *(uint *)(lVar16 + 0x138);
        if (uVar27 == 0xffffffff) {
LAB_0108a638:
          local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0xa0);
LAB_0108a640:
          lVar20 = param_2[0x4b];
          if (lVar20 != 0) {
            if (0 < *(int *)(param_2 + 0x47)) {
              lVar30 = 0;
                    /* try { // try from 0108a658 to 0118a66b has its CatchHandler @ 0108afb8 */
              lVar15 = 8;
              do {
                if (*(undefined8 **)(lVar20 + lVar15) != (undefined8 *)0x0) {
                  ft_mem_free(uVar13,**(undefined8 **)(lVar20 + lVar15));
                    /* try { // try from 0108a670 to 0118a697 has its CatchHandler @ 0108affc */
                  **(undefined8 **)(param_2[0x4b] + lVar15) = 0;
                  lVar20 = param_2[0x4b];
                }
                ft_mem_free(uVar13,*(undefined8 *)(lVar20 + lVar15));
                lVar20 = param_2[0x4b];
                lVar30 = lVar30 + 1;
                *(undefined8 *)(lVar20 + lVar15) = 0;
                    /* try { // try from 0108a698 to 0118a6c7 has its CatchHandler @ 0108a4c4 */
                lVar15 = lVar15 + 0x10;
              } while (lVar30 < *(int *)(param_2 + 0x47));
            }
            ft_mem_free(uVar13);
            param_2[0x4b] = 0;
          }
          break;
        }
        iVar11 = *(int *)(lVar16 + 4);
        uVar2 = uVar27 + 1;
                    /* try { // try from 0108a204 to 0118a22b has its CatchHandler @ 0108a358 */
        if (uVar10 < uVar2) {
          uVar3 = uVar27 + 4 & 0xfffffffc;
          if (uVar3 <= uVar10) goto LAB_0108a638;
                    /* try { // try from 0108a22c to 0118a24f has its CatchHandler @ 0108a150 */
          puVar36 = (ulong *)ft_mem_realloc(uVar13,8,uVar10,uVar3,puVar36,&local_178);
          if ((uint)local_178 == 0) {
            uVar10 = uVar27 + 4 & 0xfffffffc;
            goto LAB_0108a258;
          }
          goto LAB_0108a640;
        }
LAB_0108a258:
                    /* try { // try from 0108a268 to 0118a28f has its CatchHandler @ 0108a354 */
        iVar12 = FT_Stream_Seek(lVar20,*(long *)(lVar31 + lVar15 * 0x150 + 0x140) + param_2[0x49]);
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,iVar12);
        if (iVar12 != 0) goto LAB_0108a640;
        lVar31 = lVar31 + lVar15 * 0x150;
        iVar12 = FT_Stream_EnterFrame(lVar20,*(int *)(lVar31 + 0x148) * uVar2);
                    /* try { // try from 0108a290 to 0118a2b7 has its CatchHandler @ 0108a150 */
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,iVar12);
        if (iVar12 != 0) goto LAB_0108a640;
        uVar3 = *(uint *)(lVar31 + 0x148);
        if ((uVar3 & 0xff) == 0) {
                    /* try { // try from 0108a2f8 to 0118a38b has its CatchHandler @ 0108a150 */
          uVar14 = 0;
          do {
            puVar36[uVar14] = 0;
            uVar3 = (int)uVar14 + 1;
            uVar14 = (ulong)uVar3;
          } while (uVar3 <= uVar27);
        }
        else {
          pbVar41 = *(byte **)(lVar20 + 0x40);
          uVar24 = 0;
                    /* try { // try from 0108a2b8 to 0118a2cb has its CatchHandler @ 0108a33c */
          do {
            uVar14 = 0;
            pbVar32 = pbVar41;
            uVar28 = uVar3;
            do {
                    /* try { // try from 0108a2d0 to 0118a2f7 has its CatchHandler @ 0108a350 */
              uVar28 = uVar28 - 1;
              uVar14 = (ulong)*pbVar32 | uVar14 << 8;
              pbVar32 = pbVar32 + 1;
            } while ((uVar28 & 0xff) != 0);
            puVar36[uVar24] = uVar14;
            uVar24 = uVar24 + 1;
            pbVar41 = pbVar41 + ((ulong)(uVar3 - 1) & 0xff) + 1;
          } while (uVar24 <= uVar27);
        }
        FT_Stream_ExitFrame(lVar20);
        uVar14 = *puVar36;
        if (uVar27 != 0) {
          uVar23 = 1;
          uVar39 = uVar14;
          do {
            puVar1 = puVar36 + uVar23;
            if (*puVar1 < uVar39) goto LAB_0108a640;
            uVar3 = (int)uVar23 + 1;
            uVar23 = (ulong)uVar3;
                    /* catch() { ... } // from try @ 0108a2b8 with catch @ 0108a33c */
            uVar39 = *puVar1;
          } while (uVar3 <= uVar27);
        }
                    /* catch() { ... } // from try @ 0108a250 with catch @ 0108a340 */
        uVar39 = puVar36[uVar27];
                    /* catch() { ... } // from try @ 0108a1ec with catch @ 0108a344 */
                    /* catch() { ... } // from try @ 0108a184 with catch @ 0108a348 */
                    /* catch() { ... } // from try @ 0108a2d0 with catch @ 0108a350 */
                    /* catch() { ... } // from try @ 0108a268 with catch @ 0108a354 */
                    /* catch() { ... } // from try @ 0108a204 with catch @ 0108a358 */
                    /* catch() { ... } // from try @ 0108a1a0 with catch @ 0108a35c */
        uVar19 = ft_mem_realloc(uVar13,8,0,uVar2,0,&local_178);
        *(undefined8 *)(puVar18 + 2) = uVar19;
        if ((uint)local_178 != 0) goto LAB_0108a640;
        lVar16 = uVar39 - uVar14;
        uVar19 = ft_mem_alloc(uVar13,lVar16,&local_178);
        **(undefined8 **)(puVar18 + 2) = uVar19;
        if ((uint)local_178 != 0) goto LAB_0108a640;
        iVar12 = FT_Stream_Seek(lVar20,*puVar36 + param_2[0x49]);
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,iVar12);
        if (iVar12 != 0) goto LAB_0108a640;
        iVar12 = FT_Stream_Read(lVar20,**(undefined8 **)(puVar18 + 2),lVar16);
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,iVar12);
        if (iVar12 != 0) goto LAB_0108a640;
        if (uVar27 != 0) {
          uVar39 = *puVar36;
          uVar23 = 1;
          uVar14 = uVar39;
          do {
            lVar16 = uVar23 * 8;
            iVar12 = (int)uVar23;
            uVar29 = puVar36[uVar23];
            uVar2 = iVar12 + 1;
            uVar23 = (ulong)uVar2;
            *(ulong *)(*(long *)(puVar18 + 2) + lVar16) =
                 *(long *)(*(long *)(puVar18 + 2) + (ulong)(iVar12 - 1) * 8) + (uVar29 - uVar14);
            uVar14 = uVar29;
          } while (uVar2 <= uVar27);
          if ((-1 < iVar11) &&
             ((**(code **)(lVar30 + 0x20))
                        (**(undefined8 **)(puVar18 + 2),puVar36[1] - uVar39,0x10ea), uVar27 != 1)) {
            lVar16 = 0;
            do {
                    /* try { // try from 0108a44c to 0118a477 has its CatchHandler @ 0108a44c
                       catch() { ... } // from try @ 0108a44c with catch @ 0108a44c
                       catch() { ... } // from try @ 0108a484 with catch @ 0108a44c */
              (**(code **)(lVar30 + 0x20))
                        (*(undefined8 *)(*(long *)(puVar18 + 2) + lVar16 * 8 + 8),
                         puVar36[lVar16 + 2] - puVar36[lVar16 + 1],0x10ea);
              lVar16 = lVar16 + 1;
            } while ((ulong)uVar27 - 1 != lVar16);
          }
        }
                    /* try { // try from 0108a478 to 0118a483 has its CatchHandler @ 0108a4b0 */
        *puVar18 = uVar27;
                    /* try { // try from 0108a484 to 0118a4c3 has its CatchHandler @ 0108a44c */
        lVar15 = lVar15 + 1;
        puVar18 = puVar18 + 4;
      } while (lVar15 < *(int *)(param_2 + 0x47));
    }
  }
  ft_mem_free(uVar13,puVar36);
                    /* try { // try from 0108a6c8 to 0118a6db has its CatchHandler @ 0108afb4 */
  uVar10 = (uint)local_178;
joined_r0x0108a6dc:
  local_24c = uVar10;
  if (local_1b0 != (char *)0x0) {
    FT_Stream_ReleaseFrame(local_1b8);
  }
  (*local_218)(&local_248);
  uVar14 = (ulong)local_24c;
  if ((-1 < param_3) && (local_24c == 0)) {
    if (param_3 == 0) {
      uVar14 = param_2[2];
      param_2[4] = param_2[0x46];
      *(undefined4 *)(param_2 + 9) = 0;
      param_2[1] = 0;
      param_2[2] = uVar14 | 0x811;
      if (*(char *)(param_2 + 0x2d) != '\0') {
        param_2[2] = uVar14 | 0x815;
      }
      pcVar21 = (char *)param_2[0x2a];
      param_2[5] = pcVar21;
      param_2[6] = "Regular";
      if (pcVar21 == (char *)0x0) {
        if (param_2[0x21] != 0) {
          param_2[5] = param_2[0x21];
        }
      }
      else {
        pcVar25 = (char *)param_2[0x29];
        if (pcVar25 != (char *)0x0) {
          cVar40 = *pcVar25;
          while (cVar40 != '\0') {
            while (cVar4 = *pcVar21, cVar40 != cVar4) {
              if ((cVar40 == ' ') || (cVar40 == '-')) goto LAB_01089d88;
              if ((cVar4 != ' ') && (cVar4 != '-')) {
                if (cVar4 == '\0') {
                  param_2[6] = pcVar25;
                }
                goto LAB_01089dac;
              }
              pcVar21 = pcVar21 + 1;
              if (cVar40 == '\0') goto LAB_01089dac;
            }
            pcVar21 = pcVar21 + 1;
LAB_01089d88:
            pcVar25 = pcVar25 + 1;
            cVar40 = *pcVar25;
          }
        }
      }
LAB_01089dac:
      pcVar21 = (char *)param_2[0x2b];
      lVar20 = param_2[0x2c];
      param_2[3] = (ulong)(lVar20 != 0);
      if ((pcVar21 != (char *)0x0) &&
         ((iVar11 = strcmp(pcVar21,"Bold"), iVar11 == 0 ||
          (iVar11 = strcmp(pcVar21,"Black"), iVar11 == 0)))) {
        param_2[3] = (ulong)(lVar20 != 0) | 2;
      }
      uVar10 = (uint)*(ushort *)(param_2 + 0x11);
      param_2[0xd] = (long)param_2[0x2e] >> 0x10;
      param_2[0xe] = (long)param_2[0x2f] >> 0x10;
      *(undefined4 *)(param_2 + 7) = 0;
      param_2[8] = 0;
      param_2[0xf] = param_2[0x30] + 0xffff >> 0x10;
      param_2[0x10] = param_2[0x31] + 0xffff >> 0x10;
      if (*(ushort *)(param_2 + 0x11) == 0) {
        uVar10 = 1000;
        *(undefined2 *)(param_2 + 0x11) = 1000;
      }
      sVar5 = (short)((ulong)param_2[0x2f] >> 0x10);
      *(short *)((long)param_2 + 0x8c) = sVar5;
      sVar7 = (short)((ulong)(param_2[0x31] + 0xffff) >> 0x10);
      uVar27 = (int)sVar7 - (int)sVar5;
      *(short *)((long)param_2 + 0x8a) = sVar7;
      *(undefined2 *)((long)param_2 + 0x94) = *(undefined2 *)((long)param_2 + 0x16a);
      uVar14 = 0;
      if ((int)uVar27 <= (int)(short)((ulong)(uVar10 * 0xc) * 0x19999999a000 >> 0x30)) {
        uVar27 = (uVar10 * 0xc) / 10;
      }
      *(short *)((long)param_2 + 0x8e) = (short)uVar27;
      *(undefined2 *)((long)param_2 + 0x96) = *(undefined2 *)((long)param_2 + 0x16c);
    }
    else {
      uVar14 = 6;
    }
  }
LAB_01089e84:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}

