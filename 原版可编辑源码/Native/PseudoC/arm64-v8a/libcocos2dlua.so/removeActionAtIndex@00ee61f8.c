
/* cocos2d::ActionManager::removeActionAtIndex(long, cocos2d::_hashElement*) */

void __thiscall
cocos2d::ActionManager::removeActionAtIndex(ActionManager *this,long param_1,_hashElement *param_2)

{
  _ccArray *p_Var1;
  Ref *this_00;
  
  p_Var1 = *(_ccArray **)param_2;
  this_00 = *(Ref **)(*(long *)(p_Var1 + 0x10) + param_1 * 8);
  if ((this_00 == *(Ref **)(param_2 + 0x18)) && (param_2[0x20] == (_hashElement)0x0)) {
    Ref::retain(this_00);
    p_Var1 = *(_ccArray **)param_2;
    param_2[0x20] = (_hashElement)0x1;
  }
  ccArrayRemoveObjectAtIndex(p_Var1,param_1,true);
                    /* try { // try from 00ee625c to 00fe626b has its CatchHandler @ 00ee63a0 */
  if (param_1 <= *(int *)(param_2 + 0x10)) {
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  }
  if (**(long **)param_2 == 0) {
    if (*(_hashElement **)(this + 0x30) != param_2) {
                    /* try { // try from 00ee6298 to 00fe62ab has its CatchHandler @ 00ee63a4 */
      deleteHashElement(this,param_2);
      return;
    }
    this[0x38] = (ActionManager)0x1;
  }
  return;
}

