
/* cocos2d::DrawNode::drawSolidPoly(cocos2d::Vec2 const*, unsigned int, cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawSolidPoly(DrawNode *this,Vec2 *param_1,uint param_2,Color4F *param_3)

{
  long lVar1;
  Color4F aCStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Color4F::Color4F(aCStack_58,0.0,0.0,0.0,0.0);
  drawPolygon(this,param_1,param_2,param_3,0.0,aCStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

