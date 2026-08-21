
/* spine::SkeletonCacheAnimation::render(float) */

void spine::SkeletonCacheAnimation::render(float param_1)

{
  Vec3 *__dest;
  long lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  long in_x0;
  long *plVar9;
  FrameData *pFVar10;
  MiddlewareManager *pMVar11;
  long lVar12;
  Texture2D *pTVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  Mat4 *this;
  SegmentData *this_00;
  ulong uVar21;
  EffectBase *pEVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  float *pfVar28;
  Vec3 *pVVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  ulong __n;
  size_t sVar33;
  EffectVariant *this_01;
  float fVar34;
  float fVar35;
  undefined4 in_register_00005004;
  double extraout_d0;
  double dVar36;
  double extraout_d0_00;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  char *local_128;
  int local_d8;
  float local_d4;
  int local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  long local_a0;
  
  dVar36 = (double)CONCAT44(in_register_00005004,param_1);
  lVar7 = tpidr_el0;
  local_a0 = *(long *)(lVar7 + 0x28);
  if (((*(NodeProxy **)(in_x0 + 0x38) == (NodeProxy *)0x0) || (*(long *)(in_x0 + 0x40) == 0)) ||
     (plVar9 = (long *)cocos2d::renderer::NodeProxy::getAssembler(*(NodeProxy **)(in_x0 + 0x38)),
     dVar36 = extraout_d0, plVar9 == (long *)0x0)) goto LAB_00d1a504;
  dVar36 = (double)(**(code **)(*plVar9 + 0x20))();
  *(byte *)(plVar9 + 5) = *(byte *)(in_x0 + 0x1d) ^ 1;
  if (((*(AnimationData **)(in_x0 + 0xe8) == (AnimationData *)0x0) ||
      (pFVar10 = (FrameData *)
                 SkeletonCache::AnimationData::getFrameData
                           (*(AnimationData **)(in_x0 + 0xe8),(long)*(int *)(in_x0 + 0xf0)),
      dVar36 = extraout_d0_00, pFVar10 == (FrameData *)0x0)) ||
     ((*(long *)(pFVar10 + 0x38) == *(long *)(pFVar10 + 0x30) ||
      (*(long *)(pFVar10 + 0x20) == *(long *)(pFVar10 + 0x18))))) goto LAB_00d1a504;
  if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    pMVar11 = operator_new(0x50);
    dVar36 = (double)cocos2d::middleware::MiddlewareManager::MiddlewareManager(pMVar11);
    cocos2d::middleware::MiddlewareManager::_instance = pMVar11;
  }
  pMVar11 = cocos2d::middleware::MiddlewareManager::_instance;
  if (*cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager)0x0)
  goto LAB_00d1a504;
  iVar17 = 5;
  if (*(char *)(in_x0 + 0x120) != '\0') {
    iVar17 = 6;
  }
  fVar34 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(in_x0 + 0x38) + 0x43));
  *(float *)(in_x0 + 0x2c) = fVar34 / 255.0;
  lVar12 = cocos2d::middleware::MiddlewareManager::getMeshBuffer(pMVar11,iVar17);
  cVar2 = *(char *)(in_x0 + 0x120);
  pfVar28 = (float *)**(long **)(pFVar10 + 0x18);
  this = *(Mat4 **)(*(long *)(in_x0 + 0x38) + 0x98);
  uVar18 = 0x18;
  local_d4 = pfVar28[8];
  if (cVar2 == '\0') {
    uVar18 = 0x14;
  }
  __n = (ulong)uVar18;
  cocos2d::Color4B::Color4B((Color4B *)&local_a4);
  cocos2d::Color4B::Color4B((Color4B *)&local_a8);
  if (((0.0001 < ABS(*(float *)(in_x0 + 0x20) + -1.0)) ||
      (0.0001 < ABS(*(float *)(in_x0 + 0x24) + -1.0))) ||
     ((fVar34 = *(float *)(in_x0 + 0x28), 0.0001 < ABS(fVar34 + -1.0) ||
      ((0.0001 < ABS(*(float *)(in_x0 + 0x2c) + -1.0) || (*(char *)(in_x0 + 0x30) != '\0')))))) {
    fVar34 = *(float *)(in_x0 + 0x28);
    bVar8 = true;
    fVar41 = pfVar28[3] * *(float *)(in_x0 + 0x2c);
    if (*(char *)(in_x0 + 0x30) == '\0') goto LAB_00d19cec;
    fVar42 = fVar41 / 255.0;
    uVar16 = 0xff;
  }
  else {
    bVar8 = false;
    fVar41 = pfVar28[3] * *(float *)(in_x0 + 0x2c);
LAB_00d19cec:
    uVar16 = 0;
    fVar42 = 1.0;
  }
  local_128 = (char *)(in_x0 + 0x30);
  fVar35 = *(float *)(in_x0 + 0x20) * fVar42;
  fVar37 = *(float *)(in_x0 + 0x24) * fVar42;
  local_a4._0_2_ = CONCAT11((char)(int)(fVar37 * pfVar28[1]),(char)(int)(fVar35 * *pfVar28));
  local_a4._3_1_ = (undefined1)(int)fVar41;
  local_a4._0_3_ = CONCAT12((char)(int)(fVar34 * fVar42 * pfVar28[2]),(undefined2)local_a4);
  fVar34 = fVar34 * fVar42 * pfVar28[6];
  dVar36 = (double)(ulong)(uint)fVar34;
  local_a8 = CONCAT13(uVar16,CONCAT12((char)(int)fVar34,
                                      CONCAT11((char)(int)(fVar37 * pfVar28[5]),
                                               (char)(int)(fVar35 * pfVar28[4]))));
  lVar23 = *(long *)(pFVar10 + 0x30);
  lVar6 = *(long *)(pFVar10 + 0x38) - lVar23;
  if (lVar6 != 0) {
    lVar1 = 5;
    if (cVar2 != '\0') {
      lVar1 = 6;
    }
    iVar17 = 0;
    uVar31 = 0;
    local_c8 = 0;
    local_d8 = 1;
    do {
      this_00 = *(SegmentData **)(lVar23 + uVar31 * 8);
      iVar30 = *(int *)(this_00 + 4);
      iVar4 = iVar30 * 4;
      iVar19 = iVar4;
      if (*(char *)(in_x0 + 0x120) == '\0') {
        iVar19 = iVar4 + (iVar30 / 6) * -4;
        iVar30 = iVar19 >> 2;
      }
      sVar33 = (size_t)iVar19;
      uVar21 = *(long *)(lVar12 + 0x58) + sVar33;
      if ((*(ulong *)(lVar12 + 0x70) != 0) && (*(ulong *)(lVar12 + 0x70) < uVar21)) {
        if (*(long **)(lVar12 + 0xa0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + 0xa0) + 0x30))();
        }
        *(undefined8 *)(lVar12 + 0x58) = 0;
      }
      if (*(ulong *)(lVar12 + 0x50) < uVar21) {
        (**(code **)(*(long *)(lVar12 + 0x40) + 0x10))
                  (lVar12 + 0x40,(long)((float)(int)((float)uVar21 * 0.0009765625) * 1024.0),1);
        if (*(long **)(lVar12 + 0xd0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + 0xd0) + 0x30))();
        }
      }
      lVar25 = *(long *)(lVar12 + 0x58);
      lVar23 = *(long *)(pFVar10 + 0xf8);
      __dest = (Vec3 *)(*(long *)(lVar12 + 0x48) + lVar25);
      if (*(char *)(in_x0 + 0x120) == '\0') {
        if (iVar4 != 0) {
          uVar21 = 0;
          lVar32 = lVar25;
          do {
            if (*(ulong *)(lVar12 + 0x50) < lVar32 + __n) {
              *(undefined1 *)(lVar12 + 0x68) = 1;
            }
            else {
              memcpy((void *)(*(long *)(lVar12 + 0x48) + lVar32),(void *)(lVar23 + iVar17 + uVar21),
                     __n);
              lVar32 = *(long *)(lVar12 + 0x58) + __n;
              *(long *)(lVar12 + 0x58) = lVar32;
            }
            uVar21 = uVar21 + 0x18;
          } while (uVar21 < (ulong)(long)iVar4);
        }
      }
      else if (*(ulong *)(lVar12 + 0x50) < lVar25 + sVar33) {
        *(undefined1 *)(lVar12 + 0x68) = 1;
      }
      else {
        memcpy(__dest,(void *)(lVar23 + iVar17),sVar33);
        *(size_t *)(lVar12 + 0x58) = *(long *)(lVar12 + 0x58) + sVar33;
      }
      if ((*(char *)(in_x0 + 0x1d) != '\0') && (0 < iVar30)) {
        lVar23 = 0;
        pVVar29 = __dest;
        do {
          uVar20 = *(undefined4 *)(pVVar29 + 8);
          *(undefined4 *)(pVVar29 + 8) = 0;
          cocos2d::Mat4::transformVector
                    (this,*(float *)pVVar29,*(float *)(pVVar29 + 4),0.0,1.0,pVVar29);
          lVar23 = lVar23 + lVar1;
          *(undefined4 *)(pVVar29 + 8) = uVar20;
          pVVar29 = pVVar29 + lVar1 * 4;
        } while ((int)lVar23 < iVar30);
      }
      if (bVar8) {
        iVar19 = iVar17 >> 2;
        if (*(char *)(in_x0 + 0x120) == '\0') {
          if (0 < iVar30) {
            lVar23 = 0;
            do {
              if ((int)local_d4 <= iVar19) {
                pfVar28 = *(float **)(*(long *)(pFVar10 + 0x18) + (long)local_d8 * 8);
                local_d8 = local_d8 + 1;
                fVar41 = pfVar28[3] * *(float *)(in_x0 + 0x2c);
                fVar34 = 1.0;
                if (*(byte *)(in_x0 + 0x30) != 0) {
                  fVar34 = fVar41 / 255.0;
                }
                fVar42 = *(float *)(in_x0 + 0x20) * fVar34;
                fVar35 = *(float *)(in_x0 + 0x24) * fVar34;
                fVar34 = fVar34 * *(float *)(in_x0 + 0x28);
                local_a4._0_2_ =
                     CONCAT11((char)(int)(fVar35 * pfVar28[1]),(char)(int)(fVar42 * *pfVar28));
                local_a4._3_1_ = (undefined1)(int)fVar41;
                local_a4._0_3_ = CONCAT12((char)(int)(fVar34 * pfVar28[2]),(undefined2)local_a4);
                local_a8 = CONCAT13(-(*(byte *)(in_x0 + 0x30) & 1),
                                    CONCAT12((char)(int)(fVar34 * pfVar28[6]),
                                             CONCAT11((char)(int)(fVar35 * pfVar28[5]),
                                                      (char)(int)(fVar42 * pfVar28[4]))));
                local_d4 = pfVar28[8];
              }
              iVar19 = iVar19 + 6;
              *(undefined4 *)(__dest + lVar23 * 4 + 0x10) = local_a4;
              lVar23 = lVar23 + lVar1;
            } while ((int)lVar23 < iVar30);
          }
        }
        else if (0 < iVar30) {
          lVar23 = 0;
          do {
            if ((int)local_d4 <= iVar19) {
              pfVar28 = *(float **)(*(long *)(pFVar10 + 0x18) + (long)local_d8 * 8);
              local_d8 = local_d8 + 1;
              fVar41 = pfVar28[3] * *(float *)(in_x0 + 0x2c);
              fVar34 = 1.0;
              if (*(byte *)(in_x0 + 0x30) != 0) {
                fVar34 = fVar41 / 255.0;
              }
              fVar42 = *(float *)(in_x0 + 0x20) * fVar34;
              fVar35 = *(float *)(in_x0 + 0x24) * fVar34;
              fVar34 = fVar34 * *(float *)(in_x0 + 0x28);
              local_a4._0_2_ =
                   CONCAT11((char)(int)(fVar35 * pfVar28[1]),(char)(int)(fVar42 * *pfVar28));
              local_a4._3_1_ = (undefined1)(int)fVar41;
              local_a4._0_3_ = CONCAT12((char)(int)(fVar34 * pfVar28[2]),(undefined2)local_a4);
              local_a8 = CONCAT13(-(*(byte *)(in_x0 + 0x30) & 1),
                                  CONCAT12((char)(int)(fVar34 * pfVar28[6]),
                                           CONCAT11((char)(int)(fVar35 * pfVar28[5]),
                                                    (char)(int)(fVar42 * pfVar28[4]))));
              local_d4 = pfVar28[8];
            }
            lVar32 = lVar23 + lVar1;
            *(undefined4 *)(__dest + lVar23 * 4 + 0x10) = local_a4;
            iVar19 = iVar19 + 6;
            *(undefined4 *)(__dest + lVar23 * 4 + 0x14) = local_a8;
            lVar23 = lVar32;
          } while ((int)lVar32 < iVar30);
        }
      }
      iVar30 = *(int *)this_00;
      sVar33 = (size_t)(iVar30 * 2);
      uVar21 = *(long *)(lVar12 + 0xf8) + sVar33;
      if ((*(ulong *)(lVar12 + 0x110) != 0) && (*(ulong *)(lVar12 + 0x110) < uVar21)) {
        if (*(long **)(lVar12 + 0x140) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + 0x140) + 0x30))();
        }
        *(undefined8 *)(lVar12 + 0xf8) = 0;
      }
      if (*(ulong *)(lVar12 + 0xf0) < uVar21) {
        (**(code **)(*(long *)(lVar12 + 0xe0) + 0x10))
                  (lVar12 + 0xe0,(long)((float)(int)((float)uVar21 * 0.0009765625) * 1024.0),1);
        if (*(long **)(lVar12 + 0x170) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + 0x170) + 0x30))();
        }
      }
      (**(code **)(*plVar9 + 0x28))
                (plVar9,uVar31,(ulong)(long)*(int *)(lVar12 + 0xf8) >> 1,*(undefined4 *)this_00);
      lVar23 = *(long *)(lVar12 + 0xf8);
      lVar32 = *(long *)(lVar12 + 0xe8);
      pvVar14 = (void *)(lVar32 + lVar23);
      if (*(ulong *)(lVar12 + 0xf0) < lVar23 + sVar33) {
        *(undefined1 *)(lVar12 + 0x108) = 1;
      }
      else {
        memcpy(pvVar14,(void *)(*(long *)(pFVar10 + 0x58) + (long)local_c8),sVar33);
        *(size_t *)(lVar12 + 0xf8) = *(long *)(lVar12 + 0xf8) + sVar33;
      }
      uVar3 = *(uint *)this_00;
      uVar21 = (ulong)(int)uVar3;
      if (0 < (int)uVar3) {
        sVar5 = 0;
        if (uVar18 != 0) {
          sVar5 = (short)((int)lVar25 / (int)uVar18);
        }
        if (uVar3 < 0x10) {
          uVar24 = 0;
        }
        else {
          uVar24 = uVar21 & 0xfffffffffffffff0;
          puVar26 = (undefined8 *)(lVar32 + lVar23 + 0x10);
          uVar27 = uVar24;
          do {
            uVar38 = puVar26[-1];
            uVar15 = puVar26[-2];
            uVar40 = puVar26[1];
            uVar39 = *puVar26;
            uVar27 = uVar27 - 0x10;
            puVar26[-1] = CONCAT26((short)((ulong)uVar38 >> 0x30) + sVar5,
                                   CONCAT24((short)((ulong)uVar38 >> 0x20) + sVar5,
                                            CONCAT22((short)((ulong)uVar38 >> 0x10) + sVar5,
                                                     (short)uVar38 + sVar5)));
            puVar26[-2] = CONCAT26((short)((ulong)uVar15 >> 0x30) + sVar5,
                                   CONCAT24((short)((ulong)uVar15 >> 0x20) + sVar5,
                                            CONCAT22((short)((ulong)uVar15 >> 0x10) + sVar5,
                                                     (short)uVar15 + sVar5)));
            puVar26[1] = CONCAT26((short)((ulong)uVar40 >> 0x30) + sVar5,
                                  CONCAT24((short)((ulong)uVar40 >> 0x20) + sVar5,
                                           CONCAT22((short)((ulong)uVar40 >> 0x10) + sVar5,
                                                    (short)uVar40 + sVar5)));
            *puVar26 = CONCAT26((short)((ulong)uVar39 >> 0x30) + sVar5,
                                CONCAT24((short)((ulong)uVar39 >> 0x20) + sVar5,
                                         CONCAT22((short)((ulong)uVar39 >> 0x10) + sVar5,
                                                  (short)uVar39 + sVar5)));
            puVar26 = puVar26 + 4;
          } while (uVar27 != 0);
          if (uVar24 == uVar21) goto LAB_00d1a260;
        }
        do {
          lVar23 = uVar24 * 2;
          uVar24 = uVar24 + 1;
          *(short *)((long)pvVar14 + lVar23) = *(short *)((long)pvVar14 + lVar23) + sVar5;
        } while ((long)uVar24 < (long)uVar21);
      }
LAB_00d1a260:
      lVar23 = *(long *)(lVar12 + 0x38) * 8;
      (**(code **)(*plVar9 + 0x30))
                (plVar9,uVar31,*(undefined8 *)(*(long *)(lVar12 + 0x20) + lVar23),
                 *(undefined8 *)(*(long *)(lVar12 + 8) + lVar23));
      pTVar13 = (Texture2D *)SkeletonCache::SegmentData::getTexture(this_00);
      lVar23 = cocos2d::middleware::Texture2D::getNativeTexture(pTVar13);
      iVar19 = *(int *)(this_00 + 8);
      dVar43 = (double)(*(int *)(lVar23 + 0xc) + iVar19 * 0x10000 +
                        (uint)*(byte *)(in_x0 + 0x120) * 0x1000000 +
                        (uint)*(byte *)(in_x0 + 0x1d) * 0x2000000 +
                       (int)*(double *)(*(long *)(in_x0 + 0x40) + 0x10) * 0x4000000);
      if ((uVar31 < (ulong)(plVar9[0xb] - plVar9[10] >> 3)) &&
         (this_01 = *(EffectVariant **)(plVar9[10] + uVar31 * 8), this_01 != (EffectVariant *)0x0))
      {
        pEVar22 = (EffectBase *)(this_01 + 0x10);
        dVar36 = ABS(*(double *)pEVar22 - dVar43);
        if (0.01 <= dVar36) goto LAB_00d1a350;
      }
      else {
        this_01 = operator_new(0x40);
        cocos2d::renderer::EffectVariant::EffectVariant(this_01);
        cocos2d::Ref::autorelease((Ref *)this_01);
        cocos2d::renderer::EffectVariant::copy(this_01,*(EffectVariant **)(in_x0 + 0x40));
        (**(code **)(*plVar9 + 0x48))(plVar9,uVar31,this_01);
LAB_00d1a350:
        pTVar13 = (Texture2D *)SkeletonCache::SegmentData::getTexture(this_00);
        pvVar14 = (void *)cocos2d::middleware::Texture2D::getNativeTexture(pTVar13);
        cocos2d::renderer::EffectBase::setProperty
                  ((EffectBase *)this_01,(basic_string *)&DAT_01d3dd28,pvVar14,-1);
        if (iVar19 == 3) {
          uVar15 = 0x301;
          uVar20 = 1;
        }
        else if (iVar19 == 2) {
          uVar15 = 0x303;
          uVar20 = 0x306;
        }
        else {
          if (iVar19 == 1) {
            uVar15 = 1;
          }
          else {
            uVar15 = 0x303;
          }
          uVar20 = 0x302;
          if (*local_128 != '\0') {
            uVar20 = 1;
          }
        }
        dVar36 = (double)cocos2d::renderer::EffectBase::setBlend
                                   ((EffectBase *)this_01,1,0x8006,uVar20,uVar15,0x8006,uVar20,
                                    uVar15,0xffffffff,0xffffffff);
        pEVar22 = (EffectBase *)(this_01 + 0x10);
      }
      uVar31 = uVar31 + 1;
      *(double *)pEVar22 = dVar43;
      if ((ulong)(lVar6 >> 3) <= uVar31) break;
      lVar23 = *(long *)(pFVar10 + 0x30);
      iVar17 = iVar4 + iVar17;
      local_c8 = iVar30 * 2 + local_c8;
    } while( true );
  }
  if (*(CacheModeAttachUtil **)(in_x0 + 0x160) != (CacheModeAttachUtil *)0x0) {
    dVar36 = (double)CacheModeAttachUtil::syncAttachedNode
                               (*(CacheModeAttachUtil **)(in_x0 + 0x160),
                                *(NodeProxy **)(in_x0 + 0x38),pFVar10);
  }
LAB_00d1a504:
  if (*(long *)(lVar7 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar36);
}

