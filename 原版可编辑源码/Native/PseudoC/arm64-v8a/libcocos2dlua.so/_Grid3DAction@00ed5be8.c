
/* cocos2d::Grid3DAction::~Grid3DAction() */

void __thiscall cocos2d::Grid3DAction::~Grid3DAction(Grid3DAction *this)

{
  Action::~Action((Action *)this);
                    /* try { // try from 00ed5c08 to 00fd5c43 has its CatchHandler @ 00ed5c08
                       catch() { ... } // from try @ 00ed5c08 with catch @ 00ed5c08
                       catch() { ... } // from try @ 00ed5c4c with catch @ 00ed5c08 */
  operator_delete(this);
  return;
}

