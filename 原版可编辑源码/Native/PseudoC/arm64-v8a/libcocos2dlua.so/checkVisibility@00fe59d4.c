
/* cocos2d::Renderer::checkVisibility(cocos2d::Mat4 const&, cocos2d::Size const&) */

uint cocos2d::Renderer::checkVisibility(Mat4 *param_1,Size *param_2)

{
  long lVar1;
  uint uVar2;
  Director *this;
  long lVar3;
  Camera *this_00;
  float *in_x2;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Director *)Director::getInstance();
  if ((*(long *)(this + 0x158) == 0) ||
     (lVar4 = *(long *)(*(long *)(this + 0x158) + 0x310), lVar3 = Camera::getVisitingCamera(),
     lVar4 != lVar3)) {
    uVar2 = 1;
  }
  else {
    local_70 = (float)Director::getVisibleOrigin(this);
    fStack_6c = in_s1;
    Director::getVisibleSize();
    Rect::Rect((Rect *)&local_58,(Vec2 *)&local_70,(Size *)local_60);
    fVar5 = *in_x2 * 0.5;
    fVar9 = in_x2[1] * 0.5;
    Vec3::Vec3((Vec3 *)&local_70,fVar5,fVar9,0.0);
    Mat4::transformVector((Mat4 *)param_2,local_70,fStack_6c,local_68,1.0,(Vec3 *)&local_70);
    this_00 = (Camera *)Camera::getVisitingCamera();
    local_60[0] = Camera::projectGL(this_00,(Vec3 *)&local_70);
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
    local_58 = CONCAT44((float)((ulong)local_58 >> 0x20) - fVar6,(float)local_58 - fVar5);
    local_50 = CONCAT44(fVar6 + fVar6 + (float)((ulong)local_50 >> 0x20),
                        fVar5 + fVar5 + (float)local_50);
    uVar2 = Rect::containsPoint((Rect *)&local_58,(Vec2 *)local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

