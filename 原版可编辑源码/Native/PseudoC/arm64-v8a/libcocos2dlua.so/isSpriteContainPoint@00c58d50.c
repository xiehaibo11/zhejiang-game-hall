
/* cocostudio::isSpriteContainPoint(cocos2d::Sprite*, cocos2d::Vec2, cocos2d::Vec2&) */

uint __thiscall
cocostudio::isSpriteContainPoint
          (undefined4 param_1_00,undefined4 param_2,cocostudio *this,undefined4 *param_1)

{
  long lVar1;
  uint uVar2;
  Size *pSVar3;
  undefined4 uVar4;
  Rect aRStack_58 [16];
  float local_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_1_00;
  uStack_3c = param_2;
  uVar4 = cocos2d::Node::convertToNodeSpace((Node *)this,(Vec2 *)&local_40);
  *param_1 = uVar4;
  param_1[1] = param_2;
  pSVar3 = (Size *)(**(code **)(*(long *)this + 0x168))(this);
  cocos2d::Size::Size((Size *)&local_48,pSVar3);
  cocos2d::Rect::Rect(aRStack_58,0.0,0.0,local_48,fStack_44);
  uVar2 = cocos2d::Rect::containsPoint(aRStack_58,(Vec2 *)param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

