
/* cocos2d::ActionManager::actionAllocWithHashElement(cocos2d::_hashElement*) */

void __thiscall
cocos2d::ActionManager::actionAllocWithHashElement(ActionManager *this,_hashElement *param_1)

{
  _ccArray *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = *(_ccArray **)param_1;
  if (p_Var1 == (_ccArray *)0x0) {
                    /* try { // try from 00ee61e0 to 00fe61f3 has its CatchHandler @ 00ee63a8 */
    uVar2 = ccArrayNew(4);
    *(undefined8 *)param_1 = uVar2;
  }
  else if (*(long *)p_Var1 == *(long *)(p_Var1 + 8)) {
    ccArrayDoubleCapacity(p_Var1);
    return;
  }
  return;
}

