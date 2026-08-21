
/* cocos2d::ccCArrayFree(cocos2d::_ccCArray*) */

void cocos2d::ccCArrayFree(_ccCArray *param_1)

{
  if (param_1 != (_ccCArray *)0x0) {
    *(undefined8 *)param_1 = 0;
    free(*(void **)(param_1 + 0x10));
    free(param_1);
    return;
  }
  return;
}

