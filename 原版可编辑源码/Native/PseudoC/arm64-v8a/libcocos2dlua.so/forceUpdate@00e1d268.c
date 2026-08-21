
/* cocos2d::PUParticleSystem3D::forceUpdate(float) */

void cocos2d::PUParticleSystem3D::forceUpdate(float param_1)

{
  long lVar1;
  PUParticleSystem3D *in_x0;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 in_register_00005004;
  float in_s1;
  float in_s2;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(in_x0 + 0x380) != *(long *)(in_x0 + 0x388)) {
    calulateRotationOffset();
  }
  prepared();
  fVar5 = (float)getDerivedPosition(in_x0);
  *(ulong *)(in_x0 + 0x494) =
       CONCAT44(in_s1 - (float)((ulong)*(undefined8 *)(in_x0 + 0x4a0) >> 0x20),
                fVar5 - (float)*(undefined8 *)(in_x0 + 0x4a0));
  *(float *)(in_x0 + 0x49c) = in_s2 - *(float *)(in_x0 + 0x4a8);
  *(float *)(in_x0 + 0x4a0) = fVar5;
  *(float *)(in_x0 + 0x4a4) = in_s1;
  *(float *)(in_x0 + 0x4a8) = in_s2;
  getDerivedOrientation();
  *(undefined8 *)(in_x0 + 0x4b4) = uStack_50;
  *(undefined8 *)(in_x0 + 0x4ac) = local_58;
  Quaternion::~Quaternion((Quaternion *)&local_58);
  puVar3 = *(undefined8 **)(in_x0 + 0x380);
  puVar4 = *(undefined8 **)(in_x0 + 0x388);
  if (puVar3 != puVar4) {
    do {
      plVar2 = (long *)*puVar3;
      if ((char)plVar2[0x3f] == '\0') {
                    /* try { // try from 00e1d350 to 00f1d35b has its CatchHandler @ 00e1d604 */
        (**(code **)(*plVar2 + 0x68))(CONCAT44(in_register_00005004,param_1),plVar2);
                    /* try { // try from 00e1d35c to 00f1d363 has its CatchHandler @ 00e1d600 */
        executeEmitParticles((PUEmitter *)in_x0,(uint)plVar2,param_1);
      }
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    preUpdator(in_x0,param_1);
    updator(in_x0,param_1);
    postUpdator(in_x0,param_1);
  }
  *(float *)(in_x0 + 0x440) = *(float *)(in_x0 + 0x440) + param_1;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

