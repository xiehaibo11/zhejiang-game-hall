
/* cocos2d::EaseElasticInOut::reverse() const */

void __thiscall cocos2d::EaseElasticInOut::reverse(EaseElasticInOut *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ed1e04 to 00fd1e97 has its CatchHandler @ 00ed2874 */
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1,*(float *)(this + 0x60));
  return;
}

