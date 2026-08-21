
/* cocos2d::ActionTween::update(float) */

void __thiscall cocos2d::ActionTween::update(ActionTween *this,float param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x0;
  if (*(long *)(this + 0x38) != 0) {
    plVar1 = (long *)__dynamic_cast(*(long *)(this + 0x38),&Node::typeinfo,
                                    &ActionTweenDelegate::typeinfo,0xfffffffffffffffe);
  }
                    /* try { // try from 00eeb98c to 00feb9b7 has its CatchHandler @ 00eeb9ec */
                    /* WARNING: Could not recover jumptable at 0x00eeb9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))
            (*(float *)(this + 0x74) - (1.0 - param_1) * *(float *)(this + 0x78),plVar1,this + 0x58)
  ;
  return;
}

