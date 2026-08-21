
/* cocos2d::ui::HBox::~HBox() */

void __thiscall cocos2d::ui::HBox::~HBox(HBox *this)

{
  Layout::~Layout((Layout *)this);
                    /* try { // try from 00dddf6c to 00eddf77 has its CatchHandler @ 00ddeb60 */
  operator_delete(this);
  return;
}

