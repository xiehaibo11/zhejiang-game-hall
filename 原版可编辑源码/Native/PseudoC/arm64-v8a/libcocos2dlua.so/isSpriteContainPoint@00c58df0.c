
/* cocostudio::isSpriteContainPoint(cocos2d::Sprite*, cocos2d::Vec2) */

uint __thiscall
cocostudio::isSpriteContainPoint(undefined4 param_1,undefined4 param_2,cocostudio *this)

{
  long lVar1;
  uint uVar2;
  Size *pSVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  Rect aRStack_48 [16];
  float local_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uStack_2c = param_2;
  local_50 = cocos2d::Node::convertToNodeSpace((Node *)this,(Vec2 *)&local_30);
  uStack_4c = param_2;
  pSVar3 = (Size *)(**(code **)(*(long *)this + 0x168))(this);
  cocos2d::Size::Size((Size *)&local_38,pSVar3);
  cocos2d::Rect::Rect(aRStack_48,0.0,0.0,local_38,fStack_34);
  uVar2 = cocos2d::Rect::containsPoint(aRStack_48,(Vec2 *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

