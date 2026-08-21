
/* cocos2d::ccArraySwapObjectsAtIndexes(cocos2d::_ccArray*, long, long) */

void cocos2d::ccArraySwapObjectsAtIndexes(_ccArray *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
                    /* try { // try from 009a14ec to 00aa1673 has its CatchHandler @ 009a1708 */
  uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
  *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + param_3 * 8);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + param_3 * 8) = uVar2;
  return;
}

