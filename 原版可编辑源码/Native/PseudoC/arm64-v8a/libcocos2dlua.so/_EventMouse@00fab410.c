
/* cocos2d::EventMouse::~EventMouse() */

void __thiscall cocos2d::EventMouse::~EventMouse(EventMouse *this)

{
                    /* try { // try from 00fab418 to 010ab423 has its CatchHandler @ 00fab590 */
  Event::~Event((Event *)this);
                    /* try { // try from 00fab424 to 010ab447 has its CatchHandler @ 00fab3b0 */
  operator_delete(this);
  return;
}

