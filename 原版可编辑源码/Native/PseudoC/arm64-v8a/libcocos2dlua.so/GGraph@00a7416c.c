
/* fairygui::GGraph::GGraph() */

void __thiscall fairygui::GGraph::GGraph(GGraph *this)

{
  undefined8 uVar1;
  
  GObject::GObject((GObject *)this);
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined ***)this = &PTR__GGraph_016a5840;
  uVar1 = cocos2d::Color4F::BLACK._0_8_;
  *(undefined8 *)(this + 0x1e4) = cocos2d::Color4F::BLACK._8_8_;
  *(undefined8 *)(this + 0x1dc) = uVar1;
  uVar1 = cocos2d::Color4F::WHITE._0_8_;
  *(undefined8 *)(this + 500) = cocos2d::Color4F::WHITE._8_8_;
  *(undefined8 *)(this + 0x1ec) = uVar1;
  *(undefined4 *)(this + 0x1fc) = 1;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  this[0xbc] = (GGraph)0x1;
  return;
}

