
/* non-virtual thunk to cocos2d::__CCCallFuncND::~__CCCallFuncND() */

void __thiscall cocos2d::__CCCallFuncND::~__CCCallFuncND(__CCCallFuncND *this)

{
  CallFunc::~CallFunc((CallFunc *)(this + -0x28));
                    /* try { // try from 00edbd14 to 00fdbd23 has its CatchHandler @ 00edbff8 */
  operator_delete((CallFunc *)(this + -0x28));
  return;
}

