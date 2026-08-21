
/* cocos2d::ui::RelativeBox::~RelativeBox() */

void __thiscall cocos2d::ui::RelativeBox::~RelativeBox(RelativeBox *this)

{
                    /* try { // try from 00dde4c4 to 00ede4d3 has its CatchHandler @ 00ddec60 */
  Layout::~Layout((Layout *)this);
  operator_delete(this);
  return;
}

