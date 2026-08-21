
/* cocos2d::ccCArrayContainsValue(cocos2d::_ccCArray*, void*) */

bool cocos2d::ccCArrayContainsValue(_ccCArray *param_1,void *param_2)

{
  long lVar1;
  
  if (0 < *(long *)param_1) {
    lVar1 = 0;
    do {
      if (*(void **)(*(long *)(param_1 + 0x10) + lVar1 * 8) == param_2) goto LAB_00fc3db8;
      lVar1 = lVar1 + 1;
    } while (*(long *)param_1 != lVar1);
  }
  lVar1 = -1;
LAB_00fc3db8:
  return lVar1 != -1;
}

