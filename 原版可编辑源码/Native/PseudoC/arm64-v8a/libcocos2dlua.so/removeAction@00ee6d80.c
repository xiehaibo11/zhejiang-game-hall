
/* cocos2d::ActionManager::removeAction(cocos2d::Action*) */

void __thiscall cocos2d::ActionManager::removeAction(ActionManager *this,Action *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  _ccArray *p_Var4;
  long *plVar5;
  Ref *this_00;
  uint uVar6;
  long lVar7;
  long lVar8;
  _hashElement *p_Var9;
  
  if (param_1 != (Action *)0x0) {
                    /* try { // try from 00ee6d94 to 00fe6da3 has its CatchHandler @ 00ee6f40 */
    lVar7 = *(long *)(param_1 + 0x30);
    if (*(long *)(this + 0x28) != 0) {
      uVar6 = (uint)lVar7;
      iVar1 = (int)((ulong)lVar7 >> 0x20) + -0x61c88647;
      uVar6 = ((uVar6 & 0xff000000) - iVar1) + (uVar6 & 0xff0000) + (uVar6 & 0xff00) +
              (uVar6 & 0xff) + 0x9f49bac2 ^ 0x7f76d;
      uVar2 = (iVar1 - uVar6) + 0x1124109 ^ uVar6 << 8;
      uVar3 = 0xfeedbef7 - (uVar6 + uVar2) ^ uVar2 >> 0xd;
      uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar3 >> 0xc;
                    /* try { // try from 00ee6e28 to 00fe6e2f has its CatchHandler @ 00ee6eec */
      plVar5 = *(long **)(*(long *)(this + 0x28) + 0x28);
                    /* try { // try from 00ee6e30 to 00fe6e53 has its CatchHandler @ 00ee6b90 */
      uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar6 << 0x10;
      uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar2 >> 5;
      uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar3 >> 3;
                    /* try { // try from 00ee6e54 to 00fe6e6b has its CatchHandler @ 00ee6efc */
      uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar6 << 10;
                    /* try { // try from 00ee6e6c to 00fe6ee3 has its CatchHandler @ 00ee6b90 */
      lVar8 = *(long *)(*plVar5 +
                       (ulong)(((uVar3 - uVar6) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) *
                       0x10);
      while (lVar8 != 0) {
        p_Var9 = (_hashElement *)(lVar8 - plVar5[4]);
        if ((*(int *)(p_Var9 + 0x58) == 8) && (**(long **)(p_Var9 + 0x50) == lVar7)) {
          lVar7 = ccArrayGetIndexOfObject(*(_ccArray **)p_Var9,(Ref *)param_1);
          if (lVar7 == -1) {
            return;
          }
          p_Var4 = *(_ccArray **)p_Var9;
          this_00 = *(Ref **)(*(long *)(p_Var4 + 0x10) + lVar7 * 8);
                    /* try { // try from 00ee6ee4 to 00fe6eeb has its CatchHandler @ 00ee6eec */
                    /* catch() { ... } // from try @ 00ee6e28 with catch @ 00ee6eec
                       catch() { ... } // from try @ 00ee6ee4 with catch @ 00ee6eec
                       try { // try from 00ee6eec to 00fe6fdb has its CatchHandler @ 00ee6b90 */
          if ((this_00 == *(Ref **)(p_Var9 + 0x18)) && (p_Var9[0x20] == (_hashElement)0x0)) {
            Ref::retain(this_00);
            p_Var4 = *(_ccArray **)p_Var9;
                    /* catch() { ... } // from try @ 00ee6e54 with catch @ 00ee6efc */
            p_Var9[0x20] = (_hashElement)0x1;
          }
          ccArrayRemoveObjectAtIndex(p_Var4,lVar7,true);
          if (lVar7 <= *(int *)(p_Var9 + 0x10)) {
            *(int *)(p_Var9 + 0x10) = *(int *)(p_Var9 + 0x10) + -1;
          }
          if (**(long **)p_Var9 != 0) {
            return;
          }
          if (*(_hashElement **)(this + 0x30) != p_Var9) {
                    /* catch() { ... } // from try @ 00ee6d94 with catch @ 00ee6f40 */
            deleteHashElement(this,p_Var9);
            return;
          }
          this[0x38] = (ActionManager)0x1;
          return;
        }
        lVar8 = *(long *)(p_Var9 + 0x48);
      }
    }
  }
  return;
}

