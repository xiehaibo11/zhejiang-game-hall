
/* fairygui::GRoot::createModalLayer() */

void __thiscall fairygui::GRoot::createModalLayer(GRoot *this)

{
  GGraph *this_00;
  ulong uVar1;
  
                    /* try { // try from 00a88ee4 to 00b88f3b has its CatchHandler @ 00a89654 */
  this_00 = operator_new(0x230,(nothrow_t *)&std::nothrow);
  if (this_00 != (GGraph *)0x0) {
    GGraph::GGraph(this_00);
    uVar1 = GObject::init((GObject *)this_00);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (GGraph *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this_00);
    }
  }
  *(GGraph **)(this + 0x290) = this_00;
  cocos2d::Ref::retain((Ref *)this_00);
                    /* try { // try from 00a88f4c to 00b88f5b has its CatchHandler @ 00a89608 */
                    /* try { // try from 00a88f5c to 00b88f7f has its CatchHandler @ 00a881e4 */
  GGraph::drawRect(*(GGraph **)(this + 0x290),*(float *)(this + 200),*(float *)(this + 0xcc),0,
                   (Color4F *)cocos2d::Color4F::WHITE,(Color4F *)UIConfig::modalLayerColor);
  GObject::addRelation(*(GObject **)(this + 0x290),this,0x18,0);
  return;
}

