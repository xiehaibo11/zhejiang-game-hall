
/* dragonBones::DBCCSprite::_checkVisibility(cocos2d::Mat4 const&, cocos2d::Size const&,
   cocos2d::Rect const&) */

uint dragonBones::DBCCSprite::_checkVisibility(Mat4 *param_1,Size *param_2,Rect *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  Director *this;
  Camera *this_00;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = cocos2d::Director::getInstance();
  if ((*(long *)(lVar3 + 0x158) == 0) ||
     (lVar4 = *(long *)(*(long *)(lVar3 + 0x158) + 0x310),
     lVar3 = cocos2d::Camera::getVisitingCamera(), lVar4 != lVar3)) {
    uVar2 = 1;
  }
  else {
    this = (Director *)cocos2d::Director::getInstance();
    local_60 = (float)cocos2d::Director::getVisibleOrigin(this);
    fStack_5c = in_s1;
    cocos2d::Director::getVisibleSize();
    cocos2d::Rect::Rect((Rect *)&local_48,(Vec2 *)&local_60,(Size *)local_50);
    fVar5 = *(float *)param_3 * 0.5;
    fVar9 = *(float *)(param_3 + 4) * 0.5;
    cocos2d::Vec3::Vec3((Vec3 *)&local_60,fVar5,fVar9,0.0);
    cocos2d::Mat4::transformVector
              ((Mat4 *)param_2,local_60,fStack_5c,local_58,1.0,(Vec3 *)&local_60);
    this_00 = (Camera *)cocos2d::Camera::getVisitingCamera();
    local_50[0] = cocos2d::Camera::projectGL(this_00,(Vec3 *)&local_60);
    fVar6 = (float)*(undefined8 *)param_2 * fVar5;
    fVar5 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar5;
    fVar10 = (float)*(undefined8 *)(param_2 + 0x10) * fVar9;
    fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar9;
    fVar7 = ABS(fVar6 - fVar10);
    fVar8 = ABS(fVar5 - fVar9);
    fVar6 = ABS(fVar6 + fVar10);
    fVar5 = ABS(fVar5 + fVar9);
    uVar11 = CONCAT44(fVar5,fVar6);
    uVar11 = uVar11 ^ (uVar11 ^ CONCAT44(fVar8,fVar7)) &
                      CONCAT44(-(uint)(fVar5 < fVar8),-(uint)(fVar6 < fVar7));
    fVar5 = (float)uVar11;
    fVar6 = (float)(uVar11 >> 0x20);
    local_48 = CONCAT44((float)((ulong)local_48 >> 0x20) - fVar6,(float)local_48 - fVar5);
    local_40 = CONCAT44(fVar6 + fVar6 + (float)((ulong)local_40 >> 0x20),
                        fVar5 + fVar5 + (float)local_40);
    uVar2 = cocos2d::Rect::containsPoint((Rect *)&local_48,(Vec2 *)local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

