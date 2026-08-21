
/* cocos2d::ui::RichElementNewLine::~RichElementNewLine() */

void __thiscall cocos2d::ui::RichElementNewLine::~RichElementNewLine(RichElementNewLine *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

