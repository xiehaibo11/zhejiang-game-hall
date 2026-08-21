
/* cocos2d::ActionManager::removeAllActionsByTag(int, cocos2d::Node*) */

void __thiscall
cocos2d::ActionManager::removeAllActionsByTag(ActionManager *this,int param_1,Node *param_2)

{
  uint uVar1;
  uint uVar2;
  _ccArray *p_Var3;
  long *plVar4;
  Ref *this_00;
  long lVar5;
  uint uVar6;
  _hashElement *p_Var7;
  long lVar8;
  int iVar9;
  
  if ((param_2 != (Node *)0x0) && (*(long *)(this + 0x28) != 0)) {
                    /* try { // try from 00ee71a0 to 00fe71af has its CatchHandler @ 00ee7268 */
    uVar6 = (uint)param_2;
                    /* try { // try from 00ee71b0 to 00fe72d7 has its CatchHandler @ 00ee6fdc */
    iVar9 = (int)(((ulong)param_2 & 0xffffffffff000000) >> 0x20) + -0x61c88647;
    uVar6 = ((int)((ulong)param_2 & 0xffffffffff000000) - iVar9) + (uVar6 & 0xff0000) +
            (uVar6 & 0xff00) + (uVar6 & 0xff) + 0x9f49bac2 ^ 0x7f76d;
    uVar1 = (iVar9 - uVar6) + 0x1124109 ^ uVar6 << 8;
                    /* catch() { ... } // from try @ 00ee705c with catch @ 00ee7200 */
    uVar2 = 0xfeedbef7 - (uVar6 + uVar1) ^ uVar1 >> 0xd;
    uVar6 = (uVar6 - uVar1) - uVar2 ^ uVar2 >> 0xc;
    plVar4 = *(long **)(*(long *)(this + 0x28) + 0x28);
    uVar1 = (uVar1 - uVar2) - uVar6 ^ uVar6 << 0x10;
                    /* catch() { ... } // from try @ 00ee702c with catch @ 00ee7234 */
    uVar2 = (uVar2 - uVar6) - uVar1 ^ uVar1 >> 5;
    uVar6 = (uVar6 - uVar1) - uVar2 ^ uVar2 >> 3;
                    /* catch() { ... } // from try @ 00ee701c with catch @ 00ee7254 */
    uVar1 = (uVar1 - uVar2) - uVar6 ^ uVar6 << 10;
                    /* catch() { ... } // from try @ 00ee70e0 with catch @ 00ee7268
                       catch() { ... } // from try @ 00ee71a0 with catch @ 00ee7268 */
    lVar5 = *(long *)(*plVar4 +
                     (ulong)(((uVar2 - uVar6) - uVar1 ^ uVar1 >> 0xf) & (int)plVar4[1] - 1U) * 0x10)
    ;
    while (lVar5 != 0) {
      p_Var7 = (_hashElement *)(lVar5 - plVar4[4]);
      if ((*(int *)(p_Var7 + 0x58) == 8) && ((Node *)**(undefined8 **)(p_Var7 + 0x50) == param_2)) {
        p_Var3 = *(_ccArray **)p_Var7;
        lVar5 = *(long *)p_Var3;
        if (lVar5 < 1) {
          return;
        }
        lVar8 = 0;
        iVar9 = 0;
        goto LAB_00ee72cc;
      }
      lVar5 = *(long *)(p_Var7 + 0x48);
    }
  }
  return;
LAB_00ee72cc:
  this_00 = *(Ref **)(*(long *)(p_Var3 + 0x10) + lVar8 * 8);
                    /* try { // try from 00ee72d8 to 00fe730b has its CatchHandler @ 00ee72d8
                       catch() { ... } // from try @ 00ee72d8 with catch @ 00ee72d8
                       catch() { ... } // from try @ 00ee731c with catch @ 00ee72d8 */
  if ((*(int *)(this_00 + 0x40) == param_1) && (*(Node **)(this_00 + 0x30) == param_2)) {
                    /* try { // try from 00ee730c to 00fe731b has its CatchHandler @ 00ee7350 */
    if ((this_00 == *(Ref **)(p_Var7 + 0x18)) && (p_Var7[0x20] == (_hashElement)0x0)) {
                    /* try { // try from 00ee731c to 00fe736b has its CatchHandler @ 00ee72d8 */
      Ref::retain(this_00);
      p_Var3 = *(_ccArray **)p_Var7;
      p_Var7[0x20] = (_hashElement)0x1;
    }
    ccArrayRemoveObjectAtIndex(p_Var3,lVar8,true);
    if (iVar9 <= *(int *)(p_Var7 + 0x10)) {
      *(int *)(p_Var7 + 0x10) = *(int *)(p_Var7 + 0x10) + -1;
    }
                    /* catch() { ... } // from try @ 00ee730c with catch @ 00ee7350 */
    if (**(long **)p_Var7 == 0) {
      if (*(_hashElement **)(this + 0x30) == p_Var7) {
        this[0x38] = (ActionManager)0x1;
        lVar5 = lVar5 + -1;
        goto LAB_00ee72f0;
      }
      deleteHashElement(this,p_Var7);
    }
                    /* try { // try from 00ee736c to 00fe739f has its CatchHandler @ 00ee736c
                       catch() { ... } // from try @ 00ee736c with catch @ 00ee736c
                       catch() { ... } // from try @ 00ee73b0 with catch @ 00ee736c */
    lVar5 = lVar5 + -1;
  }
  else {
    iVar9 = iVar9 + 1;
  }
LAB_00ee72f0:
  lVar8 = (long)iVar9;
  if (lVar5 <= lVar8) {
    return;
  }
  p_Var3 = *(_ccArray **)p_Var7;
  goto LAB_00ee72cc;
}

