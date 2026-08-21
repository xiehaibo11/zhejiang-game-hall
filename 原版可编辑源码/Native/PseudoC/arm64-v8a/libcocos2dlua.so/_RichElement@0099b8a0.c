
/* cocos2d::ui::RichElement::~RichElement() */

void __thiscall cocos2d::ui::RichElement::~RichElement(RichElement *this)

{
  Ref::~Ref((Ref *)this);
                    /* try { // try from 0099b8b4 to 00a9b8c7 has its CatchHandler @ 0099ba40 */
  operator_delete(this);
  return;
}

