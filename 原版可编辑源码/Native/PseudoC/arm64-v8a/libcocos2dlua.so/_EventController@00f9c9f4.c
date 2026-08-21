
/* cocos2d::EventController::~EventController() */

void __thiscall cocos2d::EventController::~EventController(EventController *this)

{
  Event::~Event((Event *)this);
  operator_delete(this);
  return;
}

