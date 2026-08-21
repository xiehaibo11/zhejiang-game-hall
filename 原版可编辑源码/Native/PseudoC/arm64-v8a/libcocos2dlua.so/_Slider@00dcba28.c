
/* cocos2d::ui::Slider::~Slider() */

void __thiscall cocos2d::ui::Slider::~Slider(Slider *this)

{
  ~Slider(this);
                    /* try { // try from 00dcba3c to 00ecba5f has its CatchHandler @ 00dcb1b0 */
  operator_delete(this);
  return;
}

