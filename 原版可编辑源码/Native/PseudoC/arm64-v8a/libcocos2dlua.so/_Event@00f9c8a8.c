
/* cocos2d::Event::~Event() */

void __thiscall cocos2d::Event::~Event(Event *this)

{
  Ref::~Ref((Ref *)this);
                    /* catch() { ... } // from try @ 00f9c778 with catch @ 00f9c8bc */
  operator_delete(this);
  return;
}

