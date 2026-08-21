
/* cocos2d::MenuItemAtlasFont::~MenuItemAtlasFont() */

void __thiscall cocos2d::MenuItemAtlasFont::~MenuItemAtlasFont(MenuItemAtlasFont *this)

{
  MenuItem::~MenuItem((MenuItem *)this);
  operator_delete(this);
  return;
}

