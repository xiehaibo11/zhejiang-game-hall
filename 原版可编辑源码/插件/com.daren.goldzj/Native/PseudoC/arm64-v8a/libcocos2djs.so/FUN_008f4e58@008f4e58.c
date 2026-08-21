
/* WARNING: Removing unreachable block (ram,0x008f54fc) */
/* WARNING: Removing unreachable block (ram,0x008f5500) */
/* WARNING: Removing unreachable block (ram,0x008f5508) */
/* WARNING: Removing unreachable block (ram,0x008f5510) */
/* WARNING: Removing unreachable block (ram,0x008f5514) */
/* WARNING: Removing unreachable block (ram,0x008f54c4) */
/* WARNING: Removing unreachable block (ram,0x008f54c8) */
/* WARNING: Removing unreachable block (ram,0x008f54d0) */
/* WARNING: Removing unreachable block (ram,0x008f54d8) */
/* WARNING: Removing unreachable block (ram,0x008f54dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4e58(long param_1)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  __shared_weak_count *p_Var3;
  undefined4 uVar4;
  basic_string bVar5;
  Image IVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  Scheduler *this;
  undefined1 *puVar12;
  undefined1 uVar13;
  byte bVar14;
  Image *this_00;
  __shared_weak_count *this_01;
  ulong uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  void *pvVar19;
  undefined1 *puVar20;
  __shared_weak_count *p_Var21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  __shared_weak_count *p_Var29;
  void *pvVar30;
  undefined8 uVar31;
  int iVar32;
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
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined8 local_e0;
  ulong uStack_d8;
  void *local_d0;
  undefined8 local_c8;
  ulong uStack_c0;
  void *local_b8;
  long local_b0;
  __shared_weak_count *p_Stack_a8;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  this_00 = operator_new(0x150);
  cocos2d::Image::Image(this_00);
  this_01 = operator_new(0x20);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(Image **)(this_01 + 0x18) = this_00;
  p_Var29 = this_01 + 8;
  *(long *)p_Var29 = 0;
  *(undefined ***)this_01 = &PTR____shared_weak_count_01c67d78;
  uVar15 = (ulong)(*(byte *)(param_1 + 8) >> 1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 0x10);
  }
  if (uVar15 == 0) {
    bVar5 = *(basic_string *)(param_1 + 0x20);
    uVar15 = (ulong)((byte)bVar5 >> 1);
    if (((byte)bVar5 & 1) != 0) {
      uVar15 = *(ulong *)(param_1 + 0x28);
    }
    if (uVar15 == 0) {
      uVar27 = cocos2d::Image::initWithImageData
                         (this_00,*(uchar **)(param_1 + 0x38),(long)*(int *)(param_1 + 0x48));
      p_Var21 = *(__shared_weak_count **)(param_1 + 0x40);
      uVar15 = uVar27 & 0xffffffff;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (p_Var21 != (__shared_weak_count *)0x0) {
        p_Var3 = p_Var21 + 8;
        do {
          lVar25 = *(long *)p_Var3;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
          if (bVar10) {
            *(long *)p_Var3 = lVar25 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var21);
          uVar15 = uVar27;
        }
      }
    }
    else {
      uVar15 = cocos2d::Image::initWithImageFile(this_00,(basic_string *)(param_1 + 0x20));
      uVar15 = uVar15 & 0xffffffff;
    }
    if ((uVar15 & 1) == 0) goto LAB_008f50d0;
    puVar16 = operator_new(0x30);
    puVar28 = *(undefined8 **)(this_00 + 0x10);
    uVar31 = *(undefined8 *)(this_00 + 0x18);
    uVar24 = *(undefined8 *)(this_00 + 0x20);
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[4] = 0;
    puVar16[5] = 0;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    puVar16[0] = 0;
    puVar16[1] = 0;
    *puVar16 = (uint)uVar31;
    *(undefined8 *)(puVar16 + 1) = uVar24;
    *(undefined8 **)(puVar16 + 4) = puVar28;
    puVar17 = (undefined8 *)cocos2d::Image::getPixelFormatInfo(this_00);
    uVar31 = *puVar17;
    uVar24 = NEON_rev64(uVar31,4);
    *(undefined8 *)(puVar16 + 6) = uVar24;
    puVar16[8] = *(uint *)(puVar17 + 1);
    uVar13 = cocos2d::Image::getBitPerPixel(this_00);
    uVar4 = *(undefined4 *)(this_00 + 0x130);
    *(undefined1 *)(puVar16 + 9) = uVar13;
    *(char *)((long)puVar16 + 0x25) = (char)uVar4;
    bVar14 = cocos2d::Image::hasAlpha(this_00);
    IVar6 = this_00[0x134];
    *(byte *)((long)puVar16 + 0x26) = bVar14 & 1;
    *(Image *)((long)puVar16 + 0x27) = IVar6;
    bVar14 = cocos2d::Image::isCompressed(this_00);
    *(byte *)(puVar16 + 10) = bVar14 & 1;
    iVar32 = (int)((ulong)uVar31 >> 0x20);
    if (iVar32 != 0x1908 && (bVar14 & 1) == 0) {
      iVar8 = *(int *)(this_00 + 0x24) * *(int *)(this_00 + 0x20);
      uVar7 = iVar8 * 4;
      *puVar16 = uVar7;
      switch(iVar32) {
      case 0x1906:
      case 0x1909:
        uVar15 = (ulong)uVar7;
        puVar20 = operator_new__(uVar15);
        if (iVar8 != 0) {
          uVar27 = uVar15;
          if (uVar15 < 5) {
            uVar27 = 4;
          }
          uVar27 = (uVar27 - 1 >> 2) + 1;
          if (uVar27 < 0x10) {
LAB_008f5040:
            uVar22 = 0;
            puVar17 = puVar28;
          }
          else {
            uVar22 = uVar15;
            if (uVar15 < 5) {
              uVar22 = 4;
            }
            if ((puVar20 < (undefined1 *)((long)puVar28 + (uVar22 - 1 >> 2) + 1)) &&
               (puVar28 < puVar20 + uVar22)) goto LAB_008f5040;
            uVar23 = uVar27 & 0x7ffffffffffffff0;
            uVar22 = uVar23 << 2;
            puVar17 = (undefined8 *)((long)puVar28 + uVar23);
            uVar26 = uVar23;
            puVar12 = puVar20;
            do {
              uVar24 = puVar28[1];
              uVar31 = *puVar28;
              uVar26 = uVar26 - 0x10;
              uVar13 = (undefined1)uVar31;
              *puVar12 = uVar13;
              puVar12[1] = uVar13;
              puVar12[2] = uVar13;
              puVar12[3] = 0xff;
              uVar13 = (undefined1)((ulong)uVar31 >> 8);
              puVar12[4] = uVar13;
              puVar12[5] = uVar13;
              puVar12[6] = uVar13;
              puVar12[7] = 0xff;
              uVar13 = (undefined1)((ulong)uVar31 >> 0x10);
              puVar12[8] = uVar13;
              puVar12[9] = uVar13;
              puVar12[10] = uVar13;
              puVar12[0xb] = 0xff;
              uVar13 = (undefined1)((ulong)uVar31 >> 0x18);
              puVar12[0xc] = uVar13;
              puVar12[0xd] = uVar13;
              puVar12[0xe] = uVar13;
              puVar12[0xf] = 0xff;
              uVar13 = (undefined1)((ulong)uVar31 >> 0x20);
              puVar12[0x10] = uVar13;
              puVar12[0x11] = uVar13;
              puVar12[0x12] = uVar13;
              puVar12[0x13] = 0xff;
              uVar13 = (undefined1)((ulong)uVar31 >> 0x28);
              puVar12[0x14] = uVar13;
              puVar12[0x15] = uVar13;
              puVar12[0x16] = uVar13;
              puVar12[0x17] = 0xff;
              uVar13 = (undefined1)((ulong)uVar31 >> 0x30);
              puVar12[0x18] = uVar13;
              puVar12[0x19] = uVar13;
              puVar12[0x1a] = uVar13;
              puVar12[0x1b] = 0xff;
              uVar13 = (undefined1)((ulong)uVar31 >> 0x38);
              puVar12[0x1c] = uVar13;
              puVar12[0x1d] = uVar13;
              puVar12[0x1e] = uVar13;
              puVar12[0x1f] = 0xff;
              uVar13 = (undefined1)uVar24;
              puVar12[0x20] = uVar13;
              puVar12[0x21] = uVar13;
              puVar12[0x22] = uVar13;
              puVar12[0x23] = 0xff;
              uVar13 = (undefined1)((ulong)uVar24 >> 8);
              puVar12[0x24] = uVar13;
              puVar12[0x25] = uVar13;
              puVar12[0x26] = uVar13;
              puVar12[0x27] = 0xff;
              uVar13 = (undefined1)((ulong)uVar24 >> 0x10);
              puVar12[0x28] = uVar13;
              puVar12[0x29] = uVar13;
              puVar12[0x2a] = uVar13;
              puVar12[0x2b] = 0xff;
              uVar13 = (undefined1)((ulong)uVar24 >> 0x18);
              puVar12[0x2c] = uVar13;
              puVar12[0x2d] = uVar13;
              puVar12[0x2e] = uVar13;
              puVar12[0x2f] = 0xff;
              uVar13 = (undefined1)((ulong)uVar24 >> 0x20);
              puVar12[0x30] = uVar13;
              puVar12[0x31] = uVar13;
              puVar12[0x32] = uVar13;
              puVar12[0x33] = 0xff;
              uVar13 = (undefined1)((ulong)uVar24 >> 0x28);
              puVar12[0x34] = uVar13;
              puVar12[0x35] = uVar13;
              puVar12[0x36] = uVar13;
              puVar12[0x37] = 0xff;
              uVar13 = (undefined1)((ulong)uVar24 >> 0x30);
              puVar12[0x38] = uVar13;
              puVar12[0x39] = uVar13;
              puVar12[0x3a] = uVar13;
              puVar12[0x3b] = 0xff;
              uVar13 = (undefined1)((ulong)uVar24 >> 0x38);
              puVar12[0x3c] = uVar13;
              puVar12[0x3d] = uVar13;
              puVar12[0x3e] = uVar13;
              puVar12[0x3f] = 0xff;
              puVar12 = puVar12 + 0x40;
              puVar28 = puVar28 + 2;
            } while (uVar26 != 0);
            if (uVar27 == uVar23) break;
          }
          do {
            puVar12 = puVar20 + uVar22;
            uVar22 = uVar22 + 4;
            *puVar12 = *(undefined1 *)puVar17;
            puVar12[1] = *(undefined1 *)puVar17;
            uVar13 = *(undefined1 *)puVar17;
            puVar12[3] = 0xff;
            puVar12[2] = uVar13;
            puVar17 = (undefined8 *)((long)puVar17 + 1);
          } while (uVar22 < uVar15);
        }
        break;
      case 0x1907:
        uVar15 = (ulong)uVar7;
        puVar20 = operator_new__(uVar15);
        if (iVar8 != 0) {
          uVar27 = uVar15;
          if (uVar15 < 5) {
            uVar27 = 4;
          }
          uVar27 = (uVar27 - 1 >> 2) + 1;
          if (uVar27 < 0x10) {
LAB_008f5690:
            uVar22 = 0;
            puVar17 = puVar28;
          }
          else {
            uVar22 = uVar15;
            if (uVar15 < 5) {
              uVar22 = 4;
            }
            if ((puVar20 < (undefined1 *)((long)puVar28 + (uVar22 - 1 >> 2) * 3 + 3)) &&
               (puVar28 < puVar20 + uVar22)) goto LAB_008f5690;
            uVar23 = uVar27 & 0x7ffffffffffffff0;
            uVar22 = uVar23 << 2;
            puVar17 = (undefined8 *)((long)puVar28 + uVar23 * 3);
            uVar26 = uVar23;
            puVar12 = puVar20;
            do {
              uVar13 = *(undefined1 *)puVar28;
              uVar64 = *(undefined1 *)((long)puVar28 + 1);
              uVar33 = *(undefined1 *)((long)puVar28 + 2);
              uVar34 = *(undefined1 *)((long)puVar28 + 3);
              uVar65 = *(undefined1 *)((long)puVar28 + 4);
              uVar35 = *(undefined1 *)((long)puVar28 + 5);
              uVar36 = *(undefined1 *)((long)puVar28 + 6);
              uVar66 = *(undefined1 *)((long)puVar28 + 7);
              uVar37 = *(undefined1 *)(puVar28 + 1);
              uVar38 = *(undefined1 *)((long)puVar28 + 9);
              uVar67 = *(undefined1 *)((long)puVar28 + 10);
              uVar39 = *(undefined1 *)((long)puVar28 + 0xb);
              uVar40 = *(undefined1 *)((long)puVar28 + 0xc);
              uVar68 = *(undefined1 *)((long)puVar28 + 0xd);
              uVar41 = *(undefined1 *)((long)puVar28 + 0xe);
              uVar42 = *(undefined1 *)((long)puVar28 + 0xf);
              uVar69 = *(undefined1 *)(puVar28 + 2);
              uVar43 = *(undefined1 *)((long)puVar28 + 0x11);
              uVar44 = *(undefined1 *)((long)puVar28 + 0x12);
              uVar70 = *(undefined1 *)((long)puVar28 + 0x13);
              uVar45 = *(undefined1 *)((long)puVar28 + 0x14);
              uVar46 = *(undefined1 *)((long)puVar28 + 0x15);
              uVar71 = *(undefined1 *)((long)puVar28 + 0x16);
              uVar47 = *(undefined1 *)((long)puVar28 + 0x17);
              uVar48 = *(undefined1 *)(puVar28 + 3);
              uVar72 = *(undefined1 *)((long)puVar28 + 0x19);
              uVar49 = *(undefined1 *)((long)puVar28 + 0x1a);
              uVar50 = *(undefined1 *)((long)puVar28 + 0x1b);
              uVar73 = *(undefined1 *)((long)puVar28 + 0x1c);
              uVar51 = *(undefined1 *)((long)puVar28 + 0x1d);
              uVar52 = *(undefined1 *)((long)puVar28 + 0x1e);
              uVar74 = *(undefined1 *)((long)puVar28 + 0x1f);
              uVar53 = *(undefined1 *)(puVar28 + 4);
              uVar54 = *(undefined1 *)((long)puVar28 + 0x21);
              uVar75 = *(undefined1 *)((long)puVar28 + 0x22);
              uVar55 = *(undefined1 *)((long)puVar28 + 0x23);
              uVar56 = *(undefined1 *)((long)puVar28 + 0x24);
              uVar76 = *(undefined1 *)((long)puVar28 + 0x25);
              uVar57 = *(undefined1 *)((long)puVar28 + 0x26);
              uVar58 = *(undefined1 *)((long)puVar28 + 0x27);
              uVar77 = *(undefined1 *)(puVar28 + 5);
              uVar59 = *(undefined1 *)((long)puVar28 + 0x29);
              uVar60 = *(undefined1 *)((long)puVar28 + 0x2a);
              uVar78 = *(undefined1 *)((long)puVar28 + 0x2b);
              uVar61 = *(undefined1 *)((long)puVar28 + 0x2c);
              uVar62 = *(undefined1 *)((long)puVar28 + 0x2d);
              uVar79 = *(undefined1 *)((long)puVar28 + 0x2e);
              uVar63 = *(undefined1 *)((long)puVar28 + 0x2f);
              puVar28 = puVar28 + 6;
              uVar26 = uVar26 - 0x10;
              *puVar12 = uVar13;
              puVar12[1] = uVar64;
              puVar12[2] = uVar33;
              puVar12[3] = 0xff;
              puVar12[4] = uVar34;
              puVar12[5] = uVar65;
              puVar12[6] = uVar35;
              puVar12[7] = 0xff;
              puVar12[8] = uVar36;
              puVar12[9] = uVar66;
              puVar12[10] = uVar37;
              puVar12[0xb] = 0xff;
              puVar12[0xc] = uVar38;
              puVar12[0xd] = uVar67;
              puVar12[0xe] = uVar39;
              puVar12[0xf] = 0xff;
              puVar12[0x10] = uVar40;
              puVar12[0x11] = uVar68;
              puVar12[0x12] = uVar41;
              puVar12[0x13] = 0xff;
              puVar12[0x14] = uVar42;
              puVar12[0x15] = uVar69;
              puVar12[0x16] = uVar43;
              puVar12[0x17] = 0xff;
              puVar12[0x18] = uVar44;
              puVar12[0x19] = uVar70;
              puVar12[0x1a] = uVar45;
              puVar12[0x1b] = 0xff;
              puVar12[0x1c] = uVar46;
              puVar12[0x1d] = uVar71;
              puVar12[0x1e] = uVar47;
              puVar12[0x1f] = 0xff;
              puVar12[0x20] = uVar48;
              puVar12[0x21] = uVar72;
              puVar12[0x22] = uVar49;
              puVar12[0x23] = 0xff;
              puVar12[0x24] = uVar50;
              puVar12[0x25] = uVar73;
              puVar12[0x26] = uVar51;
              puVar12[0x27] = 0xff;
              puVar12[0x28] = uVar52;
              puVar12[0x29] = uVar74;
              puVar12[0x2a] = uVar53;
              puVar12[0x2b] = 0xff;
              puVar12[0x2c] = uVar54;
              puVar12[0x2d] = uVar75;
              puVar12[0x2e] = uVar55;
              puVar12[0x2f] = 0xff;
              puVar12[0x30] = uVar56;
              puVar12[0x31] = uVar76;
              puVar12[0x32] = uVar57;
              puVar12[0x33] = 0xff;
              puVar12[0x34] = uVar58;
              puVar12[0x35] = uVar77;
              puVar12[0x36] = uVar59;
              puVar12[0x37] = 0xff;
              puVar12[0x38] = uVar60;
              puVar12[0x39] = uVar78;
              puVar12[0x3a] = uVar61;
              puVar12[0x3b] = 0xff;
              puVar12[0x3c] = uVar62;
              puVar12[0x3d] = uVar79;
              puVar12[0x3e] = uVar63;
              puVar12[0x3f] = 0xff;
              puVar12 = puVar12 + 0x40;
            } while (uVar26 != 0);
            if (uVar27 == uVar23) break;
          }
          do {
            puVar12 = puVar20 + uVar22;
            uVar22 = uVar22 + 4;
            *puVar12 = *(undefined1 *)puVar17;
            puVar12[1] = *(undefined1 *)((long)puVar17 + 1);
            uVar13 = *(undefined1 *)((long)puVar17 + 2);
            puVar12[3] = 0xff;
            puVar12[2] = uVar13;
            puVar17 = (undefined8 *)((long)puVar17 + 3);
          } while (uVar22 < uVar15);
        }
        break;
      default:
        __android_log_print(6,"jswrapper","unknown image format");
        puVar20 = (undefined1 *)0x0;
        break;
      case 0x190a:
        uVar15 = (ulong)uVar7;
        puVar20 = operator_new__(uVar15);
        if (iVar8 != 0) {
          uVar27 = uVar15;
          if (uVar15 < 5) {
            uVar27 = 4;
          }
          uVar22 = uVar27 - 1 >> 2;
          uVar27 = uVar22 + 1;
          puVar17 = puVar28;
          if (uVar27 < 0x11) {
            uVar23 = 0;
          }
          else {
            uVar26 = uVar15;
            if (uVar15 < 5) {
              uVar26 = 4;
            }
            if ((puVar20 < (undefined1 *)
                           ((long)puVar28 + (uVar26 - 1 >> 1 & 0x7ffffffffffffffe) + 2)) &&
               (puVar28 < puVar20 + uVar26)) {
              uVar23 = 0;
            }
            else {
              uVar26 = 0x10;
              if ((uVar27 & 0xf) != 0) {
                uVar26 = uVar27 & 0xf;
              }
              uVar23 = (uVar27 - uVar26) * 4;
              puVar17 = (undefined8 *)((long)puVar28 + (uVar27 - uVar26) * 2);
              lVar25 = (uVar22 + 1) - uVar26;
              puVar12 = puVar20;
              do {
                uVar13 = *(undefined1 *)puVar28;
                uVar64 = *(undefined1 *)((long)puVar28 + 1);
                uVar34 = *(undefined1 *)((long)puVar28 + 2);
                uVar65 = *(undefined1 *)((long)puVar28 + 3);
                uVar36 = *(undefined1 *)((long)puVar28 + 4);
                uVar66 = *(undefined1 *)((long)puVar28 + 5);
                uVar38 = *(undefined1 *)((long)puVar28 + 6);
                uVar67 = *(undefined1 *)((long)puVar28 + 7);
                uVar40 = *(undefined1 *)(puVar28 + 1);
                uVar68 = *(undefined1 *)((long)puVar28 + 9);
                uVar42 = *(undefined1 *)((long)puVar28 + 10);
                uVar69 = *(undefined1 *)((long)puVar28 + 0xb);
                uVar44 = *(undefined1 *)((long)puVar28 + 0xc);
                uVar70 = *(undefined1 *)((long)puVar28 + 0xd);
                uVar46 = *(undefined1 *)((long)puVar28 + 0xe);
                uVar71 = *(undefined1 *)((long)puVar28 + 0xf);
                uVar48 = *(undefined1 *)(puVar28 + 2);
                uVar72 = *(undefined1 *)((long)puVar28 + 0x11);
                uVar50 = *(undefined1 *)((long)puVar28 + 0x12);
                uVar73 = *(undefined1 *)((long)puVar28 + 0x13);
                uVar52 = *(undefined1 *)((long)puVar28 + 0x14);
                uVar74 = *(undefined1 *)((long)puVar28 + 0x15);
                uVar54 = *(undefined1 *)((long)puVar28 + 0x16);
                uVar75 = *(undefined1 *)((long)puVar28 + 0x17);
                uVar56 = *(undefined1 *)(puVar28 + 3);
                uVar76 = *(undefined1 *)((long)puVar28 + 0x19);
                uVar58 = *(undefined1 *)((long)puVar28 + 0x1a);
                uVar77 = *(undefined1 *)((long)puVar28 + 0x1b);
                uVar60 = *(undefined1 *)((long)puVar28 + 0x1c);
                uVar78 = *(undefined1 *)((long)puVar28 + 0x1d);
                uVar62 = *(undefined1 *)((long)puVar28 + 0x1e);
                uVar79 = *(undefined1 *)((long)puVar28 + 0x1f);
                puVar28 = puVar28 + 4;
                lVar25 = lVar25 + -0x10;
                *puVar12 = uVar13;
                puVar12[1] = uVar13;
                puVar12[2] = uVar13;
                puVar12[3] = uVar64;
                puVar12[4] = uVar34;
                puVar12[5] = uVar34;
                puVar12[6] = uVar34;
                puVar12[7] = uVar65;
                puVar12[8] = uVar36;
                puVar12[9] = uVar36;
                puVar12[10] = uVar36;
                puVar12[0xb] = uVar66;
                puVar12[0xc] = uVar38;
                puVar12[0xd] = uVar38;
                puVar12[0xe] = uVar38;
                puVar12[0xf] = uVar67;
                puVar12[0x10] = uVar40;
                puVar12[0x11] = uVar40;
                puVar12[0x12] = uVar40;
                puVar12[0x13] = uVar68;
                puVar12[0x14] = uVar42;
                puVar12[0x15] = uVar42;
                puVar12[0x16] = uVar42;
                puVar12[0x17] = uVar69;
                puVar12[0x18] = uVar44;
                puVar12[0x19] = uVar44;
                puVar12[0x1a] = uVar44;
                puVar12[0x1b] = uVar70;
                puVar12[0x1c] = uVar46;
                puVar12[0x1d] = uVar46;
                puVar12[0x1e] = uVar46;
                puVar12[0x1f] = uVar71;
                puVar12[0x20] = uVar48;
                puVar12[0x21] = uVar48;
                puVar12[0x22] = uVar48;
                puVar12[0x23] = uVar72;
                puVar12[0x24] = uVar50;
                puVar12[0x25] = uVar50;
                puVar12[0x26] = uVar50;
                puVar12[0x27] = uVar73;
                puVar12[0x28] = uVar52;
                puVar12[0x29] = uVar52;
                puVar12[0x2a] = uVar52;
                puVar12[0x2b] = uVar74;
                puVar12[0x2c] = uVar54;
                puVar12[0x2d] = uVar54;
                puVar12[0x2e] = uVar54;
                puVar12[0x2f] = uVar75;
                puVar12[0x30] = uVar56;
                puVar12[0x31] = uVar56;
                puVar12[0x32] = uVar56;
                puVar12[0x33] = uVar76;
                puVar12[0x34] = uVar58;
                puVar12[0x35] = uVar58;
                puVar12[0x36] = uVar58;
                puVar12[0x37] = uVar77;
                puVar12[0x38] = uVar60;
                puVar12[0x39] = uVar60;
                puVar12[0x3a] = uVar60;
                puVar12[0x3b] = uVar78;
                puVar12[0x3c] = uVar62;
                puVar12[0x3d] = uVar62;
                puVar12[0x3e] = uVar62;
                puVar12[0x3f] = uVar79;
                puVar12 = puVar12 + 0x40;
              } while (lVar25 != 0);
            }
          }
          do {
            puVar12 = puVar20 + uVar23;
            uVar23 = uVar23 + 4;
            *puVar12 = *(undefined1 *)puVar17;
            puVar12[1] = *(undefined1 *)puVar17;
            puVar12[2] = *(undefined1 *)puVar17;
            puVar12[3] = *(undefined1 *)((long)puVar17 + 1);
            puVar17 = (undefined8 *)((long)puVar17 + 2);
          } while (uVar23 < uVar15);
        }
      }
      *(undefined1 **)(puVar16 + 4) = puVar20;
      *(undefined1 *)((long)puVar16 + 0x26) = 1;
      *(undefined1 *)(puVar16 + 9) = 0x20;
      puVar16[6] = 0x1908;
      puVar16[7] = 0x1908;
      *(undefined1 *)((long)puVar16 + 0x29) = 1;
    }
    p_Var21 = operator_new(0x20);
    *(undefined ***)p_Var21 = &PTR____shared_weak_count_01c67dc8;
    *(undefined8 *)(p_Var21 + 8) = 0;
    uVar13 = 1;
    *(undefined8 *)(p_Var21 + 0x10) = 0;
    *(uint **)(p_Var21 + 0x18) = puVar16;
  }
  else {
LAB_008f50d0:
    uVar13 = 0;
    puVar16 = (uint *)0x0;
    p_Var21 = (__shared_weak_count *)0x0;
  }
  p_Var3 = DAT_01d35b10;
  this = cocos2d::Application::_scheduler;
  if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
    p_Var1 = DAT_01d35b10 + 8;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar10) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  if (p_Var21 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var21 + 8;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar10) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(p_Var29,0x10);
    if (bVar10) {
      *(long *)p_Var29 = *(long *)p_Var29 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  uStack_d8 = 0;
  local_d0 = (void *)0x0;
  local_e0 = 0;
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    local_d0 = *(void **)(param_1 + 0x60);
    uStack_d8 = *(ulong *)(param_1 + 0x58);
    local_e0 = *(ulong *)(param_1 + 0x50);
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x58);
    if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar30 = *(void **)(param_1 + 0x60);
    if (uVar15 < 0x17) {
      pvVar19 = (void *)((long)&local_e0 + 1);
      local_e0 = (ulong)(byte)((int)uVar15 << 1);
      if (uVar15 != 0) goto LAB_008f51cc;
    }
    else {
      uVar27 = uVar15 + 0x10 & 0xfffffffffffffff0;
      pvVar19 = operator_new(uVar27);
      local_e0 = uVar27 | 1;
      uStack_d8 = uVar15;
      local_d0 = pvVar19;
LAB_008f51cc:
      memcpy(pvVar19,pvVar30,uVar15);
    }
    *(undefined1 *)((long)pvVar19 + uVar15) = 0;
  }
  uStack_c0 = 0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    local_b8 = *(void **)(param_1 + 0x18);
    uStack_c0 = *(ulong *)(param_1 + 0x10);
    local_c8 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x10);
    if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar30 = *(void **)(param_1 + 0x18);
    if (uVar15 < 0x17) {
      pvVar19 = (void *)((long)&local_c8 + 1);
      local_c8 = (ulong)(byte)((int)uVar15 << 1);
      if (uVar15 != 0) goto LAB_008f5258;
    }
    else {
      uVar27 = uVar15 + 0x10 & 0xfffffffffffffff0;
      pvVar19 = operator_new(uVar27);
      local_c8 = uVar27 | 1;
      uStack_c0 = uVar15;
      local_b8 = pvVar19;
LAB_008f5258:
      memcpy(pvVar19,pvVar30,uVar15);
    }
    *(undefined1 *)((long)pvVar19 + uVar15) = 0;
  }
  local_b0 = *(long *)(param_1 + 0x68);
  p_Stack_a8 = *(__shared_weak_count **)(param_1 + 0x70);
  if (p_Stack_a8 != (__shared_weak_count *)0x0) {
    plVar18 = (long *)((long)p_Stack_a8 + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar10) {
        *plVar18 = *plVar18 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  local_80 = (long *)0x0;
  plVar18 = operator_new(0x70);
  pvVar30 = local_d0;
  uVar15 = uStack_d8;
  *plVar18 = (long)&PTR_FUN_01c67e18;
  *(undefined1 *)(plVar18 + 1) = uVar13;
  plVar18[3] = (long)p_Var21;
  plVar18[2] = (long)puVar16;
  plVar18[5] = (long)this_01;
  plVar18[4] = (long)this_00;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  if ((local_e0 & 1) == 0) {
    plVar18[8] = (long)local_d0;
    plVar18[7] = uStack_d8;
    plVar18[6] = local_e0;
  }
  else {
    if (0xffffffffffffffef < uStack_d8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_d8 < 0x17) {
      pvVar19 = (void *)((long)plVar18 + 0x31);
      *(char *)(plVar18 + 6) = (char)((int)uStack_d8 << 1);
      if (uStack_d8 != 0) goto LAB_008f5344;
    }
    else {
      uVar27 = uStack_d8 + 0x10 & 0xfffffffffffffff0;
      pvVar19 = operator_new(uVar27);
      plVar18[7] = uVar15;
      plVar18[8] = (long)pvVar19;
      plVar18[6] = uVar27 | 1;
LAB_008f5344:
      memcpy(pvVar19,pvVar30,uVar15);
    }
    *(undefined1 *)((long)pvVar19 + uVar15) = 0;
  }
  pvVar30 = local_b8;
  uVar15 = uStack_c0;
  plVar18[9] = 0;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  if ((local_c8 & 1) == 0) {
    plVar18[0xb] = (long)local_b8;
    plVar18[10] = uStack_c0;
    plVar18[9] = local_c8;
    goto LAB_008f53e0;
  }
  if (0xffffffffffffffef < uStack_c0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_c0 < 0x17) {
    pvVar19 = (void *)((long)plVar18 + 0x49);
    *(char *)(plVar18 + 9) = (char)((int)uStack_c0 << 1);
    if (uStack_c0 != 0) goto LAB_008f53cc;
  }
  else {
    uVar27 = uStack_c0 + 0x10 & 0xfffffffffffffff0;
    pvVar19 = operator_new(uVar27);
    plVar18[10] = uVar15;
    plVar18[0xb] = (long)pvVar19;
    plVar18[9] = uVar27 | 1;
LAB_008f53cc:
    memcpy(pvVar19,pvVar30,uVar15);
  }
  *(undefined1 *)((long)pvVar19 + uVar15) = 0;
LAB_008f53e0:
  p_Var1 = p_Stack_a8;
  lVar25 = local_b0;
  local_b0 = 0;
  p_Stack_a8 = (__shared_weak_count *)0x0;
  plVar18[0xd] = (long)p_Var1;
  plVar18[0xc] = lVar25;
  local_80 = plVar18;
  cocos2d::Scheduler::performFunctionInCocosThread(this,(function *)alStack_a0);
  if (alStack_a0 == local_80) {
    (**(code **)(*local_80 + 0x20))();
    p_Var1 = p_Stack_a8;
  }
  else {
    p_Var1 = p_Stack_a8;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x28))();
      p_Var1 = p_Stack_a8;
    }
  }
  p_Stack_a8 = p_Var1;
  if (p_Var1 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var1 + 8;
    do {
      lVar25 = *(long *)p_Var2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar10) {
        *(long *)p_Var2 = lVar25 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if (p_Var3 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var3 + 8;
    do {
      lVar25 = *(long *)p_Var1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar10) {
        *(long *)p_Var1 = lVar25 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var3);
    }
  }
  if (p_Var21 != (__shared_weak_count *)0x0) {
    p_Var3 = p_Var21 + 8;
    do {
      lVar25 = *(long *)p_Var3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
      if (bVar10) {
        *(long *)p_Var3 = lVar25 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*(long *)p_Var21 + 0x10))(p_Var21);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var21);
    }
  }
  do {
    lVar25 = *(long *)p_Var29;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(p_Var29,0x10);
    if (bVar10) {
      *(long *)p_Var29 = lVar25 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (lVar25 == 0) {
    (**(code **)(*(long *)this_01 + 0x10))(this_01);
    std::__ndk1::__shared_weak_count::__release_weak(this_01);
  }
  if (*(long *)(lVar11 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

