
/* cocos2d::PULineEmitter::initParticlePosition(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PULineEmitter::initParticlePosition(PULineEmitter *this,PUParticle3D *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Vec3 aVStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((this[0x1a5] != (PULineEmitter)0x0) ||
     ((0.0 < *(float *)(this + 0x238) && (this[0x229] == (PULineEmitter)0x0)))) {
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    Vec3::Vec3(aVStack_78,(float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0,
               (float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0,
               (float)iVar4 * 4.656613e-10 + (float)iVar4 * 4.656613e-10 + -1.0);
    Vec3::cross((Vec3 *)(this + 0x1fc),aVStack_78,(Vec3 *)(this + 0x208));
    Vec3::normalize((Vec3 *)(this + 0x208));
  }
  if (*(float *)(this + 0x240) <= 0.0) {
    iVar2 = rand();
    fVar6 = (float)iVar2 * 4.656613e-10;
  }
  else {
    fVar6 = 0.0;
    if (this[0x229] == (PULineEmitter)0x0) {
      fVar6 = *(float *)(this + 0x23c);
      iVar2 = rand();
      fVar6 = *(float *)(this + 0x220) +
              fVar6 + *(float *)(this + 0x240) * (float)iVar2 * 4.656613e-10;
      *(float *)(this + 0x220) = fVar6;
      if (*(float *)(this + 0x244) <= fVar6) {
        this[0x228] = (PULineEmitter)0x0;
      }
      fVar6 = fVar6 / *(float *)(this + 0x244);
    }
  }
  PUEmitter::getDerivedPosition();
  fVar7 = *(float *)(this + 0x238);
  if ((fVar7 <= 0.0) || (this[0x228] == (PULineEmitter)0x0)) {
    fVar7 = *(float *)(this + 0x234);
    fVar8 = *(float *)(this + 100);
    *(ulong *)(param_1 + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x22c) >> 0x20) * fVar6 +
                  (float)((ulong)*(undefined8 *)(this + 0x5c) >> 0x20),
                  (float)*(undefined8 *)(this + 0x22c) * fVar6 + (float)*(undefined8 *)(this + 0x5c)
                 );
    *(float *)(param_1 + 0x10) = fVar6 * fVar7 + fVar8;
    *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x10);
  }
  else if (this[0x229] == (PULineEmitter)0x0) {
    fVar8 = (float)*(undefined8 *)(this + 0x22c) * fVar6 + (float)*(undefined8 *)(this + 0x5c);
    fVar9 = (float)((ulong)*(undefined8 *)(this + 0x22c) >> 0x20) * fVar6 +
            (float)((ulong)*(undefined8 *)(this + 0x5c) >> 0x20);
    fVar10 = fVar6 * *(float *)(this + 0x234) + *(float *)(this + 100);
    iVar2 = rand();
    uVar5 = *(undefined8 *)(this + 0x208);
    fVar6 = *(float *)(this + 0x210);
                    /* try { // try from 00e35e64 to 00f36013 has its CatchHandler @ 00e369f4 */
    fVar7 = fVar7 * (float)iVar2 * 4.656613e-10;
    *(ulong *)(param_1 + 0x94) = CONCAT44(fVar9,fVar8);
    *(ulong *)(param_1 + 8) =
         CONCAT44(fVar9 + (float)((ulong)uVar5 >> 0x20) * fVar7,fVar8 + (float)uVar5 * fVar7);
    *(float *)(param_1 + 0x10) = fVar10 + fVar6 * fVar7;
    *(float *)(param_1 + 0x9c) = fVar10;
  }
  else {
    uVar5 = *(undefined8 *)(this + 0x5c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 100);
    *(undefined8 *)(param_1 + 8) = uVar5;
    uVar5 = *(undefined8 *)(this + 0x5c);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(this + 100);
    *(undefined8 *)(param_1 + 0x94) = uVar5;
  }
  this[0x229] = (PULineEmitter)0x0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

