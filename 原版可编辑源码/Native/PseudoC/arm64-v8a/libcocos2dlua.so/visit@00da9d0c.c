
/* cocos2d::ui::Widget::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ui::Widget::visit(Widget *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  if (this[0x1f9] != (Widget)0x0) {
    (**(code **)(*(long *)this + 0x660))();
    ProtectedNode::visit((ProtectedNode *)this,param_1,param_2,param_3);
    return;
  }
  return;
}

