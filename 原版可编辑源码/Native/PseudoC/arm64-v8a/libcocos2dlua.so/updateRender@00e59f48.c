
/* cocos2d::PUBeamRender::updateRender(cocos2d::PUParticle3D*, float, bool) */

void cocos2d::PUBeamRender::updateRender(PUParticle3D *param_1,float param_2,bool param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float in_s2;
  float fVar12;
  float fVar13;
  Vec3 local_a8 [8];
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  uVar6 = (ulong)param_3;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(uVar6 + 0x88);
  if (lVar8 != 0) {
    fVar11 = *(float *)(lVar8 + 0x990);
    *(float *)(lVar8 + 0x990) = fVar11 - param_2;
    if (fVar11 - param_2 < 0.0) {
      fVar10 = (float)PUParticleSystem3D::getDerivedPosition
                                (*(PUParticleSystem3D **)(param_1 + 0x28));
      local_88 = CONCAT44((float)((ulong)*(undefined8 *)(uVar6 + 8) >> 0x20) - fVar11,
                          (float)*(undefined8 *)(uVar6 + 8) - fVar10);
      local_80 = *(float *)(uVar6 + 0x10) - in_s2;
      Vec3::Vec3((Vec3 *)&local_98);
      uVar6 = *(ulong *)(param_1 + 0xf8);
      if (uVar6 != 0) {
        uVar7 = 0;
        pfVar9 = (float *)(lVar8 + 0x4e8);
        do {
          iVar3 = rand();
          iVar4 = rand();
          iVar5 = rand();
          Vec3::Vec3(local_a8,(float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0,
                     (float)iVar4 * 4.656613e-10 + (float)iVar4 * 4.656613e-10 + -1.0,
                     (float)iVar5 * 4.656613e-10 + (float)iVar5 * 4.656613e-10 + -1.0);
          Vec3::cross((Vec3 *)&local_88,local_a8,(Vec3 *)&local_98);
          Vec3::normalize((Vec3 *)&local_98);
          fVar12 = *(float *)(param_1 + 0xf4);
          fVar11 = ((float)uVar7 + 1.0) / ((float)uVar6 + 1.0);
          fVar10 = (float)local_88;
          uVar2 = (ulong)local_88 >> 0x20;
          fVar13 = fVar11 * local_80;
          Vec3::Vec3(local_a8,*(float *)(param_1 + 0x3c) * fVar12 * local_98,
                     fVar12 * *(float *)(param_1 + 0x40) * fStack_94,
                     fVar12 * *(float *)(param_1 + 0x44) * local_90);
          uVar7 = uVar7 + 1;
          *(ulong *)(pfVar9 + -2) =
               CONCAT44((float)uVar2 * fVar11 + local_a8._4_4_,fVar10 * fVar11 + local_a8._0_4_);
          *pfVar9 = fVar13 + local_a0;
          pfVar9 = pfVar9 + 3;
        } while (uVar7 < *(ulong *)(param_1 + 0xf8));
      }
      *(float *)(lVar8 + 0x990) = *(float *)(param_1 + 0xf0) + *(float *)(lVar8 + 0x990);
    }
    Vec3::Vec3((Vec3 *)&local_88);
    if (*(long *)(param_1 + 0xf8) != 0) {
      uVar6 = 0;
      if (param_1[0x100] != (PUParticle3D)0x0) goto LAB_00e5a160;
      do {
        fVar11 = (float)*(undefined8 *)(lVar8 + 0x4e0) - (float)*(undefined8 *)(lVar8 + 0x30);
        fVar10 = (float)((ulong)*(undefined8 *)(lVar8 + 0x4e0) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20);
        local_88 = CONCAT44(fVar10,fVar11);
        local_80 = *(float *)(lVar8 + 0x4e8) - *(float *)(lVar8 + 0x38);
        *(ulong *)(lVar8 + 0x30) =
             CONCAT44(fVar10 * param_2 + (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20),
                      fVar11 * param_2 + (float)*(undefined8 *)(lVar8 + 0x30));
        *(float *)(lVar8 + 0x38) = local_80 * param_2 + *(float *)(lVar8 + 0x38);
        while( true ) {
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 0xc;
          if (*(ulong *)(param_1 + 0xf8) <= uVar6) goto LAB_00e5a174;
          if (param_1[0x100] == (PUParticle3D)0x0) break;
LAB_00e5a160:
          *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar8 + 0x4e0);
          *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar8 + 0x4e8);
        }
      } while( true );
    }
  }
LAB_00e5a174:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

