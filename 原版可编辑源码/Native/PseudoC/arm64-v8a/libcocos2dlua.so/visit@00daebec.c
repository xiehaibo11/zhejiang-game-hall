
/* cocos2d::ui::Layout::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ui::Layout::visit(Layout *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
                    /* try { // try from 00daebf8 to 00eaec0b has its CatchHandler @ 00daecdc */
  if (this[0x1f9] != (Layout)0x0) {
    (**(code **)(*(long *)this + 0x660))();
                    /* try { // try from 00daec24 to 00eaec33 has its CatchHandler @ 00daecd8 */
    (**(code **)(*(long *)this + 0x6b0))(this);
                    /* try { // try from 00daec34 to 00eaec47 has its CatchHandler @ 00daecd4 */
    if (this[0x5a5] == (Layout)0x0) {
                    /* try { // try from 00daec84 to 00eaedf3 has its CatchHandler @ 00dae570 */
      Widget::visit((Widget *)this,param_1,param_2,param_3);
      return;
    }
    if (*(int *)(this + 0x5ac) == 1) {
      scissorClippingVisit(this,param_1,param_2,param_3);
      return;
    }
    if (*(int *)(this + 0x5ac) == 0) {
                    /* try { // try from 00daec60 to 00eaec6f has its CatchHandler @ 00daecd0 */
      stencilClippingVisit(this,param_1,param_2,param_3);
      return;
    }
  }
                    /* try { // try from 00daec70 to 00eaec83 has its CatchHandler @ 00daeccc */
  return;
}

