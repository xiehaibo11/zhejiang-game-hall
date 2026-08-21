
/* cocos2d::PUBeamRender::render(cocos2d::Renderer*, cocos2d::Mat4 const&,
   cocos2d::ParticleSystem3D*) */

void cocos2d::PUBeamRender::render(Renderer *param_1,Mat4 *param_2,ParticleSystem3D *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ParticleSystem3D *in_x3;
  long lVar3;
  ParticleSystem3D *pPVar4;
  long lVar5;
  Vec3 *pVVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  float in_s1;
  float fVar10;
  float in_s2;
  undefined8 uVar11;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  Quaternion aQStack_11c [20];
  undefined8 local_108;
  float local_100;
  PUSimpleSpline aPStack_f8 [120];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  if (((param_1[0x38] != (Renderer)0x0) && (*(long *)(in_x3 + 0x348) != 0)) &&
     (*(long *)(param_1 + 0xa0) != 0)) {
    fVar8 = (float)PUParticleSystem3D::getDerivedPosition(*(PUParticleSystem3D **)(param_1 + 0x28));
    pPVar4 = *(ParticleSystem3D **)(in_x3 + 0x340);
    if (in_x3 + 0x338 != pPVar4) {
      do {
        lVar5 = *(long *)(pPVar4 + 0x10);
        lVar3 = *(long *)(lVar5 + 0x88);
        if (lVar3 != 0) {
          local_100 = *(float *)(lVar5 + 0x10) - in_s2;
          local_108 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 8) >> 0x20) - in_s1,
                               (float)*(undefined8 *)(lVar5 + 8) - fVar8);
          uVar11 = CONCAT44(in_s1,fVar8);
          PUSimpleSpline::PUSimpleSpline(aPStack_f8);
          PUSimpleSpline::addPoint(aPStack_f8,(Vec3 *)&Vec3::ZERO);
          if (*(long *)(param_1 + 0xf8) != 0) {
            uVar7 = 0;
            pVVar6 = (Vec3 *)(lVar3 + 0x30);
            do {
              PUSimpleSpline::addPoint(aPStack_f8,pVVar6);
              uVar7 = uVar7 + 1;
              pVVar6 = pVVar6 + 0xc;
            } while (uVar7 < *(ulong *)(param_1 + 0xf8));
          }
          PUSimpleSpline::addPoint(aPStack_f8,(Vec3 *)&local_108);
          if (*(long *)(param_1 + 0xe8) != 0) {
            uVar7 = 0;
            do {
              puVar2 = (undefined8 *)
                       (**(code **)(**(long **)(param_1 + 0xa0) + 0x98))
                                 (*(long **)(param_1 + 0xa0),*(undefined8 *)(lVar3 + 0x28),uVar7);
              local_130 = *(undefined4 *)(puVar2 + 2);
              uStack_138 = puVar2[1];
              local_140 = *puVar2;
              Vec4::Vec4((Vec4 *)&local_12c,(Vec4 *)((long)puVar2 + 0x14));
              Quaternion::Quaternion(aQStack_11c,(Quaternion *)((long)puVar2 + 0x24));
              if (*(char *)(lVar5 + 0x120) != '\0') {
                uStack_138 = CONCAT44(*(float *)(param_1 + 0x3c) * *(float *)(lVar5 + 0x44),
                                      (undefined4)uStack_138);
              }
              fVar10 = (float)*(ulong *)(param_1 + 0xe8);
              uVar9 = PUSimpleSpline::interpolate(aPStack_f8,(float)uVar7 / fVar10);
              local_140 = CONCAT44(fVar10,uVar9);
              uStack_138 = CONCAT44(uStack_138._4_4_,(int)uVar11);
              uStack_124 = *(undefined8 *)(lVar5 + 0x2c);
              local_12c = *(undefined8 *)(lVar5 + 0x24);
              (**(code **)(**(long **)(param_1 + 0xa0) + 0x90))
                        (*(long **)(param_1 + 0xa0),*(undefined8 *)(lVar3 + 0x28),uVar7,&local_140);
              Quaternion::~Quaternion(aQStack_11c);
              Vec4::~Vec4((Vec4 *)&local_12c);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ulong *)(param_1 + 0xe8));
          }
          PUSimpleSpline::~PUSimpleSpline(aPStack_f8);
        }
        pPVar4 = *(ParticleSystem3D **)(pPVar4 + 8);
      } while (in_x3 + 0x338 != pPVar4);
    }
    PUBillboardChain::render
              (*(PUBillboardChain **)(param_1 + 0xa0),(Renderer *)param_2,(Mat4 *)param_3,in_x3);
  }
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

