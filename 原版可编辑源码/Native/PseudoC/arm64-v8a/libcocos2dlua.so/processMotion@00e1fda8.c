
/* cocos2d::PUParticleSystem3D::processMotion(cocos2d::PUParticle3D*, float, cocos2d::Vec3 const&,
   bool) */

void cocos2d::PUParticleSystem3D::processMotion
               (PUParticle3D *param_1,float param_2,Vec3 *param_3,bool param_4)

{
  Vec3 VVar1;
  PUParticle3D *pPVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  if (param_3[0x128] == (Vec3)0x0) {
                    /* try { // try from 00e1fdd0 to 00f1fddf has its CatchHandler @ 00e205dc */
                    /* try { // try from 00e1fde0 to 00f1ff27 has its CatchHandler @ 00e1fd8c */
    if (((((byte)param_3[0x124] >> 1 & 1) == 0) &&
        (uVar3 = PUEmitter::makeParticleLocal
                           (*(PUEmitter **)(param_3 + 0x80),(PUParticle3D *)param_3),
        (uVar3 & 1) == 0)) &&
       ((pPVar2 = param_1, param_1[0x378] != (PUParticle3D)0x0 ||
        (pPVar2 = *(PUParticle3D **)(param_1 + 0x4c0),
        (*(PUParticle3D **)(param_1 + 0x4c0))[0x378] != (PUParticle3D)0x0)))) {
      *(ulong *)(param_3 + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(pPVar2 + 0x494) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20),
                    (float)*(undefined8 *)(pPVar2 + 0x494) + (float)*(undefined8 *)(param_3 + 8));
      *(float *)(param_3 + 0x10) = *(float *)(pPVar2 + 0x49c) + *(float *)(param_3 + 0x10);
    }
    if (((((*(PUParticleSystem3D **)(param_1 + 0x4c0))[0x378] == (PUParticleSystem3D)0x0) ||
         (param_1[0x378] != (PUParticle3D)0x0)) || (*(long *)(param_1 + 0x328) == 0)) ||
       (*(char *)(*(long *)(param_1 + 0x328) + 0x4a) != '\0')) {
      VVar1 = param_3[0x124];
    }
    else {
      rotationOffset(*(PUParticleSystem3D **)(param_1 + 0x4c0),param_3 + 8);
      VVar1 = param_3[0x124];
    }
    if (((byte)VVar1 >> 1 & 1) == 0) {
      if (param_1[0x470] == (PUParticle3D)0x0) {
        uVar4 = *(undefined8 *)(param_3 + 0xac);
        fVar6 = *(float *)(param_3 + 0xb4);
      }
      else {
        uVar4 = *(undefined8 *)(param_3 + 0xac);
        fVar6 = *(float *)(param_3 + 0xb4);
        fVar10 = (float)uVar4;
        fVar5 = (float)((ulong)uVar4 >> 0x20);
        fVar7 = SQRT(fVar10 * fVar10 + fVar5 * fVar5 + fVar6 * fVar6);
        fVar9 = fVar7 / *(float *)(param_3 + 0xcc);
        if (*(float *)(param_3 + 0xcc) == 0.0) {
          fVar9 = fVar7;
        }
        if (*(float *)(param_1 + 0x46c) < *(float *)(param_3 + 200) * fVar9) {
          fVar7 = *(float *)(param_1 + 0x46c) / fVar7;
          uVar4 = CONCAT44(fVar5 * fVar7,fVar10 * fVar7);
          fVar6 = fVar6 * fVar7;
          *(undefined8 *)(param_3 + 0xac) = uVar4;
          *(float *)(param_3 + 0xb4) = fVar6;
        }
      }
      uVar8 = *(undefined8 *)(ulong)param_4;
      fVar9 = *(float *)((undefined8 *)(ulong)param_4 + 1);
      fVar10 = *(float *)(param_1 + 0x43c);
      *(ulong *)(param_3 + 8) =
           CONCAT44((float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar8 >> 0x20) * fVar10 * param_2
                    + (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20),
                    (float)uVar4 * (float)uVar8 * fVar10 * param_2 +
                    (float)*(undefined8 *)(param_3 + 8));
      *(float *)(param_3 + 0x10) = fVar10 * fVar6 * fVar9 * param_2 + *(float *)(param_3 + 0x10);
    }
  }
                    /* try { // try from 00e1ff28 to 00f1ff3b has its CatchHandler @ 00e20624 */
  return;
}

