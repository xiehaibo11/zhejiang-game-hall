
/* dragonBones::CCArmatureCacheDisplay::render(float) */

void dragonBones::CCArmatureCacheDisplay::render(float param_1)

{
  Vec3 *__dest;
  uint uVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  bool bVar5;
  long in_x0;
  long *plVar6;
  FrameData *pFVar7;
  MiddlewareManager *pMVar8;
  long lVar9;
  Texture2D *pTVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  Mat4 *this;
  EffectBase *pEVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  size_t __n;
  float *pfVar22;
  ulong uVar23;
  size_t __n_00;
  Vec3 *pVVar24;
  EffectVariant *this_00;
  SegmentData *this_01;
  int iVar25;
  float fVar26;
  undefined4 in_register_00005004;
  double extraout_d0;
  double dVar27;
  double extraout_d0_00;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  char *local_110;
  long local_c0;
  ulong local_b0;
  undefined4 local_a4;
  long local_a0;
  
  dVar27 = (double)CONCAT44(in_register_00005004,param_1);
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  if (((*(NodeProxy **)(in_x0 + 0xc0) == (NodeProxy *)0x0) || (*(long *)(in_x0 + 200) == 0)) ||
     (plVar6 = (long *)cocos2d::renderer::NodeProxy::getAssembler(*(NodeProxy **)(in_x0 + 0xc0)),
     dVar27 = extraout_d0, plVar6 == (long *)0x0)) goto LAB_00d572d8;
  dVar27 = (double)(**(code **)(*plVar6 + 0x20))();
  *(byte *)(plVar6 + 5) = *(byte *)(in_x0 + 0x80) ^ 1;
  if ((*(AnimationData **)(in_x0 + 0x50) == (AnimationData *)0x0) ||
     (pFVar7 = (FrameData *)
               ArmatureCache::AnimationData::getFrameData
                         (*(AnimationData **)(in_x0 + 0x50),(long)*(int *)(in_x0 + 0x1c)),
     dVar27 = extraout_d0_00, pFVar7 == (FrameData *)0x0)) goto LAB_00d572d8;
  if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    pMVar8 = operator_new(0x50);
    dVar27 = (double)cocos2d::middleware::MiddlewareManager::MiddlewareManager(pMVar8);
    cocos2d::middleware::MiddlewareManager::_instance = pMVar8;
  }
  pMVar8 = cocos2d::middleware::MiddlewareManager::_instance;
  if (((*cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager)0x0) ||
      (*(long *)(pFVar7 + 0x38) == *(long *)(pFVar7 + 0x30))) ||
     (*(long *)(pFVar7 + 0x20) == *(long *)(pFVar7 + 0x18))) goto LAB_00d572d8;
  fVar26 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(in_x0 + 0xc0) + 0x43));
  *(float *)(in_x0 + 0x7c) = fVar26 / 255.0;
  lVar9 = cocos2d::middleware::MiddlewareManager::getMeshBuffer(pMVar8,5);
  pfVar22 = (float *)**(long **)(pFVar7 + 0x18);
  this = *(Mat4 **)(*(long *)(in_x0 + 0xc0) + 0x98);
  uVar21 = *(ulong *)(pfVar22 + 4);
  cocos2d::Color4B::Color4B((Color4B *)&local_a4);
  if ((((0.0001 < ABS(*(float *)(in_x0 + 0x70) + -1.0)) ||
       (0.0001 < ABS(*(float *)(in_x0 + 0x74) + -1.0))) ||
      (fVar26 = *(float *)(in_x0 + 0x78), 0.0001 < ABS(fVar26 + -1.0))) ||
     ((0.0001 < ABS(*(float *)(in_x0 + 0x7c) + -1.0) || (*(char *)(in_x0 + 0x81) != '\0')))) {
    bVar5 = true;
    fVar26 = *(float *)(in_x0 + 0x78);
    fVar31 = pfVar22[3] * *(float *)(in_x0 + 0x7c);
    if (*(char *)(in_x0 + 0x81) == '\0') goto LAB_00d56d20;
    fVar32 = fVar31 / 255.0;
  }
  else {
    bVar5 = false;
    fVar31 = pfVar22[3] * *(float *)(in_x0 + 0x7c);
LAB_00d56d20:
    fVar32 = 1.0;
  }
  local_110 = (char *)(in_x0 + 0x81);
  local_a4._0_2_ =
       CONCAT11((char)(int)(*(float *)(in_x0 + 0x74) * fVar32 * pfVar22[1]),
                (char)(int)(*(float *)(in_x0 + 0x70) * fVar32 * *pfVar22));
  fVar26 = fVar26 * fVar32 * pfVar22[2];
  dVar27 = (double)(ulong)(uint)fVar26;
  local_a4._3_1_ = (undefined1)(int)fVar31;
  local_a4._0_3_ = CONCAT12((char)(int)fVar26,(undefined2)local_a4);
  lVar17 = *(long *)(pFVar7 + 0x30);
  lVar2 = *(long *)(pFVar7 + 0x38) - lVar17;
  if (lVar2 != 0) {
    uVar23 = 0;
    iVar25 = 1;
    local_c0 = 0;
    local_b0 = 0;
    do {
      this_01 = *(SegmentData **)(lVar17 + uVar23 * 8);
      __n_00 = *(long *)(this_01 + 0x10) * 4;
      uVar15 = *(long *)(lVar9 + 0x58) + __n_00;
      if ((*(ulong *)(lVar9 + 0x70) != 0) && (*(ulong *)(lVar9 + 0x70) < uVar15)) {
        if (*(long **)(lVar9 + 0xa0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + 0xa0) + 0x30))();
        }
        *(undefined8 *)(lVar9 + 0x58) = 0;
      }
      if (*(ulong *)(lVar9 + 0x50) < uVar15) {
        (**(code **)(*(long *)(lVar9 + 0x40) + 0x10))
                  (lVar9 + 0x40,(long)((float)(int)((float)uVar15 * 0.0009765625) * 1024.0),1);
        if (*(long **)(lVar9 + 0xd0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + 0xd0) + 0x30))();
        }
      }
      uVar15 = *(ulong *)(lVar9 + 0x58);
      __dest = (Vec3 *)(*(long *)(lVar9 + 0x48) + uVar15);
      if (*(ulong *)(lVar9 + 0x50) < uVar15 + __n_00) {
        *(undefined1 *)(lVar9 + 0x68) = 1;
      }
      else {
        memcpy(__dest,(void *)(*(long *)(pFVar7 + 0xf8) + local_b0),__n_00);
        *(size_t *)(lVar9 + 0x58) = *(long *)(lVar9 + 0x58) + __n_00;
      }
      if ((*(char *)(in_x0 + 0x80) != '\0') && (*(long *)(this_01 + 0x10) != 0)) {
        uVar19 = 0;
        pVVar24 = __dest;
        do {
          uVar13 = *(undefined4 *)(pVVar24 + 8);
          *(undefined4 *)(pVVar24 + 8) = 0;
          cocos2d::Mat4::transformVector
                    (this,*(float *)pVVar24,*(float *)(pVVar24 + 4),0.0,1.0,pVVar24);
          *(undefined4 *)(pVVar24 + 8) = uVar13;
          uVar19 = uVar19 + 5;
          pVVar24 = pVVar24 + 0x14;
        } while (uVar19 < *(ulong *)(this_01 + 0x10));
      }
      if ((bVar5) && (*(long *)(this_01 + 0x10) != 0)) {
        uVar19 = 0;
        do {
          if (uVar21 <= (local_b0 >> 2) + uVar19) {
            pfVar22 = *(float **)(*(long *)(pFVar7 + 0x18) + (long)iVar25 * 8);
            iVar25 = iVar25 + 1;
            fVar31 = pfVar22[3] * *(float *)(in_x0 + 0x7c);
            fVar26 = 1.0;
            if (*(char *)(in_x0 + 0x81) != '\0') {
              fVar26 = fVar31 / 255.0;
            }
            local_a4._0_2_ =
                 CONCAT11((char)(int)(*(float *)(in_x0 + 0x74) * fVar26 * pfVar22[1]),
                          (char)(int)(*(float *)(in_x0 + 0x70) * fVar26 * *pfVar22));
            local_a4._3_1_ = (undefined1)(int)fVar31;
            local_a4._0_3_ =
                 CONCAT12((char)(int)(fVar26 * *(float *)(in_x0 + 0x78) * pfVar22[2]),
                          (undefined2)local_a4);
            uVar21 = *(ulong *)(pfVar22 + 4);
          }
          *(undefined4 *)(__dest + uVar19 * 4 + 0x10) = local_a4;
          uVar19 = uVar19 + 5;
        } while (uVar19 < *(ulong *)(this_01 + 0x10));
      }
      __n = *(long *)(this_01 + 8) * 2;
      uVar19 = *(long *)(lVar9 + 0xf8) + __n;
      if ((*(ulong *)(lVar9 + 0x110) != 0) && (*(ulong *)(lVar9 + 0x110) < uVar19)) {
        if (*(long **)(lVar9 + 0x140) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + 0x140) + 0x30))();
        }
        *(undefined8 *)(lVar9 + 0xf8) = 0;
      }
      if (*(ulong *)(lVar9 + 0xf0) < uVar19) {
        (**(code **)(*(long *)(lVar9 + 0xe0) + 0x10))
                  (lVar9 + 0xe0,(long)((float)(int)((float)uVar19 * 0.0009765625) * 1024.0),1);
        if (*(long **)(lVar9 + 0x170) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + 0x170) + 0x30))();
        }
      }
      (**(code **)(*plVar6 + 0x28))
                (plVar6,uVar23,(ulong)(long)*(int *)(lVar9 + 0xf8) >> 1,*(undefined4 *)(this_01 + 8)
                );
      lVar17 = *(long *)(lVar9 + 0xf8);
      lVar20 = *(long *)(lVar9 + 0xe8);
      pvVar11 = (void *)(lVar20 + lVar17);
      if (*(ulong *)(lVar9 + 0xf0) < lVar17 + __n) {
        *(undefined1 *)(lVar9 + 0x108) = 1;
      }
      else {
        memcpy(pvVar11,(void *)(*(long *)(pFVar7 + 0x58) + local_c0),__n);
        *(size_t *)(lVar9 + 0xf8) = *(long *)(lVar9 + 0xf8) + __n;
      }
      uVar19 = *(ulong *)(this_01 + 8);
      if (uVar19 != 0) {
        sVar4 = (short)(uVar15 / 0x14);
        if (uVar19 < 0x10) {
          uVar15 = 0;
        }
        else {
          uVar15 = uVar19 & 0xfffffffffffffff0;
          puVar16 = (undefined8 *)(lVar20 + lVar17 + 0x10);
          uVar18 = uVar15;
          do {
            uVar28 = puVar16[-1];
            uVar12 = puVar16[-2];
            uVar30 = puVar16[1];
            uVar29 = *puVar16;
            uVar18 = uVar18 - 0x10;
            puVar16[-1] = CONCAT26((short)((ulong)uVar28 >> 0x30) + sVar4,
                                   CONCAT24((short)((ulong)uVar28 >> 0x20) + sVar4,
                                            CONCAT22((short)((ulong)uVar28 >> 0x10) + sVar4,
                                                     (short)uVar28 + sVar4)));
            puVar16[-2] = CONCAT26((short)((ulong)uVar12 >> 0x30) + sVar4,
                                   CONCAT24((short)((ulong)uVar12 >> 0x20) + sVar4,
                                            CONCAT22((short)((ulong)uVar12 >> 0x10) + sVar4,
                                                     (short)uVar12 + sVar4)));
            puVar16[1] = CONCAT26((short)((ulong)uVar30 >> 0x30) + sVar4,
                                  CONCAT24((short)((ulong)uVar30 >> 0x20) + sVar4,
                                           CONCAT22((short)((ulong)uVar30 >> 0x10) + sVar4,
                                                    (short)uVar30 + sVar4)));
            *puVar16 = CONCAT26((short)((ulong)uVar29 >> 0x30) + sVar4,
                                CONCAT24((short)((ulong)uVar29 >> 0x20) + sVar4,
                                         CONCAT22((short)((ulong)uVar29 >> 0x10) + sVar4,
                                                  (short)uVar29 + sVar4)));
            puVar16 = puVar16 + 4;
          } while (uVar18 != 0);
          if (uVar19 == uVar15) goto LAB_00d57130;
        }
        do {
          lVar17 = uVar15 * 2;
          uVar15 = uVar15 + 1;
          *(short *)((long)pvVar11 + lVar17) = *(short *)((long)pvVar11 + lVar17) + sVar4;
        } while (uVar15 < uVar19);
      }
LAB_00d57130:
      lVar17 = *(long *)(lVar9 + 0x38) * 8;
      (**(code **)(*plVar6 + 0x30))
                (plVar6,uVar23,*(undefined8 *)(*(long *)(lVar9 + 0x20) + lVar17),
                 *(undefined8 *)(*(long *)(lVar9 + 8) + lVar17));
      pTVar10 = (Texture2D *)ArmatureCache::SegmentData::getTexture(this_01);
      lVar17 = cocos2d::middleware::Texture2D::getNativeTexture(pTVar10);
      uVar1 = *(uint *)this_01;
      dVar33 = (double)((uVar1 & 0xff) * 0x10000 + *(int *)(lVar17 + 0xc) +
                        (uint)*(byte *)(in_x0 + 0x80) * 0x1000000 +
                       (int)*(double *)(*(long *)(in_x0 + 200) + 0x10) * 0x2000000);
      if ((uVar23 < (ulong)(plVar6[0xb] - plVar6[10] >> 3)) &&
         (this_00 = *(EffectVariant **)(plVar6[10] + uVar23 * 8), this_00 != (EffectVariant *)0x0))
      {
        pEVar14 = (EffectBase *)(this_00 + 0x10);
        dVar27 = ABS(*(double *)pEVar14 - dVar33);
        if (0.01 <= dVar27) goto LAB_00d57204;
      }
      else {
        this_00 = operator_new(0x40);
        cocos2d::renderer::EffectVariant::EffectVariant(this_00);
        cocos2d::Ref::autorelease((Ref *)this_00);
        cocos2d::renderer::EffectVariant::copy(this_00,*(EffectVariant **)(in_x0 + 200));
        (**(code **)(*plVar6 + 0x48))(plVar6,uVar23,this_00);
LAB_00d57204:
        pTVar10 = (Texture2D *)ArmatureCache::SegmentData::getTexture(this_01);
        pvVar11 = (void *)cocos2d::middleware::Texture2D::getNativeTexture(pTVar10);
        cocos2d::renderer::EffectBase::setProperty
                  ((EffectBase *)this_00,(basic_string *)&DAT_01d3e708,pvVar11,-1);
        if (uVar1 == 0xc) {
          uVar12 = 0x301;
          uVar13 = 1;
        }
        else if (uVar1 == 10) {
          uVar12 = 0x303;
          uVar13 = 0x306;
        }
        else {
          if (uVar1 == 1) {
            uVar12 = 1;
          }
          else {
            uVar12 = 0x303;
          }
          uVar13 = 0x302;
          if (*local_110 != '\0') {
            uVar13 = 1;
          }
        }
        dVar27 = (double)cocos2d::renderer::EffectBase::setBlend
                                   ((EffectBase *)this_00,1,0x8006,uVar13,uVar12,0x8006,uVar13,
                                    uVar12,0xffffffff,0xffffffff);
        pEVar14 = (EffectBase *)(this_00 + 0x10);
      }
      *(double *)pEVar14 = dVar33;
      uVar23 = uVar23 + 1;
      if ((ulong)(lVar2 >> 3) <= uVar23) break;
      lVar17 = *(long *)(pFVar7 + 0x30);
      local_b0 = __n_00 + local_b0;
      local_c0 = __n + local_c0;
    } while( true );
  }
  if (*(CacheModeAttachUtil **)(in_x0 + 0xe8) != (CacheModeAttachUtil *)0x0) {
    dVar27 = (double)CacheModeAttachUtil::syncAttachedNode
                               (*(CacheModeAttachUtil **)(in_x0 + 0xe8),
                                *(NodeProxy **)(in_x0 + 0xc0),pFVar7);
  }
LAB_00d572d8:
  if (*(long *)(lVar3 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar27);
}

