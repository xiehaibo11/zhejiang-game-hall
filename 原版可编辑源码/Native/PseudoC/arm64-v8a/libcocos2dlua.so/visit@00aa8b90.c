
/* fairygui::FUIRichText::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
fairygui::FUIRichText::visit(FUIRichText *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  if (this[0x1f9] != (FUIRichText)0x0) {
    formatText(this);
  }
  cocos2d::Node::visit((Node *)this,param_1,param_2,param_3);
  return;
}

