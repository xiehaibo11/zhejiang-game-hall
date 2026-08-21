
/* fairygui::GObject::handleInit() */

void __thiscall fairygui::GObject::handleInit(GObject *this)

{
  Ref *this_00;
  
  this_00 = (Ref *)cocos2d::Node::create();
  *(Ref **)(this + 0xa8) = this_00;
  cocos2d::Ref::retain(this_00);
  return;
}

