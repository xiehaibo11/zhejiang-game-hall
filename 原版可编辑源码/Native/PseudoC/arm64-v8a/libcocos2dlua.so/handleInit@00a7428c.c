
/* fairygui::GGraph::handleInit() */

void __thiscall fairygui::GGraph::handleInit(GGraph *this)

{
  Ref *this_00;
  
  this_00 = (Ref *)cocos2d::DrawNode::create(2.0);
  *(Ref **)(this + 0x228) = this_00;
  cocos2d::Ref::retain(this_00);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0x228);
  return;
}

