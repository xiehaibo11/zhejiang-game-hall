
/* cocos2d::DrawPrimitives::drawSolidRect(cocos2d::Vec2, cocos2d::Vec2, cocos2d::Color4F) */

void cocos2d::DrawPrimitives::drawSolidRect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = param_1;
  uStack_44 = param_2;
  local_40 = param_3;
  uStack_3c = param_2;
  local_38 = param_3;
  uStack_34 = param_4;
  local_30 = param_1;
  uStack_2c = param_4;
  drawSolidPoly(param_5,param_6,param_7,param_8,&local_48,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

