
/* cocos2d::PUBaseCollider::populateAlignedBox(cocos2d::AABB&, cocos2d::Vec3 const&, float, float,
   float) */

void __thiscall
cocos2d::PUBaseCollider::populateAlignedBox
          (PUBaseCollider *this,AABB *param_1,Vec3 *param_2,float param_3,float param_4,
          float param_5)

{
  long lVar1;
  Vec3 aVStack_68 [16];
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3(aVStack_58,*(float *)param_2 - param_3 * 0.5,*(float *)(param_2 + 4) - param_4 * 0.5,
             *(float *)(param_2 + 8) - param_5 * 0.5);
  Vec3::Vec3(aVStack_68,param_3 * 0.5 + *(float *)param_2,param_4 * 0.5 + *(float *)(param_2 + 4),
             param_5 * 0.5 + *(float *)(param_2 + 8));
  AABB::set(param_1,aVStack_58,aVStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

