
/* cocos2d::extension::Invocation::~Invocation() */

void __thiscall cocos2d::extension::Invocation::~Invocation(Invocation *this)

{
                    /* try { // try from 00e145a8 to 00f145af has its CatchHandler @ 00e14750 */
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

