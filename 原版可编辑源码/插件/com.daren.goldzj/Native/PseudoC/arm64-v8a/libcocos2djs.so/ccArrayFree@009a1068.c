
/* cocos2d::ccArrayFree(cocos2d::_ccArray*&) */

void cocos2d::ccArrayFree(_ccArray **param_1)

{
  long lVar1;
  _ccArray *p_Var2;
  
  p_Var2 = *param_1;
  if (p_Var2 != (_ccArray *)0x0) {
    lVar1 = *(long *)p_Var2;
    if (0 < lVar1) {
      do {
        *(long *)p_Var2 = lVar1 + -1;
        Ref::release(*(Ref **)(*(long *)(p_Var2 + 0x10) + (lVar1 + -1) * 8));
        lVar1 = *(long *)p_Var2;
      } while (0 < lVar1);
      p_Var2 = *param_1;
    }
    free(*(void **)(p_Var2 + 0x10));
    free(*param_1);
    *param_1 = (_ccArray *)0x0;
  }
  return;
}

