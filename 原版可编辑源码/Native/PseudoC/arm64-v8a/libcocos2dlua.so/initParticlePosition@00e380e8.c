
/* cocos2d::PUPositionEmitter::initParticlePosition(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUPositionEmitter::initParticlePosition(PUPositionEmitter *this,PUParticle3D *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  Vec3 local_58 [8];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x200) != *(long *)(this + 0x208)) {
    if (this[0x218] == (PUPositionEmitter)0x0) {
      if (*(ulong *)(this + 0x220) <
          (ulong)((*(long *)(this + 0x208) - *(long *)(this + 0x200) >> 2) * -0x5555555555555555)) {
        puVar3 = (undefined8 *)PUEmitter::getDerivedPosition();
        pfVar5 = (float *)(*(long *)(this + 0x200) + *(long *)(this + 0x220) * 0xc);
                    /* try { // try from 00e38228 to 00f3822b has its CatchHandler @ 00e397dc */
                    /* try { // try from 00e3822c to 00f3831f has its CatchHandler @ 00e37bc0 */
        Vec3::Vec3(local_58,*(float *)(this + 0x68) * *pfVar5,*(float *)(this + 0x6c) * pfVar5[1],
                   *(float *)(this + 0x70) * pfVar5[2]);
        fVar7 = *(float *)(puVar3 + 1);
        *(ulong *)(param_1 + 8) =
             CONCAT44((float)((ulong)*puVar3 >> 0x20) + local_58._4_4_,
                      (float)*puVar3 + local_58._0_4_);
        *(float *)(param_1 + 0x10) = fVar7 + local_50;
        *(long *)(this + 0x220) = *(long *)(this + 0x220) + 1;
      }
    }
    else {
      iVar2 = rand();
      lVar4 = *(long *)(this + 0x208);
      lVar6 = *(long *)(this + 0x200);
      puVar3 = (undefined8 *)PUEmitter::getDerivedPosition();
      pfVar5 = (float *)(*(long *)(this + 0x200) +
                        (long)((float)iVar2 * 4.656613e-10 *
                              (float)((lVar4 - lVar6 >> 2) * -0x5555555555555555 - 1)) * 0xc);
      Vec3::Vec3(local_58,*(float *)(this + 0x68) * *pfVar5,*(float *)(this + 0x6c) * pfVar5[1],
                 *(float *)(this + 0x70) * pfVar5[2]);
      fVar7 = *(float *)(puVar3 + 1);
      *(ulong *)(param_1 + 8) =
           CONCAT44((float)((ulong)*puVar3 >> 0x20) + local_58._4_4_,(float)*puVar3 + local_58._0_4_
                   );
      *(float *)(param_1 + 0x10) = fVar7 + local_50;
    }
    *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

