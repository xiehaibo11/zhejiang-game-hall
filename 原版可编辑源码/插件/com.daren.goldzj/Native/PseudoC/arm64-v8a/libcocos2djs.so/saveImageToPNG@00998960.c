
/* cocos2d::Image::saveImageToPNG(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

void __thiscall cocos2d::Image::saveImageToPNG(Image *this,basic_string *param_1,bool param_2)

{
  char *__filename;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  FILE *__stream;
  ulong uVar8;
  __jmp_buf_tag *__env;
  undefined8 uVar9;
  undefined1 *__ptr;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  Image *pIVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  int iVar41;
  undefined1 uVar45;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  int iVar46;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  ulong local_88 [2];
  char *local_78;
  long local_70;
  long local_68;
  
                    /* try { // try from 00998964 to 00a989cb has its CatchHandler @ 00998bd4 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar7 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar7 + 0xe8))(local_88,plVar7,param_1);
  __filename = (char *)((ulong)local_88 | 1);
  if ((local_88[0] & 1) != 0) {
    __filename = local_78;
  }
                    /* try { // try from 009989d0 to 00a98a13 has its CatchHandler @ 00998b68 */
  __stream = fopen(__filename,"wb");
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (__stream != (FILE *)0x0) {
    uVar8 = png_create_write_struct("1.6.21",0,0,0);
    local_88[0] = uVar8;
    if (uVar8 == 0) {
      fclose(__stream);
    }
    else {
      local_70 = png_create_info_struct();
                    /* try { // try from 00998a18 to 00a98a5b has its CatchHandler @ 00998b64 */
      if (local_70 == 0) {
        fclose(__stream);
        plVar7 = (long *)0x0;
      }
      else {
        __env = (__jmp_buf_tag *)png_set_longjmp_fn(uVar8,longjmp,0x100);
        iVar6 = setjmp(__env);
        if (iVar6 == 0) {
          png_init_io(local_88[0],__stream);
                    /* try { // try from 00998ab0 to 00a98aeb has its CatchHandler @ 00998bd4 */
          if ((param_2) || (uVar8 = hasAlpha(this), (uVar8 & 1) == 0)) {
            uVar3 = *(undefined4 *)(this + 0x24);
                    /* try { // try from 00998aec to 00a98c2b has its CatchHandler @ 0099882c */
            uVar9 = 2;
          }
          else {
            uVar3 = *(undefined4 *)(this + 0x24);
            uVar9 = 6;
          }
          pIVar24 = this + 0x24;
          png_set_IHDR(local_88[0],local_70,*(undefined4 *)(this + 0x20),uVar3,8,uVar9,0,0,0);
          uVar9 = png_malloc(local_88[0],0x300);
          png_set_PLTE(local_88[0],local_70,uVar9,0x100);
          png_write_info(local_88[0],local_70);
          png_set_packing(local_88[0]);
          __ptr = malloc((long)(int)*(uint *)pIVar24 << 3);
          if (__ptr != (undefined1 *)0x0) {
            uVar8 = hasAlpha(this);
            if ((uVar8 & 1) == 0) {
              uVar1 = *(uint *)pIVar24;
              uVar8 = (ulong)(int)uVar1;
              if (0 < (int)uVar1) {
                lVar19 = *(long *)(this + 0x10);
                iVar6 = *(int *)(this + 0x20);
                if (uVar1 < 4) {
                  uVar20 = 0;
                }
                else {
                  iVar41 = 0;
                  iVar46 = 1;
                  uVar20 = uVar8 & 0xfffffffffffffffc;
                  plVar7 = (long *)(__ptr + 0x10);
                  uVar18 = uVar20;
                  do {
                    iVar76 = iVar41 * 3;
                    iVar77 = iVar46 * 3;
                    iVar74 = iVar41 * 3;
                    iVar75 = iVar46 * 3;
                    /* try { // try from 00998d38 to 00a98d9f has its CatchHandler @ 00998f2c */
                    uVar18 = uVar18 - 4;
                    iVar41 = iVar41 + 4;
                    iVar46 = iVar46 + 4;
                    plVar7[-1] = lVar19 + iVar77 * iVar6;
                    plVar7[-2] = lVar19 + iVar76 * iVar6;
                    plVar7[1] = lVar19 + (iVar75 + 6) * iVar6;
                    *plVar7 = lVar19 + (iVar74 + 6) * iVar6;
                    plVar7 = plVar7 + 4;
                  } while (uVar18 != 0);
                  if (uVar20 == uVar8) goto LAB_00998e28;
                }
                iVar41 = iVar6 * (int)uVar20 * 3;
                do {
                  *(long *)(__ptr + uVar20 * 8) = lVar19 + iVar41;
                  uVar20 = uVar20 + 1;
                  iVar41 = iVar41 + iVar6 * 3;
                } while ((long)uVar20 < (long)uVar8);
              }
LAB_00998e28:
              png_write_image(local_88[0],__ptr);
            }
            else {
              if (!param_2) {
                uVar1 = *(uint *)pIVar24;
                uVar8 = (ulong)(int)uVar1;
                    /* try { // try from 00998cec to 00a98cf3 has its CatchHandler @ 00998efc */
                if (0 < (int)uVar1) {
                  lVar19 = *(long *)(this + 0x10);
                  iVar6 = *(int *)(this + 0x20);
                  if (uVar1 < 4) {
                    /* try { // try from 00998d00 to 00a98d23 has its CatchHandler @ 00998ef8 */
                    uVar20 = 0;
                  }
                  else {
                    iVar41 = 0;
                    iVar46 = 1;
                    uVar20 = uVar8 & 0xfffffffffffffffc;
                    plVar7 = (long *)(__ptr + 0x10);
                    uVar18 = uVar20;
                    do {
                      iVar74 = iVar41 * 4;
                      iVar75 = iVar46 * 4;
                      iVar41 = iVar41 + 4;
                      iVar46 = iVar46 + 4;
                    /* try { // try from 00998dec to 00a98e2f has its CatchHandler @ 00998ef8 */
                      uVar18 = uVar18 - 4;
                      plVar7[-1] = lVar19 + iVar75 * iVar6;
                      plVar7[-2] = lVar19 + iVar74 * iVar6;
                      plVar7[1] = lVar19 + (iVar75 + 8) * iVar6;
                      *plVar7 = lVar19 + (iVar74 + 8) * iVar6;
                      plVar7 = plVar7 + 4;
                    } while (uVar18 != 0);
                    if (uVar20 == uVar8) goto LAB_00998e28;
                  }
                  iVar41 = iVar6 * (int)uVar20 * 4;
                  do {
                    *(long *)(__ptr + uVar20 * 8) = lVar19 + iVar41;
                    uVar20 = uVar20 + 1;
                    iVar41 = iVar41 + iVar6 * 4;
                  } while ((long)uVar20 < (long)uVar8);
                }
                goto LAB_00998e28;
              }
                    /* catch() { ... } // from try @ 00998928 with catch @ 00998b64
                       catch() { ... } // from try @ 00998a18 with catch @ 00998b64 */
              uVar1 = *(uint *)(this + 0x20);
              uVar2 = *(uint *)(this + 0x24);
              uVar8 = (ulong)uVar2;
                    /* catch() { ... } // from try @ 009988fc with catch @ 00998b68
                       catch() { ... } // from try @ 009989d0 with catch @ 00998b68 */
              iVar6 = uVar1 * 3;
              puVar10 = malloc((long)(int)(iVar6 * uVar2));
              if (puVar10 == (undefined1 *)0x0) {
                fclose(__stream);
                png_destroy_write_struct(local_88,&local_70);
                    /* try { // try from 00998da4 to 00a98de7 has its CatchHandler @ 00998efc */
                free(__ptr);
                goto LAB_00998a6c;
              }
              if (0 < (int)uVar2) {
                uVar18 = (ulong)uVar1;
                uVar20 = 0x10;
                if ((uVar1 & 0xf) != 0) {
                  uVar20 = uVar18 & 0xf;
                }
                lVar19 = 0;
                iVar41 = 0;
                uVar22 = 0;
                lVar5 = (long)(int)uVar1 * 3;
                    /* catch() { ... } // from try @ 009988b0 with catch @ 00998bbc */
                    /* catch() { ... } // from try @ 009988a4 with catch @ 00998bc0 */
                    /* catch() { ... } // from try @ 00998884 with catch @ 00998bc4 */
                lVar23 = uVar18 - uVar20;
                puVar11 = puVar10;
                do {
                    /* catch() { ... } // from try @ 009988bc with catch @ 00998bd4
                       catch() { ... } // from try @ 00998964 with catch @ 00998bd4
                       catch() { ... } // from try @ 00998ab0 with catch @ 00998bd4 */
                  if (0 < (int)uVar1) {
                    lVar12 = *(long *)(this + 0x10);
                    if (uVar1 < 0x11) {
LAB_00998c18:
                      iVar46 = 0;
                      lVar15 = 0;
                    }
                    else {
                      lVar14 = lVar5 * uVar22;
                      lVar16 = (long)(int)(uVar1 * 4 * (int)uVar22);
                      lVar15 = lVar23;
                      puVar13 = puVar11;
                      iVar46 = iVar41;
                      if ((puVar10 + lVar14 < (undefined1 *)(lVar12 + uVar18 * 4 + -1 + lVar16)) &&
                         ((undefined1 *)(lVar12 + lVar16) < puVar10 + uVar18 * 3 + lVar14))
                      goto LAB_00998c18;
                      do {
                        puVar17 = (undefined1 *)(lVar12 + iVar46);
                        uVar40 = puVar17[1];
                        uVar58 = puVar17[2];
                        uVar25 = puVar17[4];
                        uVar42 = puVar17[5];
                        uVar59 = puVar17[6];
                        uVar26 = puVar17[8];
                        uVar43 = puVar17[9];
                        uVar60 = puVar17[10];
                        uVar27 = puVar17[0xc];
                        uVar44 = puVar17[0xd];
                        uVar61 = puVar17[0xe];
                        uVar28 = puVar17[0x10];
                        uVar45 = puVar17[0x11];
                        uVar62 = puVar17[0x12];
                        uVar29 = puVar17[0x14];
                        uVar47 = puVar17[0x15];
                        uVar63 = puVar17[0x16];
                        uVar30 = puVar17[0x18];
                        uVar48 = puVar17[0x19];
                        uVar64 = puVar17[0x1a];
                        uVar31 = puVar17[0x1c];
                        uVar49 = puVar17[0x1d];
                        uVar65 = puVar17[0x1e];
                        uVar32 = puVar17[0x20];
                        uVar50 = puVar17[0x21];
                        uVar66 = puVar17[0x22];
                        uVar33 = puVar17[0x24];
                        uVar51 = puVar17[0x25];
                        uVar67 = puVar17[0x26];
                        uVar34 = puVar17[0x28];
                        uVar52 = puVar17[0x29];
                        uVar68 = puVar17[0x2a];
                        uVar35 = puVar17[0x2c];
                        uVar53 = puVar17[0x2d];
                        uVar69 = puVar17[0x2e];
                        uVar36 = puVar17[0x30];
                        uVar54 = puVar17[0x31];
                        uVar70 = puVar17[0x32];
                        uVar37 = puVar17[0x34];
                        uVar55 = puVar17[0x35];
                        uVar71 = puVar17[0x36];
                        uVar38 = puVar17[0x38];
                        uVar56 = puVar17[0x39];
                        uVar72 = puVar17[0x3a];
                        uVar39 = puVar17[0x3c];
                        uVar57 = puVar17[0x3d];
                        uVar73 = puVar17[0x3e];
                        lVar15 = lVar15 + -0x10;
                        *puVar13 = *puVar17;
                        puVar13[1] = uVar40;
                        puVar13[2] = uVar58;
                        puVar13[3] = uVar25;
                        puVar13[4] = uVar42;
                        puVar13[5] = uVar59;
                        puVar13[6] = uVar26;
                        puVar13[7] = uVar43;
                        puVar13[8] = uVar60;
                        puVar13[9] = uVar27;
                        puVar13[10] = uVar44;
                        puVar13[0xb] = uVar61;
                        puVar13[0xc] = uVar28;
                        puVar13[0xd] = uVar45;
                        puVar13[0xe] = uVar62;
                        puVar13[0xf] = uVar29;
                        puVar13[0x10] = uVar47;
                        puVar13[0x11] = uVar63;
                        puVar13[0x12] = uVar30;
                        puVar13[0x13] = uVar48;
                        puVar13[0x14] = uVar64;
                        puVar13[0x15] = uVar31;
                        puVar13[0x16] = uVar49;
                        puVar13[0x17] = uVar65;
                        puVar13[0x18] = uVar32;
                        puVar13[0x19] = uVar50;
                        puVar13[0x1a] = uVar66;
                        puVar13[0x1b] = uVar33;
                        puVar13[0x1c] = uVar51;
                        puVar13[0x1d] = uVar67;
                        puVar13[0x1e] = uVar34;
                        puVar13[0x1f] = uVar52;
                        puVar13[0x20] = uVar68;
                        puVar13[0x21] = uVar35;
                        puVar13[0x22] = uVar53;
                        puVar13[0x23] = uVar69;
                        puVar13[0x24] = uVar36;
                        puVar13[0x25] = uVar54;
                        puVar13[0x26] = uVar70;
                        puVar13[0x27] = uVar37;
                        puVar13[0x28] = uVar55;
                        puVar13[0x29] = uVar71;
                        puVar13[0x2a] = uVar38;
                        puVar13[0x2b] = uVar56;
                        puVar13[0x2c] = uVar72;
                        puVar13[0x2d] = uVar39;
                        puVar13[0x2e] = uVar57;
                        puVar13[0x2f] = uVar73;
                        puVar13 = puVar13 + 0x30;
                        iVar46 = iVar46 + 0x40;
                      } while (lVar15 != 0);
                      iVar46 = (int)lVar23;
                      lVar15 = lVar23;
                    }
                    lVar14 = uVar18 - lVar15;
                    puVar13 = (undefined1 *)(lVar12 + (iVar46 + (int)lVar19) * 4 + 2);
                    puVar17 = puVar10 + (lVar15 + lVar19) * 3 + 2;
                    do {
                      lVar14 = lVar14 + -1;
                      puVar17[-2] = puVar13[-2];
                    /* try { // try from 00998c80 to 00a98c97 has its CatchHandler @ 00998f1c */
                      puVar17[-1] = puVar13[-1];
                      *puVar17 = *puVar13;
                      puVar13 = puVar13 + 4;
                      puVar17 = puVar17 + 3;
                    } while (lVar14 != 0);
                  }
                  uVar22 = uVar22 + 1;
                  puVar11 = puVar11 + lVar5;
                  iVar41 = iVar41 + uVar1 * 4;
                    /* try { // try from 00998ca0 to 00a98cab has its CatchHandler @ 00998f18 */
                  lVar19 = lVar19 + (int)uVar1;
                } while (uVar22 != uVar8);
                    /* try { // try from 00998cac to 00a98cb7 has its CatchHandler @ 00998f14 */
                if (0 < (int)uVar2) {
                  if (uVar2 < 4) {
                    /* try { // try from 00998cb8 to 00a98ccf has its CatchHandler @ 00998f2c */
                    uVar18 = 0;
                  }
                  else {
                    iVar41 = 0;
                    iVar46 = 1;
                    uVar18 = uVar8 & 0xfffffffc;
                    puVar21 = (undefined8 *)(__ptr + 0x10);
                    /* try { // try from 00998e84 to 00a98f83 has its CatchHandler @ 00998c2c */
                    uVar20 = uVar18;
                    do {
                      iVar74 = iVar41 + 2;
                      iVar75 = iVar46 + 2;
                      iVar76 = iVar6 * iVar41;
                      iVar77 = iVar6 * iVar46;
                      iVar41 = iVar41 + 4;
                      iVar46 = iVar46 + 4;
                      uVar20 = uVar20 - 4;
                      puVar21[-1] = puVar10 + iVar77;
                      puVar21[-2] = puVar10 + iVar76;
                      puVar21[1] = puVar10 + iVar6 * iVar75;
                      *puVar21 = puVar10 + iVar6 * iVar74;
                      puVar21 = puVar21 + 4;
                    } while (uVar20 != 0);
                    if (uVar18 == uVar8) goto LAB_00998eec;
                  }
                  iVar6 = uVar1 * (int)uVar18 * 3;
                  lVar19 = uVar8 - uVar18;
                  plVar7 = (long *)(__ptr + uVar18 * 8);
                  do {
                    lVar19 = lVar19 + -1;
                    *plVar7 = (long)(puVar10 + iVar6);
                    iVar6 = iVar6 + uVar1 * 3;
                    plVar7 = plVar7 + 1;
                  } while (lVar19 != 0);
                }
              }
LAB_00998eec:
              png_write_image(local_88[0],__ptr);
                    /* catch() { ... } // from try @ 00998d00 with catch @ 00998ef8
                       catch() { ... } // from try @ 00998dec with catch @ 00998ef8 */
                    /* catch() { ... } // from try @ 00998cec with catch @ 00998efc
                       catch() { ... } // from try @ 00998da4 with catch @ 00998efc */
              free(__ptr);
              __ptr = puVar10;
            }
            free(__ptr);
            png_write_end(local_88[0],local_70);
                    /* try { // try from 00998e48 to 00a98e83 has its CatchHandler @ 00998f2c */
            png_free(local_88[0],uVar9);
            png_destroy_write_struct(local_88,&local_70);
            fclose(__stream);
            uVar9 = 1;
            goto LAB_00998a70;
          }
        }
        fclose(__stream);
        plVar7 = &local_70;
      }
      png_destroy_write_struct(local_88,plVar7);
    }
  }
LAB_00998a6c:
  uVar9 = 0;
LAB_00998a70:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

