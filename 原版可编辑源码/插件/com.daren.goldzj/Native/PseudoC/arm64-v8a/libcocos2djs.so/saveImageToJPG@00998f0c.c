
/* cocos2d::Image::saveImageToJPG(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Image::saveImageToJPG(Image *this,basic_string *param_1)

{
  char *__filename;
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  FILE *__stream;
  ulong uVar7;
  undefined1 *__ptr;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
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
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
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
  undefined1 *local_360 [2];
  char *local_350;
  undefined1 auStack_348 [168];
  undefined8 local_2a0 [6];
  undefined8 local_270;
  undefined8 local_268;
  uint local_148;
  long local_58;
  
                    /* catch() { ... } // from try @ 00998cac with catch @ 00998f14 */
                    /* catch() { ... } // from try @ 00998ca0 with catch @ 00998f18 */
                    /* catch() { ... } // from try @ 00998c80 with catch @ 00998f1c */
  lVar4 = tpidr_el0;
                    /* catch() { ... } // from try @ 00998cb8 with catch @ 00998f2c
                       catch() { ... } // from try @ 00998d38 with catch @ 00998f2c
                       catch() { ... } // from try @ 00998e48 with catch @ 00998f2c */
  local_58 = *(long *)(lVar4 + 0x28);
  local_2a0[0] = jpeg_std_error(auStack_348);
  jpeg_CreateCompress(local_2a0,0x5a,0x248);
  plVar6 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar6 + 0xe8))(local_360,plVar6,param_1);
                    /* try { // try from 00998f84 to 00a98fd7 has its CatchHandler @ 00998f84
                       catch() { ... } // from try @ 00998f84 with catch @ 00998f84
                       catch() { ... } // from try @ 009990ec with catch @ 00998f84 */
  __filename = (char *)((ulong)local_360 | 1);
  if (((ulong)local_360[0] & 1) != 0) {
    __filename = local_350;
  }
  __stream = fopen(__filename,"wb");
  if (((ulong)local_360[0] & 1) != 0) {
    operator_delete(local_350);
  }
  if (__stream == (FILE *)0x0) {
LAB_009991ec:
    uVar8 = 0;
  }
  else {
    jpeg_stdio_dest(local_2a0,__stream);
    local_270 = *(undefined8 *)(this + 0x20);
    local_268 = 0x200000003;
    jpeg_set_defaults(local_2a0);
                    /* try { // try from 00998fd8 to 00a98fef has its CatchHandler @ 00999168 */
    jpeg_set_quality(local_2a0,0x5a,1);
    jpeg_start_compress(local_2a0,1);
    iVar3 = *(int *)(this + 0x20);
                    /* try { // try from 00998ff8 to 00a99003 has its CatchHandler @ 00999164 */
    uVar7 = hasAlpha(this);
    if ((uVar7 & 1) == 0) {
                    /* catch() { ... } // from try @ 00999010 with catch @ 00999178 */
      while (local_148 < local_270._4_4_) {
        local_360[0] = (undefined1 *)(*(long *)(this + 0x10) + (ulong)(local_148 * iVar3 * 3));
                    /* catch() { ... } // from try @ 00999004 with catch @ 00999160 */
                    /* catch() { ... } // from try @ 00998ff8 with catch @ 00999164 */
                    /* catch() { ... } // from try @ 00998fd8 with catch @ 00999168 */
        jpeg_write_scanlines(local_2a0,local_360,1);
      }
    }
    else {
                    /* try { // try from 00999004 to 00a9900f has its CatchHandler @ 00999160 */
      uVar1 = *(uint *)(this + 0x20);
      uVar2 = *(uint *)(this + 0x24);
                    /* try { // try from 00999010 to 00a990eb has its CatchHandler @ 00999178 */
      __ptr = malloc((long)(int)(uVar1 * uVar2 * 3));
      if (__ptr == (undefined1 *)0x0) {
        jpeg_finish_compress(local_2a0);
        jpeg_destroy_compress(local_2a0);
        fclose(__stream);
        goto LAB_009991ec;
      }
      if (0 < (int)uVar2) {
        uVar19 = (ulong)uVar1;
        uVar7 = 0x10;
        if ((uVar1 & 0xf) != 0) {
          uVar7 = uVar19 & 0xf;
        }
        lVar16 = 0;
        iVar17 = 0;
        uVar18 = 0;
        lVar5 = (long)(int)uVar1 * 3;
        lVar21 = uVar19 - uVar7;
        puVar9 = __ptr;
        do {
          if (0 < (int)uVar1) {
            lVar10 = *(long *)(this + 0x10);
            if (uVar1 < 0x11) {
LAB_009990b8:
              iVar20 = 0;
              lVar13 = 0;
            }
            else {
              lVar12 = lVar5 * uVar18;
              lVar14 = (long)(int)(uVar1 * 4 * (int)uVar18);
              lVar13 = lVar21;
              puVar11 = puVar9;
              iVar20 = iVar17;
              if ((__ptr + lVar12 < (undefined1 *)(lVar10 + uVar19 * 4 + -1 + lVar14)) &&
                 ((undefined1 *)(lVar10 + lVar14) < __ptr + uVar19 * 3 + lVar12)) goto LAB_009990b8;
              do {
                puVar15 = (undefined1 *)(lVar10 + iVar20);
                uVar37 = puVar15[1];
                uVar53 = puVar15[2];
                uVar22 = puVar15[4];
                uVar38 = puVar15[5];
                uVar54 = puVar15[6];
                uVar23 = puVar15[8];
                uVar39 = puVar15[9];
                uVar55 = puVar15[10];
                uVar24 = puVar15[0xc];
                uVar40 = puVar15[0xd];
                uVar56 = puVar15[0xe];
                uVar25 = puVar15[0x10];
                uVar41 = puVar15[0x11];
                uVar57 = puVar15[0x12];
                uVar26 = puVar15[0x14];
                uVar42 = puVar15[0x15];
                uVar58 = puVar15[0x16];
                uVar27 = puVar15[0x18];
                uVar43 = puVar15[0x19];
                uVar59 = puVar15[0x1a];
                uVar28 = puVar15[0x1c];
                uVar44 = puVar15[0x1d];
                uVar60 = puVar15[0x1e];
                uVar29 = puVar15[0x20];
                uVar45 = puVar15[0x21];
                uVar61 = puVar15[0x22];
                uVar30 = puVar15[0x24];
                uVar46 = puVar15[0x25];
                uVar62 = puVar15[0x26];
                uVar31 = puVar15[0x28];
                uVar47 = puVar15[0x29];
                uVar63 = puVar15[0x2a];
                uVar32 = puVar15[0x2c];
                uVar48 = puVar15[0x2d];
                uVar64 = puVar15[0x2e];
                uVar33 = puVar15[0x30];
                uVar49 = puVar15[0x31];
                uVar65 = puVar15[0x32];
                uVar34 = puVar15[0x34];
                uVar50 = puVar15[0x35];
                uVar66 = puVar15[0x36];
                uVar35 = puVar15[0x38];
                uVar51 = puVar15[0x39];
                uVar67 = puVar15[0x3a];
                uVar36 = puVar15[0x3c];
                uVar52 = puVar15[0x3d];
                uVar68 = puVar15[0x3e];
                lVar13 = lVar13 + -0x10;
                *puVar11 = *puVar15;
                puVar11[1] = uVar37;
                puVar11[2] = uVar53;
                puVar11[3] = uVar22;
                puVar11[4] = uVar38;
                puVar11[5] = uVar54;
                puVar11[6] = uVar23;
                puVar11[7] = uVar39;
                puVar11[8] = uVar55;
                puVar11[9] = uVar24;
                puVar11[10] = uVar40;
                puVar11[0xb] = uVar56;
                puVar11[0xc] = uVar25;
                puVar11[0xd] = uVar41;
                puVar11[0xe] = uVar57;
                puVar11[0xf] = uVar26;
                puVar11[0x10] = uVar42;
                puVar11[0x11] = uVar58;
                puVar11[0x12] = uVar27;
                puVar11[0x13] = uVar43;
                puVar11[0x14] = uVar59;
                puVar11[0x15] = uVar28;
                puVar11[0x16] = uVar44;
                puVar11[0x17] = uVar60;
                puVar11[0x18] = uVar29;
                puVar11[0x19] = uVar45;
                puVar11[0x1a] = uVar61;
                puVar11[0x1b] = uVar30;
                puVar11[0x1c] = uVar46;
                puVar11[0x1d] = uVar62;
                puVar11[0x1e] = uVar31;
                puVar11[0x1f] = uVar47;
                puVar11[0x20] = uVar63;
                puVar11[0x21] = uVar32;
                puVar11[0x22] = uVar48;
                puVar11[0x23] = uVar64;
                puVar11[0x24] = uVar33;
                puVar11[0x25] = uVar49;
                puVar11[0x26] = uVar65;
                puVar11[0x27] = uVar34;
                puVar11[0x28] = uVar50;
                puVar11[0x29] = uVar66;
                puVar11[0x2a] = uVar35;
                puVar11[0x2b] = uVar51;
                puVar11[0x2c] = uVar67;
                puVar11[0x2d] = uVar36;
                puVar11[0x2e] = uVar52;
                puVar11[0x2f] = uVar68;
                puVar11 = puVar11 + 0x30;
                iVar20 = iVar20 + 0x40;
              } while (lVar13 != 0);
                    /* try { // try from 009990ec to 00a991cf has its CatchHandler @ 00998f84 */
              iVar20 = (int)lVar21;
              lVar13 = lVar21;
            }
            lVar12 = uVar19 - lVar13;
            puVar11 = (undefined1 *)(lVar10 + (iVar20 + (int)lVar16) * 4 + 2);
            puVar15 = __ptr + (lVar13 + lVar16) * 3 + 2;
            do {
              lVar12 = lVar12 + -1;
              puVar15[-2] = puVar11[-2];
              puVar15[-1] = puVar11[-1];
              *puVar15 = *puVar11;
              puVar11 = puVar11 + 4;
              puVar15 = puVar15 + 3;
            } while (lVar12 != 0);
          }
          uVar18 = uVar18 + 1;
          puVar9 = puVar9 + lVar5;
          iVar17 = iVar17 + uVar1 * 4;
          lVar16 = lVar16 + (int)uVar1;
        } while (uVar18 != uVar2);
      }
      while (local_148 < local_270._4_4_) {
        local_360[0] = __ptr + local_148 * iVar3 * 3;
        jpeg_write_scanlines(local_2a0,local_360,1);
      }
      free(__ptr);
    }
    jpeg_finish_compress(local_2a0);
    fclose(__stream);
    jpeg_destroy_compress(local_2a0);
    uVar8 = 1;
                    /* try { // try from 009991d0 to 00a99227 has its CatchHandler @ 009991d0
                       catch() { ... } // from try @ 009991d0 with catch @ 009991d0
                       catch() { ... } // from try @ 00999490 with catch @ 009991d0 */
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

