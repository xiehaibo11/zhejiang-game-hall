
/* cocos2d::LabelBMFont::getContentSize() const */

LabelBMFont * __thiscall cocos2d::LabelBMFont::getContentSize(LabelBMFont *this)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 800) + 0x168))();
                    /* try { // try from 00f12128 to 01012303 has its CatchHandler @ 00f11e3c */
  (**(code **)(*(long *)this + 0x160))(this,uVar1);
  return this + 0x80;
}

