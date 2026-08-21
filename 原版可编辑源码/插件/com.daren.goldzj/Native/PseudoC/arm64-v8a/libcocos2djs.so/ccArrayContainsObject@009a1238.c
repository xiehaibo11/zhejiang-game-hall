
/* cocos2d::ccArrayContainsObject(cocos2d::_ccArray*, cocos2d::Ref*) */

bool cocos2d::ccArrayContainsObject(_ccArray *param_1,Ref *param_2)

{
  long lVar1;
  
  if (0 < *(long *)param_1) {
    lVar1 = 0;
    do {
      if (*(Ref **)(*(long *)(param_1 + 0x10) + lVar1 * 8) == param_2) goto LAB_009a1284;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(long *)param_1);
  }
                    /* try { // try from 009a1268 to 00aa127f has its CatchHandler @ 009a13f0 */
  lVar1 = -1;
LAB_009a1284:
                    /* try { // try from 009a1288 to 00aa1293 has its CatchHandler @ 009a13ec */
  return lVar1 != -1;
}

