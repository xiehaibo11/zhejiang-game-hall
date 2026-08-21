
/* cocos2d::DrawNode::drawSolidRect(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Color4F
   const&) */

void __thiscall
cocos2d::DrawNode::drawSolidRect(DrawNode *this,Vec2 *param_1,Vec2 *param_2,Color4F *param_3)

{
  long lVar1;
  Color4F aCStack_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined8 *)param_1;
  uStack_4c = *(undefined4 *)(param_1 + 4);
  local_50 = *(undefined4 *)param_2;
  local_48 = *(undefined8 *)param_2;
  uStack_3c = *(undefined4 *)(param_2 + 4);
  local_40 = (undefined4)local_58;
  Color4F::Color4F(aCStack_68,0.0,0.0,0.0,0.0);
  drawPolygon(this,(Vec2 *)&local_58,4,param_3,0.0,aCStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

