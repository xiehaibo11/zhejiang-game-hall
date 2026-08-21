
/* cocos2d::EaseSineIn::reverse() const */

void __thiscall cocos2d::EaseSineIn::reverse(EaseSineIn *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ecf420 to 00fcf45b has its CatchHandler @ 00ecf4d0 */
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  EaseSineOut::create(pAVar1);
  return;
}

