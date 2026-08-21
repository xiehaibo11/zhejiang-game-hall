
/* cocos2d::OBB::getInterval(cocos2d::OBB const&, cocos2d::Vec3 const&, float&, float&) const */

void __thiscall
cocos2d::OBB::getInterval(OBB *this,OBB *param_1,Vec3 *param_2,float *param_3,float *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  Vec3 aVStack_a8 [12];
  Vec3 aVStack_9c [12];
  Vec3 aVStack_90 [12];
  Vec3 aVStack_84 [12];
  Vec3 aVStack_78 [12];
  Vec3 aVStack_6c [12];
  Vec3 aVStack_60 [12];
  Vec3 aVStack_54 [12];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3(aVStack_a8);
  Vec3::Vec3(aVStack_9c);
  Vec3::Vec3(aVStack_90);
  Vec3::Vec3(aVStack_84);
  Vec3::Vec3(aVStack_78);
  Vec3::Vec3(aVStack_6c);
  Vec3::Vec3(aVStack_60);
  Vec3::Vec3(aVStack_54);
  getCorners(param_1,aVStack_a8);
  fVar3 = (float)Vec3::dot(aVStack_a8,param_2);
  lVar2 = 0xc;
  fVar3 = fVar3 * SQRT(*(float *)param_2 * *(float *)param_2 +
                       *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
                       *(float *)(param_2 + 8) * *(float *)(param_2 + 8));
  *param_4 = fVar3;
  *param_3 = fVar3;
  do {
    fVar4 = (float)Vec3::dot(aVStack_a8 + lVar2,param_2);
    lVar2 = lVar2 + 0xc;
    fVar4 = fVar4 * SQRT(*(float *)param_2 * *(float *)param_2 +
                         *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
                         *(float *)(param_2 + 8) * *(float *)(param_2 + 8));
    fVar3 = *param_3;
    if (fVar4 <= *param_3) {
      fVar3 = fVar4;
    }
    *param_3 = fVar3;
    fVar3 = *param_4;
    if (*param_4 <= fVar4) {
      fVar3 = fVar4;
    }
    *param_4 = fVar3;
  } while (lVar2 != 0x60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

