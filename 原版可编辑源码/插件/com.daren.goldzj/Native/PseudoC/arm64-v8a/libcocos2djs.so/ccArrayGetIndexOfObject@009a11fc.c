
/* cocos2d::ccArrayGetIndexOfObject(cocos2d::_ccArray*, cocos2d::Ref*) */

long cocos2d::ccArrayGetIndexOfObject(_ccArray *param_1,Ref *param_2)

{
  long lVar1;
  
  if (0 < *(long *)param_1) {
    lVar1 = 0;
    do {
                    /* try { // try from 009a1214 to 00aa1267 has its CatchHandler @ 009a1214
                       catch() { ... } // from try @ 009a1214 with catch @ 009a1214
                       catch() { ... } // from try @ 009a1374 with catch @ 009a1214 */
      if (*(Ref **)(*(long *)(param_1 + 0x10) + lVar1 * 8) == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(long *)param_1);
  }
  return -1;
}

