
/* cocos2d::ui::Widget::hitTest(cocos2d::Vec2 const&, cocos2d::Camera const*, cocos2d::Vec3*) const
    */

uint __thiscall
cocos2d::ui::Widget::hitTest(Widget *this,Vec2 *param_1,Camera *param_2,Vec3 *param_3)

{
  long lVar1;
  uint uVar2;
  Size *pSVar3;
  Rect aRStack_98 [8];
  Size aSStack_90 [8];
  Mat4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Rect::Rect(aRStack_98);
  pSVar3 = (Size *)(**(code **)(*(long *)this + 0x168))(this);
  Size::operator=(aSStack_90,pSVar3);
  (**(code **)(*(long *)this + 0x448))(aMStack_88,this);
  uVar2 = isScreenPointInRect(param_1,param_2,aMStack_88,aRStack_98,param_3);
  Mat4::~Mat4(aMStack_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

