
/* v8::internal::Strtod(v8::internal::Vector<char const>, int) */

void __thiscall v8::internal::Strtod(internal *this,uint param_2,int param_3)

{
  internal *piVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  internal *piVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  double dVar19;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  int local_394;
  ulong local_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong local_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong local_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong local_330;
  ulong uStack_328;
  ulong local_320;
  ulong uStack_318;
  ulong local_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong local_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong local_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong local_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong local_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong local_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong local_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong local_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong local_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  double local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  internal local_85 [13];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (0 < (int)param_2) {
    uVar8 = (ulong)param_2;
    piVar12 = this;
    do {
      if (*piVar12 != (internal)0x30) goto LAB_0106874c;
      param_2 = param_2 - 1;
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 1;
    } while (uVar8 != 0);
  }
  param_2 = 0;
  piVar12 = this;
LAB_0106874c:
  lVar18 = 0;
  dVar19 = 0.0;
  do {
    if ((int)param_2 + lVar18 < 1) goto LAB_010688d8;
    lVar15 = lVar18 + (long)(int)param_2 + -1;
    lVar18 = lVar18 + -1;
  } while (piVar12[lVar15] == (internal)0x30);
  iVar11 = (int)lVar18;
  iVar10 = param_2 + 1 + iVar11;
  if (iVar10 == 0) goto LAB_010688d8;
  uVar8 = (ulong)(param_3 - 1) - lVar18;
  uVar17 = (uint)uVar8;
  if (0x30c < iVar10) {
    if (((internal *)&local_390 < piVar12 + 0x30b) && (piVar12 < local_85)) {
      lVar18 = 0;
    }
    else {
      uStack_388 = *(ulong *)(piVar12 + 8);
      local_390 = *(ulong *)piVar12;
      uStack_378 = *(ulong *)(piVar12 + 0x18);
      uStack_380 = *(ulong *)(piVar12 + 0x10);
      uStack_368 = *(ulong *)(piVar12 + 0x28);
      local_370 = *(ulong *)(piVar12 + 0x20);
      uStack_358 = *(ulong *)(piVar12 + 0x38);
      uStack_360 = *(ulong *)(piVar12 + 0x30);
      uStack_348 = *(ulong *)(piVar12 + 0x48);
      local_350 = *(ulong *)(piVar12 + 0x40);
      uStack_338 = *(ulong *)(piVar12 + 0x58);
      uStack_340 = *(ulong *)(piVar12 + 0x50);
      uStack_328 = *(ulong *)(piVar12 + 0x68);
      local_330 = *(ulong *)(piVar12 + 0x60);
      uStack_318 = *(ulong *)(piVar12 + 0x78);
      local_320 = *(ulong *)(piVar12 + 0x70);
      uStack_308 = *(ulong *)(piVar12 + 0x88);
      local_310 = *(ulong *)(piVar12 + 0x80);
      uStack_2f8 = *(ulong *)(piVar12 + 0x98);
      uStack_300 = *(ulong *)(piVar12 + 0x90);
      uStack_2e8 = *(ulong *)(piVar12 + 0xa8);
      local_2f0 = *(ulong *)(piVar12 + 0xa0);
      uStack_2d8 = *(ulong *)(piVar12 + 0xb8);
      uStack_2e0 = *(ulong *)(piVar12 + 0xb0);
      uStack_2c8 = *(ulong *)(piVar12 + 200);
      local_2d0 = *(ulong *)(piVar12 + 0xc0);
      uStack_2b8 = *(ulong *)(piVar12 + 0xd8);
      uStack_2c0 = *(ulong *)(piVar12 + 0xd0);
      uStack_2a8 = *(ulong *)(piVar12 + 0xe8);
      local_2b0 = *(ulong *)(piVar12 + 0xe0);
      uStack_298 = *(ulong *)(piVar12 + 0xf8);
      uStack_2a0 = *(ulong *)(piVar12 + 0xf0);
      uStack_288 = *(ulong *)(piVar12 + 0x108);
      local_290 = *(ulong *)(piVar12 + 0x100);
      uStack_278 = *(ulong *)(piVar12 + 0x118);
      uStack_280 = *(ulong *)(piVar12 + 0x110);
      uStack_268 = *(ulong *)(piVar12 + 0x128);
      local_270 = *(ulong *)(piVar12 + 0x120);
      uStack_258 = *(ulong *)(piVar12 + 0x138);
      uStack_260 = *(ulong *)(piVar12 + 0x130);
      uStack_248 = *(ulong *)(piVar12 + 0x148);
      local_250 = *(ulong *)(piVar12 + 0x140);
      uStack_238 = *(ulong *)(piVar12 + 0x158);
      uStack_240 = *(ulong *)(piVar12 + 0x150);
      uStack_228 = *(ulong *)(piVar12 + 0x168);
      local_230 = *(ulong *)(piVar12 + 0x160);
      uStack_218 = *(ulong *)(piVar12 + 0x178);
      uStack_220 = *(ulong *)(piVar12 + 0x170);
      uStack_208 = *(ulong *)(piVar12 + 0x188);
      local_210 = *(ulong *)(piVar12 + 0x180);
      uStack_1f8 = *(ulong *)(piVar12 + 0x198);
      uStack_200 = *(ulong *)(piVar12 + 400);
      uStack_1e8 = *(ulong *)(piVar12 + 0x1a8);
      local_1f0 = *(ulong *)(piVar12 + 0x1a0);
      uStack_1d8 = *(ulong *)(piVar12 + 0x1b8);
      uStack_1e0 = *(ulong *)(piVar12 + 0x1b0);
      uStack_1c8 = *(ulong *)(piVar12 + 0x1c8);
      local_1d0 = *(ulong *)(piVar12 + 0x1c0);
      uStack_1b8 = *(ulong *)(piVar12 + 0x1d8);
      uStack_1c0 = *(ulong *)(piVar12 + 0x1d0);
      uStack_1a8 = *(ulong *)(piVar12 + 0x1e8);
      local_1b0 = *(ulong *)(piVar12 + 0x1e0);
      uStack_198 = *(ulong *)(piVar12 + 0x1f8);
      uStack_1a0 = *(ulong *)(piVar12 + 0x1f0);
      uStack_188 = *(ulong *)(piVar12 + 0x208);
      local_190 = *(ulong *)(piVar12 + 0x200);
      uStack_178 = *(ulong *)(piVar12 + 0x218);
      uStack_180 = *(ulong *)(piVar12 + 0x210);
      uStack_168 = *(ulong *)(piVar12 + 0x228);
      local_170 = *(ulong *)(piVar12 + 0x220);
      uStack_158 = *(ulong *)(piVar12 + 0x238);
      uStack_160 = *(ulong *)(piVar12 + 0x230);
      uStack_148 = *(ulong *)(piVar12 + 0x248);
      local_150 = *(ulong *)(piVar12 + 0x240);
      uStack_138 = *(ulong *)(piVar12 + 600);
      uStack_140 = *(ulong *)(piVar12 + 0x250);
      uStack_128 = *(ulong *)(piVar12 + 0x268);
      local_130 = *(ulong *)(piVar12 + 0x260);
      uStack_118 = *(ulong *)(piVar12 + 0x278);
      uStack_120 = *(ulong *)(piVar12 + 0x270);
      uStack_108 = *(ulong *)(piVar12 + 0x288);
      local_110 = *(ulong *)(piVar12 + 0x280);
      uStack_f8 = *(ulong *)(piVar12 + 0x298);
      uStack_100 = *(ulong *)(piVar12 + 0x290);
      uStack_e8 = *(ulong *)(piVar12 + 0x2a8);
      local_f0 = *(ulong *)(piVar12 + 0x2a0);
      uStack_d8 = *(ulong *)(piVar12 + 0x2b8);
      uStack_e0 = *(ulong *)(piVar12 + 0x2b0);
      uStack_c8 = *(ulong *)(piVar12 + 0x2c8);
      local_d0 = *(ulong *)(piVar12 + 0x2c0);
      uStack_b8 = *(ulong *)(piVar12 + 0x2d8);
      uStack_c0 = *(ulong *)(piVar12 + 0x2d0);
      uStack_a8 = *(ulong *)(piVar12 + 0x2e8);
      local_b0 = *(double *)(piVar12 + 0x2e0);
      uStack_98 = *(ulong *)(piVar12 + 0x2f8);
      uStack_a0 = *(ulong *)(piVar12 + 0x2f0);
      lVar18 = 0x300;
      dVar19 = local_b0;
    }
    do {
      *(internal *)((long)&local_390 + lVar18) = piVar12[lVar18];
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0x30b);
    local_85[0] = (internal)0x31;
    dVar19 = (double)Strtod((internal *)dVar19,&local_390,0x30c,param_2 + iVar11 + uVar17 + -0x30b);
    goto LAB_010688d8;
  }
  if (0x135 < (int)(param_2 + param_3)) {
    dVar19 = INFINITY;
    goto LAB_010688d8;
  }
  if ((int)(param_2 + param_3) < -0x143) goto LAB_010688d8;
  iVar2 = param_2 + iVar11 + 1;
  if (iVar10 < 0x10) {
    if (0xffffffe9 < uVar17) {
      if (iVar10 < 1) {
        dVar19 = 0.0;
      }
      else {
        lVar18 = 0;
        uVar8 = 0;
        do {
          piVar1 = piVar12 + lVar18;
          lVar18 = lVar18 + 1;
          uVar8 = ((ulong)(byte)*piVar1 + uVar8 * 10) - 0x30;
          if (iVar2 <= lVar18) break;
        } while (uVar8 < 0x1999999999999999);
        dVar19 = (double)uVar8;
      }
      dVar19 = dVar19 / *(double *)(&DAT_019d52e8 + (long)((1 - param_3) + iVar11) * 8);
      goto LAB_010688d8;
    }
    if (uVar17 < 0x17) {
      if (iVar10 < 1) {
        dVar19 = 0.0;
      }
      else {
        lVar18 = 0;
        uVar8 = 0;
        do {
          piVar1 = piVar12 + lVar18;
          lVar18 = lVar18 + 1;
          uVar8 = ((ulong)(byte)*piVar1 + uVar8 * 10) - 0x30;
          if (iVar2 <= lVar18) break;
        } while (uVar8 < 0x1999999999999999);
        dVar19 = (double)uVar8;
      }
      dVar19 = dVar19 * *(double *)(&DAT_019d52e8 + (long)(int)uVar17 * 8);
      goto LAB_010688d8;
    }
    if (-1 < (int)uVar17) {
      iVar7 = (-iVar11 - param_2) + 0xe;
      iVar13 = uVar17 - iVar7;
      if (iVar13 < 0x17) {
        if (iVar10 < 1) {
          dVar19 = 0.0;
        }
        else {
          lVar18 = 0;
          uVar8 = 0;
          do {
            piVar1 = piVar12 + lVar18;
            lVar18 = lVar18 + 1;
            uVar8 = ((ulong)(byte)*piVar1 + uVar8 * 10) - 0x30;
            if (iVar2 <= lVar18) break;
          } while (uVar8 < 0x1999999999999999);
          dVar19 = (double)uVar8;
        }
        dVar19 = dVar19 * *(double *)(&DAT_019d52e8 + (long)iVar7 * 8) *
                 *(double *)(&DAT_019d52e8 + (long)iVar13 * 8);
        goto LAB_010688d8;
      }
    }
  }
  if (iVar10 < 1) {
    lVar18 = 0;
    local_390 = 0;
  }
  else {
    lVar18 = 0;
    local_390 = 0;
    do {
      piVar1 = piVar12 + lVar18;
      lVar18 = lVar18 + 1;
      local_390 = ((ulong)(byte)*piVar1 + local_390 * 10) - 0x30;
      if (iVar2 <= lVar18) break;
    } while (local_390 < 0x1999999999999999);
  }
  iVar10 = param_2 - (int)lVar18;
  if (iVar10 + iVar11 == -1) {
LAB_01068adc:
    lVar18 = 0;
  }
  else {
    if (0x34 < (byte)piVar12[(int)lVar18]) {
      local_390 = local_390 + 1;
    }
    iVar10 = iVar10 + iVar11 + 1;
    uVar17 = iVar10 + uVar17;
    if (iVar10 == 0) goto LAB_01068adc;
    lVar18 = 4;
  }
  if (local_390 >> 0x36 == 0) {
    iVar10 = 0;
    do {
      uVar9 = local_390;
      iVar10 = iVar10 + -10;
      local_390 = uVar9 << 10;
    } while (uVar9 >> 0x2c == 0);
    uVar16 = (uVar9 & 0x3fffffffffffff) >> 0x35;
    goto joined_r0x01068b00;
  }
  iVar10 = 0;
  iVar13 = 0;
  if (-1 < (long)local_390) {
    do {
      iVar10 = iVar13 + -1;
      uVar16 = (local_390 & 0x7fffffffffffffff) >> 0x3e;
      local_390 = local_390 << 1;
joined_r0x01068b00:
      iVar13 = iVar10;
    } while (uVar16 == 0);
  }
  uStack_388 = CONCAT44(uStack_388._4_4_,iVar10);
  if ((int)uVar17 < -0x15c) goto LAB_010688d8;
  local_78 = 0;
  lVar18 = lVar18 << ((ulong)(uint)-iVar10 & 0x3f);
  local_70 = 0;
  PowersOfTenCache::GetCachedPowerForDecimalExponent(uVar17,(DiyFp *)&local_78,&local_394);
  iVar10 = uVar17 - local_394;
  lVar15 = lVar18;
  if (iVar10 != 0) {
    uVar17 = iVar10 - 1;
    if (6 < uVar17) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar9 = -(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar17 << 3;
    uStack_3a0 = *(undefined8 *)(&DAT_019d53a0 + uVar9);
    local_3a8 = *(undefined8 *)(&DAT_019d53d8 + uVar9);
    DiyFp::Multiply((DiyFp *)&local_390,(DiyFp *)&local_3a8);
    lVar15 = lVar18 + 4;
    if (iVar10 <= (int)(0x12 - (param_2 + iVar11))) {
      lVar15 = lVar18;
    }
  }
  DiyFp::Multiply((DiyFp *)&local_390,(DiyFp *)&local_78);
  uVar9 = local_390 >> 0x36;
  lVar18 = 8;
  iVar11 = (int)uStack_388;
  if (lVar15 != 0) {
    lVar18 = 9;
  }
  while (uVar9 == 0) {
    uVar9 = local_390 >> 0x2c;
    iVar11 = iVar11 + -10;
    local_390 = local_390 << 10;
  }
  uVar9 = local_390;
  if (-1 < (long)local_390) {
    do {
      local_390 = uVar9 << 1;
      iVar11 = iVar11 + -1;
      uVar16 = uVar9 & 0x7fffffffffffffff;
      uVar9 = local_390;
    } while (uVar16 >> 0x3e == 0);
  }
  iVar10 = 0;
  if (-0x432 < iVar11 + 0x40) {
    iVar10 = iVar11 + 0x472;
  }
  iVar13 = 0x35;
  if (iVar11 + 0x40 < -0x3fd) {
    iVar13 = iVar10;
  }
  lVar18 = lVar18 + lVar15 << ((ulong)(uint)((int)uStack_388 - iVar11) & 0x3f);
  if (iVar13 < 4) {
    uVar17 = 4 - iVar13;
    local_390 = local_390 >> ((ulong)uVar17 & 0x3f);
    iVar11 = uVar17 + iVar11;
    lVar18 = (lVar18 >> ((ulong)uVar17 & 0x3f)) + 9;
    uVar9 = 0x3c;
  }
  else {
    uVar9 = (ulong)(0x40 - iVar13);
  }
  uStack_388 = CONCAT44(uStack_388._4_4_,iVar11);
  uVar16 = local_390 >> (uVar9 & 0x3f);
  lVar15 = 8L << ((ulong)((int)uVar9 - 1) & 0x3f);
  uVar14 = (local_390 & (-1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU)) << 3;
  uVar3 = lVar15 + lVar18;
  iVar10 = (int)uVar9 + iVar11;
  if (uVar14 < uVar3) {
LAB_01068d4c:
    if (iVar10 < 0x3cc) goto LAB_01068cc8;
LAB_01068d54:
    dVar19 = INFINITY;
  }
  else {
    if (uVar16 < 0x1fffffffffffff) {
      uVar16 = uVar16 + 1;
      goto LAB_01068d4c;
    }
    iVar10 = iVar13;
    if (3 < iVar13) {
      iVar10 = 4;
    }
    iVar10 = (iVar10 - iVar13) + iVar11 + 0x3d;
    uVar16 = 0x10000000000000;
    if (0x3cb < iVar10) goto LAB_01068d54;
LAB_01068cc8:
    dVar19 = 0.0;
    if (-0x433 < iVar10) {
      bVar6 = (uVar16 & 0x10000000000000) == 0;
      if (iVar10 != -0x432) {
        uVar9 = uVar16 >> 0x34;
        uVar5 = uVar16;
        while (uVar16 = uVar5, (uVar9 & 1) == 0) {
          iVar10 = iVar10 + -1;
          bVar6 = (uVar5 & 0x8000000000000) == 0;
          uVar16 = uVar5 << 1;
          if (iVar10 < -0x431) break;
          uVar9 = uVar5 >> 0x33;
          uVar5 = uVar16;
        }
      }
      uVar9 = (ulong)(iVar10 + 0x433) << 0x34;
      if (!(bool)(iVar10 != -0x432 | bVar6 ^ 1U)) {
        uVar9 = 0;
      }
      dVar19 = (double)(uVar9 | uVar16 & 0xfffffffffffff);
    }
  }
  if (((ulong)(lVar15 - lVar18) < uVar14) && (uVar14 < uVar3)) {
    dVar19 = (double)FUN_01068dcc(dVar19,piVar12,iVar2,uVar8 & 0xffffffff);
  }
LAB_010688d8:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(dVar19);
  }
  return;
}

