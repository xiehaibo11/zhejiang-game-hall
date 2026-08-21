
/* cocos2d::__CCCallFuncND::~__CCCallFuncND() */

void __thiscall cocos2d::__CCCallFuncND::~__CCCallFuncND(__CCCallFuncND *this)

{
                    /* try { // try from 00edbcd0 to 00fdbcf3 has its CatchHandler @ 00edc040 */
  CallFunc::~CallFunc((CallFunc *)this);
  operator_delete(this);
  return;
}

