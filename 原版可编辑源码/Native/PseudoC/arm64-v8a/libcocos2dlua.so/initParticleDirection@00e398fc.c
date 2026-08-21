
/* cocos2d::PUSphereSurfaceEmitter::initParticleDirection(cocos2d::PUParticle3D*) */

void cocos2d::PUSphereSurfaceEmitter::initParticleDirection(PUParticle3D *param_1)

{
  Vec3 *pVVar1;
  long lVar2;
  long in_x1;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 in_s1;
  undefined4 in_s2;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1[0x1a5] == (PUParticle3D)0x0) {
    PUEmitter::initParticleDirection(param_1);
  }
  else {
    local_3c = 0.0;
    PUEmitter::generateAngle((PUEmitter *)param_1,&local_3c);
    pVVar1 = (Vec3 *)(param_1 + 0x200);
    if (local_3c == 0.0) {
      uVar3 = *(undefined8 *)pVVar1;
      *(undefined4 *)(in_x1 + 0xb4) = *(undefined4 *)(param_1 + 0x208);
      *(undefined8 *)(in_x1 + 0xac) = uVar3;
      uVar3 = *(undefined8 *)pVVar1;
      *(undefined4 *)(in_x1 + 0xc0) = *(undefined4 *)(param_1 + 0x208);
      *(undefined8 *)(in_x1 + 0xb8) = uVar3;
    }
    else {
      uVar4 = PUUtil::randomDeviant(pVVar1,local_3c,(Vec3 *)(param_1 + 0x184));
      *(undefined4 *)(in_x1 + 0xac) = uVar4;
      *(undefined4 *)(in_x1 + 0xb0) = in_s1;
      *(undefined4 *)(in_x1 + 0xb4) = in_s2;
      *(undefined8 *)(in_x1 + 0xb8) = *(undefined8 *)(in_x1 + 0xac);
      *(undefined4 *)(in_x1 + 0xc0) = *(undefined4 *)(in_x1 + 0xb4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

