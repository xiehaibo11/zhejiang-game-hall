
/* cocos2d::ProgressTimer::~ProgressTimer() */

void __thiscall cocos2d::ProgressTimer::~ProgressTimer(ProgressTimer *this)

{
  *(undefined ***)this = &PTR__ProgressTimer_0170eae8;
  if (*(void **)(this + 800) != (void *)0x0) {
    free(*(void **)(this + 800));
    *(undefined8 *)(this + 800) = 0;
  }
                    /* try { // try from 00f3776c to 01037787 has its CatchHandler @ 00f37c78 */
  if (*(Ref **)(this + 0x310) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x310));
  }
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x330));
                    /* try { // try from 00f37788 to 01037843 has its CatchHandler @ 00f375ec */
  Node::~Node((Node *)this);
  return;
}

