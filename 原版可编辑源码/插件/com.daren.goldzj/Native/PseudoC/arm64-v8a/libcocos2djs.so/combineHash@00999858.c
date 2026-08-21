
/* cocos2d::MathUtil::combineHash(unsigned long&, unsigned long const&) */

void cocos2d::MathUtil::combineHash(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  return;
}

