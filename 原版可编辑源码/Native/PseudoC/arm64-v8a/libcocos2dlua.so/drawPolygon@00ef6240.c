
/* cocos2d::DrawNode::drawPolygon(cocos2d::Vec2 const*, int, cocos2d::Color4F const&, float,
   cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawPolygon
          (DrawNode *this,Vec2 *param_1,int param_2,Color4F *param_3,float param_4,Color4F *param_5)

{
  ulong uVar1;
  float *pfVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float *pfVar16;
  float *pfVar17;
  undefined8 *puVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uStack_128;
  float fStack_124;
  float fStack_120;
  float local_11c;
  float local_118;
  undefined4 uStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  float local_fc;
  float fStack_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float local_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined8 local_bc;
  long local_b0;
  
  uVar12 = (ulong)(uint)param_2;
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  uVar6 = param_2 - 2;
  fVar20 = *(float *)(param_5 + 0xc);
  iVar13 = *(int *)(this + 0x314);
  iVar5 = *(int *)(this + 0x310);
  uVar3 = param_2 * 3 - 2;
  if (0.0 >= param_4 || 0.0 >= fVar20) {
    uVar3 = uVar6;
  }
  iVar8 = uVar3 * 3;
  if (iVar5 < iVar8 + iVar13) {
    iVar13 = iVar5;
    if (iVar5 <= iVar8) {
      iVar13 = iVar8;
    }
    *(int *)(this + 0x310) = iVar13 + iVar5;
    pvVar11 = realloc(*(void **)(this + 0x318),(long)(iVar13 + iVar5) * 0x14);
    iVar13 = *(int *)(this + 0x314);
    *(void **)(this + 0x318) = pvVar11;
  }
  else {
    pvVar11 = *(void **)(this + 0x318);
  }
  puVar18 = (undefined8 *)((long)pvVar11 + (long)iVar13 * 0x14);
  if (0 < (int)uVar6) {
    uVar19 = (ulong)uVar6;
    puVar14 = puVar18;
    puVar15 = (undefined8 *)(param_1 + 0x10);
    do {
      local_f0 = *(undefined8 *)param_1;
      Color4B::Color4B((Color4B *)&uStack_e8,param_3);
      fStack_e4 = 0.0;
      fStack_e0 = 0.0;
      local_dc = (float)puVar15[-1];
      fStack_d8 = (float)((ulong)puVar15[-1] >> 0x20);
      Color4B::Color4B((Color4B *)&uStack_d4,param_3);
      local_d0 = 0;
      fStack_c8 = (float)*puVar15;
      fStack_c4 = (float)((ulong)*puVar15 >> 0x20);
      Color4B::Color4B((Color4B *)&uStack_c0,param_3);
      local_bc = 0;
      puVar18 = (undefined8 *)((long)puVar14 + 0x3c);
      uVar19 = uVar19 - 1;
      puVar14[1] = CONCAT44(fStack_e4,uStack_e8);
      *puVar14 = local_f0;
      puVar14[3] = CONCAT44(uStack_d4,fStack_d8);
      puVar14[2] = CONCAT44(local_dc,fStack_e0);
      *(undefined8 *)((long)puVar14 + 0x34) = 0;
      *(ulong *)((long)puVar14 + 0x2c) = CONCAT44(uStack_c0,fStack_c4);
      puVar14[5] = CONCAT44(fStack_c4,fStack_c8);
      puVar14[4] = local_d0;
      puVar14 = puVar18;
      puVar15 = puVar15 + 1;
    } while (uVar19 != 0);
  }
  if (0.0 < param_4 && 0.0 < fVar20) {
    uVar19 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
    pvVar11 = malloc(uVar19);
    memset(pvVar11,0,uVar19);
    if (0 < param_2) {
      puVar14 = (undefined8 *)((long)pvVar11 + 8);
      pfVar16 = (float *)(param_1 + 4);
      uVar19 = 1;
      do {
        iVar13 = param_2 + (int)uVar19 + -2;
        iVar5 = 0;
        if (param_2 != 0) {
          iVar5 = iVar13 / param_2;
        }
        fVar20 = pfVar16[-1];
        fVar27 = *pfVar16;
        uVar1 = 0;
        if (uVar12 != uVar19) {
          uVar1 = uVar19 & 0xffffffff;
        }
        fVar28 = *(float *)(param_1 + uVar1 * 8);
        fVar30 = *(float *)((long)(param_1 + uVar1 * 8) + 4);
        local_f0._4_4_ = fVar20 - *(float *)(param_1 + (long)(iVar13 - iVar5 * param_2) * 8);
        local_f0._0_4_ =
             -(fVar27 - *(float *)((long)(param_1 + (long)(iVar13 - iVar5 * param_2) * 8) + 4));
        Vec2::normalize((Vec2 *)&local_f0);
        fVar22 = local_f0._4_4_;
        fVar21 = (float)local_f0;
        local_f0 = CONCAT44(fVar28 - fVar20,-(fVar30 - fVar27));
        Vec2::normalize((Vec2 *)&local_f0);
        uVar19 = uVar19 + 1;
        fVar20 = 1.0 / (fVar21 * (float)local_f0 + fVar22 * local_f0._4_4_ + 1.0);
        *puVar14 = local_f0;
        *(float *)(puVar14 + -1) = (fVar21 + (float)local_f0) * fVar20;
        *(float *)((long)puVar14 + -4) = (fVar22 + local_f0._4_4_) * fVar20;
        puVar14 = puVar14 + 2;
        pfVar16 = pfVar16 + 2;
      } while (uVar19 - uVar12 != 1);
      if (0 < param_2) {
        pfVar16 = (float *)(param_1 + 4);
        pfVar17 = (float *)((long)pvVar11 + 8);
        uVar19 = 0;
        do {
          uVar1 = uVar19 + 1;
          fVar21 = pfVar17[-2];
          fVar22 = pfVar17[-1];
          fVar20 = pfVar16[-1];
          fVar27 = *pfVar16;
          uVar4 = 0;
          if (uVar12 - 1 != uVar19) {
            uVar4 = uVar1 & 0xffffffff;
          }
          pfVar2 = (float *)((long)pvVar11 + uVar4 * 0x10);
          fVar31 = *pfVar17;
          fVar26 = pfVar17[1];
          uVar10 = *(undefined8 *)pfVar17;
          uVar9 = *(undefined8 *)pfVar17;
          fVar23 = *(float *)(param_1 + uVar4 * 8);
          fVar24 = *(float *)((long)(param_1 + uVar4 * 8) + 4);
          fVar34 = fVar20 - fVar21 * param_4;
          fVar35 = fVar27 - fVar22 * param_4;
          fVar28 = *pfVar2 * param_4;
          fVar30 = pfVar2[1] * param_4;
          fVar29 = fVar23 + fVar28;
          fVar25 = fVar24 + fVar30;
          local_f0 = CONCAT44(fVar35,fVar34);
          Color4B::Color4B((Color4B *)&uStack_e8,param_5);
          fVar32 = -fVar31;
          fVar33 = -fVar26;
          fStack_e4 = fVar32;
          fStack_e0 = fVar33;
          local_dc = fVar23 - fVar28;
          fStack_d8 = fVar24 - fVar30;
          Color4B::Color4B((Color4B *)&uStack_d4,param_5);
          local_d0 = CONCAT44(fVar33,fVar32);
          fStack_c8 = fVar29;
          fStack_c4 = fVar25;
          Color4B::Color4B((Color4B *)&uStack_c0,param_5);
          puVar18[1] = CONCAT44(fStack_e4,uStack_e8);
          *puVar18 = local_f0;
          puVar18[3] = CONCAT44(uStack_d4,fStack_d8);
          puVar18[2] = CONCAT44(local_dc,fStack_e0);
          *(undefined8 *)((long)puVar18 + 0x34) = uVar9;
          *(ulong *)((long)puVar18 + 0x2c) = CONCAT44(uStack_c0,fStack_c4);
          puVar18[5] = CONCAT44(fStack_c4,fStack_c8);
          puVar18[4] = local_d0;
          local_bc = uVar9;
          Color4B::Color4B((Color4B *)&uStack_128,param_5);
          fStack_124 = fVar32;
          fStack_120 = fVar33;
          local_11c = fVar20 + fVar21 * param_4;
          local_118 = fVar27 + fVar22 * param_4;
          Color4B::Color4B((Color4B *)&uStack_114,param_5);
          local_110 = fVar31;
          fStack_10c = fVar26;
          fStack_108 = fVar29;
          fStack_104 = fVar25;
          Color4B::Color4B((Color4B *)&uStack_100,param_5);
          pfVar16 = pfVar16 + 2;
          pfVar17 = pfVar17 + 4;
          *(ulong *)((long)puVar18 + 0x54) = CONCAT44(uStack_114,local_118);
          *(ulong *)((long)puVar18 + 0x4c) = CONCAT44(local_11c,fStack_120);
          *(ulong *)((long)puVar18 + 0x44) = CONCAT44(fStack_124,uStack_128);
          *(ulong *)((long)puVar18 + 0x3c) = CONCAT44(fVar35,fVar34);
          puVar18[0xe] = uVar10;
          puVar18[0xd] = CONCAT44(uStack_100,fStack_104);
          *(ulong *)((long)puVar18 + 100) = CONCAT44(fStack_104,fStack_108);
          *(ulong *)((long)puVar18 + 0x5c) = CONCAT44(fStack_10c,local_110);
          puVar18 = puVar18 + 0xf;
          uVar19 = uVar1;
          local_fc = fVar31;
          fStack_f8 = fVar26;
        } while (uVar12 != uVar1);
      }
    }
    free(pvVar11);
  }
  this[0x450] = (DrawNode)0x1;
  *(int *)(this + 0x314) = *(int *)(this + 0x314) + iVar8;
  if (*(long *)(lVar7 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

