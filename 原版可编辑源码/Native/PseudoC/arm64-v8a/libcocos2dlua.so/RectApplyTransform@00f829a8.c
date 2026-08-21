
/* cocos2d::RectApplyTransform(cocos2d::Rect const&, cocos2d::Mat4 const&) */

void __thiscall cocos2d::RectApplyTransform(cocos2d *this,Rect *param_1,Mat4 *param_2)

{
  long lVar1;
  Rect *in_x8;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)Rect::getMinY((Rect *)this);
  fVar3 = (float)Rect::getMinX((Rect *)this);
  fVar4 = (float)Rect::getMaxX((Rect *)this);
  fVar5 = (float)Rect::getMaxY((Rect *)this);
  Vec3::Vec3((Vec3 *)&local_68,fVar3,fVar2,0.0);
  Vec3::Vec3((Vec3 *)&local_78,fVar4,fVar2,0.0);
  Vec3::Vec3((Vec3 *)&local_88,fVar3,fVar5,0.0);
  Vec3::Vec3((Vec3 *)&local_98,fVar4,fVar5,0.0);
  Mat4::transformVector((Mat4 *)param_1,local_68,fStack_64,local_60,1.0,(Vec3 *)&local_68);
  Mat4::transformVector((Mat4 *)param_1,local_78,fStack_74,local_70,1.0,(Vec3 *)&local_78);
  Mat4::transformVector((Mat4 *)param_1,local_88,fStack_84,local_80,1.0,(Vec3 *)&local_88);
  Mat4::transformVector((Mat4 *)param_1,local_98,fStack_94,local_90,1.0,(Vec3 *)&local_98);
  fVar2 = local_98;
  if (local_88 <= local_98) {
    fVar2 = local_88;
  }
  fVar3 = local_78;
  if (local_68 <= local_78) {
    fVar3 = local_68;
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  if (local_78 <= local_68) {
    local_78 = local_68;
  }
  if (local_98 <= local_88) {
    local_98 = local_88;
  }
  if (local_98 <= local_78) {
    local_98 = local_78;
  }
  fVar3 = fStack_94;
  if (fStack_84 <= fStack_94) {
    fVar3 = fStack_84;
  }
  fVar4 = fStack_74;
  if (fStack_64 <= fStack_74) {
    fVar4 = fStack_64;
  }
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  if (fStack_74 <= fStack_64) {
    fStack_74 = fStack_64;
  }
  if (fStack_94 <= fStack_84) {
    fStack_94 = fStack_84;
  }
  if (fStack_94 <= fStack_74) {
    fStack_94 = fStack_74;
  }
  Rect::Rect(in_x8,fVar2,fVar3,local_98 - fVar2,fStack_94 - fVar3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

