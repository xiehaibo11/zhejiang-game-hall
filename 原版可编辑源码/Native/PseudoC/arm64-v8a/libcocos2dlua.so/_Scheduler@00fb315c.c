
/* cocos2d::Scheduler::~Scheduler() */

void __thiscall cocos2d::Scheduler::~Scheduler(Scheduler *this)

{
  ~Scheduler(this);
  operator_delete(this);
  return;
}

