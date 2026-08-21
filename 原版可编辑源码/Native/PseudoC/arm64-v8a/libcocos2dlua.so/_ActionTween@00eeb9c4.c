
/* cocos2d::ActionTween::~ActionTween() */

void __thiscall cocos2d::ActionTween::~ActionTween(ActionTween *this)

{
  *(undefined ***)this = &PTR__ActionTween_016fa340;
                    /* catch() { ... } // from try @ 00eeb98c with catch @ 00eeb9ec */
  *(undefined ***)(this + 0x28) = &PTR_clone_016fa3a0;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
                    /* try { // try from 00eeba08 to 00febaff has its CatchHandler @ 00eeba08
                       catch() { ... } // from try @ 00eeba08 with catch @ 00eeba08
                       catch() { ... } // from try @ 00eebb30 with catch @ 00eeba08 */
  Action::~Action((Action *)this);
  return;
}

