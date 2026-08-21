
/* cocos2d::LabelBMFont::LabelBMFont() */

void __thiscall cocos2d::LabelBMFont::LabelBMFont(LabelBMFont *this)

{
  long *plVar1;
  
  Node::Node((Node *)this);
  *(undefined ***)this = &PTR__LabelBMFont_016fe948;
  *(undefined ***)(this + 0x300) = &PTR__LabelBMFont_016feef8;
  *(undefined ***)(this + 0x2f8) = &PTR__LabelBMFont_016feec8;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  plVar1 = (long *)Label::create();
  *(long **)(this + 800) = plVar1;
  (**(code **)(*plVar1 + 0x148))(plVar1,&Vec2::ANCHOR_BOTTOM_LEFT);
  (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 800));
  (**(code **)(*(long *)this + 0x148))(this,&Vec2::ANCHOR_MIDDLE);
  this[0x221] = (LabelBMFont)0x1;
  return;
}

