
/* cocos2d::ParticleSimulator::render(float) */

void __thiscall cocos2d::ParticleSimulator::render(ParticleSimulator *this,float param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  short sVar4;
  long lVar5;
  long *plVar6;
  MiddlewareManager *this_00;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  Mat4 *pMVar16;
  vector<cocos2d::Particle*,std::__ndk1::allocator<cocos2d::Particle*>> *this_01;
  ulong uVar17;
  Particle *pPVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int local_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  Vec3 aVStack_118 [8];
  undefined4 local_110;
  Quaternion aQStack_108 [16];
  float local_f8 [4];
  float local_e8 [4];
  float local_d8 [4];
  undefined8 local_c8 [2];
  Particle *local_b8;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  if ((((this[0x32] == (ParticleSimulator)0x0) && (*(NodeProxy **)(this + 0xb0) != (NodeProxy *)0x0)
       ) && (*(long *)(this + 0xd0) != 0)) &&
     ((*(long *)(this + 0xc0) - *(long *)(this + 0xb8) == 0x20 &&
      (plVar6 = (long *)renderer::NodeProxy::getAssembler(*(NodeProxy **)(this + 0xb0)),
      plVar6 != (long *)0x0)))) {
    (**(code **)(*plVar6 + 0x20))();
    (**(code **)(*plVar6 + 0x48))(plVar6,0,*(undefined8 *)(this + 0xd0));
    if (middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
      this_00 = operator_new(0x50);
      middleware::MiddlewareManager::MiddlewareManager(this_00);
      middleware::MiddlewareManager::_instance = this_00;
    }
    if (*middleware::MiddlewareManager::_instance != (MiddlewareManager)0x0) {
      lVar7 = middleware::MiddlewareManager::getMeshBuffer
                        (middleware::MiddlewareManager::_instance,5);
      Vec3::Vec3((Vec3 *)local_c8);
      Vec3::Vec3((Vec3 *)local_d8);
      Vec3::Vec3((Vec3 *)local_e8);
      Vec3::Vec3((Vec3 *)local_f8);
      Quaternion::Quaternion(aQStack_108);
      Vec3::Vec3(aVStack_118);
      if (*(int *)(this + 0x10c) == 1) {
        renderer::NodeProxy::getRotation(*(NodeProxy **)(this + 0xb0),aQStack_108);
        Quaternion::toEuler(aQStack_108,aVStack_118);
        *(undefined4 *)(this + 0x3c) = local_110;
        renderer::NodeProxy::getPosition(*(NodeProxy **)(this + 0xb0),(Vec3 *)local_c8);
        *(undefined1 *)(plVar6 + 5) = 1;
        if (*(long *)(*(long *)(this + 0xb0) + 0xe8) == 0) {
          pMVar16 = (Mat4 *)plVar6[6];
          uVar22 = Mat4::IDENTITY._32_8_;
          uVar23 = Mat4::IDENTITY._40_8_;
          uVar25 = Mat4::IDENTITY._48_8_;
          uVar26 = Mat4::IDENTITY._56_8_;
          uVar28 = Mat4::IDENTITY._0_8_;
          uVar29 = Mat4::IDENTITY._8_8_;
          uVar32 = Mat4::IDENTITY._16_8_;
          uVar33 = Mat4::IDENTITY._24_8_;
          if (pMVar16 == (Mat4 *)0x0) {
            pMVar16 = operator_new(0x40);
            Mat4::Mat4(pMVar16);
            plVar6[6] = (long)pMVar16;
            uVar22 = Mat4::IDENTITY._32_8_;
            uVar23 = Mat4::IDENTITY._40_8_;
            uVar25 = Mat4::IDENTITY._48_8_;
            uVar26 = Mat4::IDENTITY._56_8_;
            uVar28 = Mat4::IDENTITY._0_8_;
            uVar29 = Mat4::IDENTITY._8_8_;
            uVar32 = Mat4::IDENTITY._16_8_;
            uVar33 = Mat4::IDENTITY._24_8_;
          }
        }
        else {
          pMVar16 = (Mat4 *)plVar6[6];
          puVar15 = *(undefined8 **)(*(long *)(*(long *)(this + 0xb0) + 0xe8) + 0x98);
          if (pMVar16 == (Mat4 *)0x0) {
            pMVar16 = operator_new(0x40);
            Mat4::Mat4(pMVar16);
            plVar6[6] = (long)pMVar16;
          }
          uVar22 = puVar15[4];
          uVar23 = puVar15[5];
          uVar25 = puVar15[6];
          uVar26 = puVar15[7];
          uVar28 = *puVar15;
          uVar29 = puVar15[1];
          uVar32 = puVar15[2];
          uVar33 = puVar15[3];
        }
        *(undefined8 *)(pMVar16 + 0x28) = uVar23;
        *(undefined8 *)(pMVar16 + 0x20) = uVar22;
        *(undefined8 *)(pMVar16 + 0x38) = uVar26;
        *(undefined8 *)(pMVar16 + 0x30) = uVar25;
        *(undefined8 *)(pMVar16 + 8) = uVar29;
        *(undefined8 *)pMVar16 = uVar28;
        *(undefined8 *)(pMVar16 + 0x18) = uVar33;
        *(undefined8 *)(pMVar16 + 0x10) = uVar32;
      }
      else if (*(int *)(this + 0x10c) == 0) {
        renderer::NodeProxy::getWorldRotation(*(NodeProxy **)(this + 0xb0),aQStack_108);
        Quaternion::toEuler(aQStack_108,aVStack_118);
        *(undefined4 *)(this + 0x3c) = local_110;
        local_c8[0] = *(undefined8 *)(*(long *)(*(long *)(this + 0xb0) + 0x98) + 0x30);
        *(undefined1 *)(plVar6 + 5) = 0;
      }
      else {
        *(undefined4 *)(this + 0x3c) = 0;
        pMVar16 = (Mat4 *)plVar6[6];
        *(undefined1 *)(plVar6 + 5) = 1;
        if (pMVar16 != (Mat4 *)0x0) {
          Mat4::~Mat4(pMVar16);
          operator_delete(pMVar16);
          plVar6[6] = 0;
        }
      }
      if (0.0333 < param_1) {
        param_1 = 0.0333;
      }
      if ((this[0x30] != (ParticleSimulator)0x0) && (*(float *)(this + 0x110) != 0.0)) {
        if ((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3) < *(ulong *)(this + 0x118)
           ) {
          fVar38 = 1.0 / *(float *)(this + 0x110);
          fVar21 = param_1 + *(float *)(this + 0x38);
          *(float *)(this + 0x38) = fVar21;
          do {
            if (fVar21 <= fVar38) break;
            emitParticle(this,(Vec3 *)local_c8);
            fVar21 = *(float *)(this + 0x38) - fVar38;
            *(float *)(this + 0x38) = fVar21;
          } while ((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3) <
                   *(ulong *)(this + 0x118));
        }
        fVar21 = *(float *)(this + 0x34);
        *(float *)(this + 0x34) = param_1 + fVar21;
        if ((*(float *)(this + 0x120) != -1.0) && (*(float *)(this + 0x120) < param_1 + fVar21)) {
          if (*(long **)(this + 0xa0) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_008589d0();
          }
          (**(code **)(**(long **)(this + 0xa0) + 0x30))();
        }
      }
      this_01 = (vector<cocos2d::Particle*,std::__ndk1::allocator<cocos2d::Particle*>> *)
                (this + 0x18);
      lVar8 = *(long *)this_01;
      lVar12 = *(long *)(this + 0x20);
      uVar19 = lVar12 - lVar8 >> 3;
      uVar17 = *(long *)(lVar7 + 0x58) + uVar19 * 0x50;
      if ((*(ulong *)(lVar7 + 0x70) != 0) && (*(ulong *)(lVar7 + 0x70) < uVar17)) {
        if (*(long **)(lVar7 + 0xa0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar7 + 0xa0) + 0x30))();
        }
        *(undefined8 *)(lVar7 + 0x58) = 0;
      }
      if (*(ulong *)(lVar7 + 0x50) < uVar17) {
        (**(code **)(*(long *)(lVar7 + 0x40) + 0x10))
                  (lVar7 + 0x40,(long)((float)(int)((float)uVar17 * 0.0009765625) * 1024.0),0);
        if (*(long **)(lVar7 + 0xd0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar7 + 0xd0) + 0x30))();
        }
      }
      uVar17 = *(long *)(lVar7 + 0xf8) + uVar19 * 0xc;
      if ((*(ulong *)(lVar7 + 0x110) != 0) && (*(ulong *)(lVar7 + 0x110) < uVar17)) {
        if (*(long **)(lVar7 + 0x140) != (long *)0x0) {
          (**(code **)(**(long **)(lVar7 + 0x140) + 0x30))();
        }
        *(undefined8 *)(lVar7 + 0xf8) = 0;
      }
      if (*(ulong *)(lVar7 + 0xf0) < uVar17) {
        (**(code **)(*(long *)(lVar7 + 0xe0) + 0x10))
                  (lVar7 + 0xe0,(long)((float)(int)((float)uVar17 * 0.0009765625) * 1024.0),0);
        if (*(long **)(lVar7 + 0x170) != (long *)0x0) {
          (**(code **)(**(long **)(lVar7 + 0x170) + 0x30))();
        }
      }
      uVar3 = *(uint *)(lVar7 + 0xf8);
      if (lVar12 - lVar8 == 0) {
        local_12c = 0;
      }
      else {
        local_12c = 0;
        uVar20 = 0;
        uVar17 = *(ulong *)(lVar7 + 0x58) / 0x14;
LAB_00cdc67c:
        do {
          while( true ) {
            local_f8[0] = 0.0;
            local_f8[1] = 0.0;
            local_e8[0] = 0.0;
            local_e8[1] = 0.0;
            local_d8[0] = 0.0;
            local_d8[1] = 0.0;
            lVar8 = *(long *)this_01;
            pPVar18 = *(Particle **)(lVar8 + uVar20 * 8);
            fVar21 = *(float *)(pPVar18 + 0x48);
            *(float *)(pPVar18 + 0x48) = fVar21 - param_1;
            if (fVar21 - param_1 <= 0.0) break;
            if (*(int *)(this + 0x124) == 0) {
              local_d8[0] = *(float *)pPVar18;
              if (local_d8[0] == 0.0) {
                local_d8[1] = *(float *)(pPVar18 + 4);
                if (local_d8[1] != 0.0) goto LAB_00cdbf28;
                local_d8[1] = 0.0;
                local_d8[0] = 0.0;
              }
              else {
                local_d8[1] = *(float *)(pPVar18 + 4);
LAB_00cdbf28:
                local_d8[2] = *(float *)(pPVar18 + 8);
                Vec3::normalize((Vec3 *)local_d8);
              }
              fVar21 = *(float *)(pPVar18 + 100);
              fVar38 = *(float *)(pPVar18 + 0x68);
              local_e8[2] = fVar38 * local_d8[2];
              local_e8[1] = fVar38 * local_d8[0];
              local_e8[0] = -(fVar38 * local_d8[1]);
              local_f8[0] = param_1 * ((fVar21 * local_d8[0] - fVar38 * local_d8[1]) +
                                      *(float *)(this + 0xd8)) + *(float *)(pPVar18 + 0x58);
              local_f8[1] = param_1 * (fVar38 * local_d8[0] + fVar21 * local_d8[1] +
                                      *(float *)(this + 0xdc)) + *(float *)(pPVar18 + 0x5c);
              local_f8[2] = param_1 * (local_e8[2] + fVar21 * local_d8[2] + *(float *)(this + 0xe0))
                            + *(float *)(pPVar18 + 0x60);
              *(float *)(pPVar18 + 0x58) = local_f8[0];
              *(float *)(pPVar18 + 0x5c) = local_f8[1];
              *(float *)(pPVar18 + 0x60) = local_f8[2];
              local_f8[0] = param_1 * local_f8[0];
              local_f8[1] = param_1 * local_f8[1];
              local_f8[2] = param_1 * local_f8[2];
              fVar21 = local_f8[0] + *(float *)pPVar18;
              fVar38 = local_f8[1] + *(float *)(pPVar18 + 4);
              local_d8[2] = local_f8[2] + *(float *)(pPVar18 + 8);
              *(float *)pPVar18 = fVar21;
              *(float *)(pPVar18 + 4) = fVar38;
              *(float *)(pPVar18 + 8) = local_d8[2];
            }
            else {
              fVar21 = *(float *)(pPVar18 + 0x6c) + param_1 * *(float *)(pPVar18 + 0x70);
              fVar38 = *(float *)(pPVar18 + 0x74) + param_1 * *(float *)(pPVar18 + 0x78);
              *(float *)(pPVar18 + 0x6c) = fVar21;
              *(float *)(pPVar18 + 0x74) = fVar38;
              sincosf(fVar21,&fStack_11c,&local_120);
              local_d8[2] = *(float *)(pPVar18 + 8);
              fVar21 = -(local_120 * fVar38);
              fVar38 = -(fStack_11c * fVar38);
              *(float *)pPVar18 = fVar21;
              *(float *)(pPVar18 + 4) = fVar38;
            }
            fVar30 = *(float *)(pPVar18 + 0x18) + param_1 * *(float *)(pPVar18 + 0x28);
            fVar27 = *(float *)(pPVar18 + 0x1c) + param_1 * *(float *)(pPVar18 + 0x2c);
            fVar34 = *(float *)(pPVar18 + 0x20) + param_1 * *(float *)(pPVar18 + 0x30);
            fVar36 = *(float *)(pPVar18 + 0x24) + param_1 * *(float *)(pPVar18 + 0x34);
            fVar40 = *(float *)(pPVar18 + 0x38) + param_1 * *(float *)(pPVar18 + 0x3c);
            fVar24 = *(float *)(pPVar18 + 0x40) + param_1 * *(float *)(pPVar18 + 0x44);
            fVar35 = (float)NEON_fminnm(fVar30,0x437f0000);
            fVar37 = 0.0;
            fVar31 = (float)NEON_fminnm(fVar27,0x437f0000);
            fVar39 = fVar37;
            if (0.0 <= fVar30) {
              fVar39 = fVar35;
            }
            fVar35 = (float)NEON_fminnm(fVar34,0x437f0000);
            fVar30 = fVar37;
            if (0.0 <= fVar27) {
              fVar30 = fVar31;
            }
            fVar31 = (float)NEON_fminnm(fVar36,0x437f0000);
            fVar27 = fVar37;
            if (0.0 <= fVar34) {
              fVar27 = fVar35;
            }
            if (fVar40 <= 0.0) {
              fVar40 = 0.0;
            }
            if (0.0 <= fVar36) {
              fVar37 = fVar31;
            }
            *(float *)(pPVar18 + 0x40) = fVar24;
            *(float *)(pPVar18 + 0x38) = fVar40;
            *(float *)(pPVar18 + 0x18) = fVar39;
            *(float *)(pPVar18 + 0x1c) = fVar30;
            *(float *)(pPVar18 + 0x20) = fVar27;
            *(float *)(pPVar18 + 0x24) = fVar37;
            local_d8[1] = fVar38;
            local_d8[0] = fVar21;
            if (*(int *)(this + 0x10c) != 2) {
              fVar21 = *(float *)(pPVar18 + 0xc) + fVar21;
              fVar38 = *(float *)(pPVar18 + 0x10) + fVar38;
              local_d8[1] = fVar38;
              local_d8[0] = fVar21;
              local_d8[2] = *(float *)(pPVar18 + 0x14) + local_d8[2];
            }
            fVar35 = *(float *)(this + 0x18c);
            fVar34 = fVar40;
            fVar31 = fVar40 / fVar35;
            if (fVar35 <= 1.0) {
              fVar34 = fVar40 * fVar35;
              fVar31 = fVar40;
            }
            sincosf(fVar24 * -0.017453292,&fStack_124,&local_128);
            uVar2 = *(ulong *)(lVar7 + 0x50);
            uVar10 = *(ulong *)(lVar7 + 0x58);
            uVar11 = uVar10 + 4;
            fVar40 = local_128 * fVar34 * -0.5;
            fVar24 = fStack_124 * fVar31 * -0.5;
            if (uVar2 < uVar11) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar14 = uVar11;
              uVar11 = uVar10;
            }
            else {
              *(float *)(*(long *)(lVar7 + 0x48) + uVar10) = (fVar40 - fVar24) + fVar21;
              uVar14 = uVar10 + 8;
              *(ulong *)(lVar7 + 0x58) = uVar11;
            }
            fVar35 = fStack_124 * fVar34 * -0.5;
            fVar36 = local_128 * fVar31 * -0.5;
            if (uVar2 < uVar14) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar10 = uVar14;
            }
            else {
              *(float *)(*(long *)(lVar7 + 0x48) + uVar11) = fVar35 + fVar36 + fVar38;
              uVar10 = uVar14 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar14;
              uVar11 = uVar14;
            }
            puVar13 = *(undefined4 **)(this + 0xb8);
            if (uVar2 < uVar10) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar14 = uVar10;
            }
            else {
              *(undefined4 *)(*(long *)(lVar7 + 0x48) + uVar11) = *puVar13;
              uVar14 = uVar10 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar10;
              uVar11 = uVar10;
            }
            if (uVar2 < uVar14) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar10 = uVar14;
            }
            else {
              *(undefined4 *)(*(long *)(lVar7 + 0x48) + uVar11) = puVar13[1];
              uVar10 = uVar14 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar14;
              uVar11 = uVar14;
            }
            uVar1 = (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar27 & 0xffU) << 0x10
                    | (int)fVar37 << 0x18;
            if (uVar2 < uVar10) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar14 = uVar10;
            }
            else {
              *(uint *)(*(long *)(lVar7 + 0x48) + uVar11) = uVar1;
              uVar14 = uVar10 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar10;
              uVar11 = uVar10;
            }
            fVar39 = fVar34 * 0.5 * local_128;
            if (uVar2 < uVar14) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar10 = uVar14;
            }
            else {
              *(float *)(*(long *)(lVar7 + 0x48) + uVar11) = (fVar39 - fVar24) + fVar21;
              uVar10 = uVar14 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar14;
              uVar11 = uVar14;
            }
            fVar37 = fVar34 * 0.5 * fStack_124;
            if (uVar2 < uVar10) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar14 = uVar10;
            }
            else {
              *(float *)(*(long *)(lVar7 + 0x48) + uVar11) = fVar37 + fVar36 + fVar38;
              uVar14 = uVar10 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar10;
              uVar11 = uVar10;
            }
            if (uVar2 < uVar14) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar9 = uVar11;
              uVar10 = uVar14;
              if (uVar2 < uVar14) goto LAB_00cdc324;
LAB_00cdc2e8:
              uVar11 = uVar10;
              *(undefined4 *)(*(long *)(lVar7 + 0x48) + uVar9) = puVar13[3];
              uVar10 = uVar11 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar11;
            }
            else {
              *(undefined4 *)(*(long *)(lVar7 + 0x48) + uVar11) = puVar13[2];
              uVar10 = uVar14 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar14;
              uVar11 = uVar14;
              uVar9 = uVar14;
              if (uVar10 <= uVar2) goto LAB_00cdc2e8;
LAB_00cdc324:
              *(undefined1 *)(lVar7 + 0x68) = 1;
            }
            if (uVar2 < uVar10) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar14 = uVar10;
            }
            else {
              *(uint *)(*(long *)(lVar7 + 0x48) + uVar11) = uVar1;
              uVar14 = uVar10 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar10;
              uVar11 = uVar10;
            }
            fVar24 = fVar31 * 0.5 * fStack_124;
            if (uVar2 < uVar14) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar10 = uVar14;
            }
            else {
              *(float *)(*(long *)(lVar7 + 0x48) + uVar11) = (fVar40 - fVar24) + fVar21;
              uVar10 = uVar14 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar14;
              uVar11 = uVar14;
            }
            fVar27 = fVar31 * 0.5 * local_128;
            if (uVar2 < uVar10) {
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar9 = uVar11;
              uVar14 = uVar10;
              if (uVar2 < uVar10) goto LAB_00cdc4d0;
LAB_00cdc3ac:
              uVar11 = uVar14;
              *(undefined4 *)(*(long *)(lVar7 + 0x48) + uVar9) = puVar13[4];
              uVar14 = uVar11 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar11;
              if (uVar2 < uVar14) goto LAB_00cdc4e0;
LAB_00cdc3cc:
              *(undefined4 *)(*(long *)(lVar7 + 0x48) + uVar11) = puVar13[5];
              uVar10 = uVar14 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar14;
              uVar11 = uVar14;
              uVar14 = uVar10;
              if (uVar2 < uVar10) goto LAB_00cdc4f0;
LAB_00cdc3ec:
              *(uint *)(*(long *)(lVar7 + 0x48) + uVar11) = uVar1;
              uVar14 = uVar10 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar10;
              uVar11 = uVar10;
              if (uVar2 < uVar14) goto LAB_00cdc500;
LAB_00cdc408:
              *(float *)(*(long *)(lVar7 + 0x48) + uVar11) = (fVar39 - fVar24) + fVar21;
              uVar10 = uVar14 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar14;
              uVar11 = uVar14;
              uVar14 = uVar10;
              if (uVar2 < uVar10) goto LAB_00cdc510;
LAB_00cdc430:
              *(float *)(*(long *)(lVar7 + 0x48) + uVar11) = fVar37 + fVar27 + fVar38;
              uVar14 = uVar10 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar10;
              uVar11 = uVar10;
              if (uVar2 < uVar14) goto LAB_00cdc520;
LAB_00cdc458:
              *(undefined4 *)(*(long *)(lVar7 + 0x48) + uVar11) = puVar13[6];
              uVar10 = uVar14 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar14;
              uVar11 = uVar14;
              uVar14 = uVar10;
              if (uVar2 < uVar10) goto LAB_00cdc530;
LAB_00cdc478:
              *(undefined4 *)(*(long *)(lVar7 + 0x48) + uVar11) = puVar13[7];
              uVar14 = uVar10 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar10;
              uVar11 = uVar10;
              if (uVar2 < uVar14) goto LAB_00cdc540;
LAB_00cdc498:
              *(uint *)(*(long *)(lVar7 + 0x48) + uVar11) = uVar1;
              *(ulong *)(lVar7 + 0x58) = uVar14;
            }
            else {
              *(float *)(*(long *)(lVar7 + 0x48) + uVar11) = fVar35 + fVar27 + fVar38;
              uVar14 = uVar10 + 4;
              *(ulong *)(lVar7 + 0x58) = uVar10;
              uVar11 = uVar10;
              uVar9 = uVar10;
              if (uVar14 <= uVar2) goto LAB_00cdc3ac;
LAB_00cdc4d0:
              *(undefined1 *)(lVar7 + 0x68) = 1;
              if (uVar14 <= uVar2) goto LAB_00cdc3cc;
LAB_00cdc4e0:
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar10 = uVar14;
              if (uVar14 <= uVar2) goto LAB_00cdc3ec;
LAB_00cdc4f0:
              *(undefined1 *)(lVar7 + 0x68) = 1;
              if (uVar14 <= uVar2) goto LAB_00cdc408;
LAB_00cdc500:
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar10 = uVar14;
              if (uVar14 <= uVar2) goto LAB_00cdc430;
LAB_00cdc510:
              *(undefined1 *)(lVar7 + 0x68) = 1;
              if (uVar14 <= uVar2) goto LAB_00cdc458;
LAB_00cdc520:
              *(undefined1 *)(lVar7 + 0x68) = 1;
              uVar10 = uVar14;
              if (uVar14 <= uVar2) goto LAB_00cdc478;
LAB_00cdc530:
              *(undefined1 *)(lVar7 + 0x68) = 1;
              if (uVar14 <= uVar2) goto LAB_00cdc498;
LAB_00cdc540:
              *(undefined1 *)(lVar7 + 0x68) = 1;
            }
            uVar2 = *(ulong *)(lVar7 + 0xf0);
            uVar10 = *(ulong *)(lVar7 + 0xf8);
            uVar11 = uVar10 + 2;
            sVar4 = (short)uVar17;
            if (uVar2 < uVar11) {
              *(undefined1 *)(lVar7 + 0x108) = 1;
              uVar14 = uVar11;
            }
            else {
              *(short *)(*(long *)(lVar7 + 0xe8) + uVar10) = sVar4;
              uVar14 = uVar10 + 4;
              *(ulong *)(lVar7 + 0xf8) = uVar11;
              uVar10 = uVar11;
            }
            if (uVar2 < uVar14) {
              *(undefined1 *)(lVar7 + 0x108) = 1;
              uVar11 = uVar14;
            }
            else {
              *(short *)(*(long *)(lVar7 + 0xe8) + uVar10) = sVar4 + 1;
              uVar11 = uVar14 + 2;
              *(ulong *)(lVar7 + 0xf8) = uVar14;
              uVar10 = uVar14;
            }
            if (uVar2 < uVar11) {
              *(undefined1 *)(lVar7 + 0x108) = 1;
              uVar9 = uVar10;
              uVar14 = uVar11;
              if (uVar2 < uVar11) goto LAB_00cdc624;
LAB_00cdc5bc:
              uVar10 = uVar14;
              *(short *)(*(long *)(lVar7 + 0xe8) + uVar9) = sVar4 + 1;
              uVar14 = uVar10 + 2;
              *(ulong *)(lVar7 + 0xf8) = uVar10;
              if (uVar2 < uVar14) goto LAB_00cdc634;
LAB_00cdc5d8:
              *(short *)(*(long *)(lVar7 + 0xe8) + uVar10) = sVar4 + 3;
              uVar11 = uVar14 + 2;
              *(ulong *)(lVar7 + 0xf8) = uVar14;
              uVar10 = uVar14;
              uVar14 = uVar11;
              if (uVar2 < uVar11) goto LAB_00cdc644;
LAB_00cdc5f8:
              *(short *)(*(long *)(lVar7 + 0xe8) + uVar10) = sVar4 + 2;
              *(ulong *)(lVar7 + 0xf8) = uVar14;
            }
            else {
              *(short *)(*(long *)(lVar7 + 0xe8) + uVar10) = sVar4 + 2;
              uVar14 = uVar11 + 2;
              *(ulong *)(lVar7 + 0xf8) = uVar11;
              uVar10 = uVar11;
              uVar9 = uVar11;
              if (uVar14 <= uVar2) goto LAB_00cdc5bc;
LAB_00cdc624:
              *(undefined1 *)(lVar7 + 0x108) = 1;
              if (uVar14 <= uVar2) goto LAB_00cdc5d8;
LAB_00cdc634:
              *(undefined1 *)(lVar7 + 0x108) = 1;
              if (uVar14 <= uVar2) goto LAB_00cdc5f8;
LAB_00cdc644:
              *(undefined1 *)(lVar7 + 0x108) = 1;
            }
            uVar17 = uVar17 + 4;
            uVar20 = uVar20 + 1;
            local_12c = local_12c + 6;
            if (uVar19 <= uVar20) goto LAB_00cdc81c;
          }
          uVar19 = uVar19 - 1;
          if (uVar20 != uVar19) {
            *(undefined8 *)(lVar8 + uVar20 * 8) = *(undefined8 *)(lVar8 + uVar19 * 8);
          }
          local_b8 = pPVar18;
          if (DAT_01d3c4c8 == DAT_01d3c4d0) {
            std::__ndk1::vector<cocos2d::Particle*,std::__ndk1::allocator<cocos2d::Particle*>>::
            __push_back_slow_path<cocos2d::Particle*const&>
                      ((vector<cocos2d::Particle*,std::__ndk1::allocator<cocos2d::Particle*>> *)
                       &DAT_01d3c4c0,&local_b8);
          }
          else {
            *DAT_01d3c4c8 = pPVar18;
            DAT_01d3c4c8 = DAT_01d3c4c8 + 1;
          }
          local_b8[0x7c] = (Particle)0x1;
          uVar22 = Vec3::ZERO;
          *(float *)(local_b8 + 8) = DAT_01d37ca8;
          *(undefined8 *)local_b8 = uVar22;
          uVar22 = Vec3::ZERO;
          *(float *)(local_b8 + 0x14) = DAT_01d37ca8;
          *(undefined8 *)(local_b8 + 0xc) = uVar22;
          uVar22 = Color4F::BLACK._0_8_;
          *(undefined8 *)(local_b8 + 0x20) = Color4F::BLACK._8_8_;
          *(undefined8 *)(local_b8 + 0x18) = uVar22;
          uVar23 = Color4F::BLACK._8_8_;
          uVar22 = Color4F::BLACK._0_8_;
          *(undefined8 *)(local_b8 + 0x38) = 0;
          *(undefined8 *)(local_b8 + 0x40) = 0;
          *(float *)(local_b8 + 0x48) = 0.0;
          *(undefined8 *)(local_b8 + 0x30) = uVar23;
          *(undefined8 *)(local_b8 + 0x28) = uVar22;
          uVar22 = Vec3::ZERO;
          *(float *)(local_b8 + 0x54) = DAT_01d37ca8;
          *(undefined8 *)(local_b8 + 0x4c) = uVar22;
          fVar21 = DAT_01d37ca8;
          uVar22 = Vec3::ZERO;
          *(undefined8 *)(local_b8 + 0x74) = 0;
          *(undefined8 *)(local_b8 + 0x6c) = 0;
          *(undefined8 *)(local_b8 + 100) = 0;
          *(float *)(local_b8 + 0x60) = fVar21;
          *(undefined8 *)(local_b8 + 0x58) = uVar22;
          uVar11 = *(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3;
          if (uVar19 < uVar11 || uVar19 - uVar11 == 0) {
            if (uVar19 < uVar11) {
              *(ulong *)(this + 0x20) = *(long *)(this + 0x18) + uVar19 * 8;
            }
            if (uVar19 <= uVar20) break;
            goto LAB_00cdc67c;
          }
          std::__ndk1::vector<cocos2d::Particle*,std::__ndk1::allocator<cocos2d::Particle*>>::
          __append(this_01,uVar19 - uVar11);
        } while (uVar20 < uVar19);
      }
LAB_00cdc81c:
      lVar8 = *(long *)(lVar7 + 0x38) * 8;
      (**(code **)(*plVar6 + 0x30))
                (plVar6,0,*(undefined8 *)(*(long *)(lVar7 + 0x20) + lVar8),
                 *(undefined8 *)(*(long *)(lVar7 + 8) + lVar8));
      (**(code **)(*plVar6 + 0x28))(plVar6,0,uVar3 >> 1,local_12c);
      if (((*(long *)(this + 0x20) == *(long *)(this + 0x18)) &&
          (this[0x30] == (ParticleSimulator)0x0)) && (this[0x31] == (ParticleSimulator)0x0)) {
        this[0x32] = (ParticleSimulator)0x1;
        if (*(long **)(this + 0x70) != (long *)0x0) {
          (**(code **)(**(long **)(this + 0x70) + 0x30))();
        }
      }
      Vec3::~Vec3(aVStack_118);
      Quaternion::~Quaternion(aQStack_108);
      Vec3::~Vec3((Vec3 *)local_f8);
      Vec3::~Vec3((Vec3 *)local_e8);
      Vec3::~Vec3((Vec3 *)local_d8);
      Vec3::~Vec3((Vec3 *)local_c8);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

