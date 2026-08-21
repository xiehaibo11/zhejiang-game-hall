
/* fairygui::BitmapFont::~BitmapFont() */

void __thiscall fairygui::BitmapFont::~BitmapFont(BitmapFont *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

