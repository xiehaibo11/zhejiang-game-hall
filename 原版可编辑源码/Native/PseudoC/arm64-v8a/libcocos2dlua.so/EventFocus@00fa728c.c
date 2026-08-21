
/* cocos2d::EventFocus::EventFocus(cocos2d::ui::Widget*, cocos2d::ui::Widget*) */

void __thiscall cocos2d::EventFocus::EventFocus(EventFocus *this,Widget *param_1,Widget *param_2)

{
  Event::Event((Event *)this,4);
  *(Widget **)(this + 0x38) = param_2;
  *(Widget **)(this + 0x40) = param_1;
  *(undefined ***)this = &PTR__Event_01723010;
  return;
}

