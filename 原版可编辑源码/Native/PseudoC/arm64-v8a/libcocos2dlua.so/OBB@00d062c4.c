
/* cocos2d::OBB::OBB(cocos2d::Vec3 const*, int) */

void __thiscall cocos2d::OBB::OBB(OBB *this,Vec3 *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  Vec3 *pVVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulong local_2a0;
  long local_298;
  float *local_290;
  float *local_288;
  float *local_258;
  uint local_244;
  undefined8 local_230;
  float local_228;
  undefined8 local_220;
  float local_218 [2];
  undefined8 local_210;
  float local_208 [2];
  undefined8 local_200;
  float local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  float local_1b0 [4];
  float local_1a0;
  float local_19c [3];
  float local_190;
  float local_18c;
  float local_188;
  Mat4 local_170 [64];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  Vec3::Vec3((Vec3 *)this);
  Vec3::Vec3((Vec3 *)(this + 0xc));
  Vec3::Vec3((Vec3 *)(this + 0x18));
  Vec3::Vec3((Vec3 *)(this + 0x24));
  Vec3::Vec3((Vec3 *)(this + 0x30));
  Vec3::Vec3((Vec3 *)(this + 0x3c));
  Vec3::Vec3((Vec3 *)(this + 0x48));
  Vec3::Vec3((Vec3 *)(this + 0x54));
  if (param_1 != (Vec3 *)0x0) {
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    Mat4::Mat4((Mat4 *)&local_130);
    if (param_2 < 1) {
      Mat4::Mat4((Mat4 *)&local_1f0,(Mat4 *)Mat4::IDENTITY);
    }
    else {
      Mat4::Mat4((Mat4 *)&local_f0);
      uVar7 = (ulong)(uint)param_2;
      fVar5 = 0.0;
      fVar23 = 0.0;
      fVar24 = 0.0;
      fVar4 = 0.0;
      fVar26 = 0.0;
      fVar6 = 0.0;
      fVar25 = 0.0;
      fVar27 = 0.0;
      fVar28 = 0.0;
      pVVar10 = param_1 + 8;
      do {
        fVar29 = *(float *)(pVVar10 + -8);
        fVar30 = *(float *)(pVVar10 + -4);
        fVar31 = *(float *)pVVar10;
        uVar7 = uVar7 - 1;
        fVar28 = fVar28 + fVar29;
        fVar25 = fVar25 + fVar30;
        fVar6 = fVar6 + fVar31;
        fVar5 = fVar5 + fVar29 * fVar29;
        fVar4 = fVar4 + fVar30 * fVar30;
        fVar27 = fVar27 + fVar31 * fVar31;
        fVar23 = fVar23 + fVar29 * fVar30;
        fVar24 = fVar24 + fVar29 * fVar31;
        fVar26 = fVar26 + fVar30 * fVar31;
        pVVar10 = pVVar10 + 0xc;
      } while (uVar7 != 0);
      fVar29 = (float)param_2;
      fVar23 = (fVar23 - (fVar28 * fVar25) / fVar29) / fVar29;
      fVar26 = (fVar26 - (fVar25 * fVar6) / fVar29) / fVar29;
      fVar24 = (fVar24 - (fVar28 * fVar6) / fVar29) / fVar29;
      local_f0 = CONCAT44(fVar23,(fVar5 - (fVar28 * fVar28) / fVar29) / fVar29);
      local_e0 = CONCAT44((fVar4 - (fVar25 * fVar25) / fVar29) / fVar29,fVar23);
      uStack_e8 = CONCAT44(uStack_e8._4_4_,fVar24);
      local_d0 = CONCAT44(fVar26,fVar24);
      local_d8 = CONCAT44(local_d8._4_4_,fVar26);
      uStack_c8 = CONCAT44(uStack_c8._4_4_,(fVar27 - (fVar6 * fVar6) / fVar29) / fVar29);
      uStack_128 = uStack_e8;
      local_130 = local_f0;
      uStack_118 = local_d8;
      uStack_120 = local_e0;
      uStack_108 = uStack_c8;
      local_110 = local_d0;
      uStack_f8 = _uStack_b8;
      uStack_100 = _local_c0;
      Mat4::~Mat4((Mat4 *)&local_f0);
      Mat4::Mat4(local_170);
      Vec3::Vec3((Vec3 *)&local_230);
      Mat4::Mat4((Mat4 *)local_1b0,(Mat4 *)&local_130);
      Vec3::Vec3((Vec3 *)&local_200);
      Vec3::Vec3((Vec3 *)&local_210);
      Mat4::Mat4((Mat4 *)&local_f0);
      Vec3::Vec3((Vec3 *)&local_220);
      local_244 = 0;
      pfVar12 = (float *)((ulong)&local_220 | 4);
      uStack_e8 = Mat4::IDENTITY._8_8_;
      local_f0 = Mat4::IDENTITY._0_8_;
      local_d8 = Mat4::IDENTITY._24_8_;
      local_e0 = Mat4::IDENTITY._16_8_;
      local_208[0] = 0.0;
      local_210 = 0;
      uStack_c8 = Mat4::IDENTITY._40_8_;
      local_d0 = Mat4::IDENTITY._32_8_;
      _uStack_b8 = Mat4::IDENTITY._56_8_;
      _local_c0 = Mat4::IDENTITY._48_8_;
      local_200 = CONCAT44(local_19c[0],local_1b0[0]);
      local_1f8 = local_188;
      local_218[0] = local_188;
      do {
        local_208[0] = 0.0;
        local_210 = 0;
        fVar28 = ABS(local_1a0) + 0.0 + ABS(local_190) + ABS(local_18c);
        local_220 = local_200;
        local_218[0] = local_1f8;
        if (fVar28 < 1.1920929e-07) {
          Mat4::transpose((Mat4 *)&local_f0);
          goto LAB_00d06c40;
        }
        fVar24 = 0.0;
        if (local_244 < 3) {
          fVar24 = (fVar28 * 0.2) / 9.0;
        }
        pfVar20 = local_1b0;
        local_298 = 2;
        local_2a0 = 1;
        uVar7 = 0;
        local_290 = &local_1a0;
        local_288 = local_19c;
        local_258 = &local_1a0;
        do {
          uVar1 = uVar7 + 1;
          if (uVar1 < 3) {
            lVar19 = 0;
            lVar15 = local_298;
            uVar17 = local_2a0;
            pfVar18 = local_288;
            pfVar22 = local_290;
            do {
              lVar13 = uVar17 * 4 + uVar7;
              fVar28 = local_1b0[lVar13];
              iVar21 = (int)uVar7;
              if (iVar21 == 0) {
LAB_00d06864:
                pfVar9 = (float *)&local_220;
              }
              else {
                pfVar9 = local_218;
                if ((iVar21 != 2) && (pfVar9 = pfVar12, iVar21 != 1)) {
                  __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                                      "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/3d/CCOBB.cpp",
                                      "_getElement",0x54);
                  goto LAB_00d06864;
                }
              }
              fVar26 = *pfVar9;
              iVar16 = (int)uVar17;
              if (iVar16 == 0) {
LAB_00d068b4:
                pfVar9 = (float *)&local_220;
              }
              else {
                pfVar9 = local_218;
                if ((iVar16 != 2) && (pfVar9 = pfVar12, iVar16 != 1)) {
                  __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                                      "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/3d/CCOBB.cpp",
                                      "_getElement",0x54);
                  goto LAB_00d068b4;
                }
              }
              fVar28 = ABS(fVar28) * 100.0;
              if (((local_244 < 4) || (fVar25 = ABS(fVar26), fVar28 + fVar25 != fVar25)) ||
                 (fVar25 = ABS(*pfVar9), fVar28 + fVar25 != fVar25)) {
                fVar25 = local_1b0[lVar13];
                if (fVar24 < ABS(fVar25)) {
                  fVar26 = *pfVar9 - fVar26;
                  if (fVar28 + ABS(fVar26) == ABS(fVar26)) {
                    fVar26 = fVar25 / fVar26;
                    if (iVar21 == 0) goto LAB_00d069bc;
LAB_00d06978:
                    pfVar9 = local_208;
                    if ((iVar21 != 2) && (pfVar9 = (float *)((ulong)&local_210 | 4), iVar21 != 1)) {
                      __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                                          "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/3d/CCOBB.cpp"
                                          ,"_getElement",0x54);
                      goto LAB_00d069bc;
                    }
                  }
                  else {
                    fVar28 = (fVar26 * 0.5) / fVar25;
                    fVar26 = 1.0 / (ABS(fVar28) + SQRT(fVar28 * fVar28 + 1.0));
                    if (fVar28 < 0.0) {
                      fVar26 = -fVar26;
                    }
                    if (iVar21 != 0) goto LAB_00d06978;
LAB_00d069bc:
                    pfVar9 = (float *)&local_210;
                  }
                  fVar25 = fVar25 * fVar26;
                  *pfVar9 = *pfVar9 - fVar25;
                  if (iVar16 == 0) {
LAB_00d06a1c:
                    pfVar9 = (float *)&local_210;
                  }
                  else {
                    pfVar9 = local_208;
                    if ((iVar16 != 2) && (pfVar9 = (float *)((ulong)&local_210 | 4), iVar16 != 1)) {
                      __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                                          "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/3d/CCOBB.cpp"
                                          ,"_getElement",0x54);
                      goto LAB_00d06a1c;
                    }
                  }
                  *pfVar9 = *pfVar9 + fVar25;
                  if (iVar21 == 0) {
LAB_00d06a74:
                    pfVar9 = (float *)&local_220;
                  }
                  else {
                    pfVar9 = local_218;
                    if ((iVar21 != 2) && (pfVar9 = pfVar12, iVar21 != 1)) {
                      __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                                          "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/3d/CCOBB.cpp"
                                          ,"_getElement",0x54);
                      goto LAB_00d06a74;
                    }
                  }
                  *pfVar9 = *pfVar9 - fVar25;
                  if (iVar16 == 0) {
LAB_00d06acc:
                    pfVar9 = (float *)&local_220;
                  }
                  else {
                    pfVar9 = local_218;
                    if ((iVar16 != 2) && (pfVar9 = pfVar12, iVar16 != 1)) {
                      __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                                          "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/3d/CCOBB.cpp"
                                          ,"_getElement",0x54);
                      goto LAB_00d06acc;
                    }
                  }
                  fVar28 = 1.0 / SQRT(fVar26 * fVar26 + 1.0);
                  fVar26 = fVar26 * fVar28;
                  fVar28 = fVar26 / (fVar28 + 1.0);
                  *pfVar9 = *pfVar9 + fVar25;
                  local_1b0[lVar13] = 0.0;
                  if (uVar7 != 0) {
                    uVar8 = 0;
                    do {
                      fVar25 = pfVar20[uVar8];
                      fVar23 = pfVar22[uVar8];
                      uVar11 = uVar8 + 1;
                      pfVar20[uVar8] = fVar25 - fVar26 * (fVar28 * fVar25 + fVar23);
                      pfVar22[uVar8] = fVar26 * (fVar25 - fVar28 * fVar23) + fVar23;
                      uVar8 = uVar11;
                    } while (uVar7 != uVar11);
                  }
                  lVar13 = lVar19;
                  pfVar9 = pfVar18;
                  pfVar14 = local_258;
                  if (uVar1 < uVar17) {
                    do {
                      fVar25 = *pfVar14;
                      fVar23 = *pfVar9;
                      lVar13 = lVar13 + -1;
                      *pfVar14 = fVar25 - fVar26 * (fVar28 * fVar25 + fVar23);
                      *pfVar9 = fVar26 * (fVar25 - fVar28 * fVar23) + fVar23;
                      pfVar9 = pfVar9 + 1;
                      pfVar14 = pfVar14 + 4;
                    } while (lVar13 != 0);
                  }
                  if (uVar17 < 2) {
                    lVar13 = lVar15 * 4 + uVar7;
                    lVar2 = lVar15 * 4 + uVar17;
                    fVar25 = local_1b0[lVar13];
                    fVar23 = local_1b0[lVar2];
                    local_1b0[lVar13] = fVar25 - fVar26 * (fVar28 * fVar25 + fVar23);
                    local_1b0[lVar2] = fVar26 * (fVar25 - fVar28 * fVar23) + fVar23;
                  }
                  fVar23 = *(float *)(&local_f0 + uVar17 * 2);
                  fVar25 = *(float *)(&local_f0 + uVar7 * 2);
                  lVar13 = (uVar7 << 2 | 1) * 4;
                  *(float *)(&local_f0 + uVar7 * 2) = fVar25 - fVar26 * (fVar28 * fVar25 + fVar23);
                  *(float *)(&local_f0 + uVar17 * 2) = fVar26 * (fVar25 - fVar28 * fVar23) + fVar23;
                  uVar8 = uVar17 * 0x10 | 4;
                  fVar25 = *(float *)((long)&local_f0 + lVar13);
                  fVar23 = *(float *)((long)&local_f0 + uVar8);
                  uVar11 = uVar17 * 0x10 | 8;
                  *(float *)((long)&local_f0 + lVar13) =
                       fVar25 - fVar26 * (fVar28 * fVar25 + fVar23);
                  lVar13 = (uVar7 << 2 | 2) * 4;
                  *(float *)((long)&local_f0 + uVar8) = fVar26 * (fVar25 - fVar28 * fVar23) + fVar23
                  ;
                  fVar25 = *(float *)((long)&local_f0 + lVar13);
                  fVar23 = *(float *)((long)&local_f0 + uVar11);
                  *(float *)((long)&local_f0 + lVar13) =
                       fVar25 - fVar26 * (fVar28 * fVar25 + fVar23);
                  *(float *)((long)&local_f0 + uVar11) =
                       fVar26 * (fVar25 - fVar28 * fVar23) + fVar23;
                }
              }
              else {
                local_1b0[lVar13] = 0.0;
              }
              uVar17 = uVar17 + 1;
              lVar15 = lVar15 + 1;
              pfVar22 = pfVar22 + 4;
              pfVar18 = pfVar18 + 4;
              lVar19 = lVar19 + 1;
            } while (uVar17 != 3);
          }
          pfVar20 = pfVar20 + 4;
          local_2a0 = local_2a0 + 1;
          local_298 = local_298 + 1;
          local_290 = local_290 + 4;
          local_258 = local_258 + 5;
          local_288 = local_288 + 5;
          uVar7 = uVar1;
        } while (uVar1 != 3);
        local_244 = local_244 + 1;
        local_200 = CONCAT44((float)((ulong)local_210 >> 0x20) + (float)((ulong)local_200 >> 0x20),
                             (float)local_210 + (float)local_200);
        local_1f8 = local_208[0] + local_1f8;
        local_210 = 0;
        local_220 = local_200;
        local_218[0] = local_1f8;
        local_208[0] = 0.0;
      } while (local_244 != 0x32);
      Mat4::transpose((Mat4 *)&local_f0);
LAB_00d06c40:
      local_170[0x18] = (Mat4)(undefined1)local_d8;
      local_170[0x19] = (Mat4)local_d8._1_1_;
      local_170[0x1a] = (Mat4)local_d8._2_1_;
      local_170[0x1b] = (Mat4)local_d8._3_1_;
      local_170[0x1c] = (Mat4)local_d8._4_1_;
      local_170[0x1d] = (Mat4)local_d8._5_1_;
      local_170[0x1e] = (Mat4)local_d8._6_1_;
      local_170[0x1f] = (Mat4)local_d8._7_1_;
      local_170[0x10] = (Mat4)(undefined1)local_e0;
      local_170[0x11] = (Mat4)local_e0._1_1_;
      local_170[0x12] = (Mat4)local_e0._2_1_;
      local_170[0x13] = (Mat4)local_e0._3_1_;
      local_170[0x14] = (Mat4)local_e0._4_1_;
      local_170[0x15] = (Mat4)local_e0._5_1_;
      local_170[0x16] = (Mat4)local_e0._6_1_;
      local_170[0x17] = (Mat4)local_e0._7_1_;
      local_170[0x28] = (Mat4)(undefined1)uStack_c8;
      local_170[0x29] = (Mat4)uStack_c8._1_1_;
      local_170[0x2a] = (Mat4)uStack_c8._2_1_;
      local_170[0x2b] = (Mat4)uStack_c8._3_1_;
      local_170[0x2c] = (Mat4)uStack_c8._4_1_;
      local_170[0x2d] = (Mat4)uStack_c8._5_1_;
      local_170[0x2e] = (Mat4)uStack_c8._6_1_;
      local_170[0x2f] = (Mat4)uStack_c8._7_1_;
      local_170[0x20] = (Mat4)(undefined1)local_d0;
      local_170[0x21] = (Mat4)local_d0._1_1_;
      local_170[0x22] = (Mat4)local_d0._2_1_;
      local_170[0x23] = (Mat4)local_d0._3_1_;
      local_170[0x24] = (Mat4)local_d0._4_1_;
      local_170[0x25] = (Mat4)local_d0._5_1_;
      local_170[0x26] = (Mat4)local_d0._6_1_;
      local_170[0x27] = (Mat4)local_d0._7_1_;
      local_170[8] = (Mat4)(undefined1)uStack_e8;
      local_170[9] = (Mat4)uStack_e8._1_1_;
      local_170[10] = (Mat4)uStack_e8._2_1_;
      local_170[0xb] = (Mat4)uStack_e8._3_1_;
      local_170[0xc] = (Mat4)uStack_e8._4_1_;
      local_170[0xd] = (Mat4)uStack_e8._5_1_;
      local_170[0xe] = (Mat4)uStack_e8._6_1_;
      local_170[0xf] = (Mat4)uStack_e8._7_1_;
      local_170[0] = (Mat4)(undefined1)local_f0;
      local_170[1] = (Mat4)local_f0._1_1_;
      local_170[2] = (Mat4)local_f0._2_1_;
      local_170[3] = (Mat4)local_f0._3_1_;
      local_170[4] = (Mat4)local_f0._4_1_;
      local_170[5] = (Mat4)local_f0._5_1_;
      local_170[6] = (Mat4)local_f0._6_1_;
      local_170[7] = (Mat4)local_f0._7_1_;
      local_170[0x38] = (Mat4)uStack_b8;
      local_170[0x39] = (Mat4)uStack_b7;
      local_170[0x3a] = (Mat4)uStack_b6;
      local_170[0x3b] = (Mat4)uStack_b5;
      local_170[0x3c] = (Mat4)uStack_b4;
      local_170[0x3d] = (Mat4)uStack_b3;
      local_170[0x3e] = (Mat4)uStack_b2;
      local_170[0x3f] = (Mat4)uStack_b1;
      local_170[0x30] = (Mat4)local_c0;
      local_170[0x31] = (Mat4)uStack_bf;
      local_170[0x32] = (Mat4)uStack_be;
      local_170[0x33] = (Mat4)uStack_bd;
      local_170[0x34] = (Mat4)uStack_bc;
      local_170[0x35] = (Mat4)uStack_bb;
      local_170[0x36] = (Mat4)uStack_ba;
      local_170[0x37] = (Mat4)uStack_b9;
      local_230 = local_220;
      local_228 = local_218[0];
      Mat4::~Mat4((Mat4 *)&local_f0);
      Mat4::~Mat4((Mat4 *)local_1b0);
      Mat4::transpose(local_170);
      Mat4::Mat4((Mat4 *)&local_1f0,local_170);
      Mat4::~Mat4(local_170);
    }
    Mat4::~Mat4((Mat4 *)&local_130);
    Mat4::transpose((Mat4 *)&local_1f0);
    Vec3::Vec3((Vec3 *)&local_130,*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8))
    ;
    Vec3::Vec3((Vec3 *)&local_f0);
    Mat4::transformVector((Mat4 *)&local_1f0,(Vec3 *)&local_130,(Vec3 *)&local_f0);
    fVar28 = (float)local_f0;
    fVar25 = (float)local_f0;
    fVar24 = local_f0._4_4_;
    fVar23 = local_f0._4_4_;
    fVar26 = (float)uStack_e8;
    fVar27 = (float)uStack_e8;
    if (1 < param_2) {
      lVar15 = (ulong)(uint)param_2 - 1;
      pVVar10 = param_1 + 0x14;
      do {
        Vec3::Vec3((Vec3 *)&local_130,*(float *)(pVVar10 + -8),*(float *)(pVVar10 + -4),
                   *(float *)pVVar10);
        Vec3::Vec3((Vec3 *)&local_f0);
        Mat4::transformVector((Mat4 *)&local_1f0,(Vec3 *)&local_130,(Vec3 *)&local_f0);
        pVVar10 = pVVar10 + 0xc;
        if (fVar28 <= (float)local_f0) {
          fVar28 = (float)local_f0;
        }
        if (fVar24 <= local_f0._4_4_) {
          fVar24 = local_f0._4_4_;
        }
        if (fVar26 <= (float)uStack_e8) {
          fVar26 = (float)uStack_e8;
        }
        if ((float)local_f0 <= fVar25) {
          fVar25 = (float)local_f0;
        }
        if (local_f0._4_4_ <= fVar23) {
          fVar23 = local_f0._4_4_;
        }
        if ((float)uStack_e8 <= fVar27) {
          fVar27 = (float)uStack_e8;
        }
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    Mat4::transpose((Mat4 *)&local_1f0);
    *(undefined8 *)(this + 0xc) = local_1f0;
    *(undefined4 *)(this + 0x14) = local_1e8;
    *(undefined8 *)(this + 0x18) = local_1e0;
    *(undefined4 *)(this + 0x20) = local_1d8;
    *(float *)this = (fVar25 + fVar28) * 0.5;
    *(float *)(this + 4) = (fVar23 + fVar24) * 0.5;
    *(undefined8 *)(this + 0x24) = local_1d0;
    *(undefined4 *)(this + 0x2c) = local_1c8;
    *(float *)(this + 8) = (fVar27 + fVar26) * 0.5;
    Mat4::transformVector((Mat4 *)&local_1f0,(Vec3 *)this);
    Vec3::normalize((Vec3 *)(this + 0xc));
    Vec3::normalize((Vec3 *)(this + 0x18));
    Vec3::normalize((Vec3 *)(this + 0x24));
    fVar28 = (fVar28 - fVar25) * 0.5;
    fVar24 = (fVar24 - fVar23) * 0.5;
    fVar26 = (fVar26 - fVar27) * 0.5;
    *(float *)(this + 0x58) = fVar24;
    *(float *)(this + 0x5c) = fVar26;
    *(float *)(this + 0x50) = fVar26 * *(float *)(this + 0x2c);
    *(float *)(this + 0x54) = fVar28;
    *(ulong *)(this + 0x30) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0xc) >> 0x20) * fVar28,
                  (float)*(undefined8 *)(this + 0xc) * fVar28);
    *(float *)(this + 0x38) = fVar28 * *(float *)(this + 0x14);
    *(ulong *)(this + 0x3c) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) * fVar24,
                  (float)*(undefined8 *)(this + 0x18) * fVar24);
    *(float *)(this + 0x44) = fVar24 * *(float *)(this + 0x20);
    *(ulong *)(this + 0x48) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x24) >> 0x20) * fVar26,
                  (float)*(undefined8 *)(this + 0x24) * fVar26);
    Mat4::~Mat4((Mat4 *)&local_1f0);
  }
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

