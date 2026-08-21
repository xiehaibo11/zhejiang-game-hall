
/* WARNING: Type propagation algorithm not settling */

ulong FUN_010776e0(undefined8 param_1,byte *param_2,int param_3)

{
  byte *__n;
  byte bVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  void *pvVar13;
  undefined2 extraout_var;
  byte *__dest;
  size_t __n_00;
  int *piVar14;
  ulong uVar15;
  char *pcVar16;
  long *plVar17;
  uint uVar18;
  byte *pbVar19;
  ulong uVar20;
  char *pcVar21;
  uint uVar22;
  char *pcVar23;
  char cVar24;
  long lVar25;
  byte *pbVar26;
  long lVar27;
  long lVar28;
  undefined8 local_c28;
  uint local_c10;
  uint local_c0c;
  byte *local_c08;
  byte *local_c00;
  byte *local_bf8;
  int local_bf0;
  undefined8 local_be8;
  code *local_bd8;
  code *local_bd0;
  code *local_bc8;
  long local_bb8;
  undefined1 local_b84;
  undefined1 local_b82;
  long *local_b78;
  byte *local_b70;
  long lStack_b68;
  byte *local_b60;
  byte *pbStack_b58;
  undefined2 local_b50;
  undefined1 local_b4e;
  undefined4 local_b48;
  undefined1 auStack_b40 [32];
  int local_b20;
  long local_b18;
  code *local_ae8;
  int local_ae0;
  undefined8 local_ad8 [5];
  undefined8 local_ab0;
  code *local_a80;
  undefined8 local_a78 [3];
  long local_a60;
  undefined8 local_a50;
  undefined8 uStack_a48;
  code *local_a20;
  undefined1 auStack_a18 [88];
  code *local_9c0;
  undefined4 local_9b8;
  undefined8 local_9b0 [3];
  long local_998;
  undefined8 local_988;
  undefined8 uStack_980;
  code *local_958;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_80;
  undefined4 local_78;
  uint local_70;
  undefined4 uStack_6c;
  
                    /* try { // try from 010776ec to 011776ef has its CatchHandler @ 01077790 */
                    /* try { // try from 010776fc to 0117770b has its CatchHandler @ 01077794 */
                    /* try { // try from 0107770c to 01177803 has its CatchHandler @ 010775e8 */
  param_2[0] = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  lVar8 = ft_module_get_service(*(undefined8 *)(param_2 + 0xb0),"postscript-cmaps");
  *(long *)(param_2 + 0x300) = lVar8;
  lVar9 = FT_Get_Module_Interface(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),"psaux");
  *(long *)(param_2 + 0x308) = lVar9;
  if (lVar9 == 0) {
    return 0xb;
  }
  uVar10 = FT_Get_Module_Interface(*(undefined8 *)(*(long *)(param_2 + 0xb0) + 8),"pshinter");
  lVar28 = *(long *)(param_2 + 0x308);
  *(undefined8 *)(param_2 + 0x368) = uVar10;
  memset(&local_c08,0,0x2c0);
  param_2[0x350] = 0xff;
  param_2[0x351] = 0xff;
  param_2[0x352] = 0xff;
  param_2[0x353] = 0xff;
  param_2[0x354] = 0xff;
  param_2[0x355] = 0xff;
  param_2[0x356] = 0xff;
  param_2[0x357] = 0xff;
  param_2[0x358] = 0;
  param_2[0x359] = 0;
  param_2[0x35a] = 0;
  param_2[0x35b] = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010776ec with catch @ 01077790
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010776fc with catch @ 01077794
                        */
  param_2[0x1b0] = 7;
  param_2[0x1b1] = 0;
  param_2[0x1b2] = 0;
  param_2[0x1b3] = 0;
  param_2[0x1b4] = 1;
  param_2[0x1b5] = 0;
  param_2[0x1b6] = 0;
  param_2[0x1b7] = 0;
  param_2[0x13c] = 4;
  param_2[0x13d] = 0;
  param_2[0x13e] = 0;
  param_2[0x13f] = 0;
  param_2[0x1f8] = 0x5c;
  param_2[0x1f9] = 0xf;
  param_2[0x1fa] = 0;
  param_2[0x1fb] = 0;
  param_2[0x1fc] = 0;
  param_2[0x1fd] = 0;
  param_2[0x1fe] = 0;
  param_2[0x1ff] = 0;
  param_2[0x1a8] = 0;
  param_2[0x1a9] = 0xa0;
  param_2[0x1aa] = 0x27;
  param_2[0x1ab] = 0;
  param_2[0x1ac] = 0;
  param_2[0x1ad] = 0;
  param_2[0x1ae] = 0;
  param_2[0x1af] = 0;
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  plVar17 = *(long **)(param_2 + 0xc0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01077694 with catch @ 010777c8
                        */
  (*(code *)**(undefined8 **)(lVar28 + 8))(&local_c08,0,0,uVar10);
  pbStack_b58 = (byte *)0x0;
  local_b60 = (byte *)0x0;
  lStack_b68 = 0;
  local_b70 = (byte *)0x0;
  local_b4e = 0;
  local_b50 = 0;
  local_b78 = plVar17;
  local_c0c = FUN_0107a994(plVar17,"%!PS-AdobeFont",0xe);
                    /* try { // try from 0107782c to 01177873 has its CatchHandler @ 0107782c
                       catch() { ... } // from try @ 0107782c with catch @ 0107782c
                       catch() { ... } // from try @ 010778ac with catch @ 0107782c */
  if (((local_c0c == 0) ||
      (((local_c0c & 0xff) == 2 &&
       (local_c0c = FUN_0107a994(plVar17,"%!FontType",10), local_c0c == 0)))) &&
     (local_c0c = FT_Stream_Seek(plVar17,0), local_c0c == 0)) {
    sVar5 = FT_Stream_ReadUShort(plVar17,&local_70);
    if (local_70 != 0) {
LAB_01077864:
      local_c0c = local_70;
      goto LAB_01077868;
    }
                    /* try { // try from 01077978 to 0117797f has its CatchHandler @ 01077c80 */
    if (1 < (ushort)(sVar5 + 0x7fffU)) {
LAB_010779f8:
      local_c0c = 0;
      local_c0c = FT_Stream_Seek(plVar17,0);
      if (local_c0c == 0) {
        lVar25 = plVar17[1];
        if (plVar17[5] == 0) goto LAB_010779bc;
LAB_01077a1c:
        local_b70 = (byte *)ft_mem_alloc(uVar10,lVar25,&local_c0c);
        if ((local_c0c == 0) &&
           (local_c0c = FT_Stream_Read(plVar17,local_b70,lVar25), local_c0c == 0))
        goto LAB_01077a5c;
      }
      goto LAB_01077868;
    }
                    /* try { // try from 01077980 to 01177adb has its CatchHandler @ 01077924 */
    lVar25 = FT_Stream_ReadULongLE(plVar17,&local_70);
    if (local_70 != 0) goto LAB_01077864;
    local_c0c = 0;
    if (sVar5 != -0x7fff) goto LAB_010779f8;
    local_b50 = CONCAT11(local_b50._1_1_,1);
    if (plVar17[5] != 0) goto LAB_01077a1c;
LAB_010779bc:
    local_c0c = 0;
    local_b70 = (byte *)(*plVar17 + plVar17[2]);
    local_b50 = CONCAT11(1,(char)local_b50);
    lStack_b68 = lVar25;
    local_c0c = FT_Stream_Skip(plVar17,lVar25);
    lVar25 = lStack_b68;
    if (local_c0c != 0) goto LAB_01077868;
LAB_01077a5c:
    lStack_b68 = lVar25;
    local_c08 = local_b70;
    local_c10 = 0;
    local_bf8 = local_b70 + lStack_b68;
    local_c00 = local_c08;
LAB_010778ac:
                    /* try { // try from 010778ac to 01177923 has its CatchHandler @ 0107782c */
    local_c10 = FUN_0107a33c(param_2,&local_c08,local_b70,lStack_b68);
    plVar17 = local_b78;
    uVar10 = local_be8;
                    /* catch() { ... } // from try @ 01077874 with catch @ 010778bc */
    uVar18 = local_c10;
    uVar22 = local_c0c;
    if (local_c10 == 0) {
                    /* catch() { ... } // from try @ 010778a8 with catch @ 010778cc */
      local_c0c = 0;
      pbVar26 = local_b70;
      if ((char)local_b50 == '\0') {
        do {
          do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01077978 with catch @ 01077c80
                        */
            pbVar26 = pbVar26 + 10;
            while (((((pbVar26[-10] != 0x65 || (local_b70 + lStack_b68 <= pbVar26 + -1)) ||
                     (pbVar26[-9] != 0x65)) || ((pbVar26[-8] != 0x78 || (pbVar26[-7] != 0x65)))) ||
                   (pbVar26[-6] != 99))) {
              pbVar19 = pbVar26 + -9;
              pbVar26 = pbVar26 + 1;
              if (local_b70 + lStack_b68 <= pbVar19) goto LAB_01077ffc;
            }
            local_c08 = local_b70;
            local_bf8 = pbVar26;
          } while (pbVar26 <= local_b70);
          do {
            if ((*local_c08 == 0x65) && (iVar6 = strncmp((char *)local_c08,"eexec",5), iVar6 == 0))
            {
                    /* catch() { ... } // from try @ 01077ed8 with catch @ 01077f14 */
              local_bf8 = local_b70 + lStack_b68;
              (*local_bc8)(&local_c08);
              pbVar19 = local_bf8;
              pbVar26 = local_c08;
              __n_00 = (long)local_bf8 - (long)local_c08;
              pvVar12 = memchr(local_c08,10,__n_00);
              if (pvVar12 == (void *)0x0) {
                bVar4 = true;
              }
              else {
                pvVar13 = memchr(pbVar26,0xd,__n_00);
                bVar4 = pvVar13 < pvVar12;
              }
              goto joined_r0x01077fc0;
            }
            (*local_bc8)(&local_c08);
          } while ((local_bf0 == 0) && ((*local_bd0)(&local_c08), local_c08 < pbVar26));
        } while( true );
      }
      uVar11 = FT_Stream_Pos(local_b78);
      pbStack_b58 = (byte *)0x0;
      while (sVar5 = FT_Stream_ReadUShort(plVar17,&local_70), uVar18 = local_70, uVar22 = local_70,
            local_70 == 0) {
        if (1 < (ushort)(sVar5 + 0x7fffU)) {
LAB_01077a90:
          local_c0c = 0;
          if (pbStack_b58 == (byte *)0x0) goto LAB_01077ffc;
          local_c0c = FT_Stream_Seek(plVar17,uVar11);
          uVar18 = local_c0c;
          uVar22 = local_c0c;
          if ((local_c0c == 0) &&
             (local_b60 = (byte *)ft_mem_alloc(uVar10,pbStack_b58,&local_c0c), uVar18 = local_c0c,
             uVar22 = local_c0c, local_c0c == 0)) {
            pbStack_b58 = (byte *)0x0;
            sVar5 = FT_Stream_ReadUShort(plVar17,&local_70);
                    /* try { // try from 01077adc to 01177ae7 has its CatchHandler @ 01077c6c */
            goto joined_r0x01077ae4;
          }
          break;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01077980 with catch @ 01077924
                       catch(type#1 @ 00000000) { ... } // from try @ 01077b54 with catch @ 01077924
                        */
        lVar25 = FT_Stream_ReadULongLE(plVar17,&local_70);
        uVar18 = local_70;
        uVar22 = local_70;
        if (local_70 != 0) break;
        local_c0c = 0;
        if (sVar5 != -0x7ffe) goto LAB_01077a90;
        pbStack_b58 = pbStack_b58 + lVar25;
        local_c0c = FT_Stream_Skip(plVar17,lVar25);
        uVar18 = local_c0c;
        uVar22 = local_c0c;
        if (local_c0c != 0) break;
      }
    }
  }
  else {
LAB_01077868:
    uVar18 = local_c0c;
    uVar22 = local_c0c;
    if (local_b50._1_1_ == '\0') {
      ft_mem_free(uVar10,local_b70);
      local_b70 = (byte *)0x0;
      local_c10 = local_c0c;
      uVar18 = local_c0c;
      uVar22 = local_c0c;
      if (local_c0c == 0) goto LAB_010778ac;
    }
  }
  goto joined_r0x01077fac;
joined_r0x01077fc0:
  __dest = local_b70;
  if (pbVar19 <= pbVar26) goto LAB_01077ffc;
  bVar1 = *pbVar26;
                    /* try { // try from 01077fec to 01178087 has its CatchHandler @ 01077fec
                       catch(type#1 @ 00000000) { ... } // from try @ 01077fec with catch @ 01077fec
                       catch(type#1 @ 00000000) { ... } // from try @ 01078100 with catch @ 01077fec
                        */
  if ((((bVar1 != 9) && (bVar1 != 0x20)) && (bVar1 != 10)) && (!(bool)(bVar4 & bVar1 == 0xd))) {
    __n = local_b70 + (lStack_b68 - (long)pbVar26);
    if (local_b50._1_1_ == '\0') {
      local_b4e = 1;
      local_b70 = (byte *)0x0;
      lStack_b68 = 0;
    }
    else {
      __dest = (byte *)ft_mem_alloc(uVar10,__n + 1,&local_c0c);
      uVar18 = local_c0c;
      uVar22 = local_c0c;
      local_b60 = __dest;
      if (local_c0c != 0) goto joined_r0x01077fac;
    }
    local_b60 = __dest;
    pbStack_b58 = __n;
                    /* try { // try from 01078584 to 0117861f has its CatchHandler @ 01078584
                       catch(type#1 @ 00000000) { ... } // from try @ 01078584 with catch @ 01078584
                       catch(type#1 @ 00000000) { ... } // from try @ 01078698 with catch @ 01078584
                        */
    if ((((pbVar26 + 3 < pbVar19) &&
         ((*pbVar26 - 0x30 < 10 ||
          ((uVar18 = *pbVar26 - 0x41, uVar18 < 0x26 &&
           ((1L << ((ulong)uVar18 & 0x3f) & 0x3f0000003fU) != 0)))))) &&
        ((pbVar26[1] - 0x30 < 10 ||
         ((uVar18 = pbVar26[1] - 0x41, uVar18 < 0x26 &&
          ((1L << ((ulong)uVar18 & 0x3f) & 0x3f0000003fU) != 0)))))) &&
       (((pbVar26[2] - 0x30 < 10 ||
         ((uVar18 = pbVar26[2] - 0x41, uVar18 < 0x26 &&
          ((1L << ((ulong)uVar18 & 0x3f) & 0x3f0000003fU) != 0)))) &&
        ((uVar18 = (uint)pbVar26[3], uVar18 - 0x30 < 10 ||
         ((uVar18 = uVar18 - 0x41, uVar18 < 0x26 &&
          ((1L << ((ulong)uVar18 & 0x3f) & 0x3f0000003fU) != 0)))))))) {
      local_c08 = pbVar26;
      (**(code **)(*(long *)(lVar28 + 8) + 0x30))(&local_c08,__dest,__n,&local_70,0);
      pbStack_b58 = (byte *)CONCAT44(uStack_6c,local_70);
      local_b60[(long)pbStack_b58] = 0;
    }
    else {
                    /* try { // try from 01078620 to 01178627 has its CatchHandler @ 01078750 */
      memmove(__dest,pbVar26,(size_t)__n);
    }
    goto LAB_01077af8;
  }
  pbVar26 = pbVar26 + 1;
  goto joined_r0x01077fc0;
joined_r0x01077ae4:
  if ((((local_70 != 0) || (1 < (ushort)(sVar5 + 0x7fffU))) ||
      (lVar25 = FT_Stream_ReadULongLE(plVar17,&local_70), local_70 != 0)) ||
     (local_c0c = 0, sVar5 != -0x7ffe)) goto LAB_01077aec;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01077b4c with catch @ 01077c34
                        */
  local_c0c = FT_Stream_Read(plVar17,local_b60 + (long)pbStack_b58,lVar25);
  uVar18 = local_c0c;
  uVar22 = local_c0c;
  if (local_c0c != 0) goto joined_r0x01077fac;
  pbStack_b58 = pbStack_b58 + lVar25;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01077aec with catch @ 01077c54
                        */
  sVar5 = FT_Stream_ReadUShort(plVar17,&local_70);
  goto joined_r0x01077ae4;
LAB_01077aec:
                    /* try { // try from 01077aec to 01177af7 has its CatchHandler @ 01077c54 */
  local_c0c = 0;
LAB_01077af8:
  (**(code **)(lVar28 + 0x20))(local_b60,pbStack_b58,0xd971);
  if (pbStack_b58 < (byte *)0x4) {
LAB_01077ffc:
    uVar18 = 3;
    uVar22 = 3;
  }
  else {
    *local_b60 = 0x20;
    local_b60[1] = 0x20;
    local_b60[2] = 0x20;
    local_b60[3] = 0x20;
    local_c08 = local_b60;
    local_c00 = local_b60;
    local_bf8 = local_b60 + (long)pbStack_b58;
                    /* try { // try from 01077b4c to 01177b53 has its CatchHandler @ 01077c34 */
    local_c10 = local_c0c;
                    /* try { // try from 01077b54 to 01177c83 has its CatchHandler @ 01077924 */
    uVar18 = local_c0c;
    uVar22 = local_c0c;
    if ((local_c0c == 0) &&
       (local_c10 = FUN_0107a33c(param_2,&local_c08), uVar18 = local_c10, uVar22 = local_c0c,
       local_c10 == 0)) {
      piVar14 = *(int **)(param_2 + 0x348);
      param_2[0x140] = param_2[0x140] & 0xfe;
      if (piVar14 == (int *)0x0) {
LAB_01077d88:
        param_2[0x358] = 0;
        param_2[0x359] = 0;
        param_2[0x35a] = 0;
        param_2[0x35b] = 0;
      }
      else {
        if ((piVar14[0xbe] != 0) && (piVar14[0xbe] != piVar14[1])) {
          piVar14[0xbe] = 0;
        }
        if ((*piVar14 == 0) || (uVar18 = piVar14[1], uVar18 == 0)) {
          FUN_0107a86c(param_2);
          piVar14 = *(int **)(param_2 + 0x348);
          if (piVar14 == (int *)0x0) goto LAB_01077d88;
          uVar18 = piVar14[1];
          if (uVar18 != 0) goto LAB_01077bc0;
        }
        else {
LAB_01077bc0:
          uVar22 = 0;
          do {
            if ((char)piVar14[(ulong)uVar22 * 6 + 0x2a] == '\0') {
              FUN_0107a86c(param_2);
              if (*(long *)(param_2 + 0x348) == 0) goto LAB_01077d88;
              break;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 < uVar18);
        }
        if (*(int *)(param_2 + 0x358) != 0) {
          uVar10 = ft_mem_realloc(*(undefined8 *)(param_2 + 0xb8),8,0,*(int *)(param_2 + 0x358),0,
                                  &local_c10);
          *(undefined8 *)(param_2 + 0x360) = uVar10;
          if (local_c10 != 0) {
            param_2[0x358] = 0;
            param_2[0x359] = 0;
            param_2[0x35a] = 0;
            param_2[0x35b] = 0;
            uVar18 = local_c10;
            uVar22 = local_c0c;
            goto joined_r0x01077fac;
          }
        }
      }
      *(int *)(param_2 + 0x278) = local_ae0;
      if (local_998 != 0) {
        local_998 = 0;
        *(undefined4 *)(param_2 + 0x260) = local_9b8;
        *(undefined8 *)(param_2 + 0x248) = local_9b0[0];
        *(undefined8 *)(param_2 + 0x270) = uStack_980;
        *(undefined8 *)(param_2 + 0x268) = local_988;
      }
                    /* try { // try from 01077dc4 to 01177df7 has its CatchHandler @ 01077dc4
                       catch() { ... } // from try @ 01077dc4 with catch @ 01077dc4
                       catch() { ... } // from try @ 01077e44 with catch @ 01077dc4 */
      if ((*(long *)(*(long *)(param_2 + 0xf0) + 0x60) == 0) && (local_a60 == 0)) {
        local_c10 = 3;
      }
      local_a60 = 0;
      *(undefined8 *)(param_2 + 0x250) = local_a78[0];
                    /* try { // try from 01077df8 to 01177dff has its CatchHandler @ 01077e70 */
      *(undefined8 *)(param_2 + 0x290) = uStack_a48;
      *(undefined8 *)(param_2 + 0x288) = local_a50;
      *(undefined8 *)(param_2 + 600) = local_ad8[0];
      *(undefined8 *)(param_2 + 0x280) = local_ab0;
      local_ad8[0] = 0;
      local_ab0 = 0;
      uVar18 = local_c10;
      uVar22 = local_c0c;
                    /* try { // try from 01077e1c to 01177e43 has its CatchHandler @ 01077e58 */
      if (*(int *)(param_2 + 0x220) == 1) {
        if (local_b20 < 1) {
LAB_01077f8c:
          local_c28 = 0;
        }
        else {
          if (local_ae0 < 1) {
            lVar28 = 0;
            do {
              *(undefined2 *)(*(long *)(param_2 + 0x238) + lVar28 * 2) = 0;
              *(char **)(*(long *)(param_2 + 0x240) + lVar28 * 8) = ".notdef";
              lVar28 = lVar28 + 1;
            } while (local_b20 != lVar28);
            goto LAB_01077f8c;
          }
                    /* try { // try from 01077e44 to 01177e83 has its CatchHandler @ 01077dc4 */
          lVar28 = 0;
          local_c28 = 0;
          do {
                    /* catch() { ... } // from try @ 01077e1c with catch @ 01077e58 */
            *(undefined2 *)(*(long *)(param_2 + 0x238) + lVar28 * 2) = 0;
            *(char **)(*(long *)(param_2 + 0x240) + lVar28 * 8) = ".notdef";
            pcVar21 = *(char **)(local_b18 + lVar28 * 8);
            if (pcVar21 != (char *)0x0) {
                    /* catch() { ... } // from try @ 01077df8 with catch @ 01077e70 */
              lVar27 = *(long *)(param_2 + 0x280);
              lVar25 = 0;
              do {
                pcVar23 = *(char **)(lVar27 + lVar25 * 8);
                    /* try { // try from 01077e84 to 01177ed7 has its CatchHandler @ 01077e84
                       catch() { ... } // from try @ 01077e84 with catch @ 01077e84
                       catch() { ... } // from try @ 01077f04 with catch @ 01077e84 */
                iVar6 = strcmp(pcVar21,pcVar23);
                if (iVar6 == 0) {
                  *(short *)(*(long *)(param_2 + 0x238) + lVar28 * 2) = (short)lVar25;
                  *(char **)(*(long *)(param_2 + 0x240) + lVar28 * 8) = pcVar23;
                  iVar6 = strcmp(".notdef",pcVar23);
                  if (iVar6 != 0) {
                    /* try { // try from 01077ed8 to 01177f03 has its CatchHandler @ 01077f14 */
                    iVar6 = (int)lVar28;
                    if (local_c28._4_4_ <= lVar28) {
                      iVar6 = local_c28._4_4_;
                    }
                    if ((int)local_c28 <= lVar28) {
                      local_c28._0_4_ = (int)lVar28 + 1;
                    }
                    local_c28 = CONCAT44(iVar6,(int)local_c28);
                  }
                  break;
                }
                lVar25 = lVar25 + 1;
              } while (lVar25 < local_ae0);
            }
            lVar28 = lVar28 + 1;
                    /* try { // try from 01077f04 to 01177f2f has its CatchHandler @ 01077e84 */
          } while (lVar28 != local_b20);
        }
        *(int *)(param_2 + 0x22c) = local_c28._4_4_;
        *(int *)(param_2 + 0x230) = (int)local_c28;
        *(undefined4 *)(param_2 + 0x228) = local_b48;
        uVar18 = local_c10;
        uVar22 = local_c0c;
      }
    }
  }
joined_r0x01077fac:
  local_c0c = uVar22;
  local_c10 = uVar18;
  if (local_ae8 != (code *)0x0) {
    (*local_ae8)(auStack_b40);
  }
  if (local_a20 != (code *)0x0) {
    (*local_a20)(local_a78);
  }
  if (local_a80 != (code *)0x0) {
    (*local_a80)(local_ad8);
  }
  if (local_9c0 != (code *)0x0) {
    (*local_9c0)(auStack_a18);
  }
  if (local_958 != (code *)0x0) {
    (*local_958)(local_9b0);
  }
  ft_mem_free(local_be8,local_b60);
  local_b60 = (byte *)0x0;
  if (local_b50._1_1_ == '\0') {
                    /* try { // try from 01078088 to 0117808f has its CatchHandler @ 010781b8 */
    ft_mem_free(local_be8,local_b70);
    local_b70 = (byte *)0x0;
  }
  (*local_bd8)(&local_c08);
  if (param_3 < 0) {
    return (ulong)local_c10;
  }
  if (local_c10 != 0) {
    return (ulong)local_c10;
  }
  if (0 < param_3) {
    return 6;
  }
  uVar20 = *(ulong *)(param_2 + 0x10);
  *(long *)(param_2 + 0x20) = (long)*(int *)(param_2 + 0x278);
  uVar15 = uVar20 | 0xa11;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(ulong *)(param_2 + 0x10) = uVar15;
  if (param_2[0x128] != 0) {
                    /* try { // try from 010780e0 to 011780e3 has its CatchHandler @ 01078180 */
    uVar15 = uVar20 | 0xa15;
    *(ulong *)(param_2 + 0x10) = uVar15;
  }
  lVar28 = *(long *)(param_2 + 0x348);
                    /* try { // try from 010780f0 to 011780ff has its CatchHandler @ 01078184 */
  if (lVar28 != 0) {
    *(ulong *)(param_2 + 0x10) = uVar15 | 0x100;
  }
  pcVar21 = *(char **)(param_2 + 0x110);
                    /* try { // try from 01078100 to 011781f3 has its CatchHandler @ 01077fec */
  *(char **)(param_2 + 0x28) = pcVar21;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  if (pcVar21 == (char *)0x0) {
    if (*(long *)(param_2 + 0x218) != 0) {
      *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x218);
    }
LAB_01078194:
    pcVar16 = "Regular";
    if (*(char **)(param_2 + 0x118) != (char *)0x0) {
      pcVar16 = *(char **)(param_2 + 0x118);
    }
  }
  else {
    pcVar23 = *(char **)(param_2 + 0x108);
    if (pcVar23 == (char *)0x0) goto LAB_01078194;
    cVar24 = *pcVar23;
    if (cVar24 == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010780e0 with catch @ 01078180
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010780f0 with catch @ 01078184
                        */
      pcVar16 = "Regular";
    }
    else {
LAB_01078120:
      do {
        cVar2 = *pcVar21;
        if (cVar24 == cVar2) {
          pcVar21 = pcVar21 + 1;
        }
        else if ((cVar24 != ' ') && (cVar24 != '-')) {
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            pcVar16 = pcVar23;
            if (cVar2 != '\0') goto LAB_01078194;
            break;
          }
          pcVar21 = pcVar21 + 1;
          pcVar16 = "Regular";
          if (cVar24 == '\0') break;
          goto LAB_01078120;
        }
        pcVar23 = pcVar23 + 1;
        cVar24 = *pcVar23;
        pcVar16 = "Regular";
      } while (cVar24 != '\0');
    }
  }
  pcVar21 = *(char **)(param_2 + 0x118);
  lVar25 = *(long *)(param_2 + 0x120);
  *(char **)(param_2 + 0x30) = pcVar16;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01078088 with catch @ 010781b8
                        */
  *(ulong *)(param_2 + 0x18) = (ulong)(lVar25 != 0);
  if ((pcVar21 != (char *)0x0) &&
     ((iVar6 = strcmp(pcVar21,"Bold"), iVar6 == 0 || (iVar6 = strcmp(pcVar21,"Black"), iVar6 == 0)))
     ) {
    *(ulong *)(param_2 + 0x18) = (ulong)(lVar25 != 0) | 2;
  }
  uVar18 = (uint)*(ushort *)(param_2 + 0x88);
  *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x2d0) >> 0x10;
  *(long *)(param_2 + 0x70) = *(long *)(param_2 + 0x2d8) >> 0x10;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  *(long *)(param_2 + 0x78) = *(long *)(param_2 + 0x2e0) + 0xffff >> 0x10;
  *(long *)(param_2 + 0x80) = *(long *)(param_2 + 0x2e8) + 0xffff >> 0x10;
  if (*(ushort *)(param_2 + 0x88) == 0) {
    uVar18 = 1000;
    param_2[0x88] = 0xe8;
    param_2[0x89] = 3;
  }
  sVar5 = (short)((ulong)(*(long *)(param_2 + 0x2e8) + 0xffff) >> 0x10);
  *(short *)(param_2 + 0x8a) = sVar5;
  sVar3 = (short)((ulong)*(long *)(param_2 + 0x2d8) >> 0x10);
  *(short *)(param_2 + 0x8c) = sVar3;
  uVar22 = (int)sVar5 - (int)sVar3;
  lVar25 = *(long *)(param_2 + 0x308);
  if ((int)uVar22 <= (int)(short)((ulong)(uVar18 * 0xc) * 0x19999999a000 >> 0x30)) {
    uVar22 = (uVar18 * 0xc) / 10;
  }
  *(short *)(param_2 + 0x90) = (short)((ulong)(*(long *)(param_2 + 0x2e0) + 0xffff) >> 0x10);
  *(short *)(param_2 + 0x8e) = (short)uVar22;
  iVar6 = (*(code *)**(undefined8 **)(lVar25 + 0x18))
                    (&local_c08,param_2,0,0,*(undefined8 *)(param_2 + 0x280),lVar28,0,0,FUN_0107c454
                    );
  if (iVar6 == 0) {
    local_b82 = 1;
    local_b84 = 0;
    local_16c = *(undefined4 *)(param_2 + 0x260);
    uStack_160 = *(undefined8 *)(param_2 + 0x270);
    local_168 = *(undefined8 *)(param_2 + 0x268);
    local_80 = *(undefined8 *)(param_2 + 0x360);
    local_78 = *(undefined4 *)(param_2 + 0x358);
    if (*(int *)(param_2 + 0x278) < 1) {
                    /* try { // try from 0107835c to 0117838f has its CatchHandler @ 0107835c
                       catch() { ... } // from try @ 0107835c with catch @ 0107835c
                       catch() { ... } // from try @ 010783dc with catch @ 0107835c */
      lVar28 = 0;
    }
    else {
      iVar6 = 0;
      lVar27 = 0;
      do {
        iVar7 = FUN_0107c4ac(&local_c08,iVar6,&local_70);
        if ((iVar7 == 0) &&
           (plVar17 = *(long **)(*(long *)(local_c00 + 0xf0) + 0x60), plVar17 != (long *)0x0)) {
          (**(code **)(*plVar17 + 8))(plVar17[1],&local_70);
        }
        bVar4 = iVar6 != 0;
        iVar6 = iVar6 + 1;
        lVar28 = local_bb8;
        if (local_bb8 <= lVar27 && bVar4) {
          lVar28 = lVar27;
        }
        lVar27 = lVar28;
      } while (iVar6 < *(int *)(param_2 + 0x278));
    }
    (**(code **)(*(long *)(lVar25 + 0x18) + 8))(&local_c08);
    FT_RoundFix(lVar28);
    *(undefined2 *)(param_2 + 0x90) = extraout_var;
  }
  *(undefined2 *)(param_2 + 0x92) = *(undefined2 *)(param_2 + 0x8e);
                    /* try { // try from 01078390 to 01178397 has its CatchHandler @ 01078408 */
  *(undefined2 *)(param_2 + 0x94) = *(undefined2 *)(param_2 + 0x12a);
  *(undefined2 *)(param_2 + 0x96) = *(undefined2 *)(param_2 + 300);
  if (lVar8 == 0) {
switchD_0107840c_default:
    uVar15 = 0;
  }
  else {
    plVar17 = *(long **)(lVar9 + 0x28);
    local_c00 = (byte *)0x10003756e6963;
                    /* try { // try from 010783b4 to 011783db has its CatchHandler @ 010783f0 */
    local_c08 = param_2;
    uVar15 = FT_CMap_New(plVar17[3],0,&local_c08,0);
    if (((uint)uVar15 != 0) && (((uint)uVar15 & 0xff) != 0xa3)) {
      return uVar15;
    }
                    /* try { // try from 010783dc to 0117841b has its CatchHandler @ 0107835c */
                    /* catch() { ... } // from try @ 010783b4 with catch @ 010783f0 */
                    /* catch() { ... } // from try @ 01078390 with catch @ 01078408 */
    switch(*(undefined4 *)(param_2 + 0x220)) {
    case 1:
      local_c00 = (byte *)0x2000741444243;
                    /* try { // try from 0107841c to 0117846f has its CatchHandler @ 0107841c
                       catch() { ... } // from try @ 0107841c with catch @ 0107841c
                       catch() { ... } // from try @ 0107849c with catch @ 0107841c */
      lVar8 = plVar17[2];
      if (lVar8 == 0) {
        return 0;
      }
      break;
    case 2:
      local_c00 = (byte *)0x741444f42;
      lVar8 = *plVar17;
      if (lVar8 == 0) {
        return 0;
      }
      break;
    case 3:
      local_c00 = (byte *)0x300076c617431;
      lVar8 = plVar17[3];
      if (lVar8 == 0) {
        return 0;
      }
      break;
    case 4:
                    /* try { // try from 0107849c to 011784c7 has its CatchHandler @ 0107841c */
      local_c00 = (byte *)0x1000741444245;
                    /* catch() { ... } // from try @ 01078470 with catch @ 010784ac */
      lVar8 = plVar17[1];
      if (lVar8 == 0) {
        return 0;
      }
      break;
    default:
      goto switchD_0107840c_default;
    }
                    /* try { // try from 01078470 to 0117849b has its CatchHandler @ 010784ac */
    uVar15 = FT_CMap_New(lVar8,0,&local_c08,0);
  }
  return uVar15;
}

