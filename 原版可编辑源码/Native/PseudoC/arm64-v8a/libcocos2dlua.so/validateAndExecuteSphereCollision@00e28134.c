
/* cocos2d::PUParticle3DInterParticleCollider::validateAndExecuteSphereCollision(cocos2d::PUParticle3D*,
   cocos2d::PUParticle3D*, float) */

void cocos2d::PUParticle3DInterParticleCollider::validateAndExecuteSphereCollision
               (PUParticle3D *param_1,PUParticle3D *param_2,float param_3)

{
  long lVar1;
  undefined8 uVar2;
  long in_x2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Vec3 aVStack_78 [16];
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)*(undefined8 *)(param_2 + 8) - (float)*(undefined8 *)(in_x2 + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) -
          (float)((ulong)*(undefined8 *)(in_x2 + 8) >> 0x20);
  fVar5 = *(float *)(param_2 + 0x10) - *(float *)(in_x2 + 0x10);
  if (*(float *)(param_1 + 0xc0) * (*(float *)(param_2 + 0x104) + *(float *)(in_x2 + 0x104)) <=
      SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5)) {
    uVar2 = 0;
    goto LAB_00e28378;
  }
  local_68 = CONCAT44(fVar4,fVar3);
  local_60 = fVar5;
                    /* try { // try from 00e281c0 to 00f2836f has its CatchHandler @ 00e28aa8 */
  Vec3::normalize((Vec3 *)&local_68);
  if (*(int *)(param_1 + 0xc4) == 1) {
    Vec3::Vec3(aVStack_78,ABS(*(float *)(param_2 + 0xac)),ABS(*(float *)(param_2 + 0xb0)),
               ABS(*(float *)(param_2 + 0xb4)));
    fVar4 = (float)Vec3::dot(aVStack_78,(Vec3 *)&local_68);
    Vec3::Vec3(aVStack_78,ABS(*(float *)(in_x2 + 0xac)),ABS(*(float *)(in_x2 + 0xb0)),
               ABS(*(float *)(in_x2 + 0xb4)));
    fVar3 = (float)Vec3::dot(aVStack_78,(Vec3 *)&local_68);
    fVar4 = fVar4 * *(float *)(in_x2 + 0x138);
    fVar3 = fVar3 * *(float *)(param_2 + 0x138);
    fVar5 = (float)local_68 * fVar3;
    fVar6 = local_68._4_4_ * fVar3;
    fVar3 = local_60 * fVar3;
    *(float *)(param_2 + 0xac) = (float)local_68 * fVar4;
    *(float *)(param_2 + 0xb0) = fVar4 * local_68._4_4_;
    *(float *)(param_2 + 0xb4) = fVar4 * local_60;
LAB_00e28310:
    *(float *)(in_x2 + 0xac) = -fVar5;
    *(float *)(in_x2 + 0xb0) = -fVar6;
    *(float *)(in_x2 + 0xb4) = -fVar3;
  }
  else if (*(int *)(param_1 + 0xc4) == 0) {
    fVar3 = (SQRT(*(float *)(param_2 + 0xac) * *(float *)(param_2 + 0xac) +
                  *(float *)(param_2 + 0xb0) * *(float *)(param_2 + 0xb0) +
                  *(float *)(param_2 + 0xb4) * *(float *)(param_2 + 0xb4)) +
            SQRT(*(float *)(in_x2 + 0xac) * *(float *)(in_x2 + 0xac) +
                 *(float *)(in_x2 + 0xb0) * *(float *)(in_x2 + 0xb0) +
                 *(float *)(in_x2 + 0xb4) * *(float *)(in_x2 + 0xb4))) * 0.5;
    fVar4 = *(float *)(in_x2 + 0x138) * fVar3;
    fVar3 = fVar3 * *(float *)(param_2 + 0x138);
    fVar5 = (float)local_68 * fVar3;
    fVar6 = local_68._4_4_ * fVar3;
    *(float *)(param_2 + 0xac) = (float)local_68 * fVar4;
    *(float *)(param_2 + 0xb0) = local_68._4_4_ * fVar4;
    *(float *)(param_2 + 0xb4) = local_60 * fVar4;
    fVar3 = local_60 * fVar3;
    goto LAB_00e28310;
  }
  fVar3 = *(float *)(param_1 + 0xb0);
  uVar2 = 1;
  *(ulong *)(param_2 + 0xac) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xac) >> 0x20) * fVar3,
                (float)*(undefined8 *)(param_2 + 0xac) * fVar3);
  *(float *)(param_2 + 0xb4) = fVar3 * *(float *)(param_2 + 0xb4);
  *(ulong *)(in_x2 + 0xac) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x2 + 0xac) >> 0x20) * fVar3,
                (float)*(undefined8 *)(in_x2 + 0xac) * fVar3);
  *(float *)(in_x2 + 0xb4) = fVar3 * *(float *)(in_x2 + 0xb4);
  *(uint *)(param_2 + 0x124) = *(uint *)(param_2 + 0x124) | 4;
  *(uint *)(in_x2 + 0x124) = *(uint *)(in_x2 + 0x124) | 4;
LAB_00e28378:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

