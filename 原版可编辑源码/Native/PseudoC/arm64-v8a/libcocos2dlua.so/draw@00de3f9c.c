
/* cocos2d::experimental::ui::WebView::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int)
    */

void __thiscall
cocos2d::experimental::ui::WebView::draw(WebView *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  Node::draw((Renderer *)this,(Mat4 *)param_1,(uint)param_2);
                    /* try { // try from 00de3fd8 to 00ee3ffb has its CatchHandler @ 00de2ff0 */
                    /* WARNING: Could not recover jumptable at 0x00de3fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x5b0) + 0x10))(*(long **)(this + 0x5b0),param_1,param_2,param_3);
  return;
}

