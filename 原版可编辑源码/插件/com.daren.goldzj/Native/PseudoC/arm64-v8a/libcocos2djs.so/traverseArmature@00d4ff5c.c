
/* dragonBones::CCArmatureDisplay::traverseArmature(dragonBones::Armature*, float) */

void __thiscall
dragonBones::CCArmatureDisplay::traverseArmature
          (CCArmatureDisplay *this,Armature *param_1,float param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  MiddlewareManager *this_00;
  long lVar7;
  Texture2D *this_01;
  long *plVar8;
  ulong uVar9;
  void *pvVar10;
  Mat4 *pMVar11;
  long lVar12;
  undefined2 uVar13;
  ulong uVar14;
  undefined2 uVar15;
  float *pfVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  EffectVariant *pEVar20;
  Mat4 *pMVar21;
  EffectVariant *this_02;
  ulong uVar22;
  CCSlot *this_03;
  size_t sVar23;
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
  CCSlot CVar34;
  CCSlot CVar35;
  float fVar36;
  float fVar37;
  CCSlot CVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  
  if (((DAT_01d3e6a0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_01d3e6a0), iVar6 != 0)) {
    cocos2d::Mat4::Mat4((Mat4 *)&DAT_01d3e660);
    __cxa_atexit(cocos2d::Mat4::~Mat4,&DAT_01d3e660,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3e6a0);
  }
  pMVar11 = *(Mat4 **)(*(long *)(this + 0xa0) + 0x98);
  if (cocos2d::middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    this_00 = operator_new(0x50);
    cocos2d::middleware::MiddlewareManager::MiddlewareManager(this_00);
    cocos2d::middleware::MiddlewareManager::_instance = this_00;
  }
  lVar7 = cocos2d::middleware::MiddlewareManager::getMeshBuffer
                    (cocos2d::middleware::MiddlewareManager::_instance,5);
  lVar12 = *(long *)(param_1 + 0x78);
  lVar4 = *(long *)(param_1 + 0x80) - lVar12;
  if (lVar4 == 0) {
    return;
  }
  fVar24 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 0xa0) + 0x43));
  uVar22 = 0;
  do {
    this_03 = *(CCSlot **)(lVar12 + uVar22 * 8);
    if (this_03[0xfd] != (CCSlot)0x0) {
      CCSlot::updateWorldMatrix(this_03);
      if (*(Armature **)(this_03 + 0x178) == (Armature *)0x0) {
        this_01 = (Texture2D *)CCSlot::getTexture(this_03);
        if (this_01 != (Texture2D *)0x0) {
          lVar12 = cocos2d::middleware::Texture2D::getNativeTexture(this_01);
          bVar5 = false;
          *(undefined4 *)(this + 0x50) = *(undefined4 *)(lVar12 + 0xc);
          sVar23 = (long)*(int *)(this_03 + 0x1e0) * 0x14;
          uVar9 = sVar23 + *(long *)(lVar7 + 0x58);
          if ((*(ulong *)(lVar7 + 0x70) != 0) && (*(ulong *)(lVar7 + 0x70) < uVar9)) {
            if (*(long **)(lVar7 + 0xa0) != (long *)0x0) {
              (**(code **)(**(long **)(lVar7 + 0xa0) + 0x30))();
            }
            bVar5 = true;
            *(undefined8 *)(lVar7 + 0x58) = 0;
          }
          if (*(ulong *)(lVar7 + 0x50) < uVar9) {
            (**(code **)(*(long *)(lVar7 + 0x40) + 0x10))
                      (lVar7 + 0x40,(long)((float)(int)((float)uVar9 * 0.0009765625) * 1024.0),1);
            if (*(long **)(lVar7 + 0xd0) != (long *)0x0) {
              (**(code **)(**(long **)(lVar7 + 0xd0) + 0x30))();
            }
          }
          if (((*(int *)(this + 0x4c) != *(int *)(this + 0x50)) || (bVar5)) ||
             (*(int *)(this + 0x48) != *(int *)(this_03 + 0x94))) {
            if (*(int *)(this + 0x58) != -1) {
              (**(code **)(**(long **)(this + 0xb0) + 0x28))
                        (*(long **)(this + 0xb0),(long)*(int *)(this + 100) + -1,
                         *(int *)(this + 0x58),*(undefined4 *)(this + 0x5c));
            }
            uVar2 = *(uint *)(this_03 + 0x94);
            if (uVar2 == 0xc) {
              uVar13 = 0x301;
              uVar15 = 1;
            }
            else if (uVar2 == 10) {
              uVar13 = 0x303;
              uVar15 = 0x306;
            }
            else if (uVar2 == 1) {
              uVar15 = 0x302;
              if (this[0x69] != (CCArmatureDisplay)0x0) {
                uVar15 = 1;
              }
              uVar13 = 1;
            }
            else {
              uVar15 = 0x302;
              if (this[0x69] != (CCArmatureDisplay)0x0) {
                uVar15 = 1;
              }
              uVar13 = 0x303;
            }
            plVar8 = *(long **)(this + 0xb0);
            *(undefined2 *)(this + 0x56) = uVar13;
            *(undefined2 *)(this + 0x54) = uVar15;
            uVar9 = (ulong)*(int *)(this + 100);
            dVar40 = (double)(*(int *)(this + 0x50) + (uVar2 & 0xff) * 0x10000 +
                              (uint)(byte)this[0x68] * 0x1000000 +
                             (int)*(double *)(*(long *)(this + 0xa8) + 0x10) * 0x2000000);
            if ((uVar9 < (ulong)(plVar8[0xb] - plVar8[10] >> 3)) &&
               (this_02 = *(EffectVariant **)(plVar8[10] + uVar9 * 8),
               this_02 != (EffectVariant *)0x0)) {
              pEVar20 = this_02 + 0x10;
              if (0.01 <= ABS(*(double *)pEVar20 - dVar40)) goto LAB_00d50280;
            }
            else {
              this_02 = operator_new(0x40);
              cocos2d::renderer::EffectVariant::EffectVariant(this_02);
              cocos2d::Ref::autorelease((Ref *)this_02);
              cocos2d::renderer::EffectVariant::copy(this_02,*(EffectVariant **)(this + 0xa8));
              (**(code **)(**(long **)(this + 0xb0) + 0x48))
                        (*(long **)(this + 0xb0),(long)*(int *)(this + 100),this_02);
              pEVar20 = this_02 + 0x10;
LAB_00d50280:
              pvVar10 = (void *)cocos2d::middleware::Texture2D::getNativeTexture(this_01);
              cocos2d::renderer::EffectBase::setProperty
                        ((EffectBase *)this_02,(basic_string *)&DAT_01d3e648,pvVar10,-1);
              cocos2d::renderer::EffectBase::setBlend
                        ((EffectBase *)this_02,1,0x8006,*(undefined2 *)(this + 0x54),
                         *(undefined2 *)(this + 0x56),0x8006,*(undefined2 *)(this + 0x54),
                         *(undefined2 *)(this + 0x56),0xffffffff,0xffffffff);
              plVar8 = *(long **)(this + 0xb0);
              uVar9 = (ulong)*(int *)(this + 100);
            }
            *(double *)pEVar20 = dVar40;
            *(int *)(this + 0x58) = (int)((ulong)(long)*(int *)(lVar7 + 0xf8) >> 1);
            lVar12 = *(long *)(lVar7 + 0x38) * 8;
            (**(code **)(*plVar8 + 0x30))
                      (plVar8,uVar9,*(undefined8 *)(*(long *)(lVar7 + 0x20) + lVar12),
                       *(undefined8 *)(*(long *)(lVar7 + 8) + lVar12));
            uVar3 = *(undefined4 *)(this_03 + 0x94);
            *(undefined4 *)(this + 0x5c) = 0;
            *(undefined4 *)(this + 0x48) = uVar3;
            *(undefined4 *)(this + 0x4c) = *(undefined4 *)(this + 0x50);
            *(int *)(this + 100) = *(int *)(this + 100) + 1;
          }
          CVar38 = this_03[0x1f0];
          fVar25 = (float)NEON_ucvtf((uint)(byte)this_03[499]);
          fVar36 = (fVar24 / 255.0) * fVar25 * param_2;
          fVar39 = *(float *)(this + 0x38);
          fVar41 = *(float *)(this + 0x3c);
          CVar34 = this_03[0x1f1];
          fVar37 = *(float *)(this + 0x40);
          CVar35 = this_03[0x1f2];
          fVar25 = 1.0;
          if (this[0x69] != (CCArmatureDisplay)0x0) {
            fVar25 = fVar36 / 255.0;
          }
          pMVar21 = (Mat4 *)(this_03 + 0x188);
          if (this[0x68] != (CCArmatureDisplay)0x0) {
            pMVar21 = (Mat4 *)&DAT_01d3e660;
            cocos2d::Mat4::multiply(pMVar11,(Mat4 *)(this_03 + 0x188),(Mat4 *)&DAT_01d3e660);
          }
          uVar9 = (ulong)*(uint *)(this_03 + 0x1e0);
          pvVar10 = *(void **)(this_03 + 0x1e8);
          if (0 < (int)*(uint *)(this_03 + 0x1e0)) {
            fVar26 = (float)NEON_ucvtf((uint)(byte)CVar38);
            fVar28 = (float)NEON_ucvtf((uint)(byte)CVar34);
            fVar30 = (float)NEON_ucvtf((uint)(byte)CVar35);
            puVar19 = (undefined1 *)((long)pvVar10 + 0x13);
            pfVar16 = *(float **)(this_03 + 0x1d0);
            do {
              fVar31 = pfVar16[1];
              uVar9 = uVar9 - 1;
              *(float *)(puVar19 + -0x13) =
                   *(float *)(pMVar21 + 0x30) +
                   *pfVar16 * *(float *)pMVar21 + fVar31 * *(float *)(pMVar21 + 0x10);
              fVar27 = *pfVar16;
              fVar29 = *(float *)(pMVar21 + 4);
              fVar33 = *(float *)(pMVar21 + 0x14);
              fVar32 = *(float *)(pMVar21 + 0x34);
              puVar19[-3] = (char)(int)(fVar39 * fVar26 * fVar25);
              puVar19[-2] = (char)(int)(fVar25 * fVar41 * fVar28);
              puVar19[-1] = (char)(int)(fVar25 * fVar37 * fVar30);
              *puVar19 = (char)(int)fVar36;
              *(float *)(puVar19 + -0xf) = fVar32 + fVar27 * fVar29 + fVar31 * fVar33;
              puVar19 = puVar19 + 0x14;
              pfVar16 = pfVar16 + 5;
            } while (uVar9 != 0);
          }
          uVar9 = *(ulong *)(lVar7 + 0x58);
          if (*(ulong *)(lVar7 + 0x50) < uVar9 + sVar23) {
            *(undefined1 *)(lVar7 + 0x68) = 1;
          }
          else {
            memcpy((void *)(*(long *)(lVar7 + 0x48) + uVar9),pvVar10,sVar23);
            *(size_t *)(lVar7 + 0x58) = *(long *)(lVar7 + 0x58) + sVar23;
          }
          sVar23 = (long)*(int *)(this_03 + 0x1e4) * 2;
          uVar14 = sVar23 + *(long *)(lVar7 + 0xf8);
          if ((*(ulong *)(lVar7 + 0x110) != 0) && (*(ulong *)(lVar7 + 0x110) < uVar14)) {
            if (*(long **)(lVar7 + 0x140) != (long *)0x0) {
              (**(code **)(**(long **)(lVar7 + 0x140) + 0x30))();
            }
            *(undefined8 *)(lVar7 + 0xf8) = 0;
          }
          if (*(ulong *)(lVar7 + 0xf0) < uVar14) {
            (**(code **)(*(long *)(lVar7 + 0xe0) + 0x10))
                      (lVar7 + 0xe0,(long)((float)(int)((float)uVar14 * 0.0009765625) * 1024.0),1);
            if (*(long **)(lVar7 + 0x170) != (long *)0x0) {
              (**(code **)(**(long **)(lVar7 + 0x170) + 0x30))();
            }
          }
          if (uVar9 < 0x14) {
            if (*(ulong *)(lVar7 + 0xf0) < *(long *)(lVar7 + 0xf8) + sVar23) {
              *(undefined1 *)(lVar7 + 0x108) = 1;
            }
            else {
              memcpy((void *)(*(long *)(lVar7 + 0xe8) + *(long *)(lVar7 + 0xf8)),
                     *(void **)(this_03 + 0x1d8),sVar23);
              *(size_t *)(lVar7 + 0xf8) = *(long *)(lVar7 + 0xf8) + sVar23;
            }
          }
          else {
            uVar2 = *(uint *)(this_03 + 0x1e4);
            if (0 < (int)uVar2) {
              uVar1 = *(ulong *)(lVar7 + 0xf0);
              uVar14 = 0;
              uVar17 = *(ulong *)(lVar7 + 0xf8);
              do {
                uVar18 = uVar17 + 2;
                if (uVar1 < uVar18) {
                  *(undefined1 *)(lVar7 + 0x108) = 1;
                  uVar18 = uVar17;
                }
                else {
                  *(short *)(*(long *)(lVar7 + 0xe8) + uVar17) =
                       *(short *)(*(long *)(this_03 + 0x1d8) + uVar14 * 2) + (short)(uVar9 / 0x14);
                  *(ulong *)(lVar7 + 0xf8) = uVar18;
                }
                uVar14 = uVar14 + 1;
                uVar17 = uVar18;
              } while (uVar2 != uVar14);
            }
          }
          *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + *(int *)(this_03 + 0x1e4);
        }
      }
      else {
        fVar25 = (float)NEON_ucvtf((uint)(byte)this_03[499]);
        traverseArmature(this,*(Armature **)(this_03 + 0x178),(fVar25 * param_2) / 255.0);
      }
    }
    uVar22 = uVar22 + 1;
    if ((ulong)(lVar4 >> 3) <= uVar22) {
      return;
    }
    lVar12 = *(long *)(param_1 + 0x78);
  } while( true );
}

