
/* cocos2d::CallFunc::update(float) */

void cocos2d::CallFunc::update(float param_1)

{
  long *in_x0;
  
  *(undefined1 *)(in_x0 + 10) = 1;
                    /* WARNING: Could not recover jumptable at 0x00edaab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 0x50))();
  return;
}

