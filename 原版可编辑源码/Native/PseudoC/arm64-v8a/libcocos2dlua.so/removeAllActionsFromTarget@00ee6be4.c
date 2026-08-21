
/* cocos2d::ActionManager::removeAllActionsFromTarget(cocos2d::Node*) */

void __thiscall
cocos2d::ActionManager::removeAllActionsFromTarget(ActionManager *this,Node *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  _hashElement *p_Var8;
  
                    /* try { // try from 00ee6bec to 00fe6bff has its CatchHandler @ 00ee6f54 */
  if ((param_1 != (Node *)0x0) && (*(long *)(this + 0x28) != 0)) {
    uVar5 = (uint)param_1;
    iVar1 = (int)(((ulong)param_1 & 0xffffffffff000000) >> 0x20) + -0x61c88647;
    uVar5 = ((int)((ulong)param_1 & 0xffffffffff000000) - iVar1) + (uVar5 & 0xff0000) +
            (uVar5 & 0xff00) + (uVar5 & 0xff) + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar5) + 0x1124109 ^ uVar5 << 8;
    uVar3 = 0xfeedbef7 - (uVar5 + uVar2) ^ uVar2 >> 0xd;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar6 = *(long **)(*(long *)(this + 0x28) + 0x28);
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar2 >> 5;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 << 10;
    lVar7 = *(long *)(*plVar6 +
                     (ulong)(((uVar3 - uVar5) - uVar2 ^ uVar2 >> 0xf) & (int)plVar6[1] - 1U) * 0x10)
    ;
    while (lVar7 != 0) {
      p_Var8 = (_hashElement *)(lVar7 - plVar6[4]);
                    /* try { // try from 00ee6d04 to 00fe6d73 has its CatchHandler @ 00ee6f74 */
      if ((*(int *)(p_Var8 + 0x58) == 8) && ((Node *)**(undefined8 **)(p_Var8 + 0x50) == param_1)) {
        uVar4 = ccArrayContainsObject(*(_ccArray **)p_Var8,*(Ref **)(p_Var8 + 0x18));
        if (((uVar4 & 1) != 0) && (p_Var8[0x20] == (_hashElement)0x0)) {
          Ref::retain(*(Ref **)(p_Var8 + 0x18));
          p_Var8[0x20] = (_hashElement)0x1;
        }
        ccArrayRemoveAllObjects(*(_ccArray **)p_Var8);
        if (*(_hashElement **)(this + 0x30) == p_Var8) {
          this[0x38] = (ActionManager)0x1;
          return;
        }
        deleteHashElement(this,p_Var8);
        return;
      }
      lVar7 = *(long *)(p_Var8 + 0x48);
    }
  }
  return;
}

