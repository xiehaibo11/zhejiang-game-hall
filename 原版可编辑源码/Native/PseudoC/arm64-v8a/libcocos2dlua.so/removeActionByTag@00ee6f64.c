
/* cocos2d::ActionManager::removeActionByTag(int, cocos2d::Node*) */

void __thiscall
cocos2d::ActionManager::removeActionByTag(ActionManager *this,int param_1,Node *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  _ccArray *p_Var4;
  uint uVar5;
  long *plVar6;
  Ref *this_00;
  long lVar7;
  _hashElement *p_Var8;
  
                    /* catch() { ... } // from try @ 00ee6d04 with catch @ 00ee6f74 */
  if (param_2 == (Node *)0x0) {
    return;
  }
  if (*(long *)(this + 0x28) == 0) {
    return;
  }
  uVar5 = (uint)param_2;
  iVar1 = (int)(((ulong)param_2 & 0xffffffffff000000) >> 0x20) + -0x61c88647;
                    /* catch() { ... } // from try @ 00ee6bd4 with catch @ 00ee6fc0 */
  uVar5 = ((int)((ulong)param_2 & 0xffffffffff000000) - iVar1) + (uVar5 & 0xff0000) +
          (uVar5 & 0xff00) + (uVar5 & 0xff) + 0x9f49bac2 ^ 0x7f76d;
                    /* try { // try from 00ee6fdc to 00fe701b has its CatchHandler @ 00ee6fdc
                       catch() { ... } // from try @ 00ee6fdc with catch @ 00ee6fdc
                       catch() { ... } // from try @ 00ee71b0 with catch @ 00ee6fdc */
  uVar2 = (iVar1 - uVar5) + 0x1124109 ^ uVar5 << 8;
  uVar3 = 0xfeedbef7 - (uVar5 + uVar2) ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 0xc;
  plVar6 = *(long **)(*(long *)(this + 0x28) + 0x28);
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 << 0x10;
                    /* try { // try from 00ee701c to 00fe702b has its CatchHandler @ 00ee7254 */
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar2 >> 5;
                    /* try { // try from 00ee702c to 00fe7043 has its CatchHandler @ 00ee7234 */
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar5 << 10;
  lVar7 = *(long *)(*plVar6 +
                   (ulong)(((uVar3 - uVar5) - uVar2 ^ uVar2 >> 0xf) & (int)plVar6[1] - 1U) * 0x10);
  while( true ) {
                    /* try { // try from 00ee705c to 00fe706f has its CatchHandler @ 00ee7200 */
    if (lVar7 == 0) {
      return;
    }
    p_Var8 = (_hashElement *)(lVar7 - plVar6[4]);
    if ((*(int *)(p_Var8 + 0x58) == 8) && ((Node *)**(undefined8 **)(p_Var8 + 0x50) == param_2))
    break;
    lVar7 = *(long *)(p_Var8 + 0x48);
  }
  p_Var4 = *(_ccArray **)p_Var8;
  if (*(long *)p_Var4 < 1) {
    return;
  }
  lVar7 = 0;
  while ((this_00 = *(Ref **)(*(long *)(p_Var4 + 0x10) + lVar7 * 8),
         *(int *)(this_00 + 0x40) != param_1 || (*(Node **)(this_00 + 0x30) != param_2))) {
    lVar7 = lVar7 + 1;
    if (*(long *)p_Var4 == lVar7) {
      return;
    }
  }
                    /* try { // try from 00ee70e0 to 00fe70e7 has its CatchHandler @ 00ee7268 */
  if ((this_00 == *(Ref **)(p_Var8 + 0x18)) && (p_Var8[0x20] == (_hashElement)0x0)) {
    Ref::retain(this_00);
    p_Var4 = *(_ccArray **)p_Var8;
    p_Var8[0x20] = (_hashElement)0x1;
  }
                    /* try { // try from 00ee7104 to 00fe7147 has its CatchHandler @ 00ee7278 */
  ccArrayRemoveObjectAtIndex(p_Var4,lVar7,true);
  if (lVar7 <= *(int *)(p_Var8 + 0x10)) {
    *(int *)(p_Var8 + 0x10) = *(int *)(p_Var8 + 0x10) + -1;
  }
  if (**(long **)p_Var8 != 0) {
    return;
  }
  if (*(_hashElement **)(this + 0x30) == p_Var8) {
    this[0x38] = (ActionManager)0x1;
    return;
  }
  deleteHashElement(this,p_Var8);
  return;
}

