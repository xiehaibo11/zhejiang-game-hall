
/* cocos2d::ActionManager::resumeTarget(cocos2d::Node*) */

void __thiscall cocos2d::ActionManager::resumeTarget(ActionManager *this,Node *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  
  uVar4 = (uint)param_1;
  if (*(long *)(this + 0x28) != 0) {
    iVar1 = (int)((ulong)param_1 >> 0x20) + -0x61c88647;
                    /* try { // try from 00ee640c to 00fe6453 has its CatchHandler @ 00ee640c
                       catch() { ... } // from try @ 00ee640c with catch @ 00ee640c
                       catch() { ... } // from try @ 00ee6628 with catch @ 00ee640c */
    uVar4 = ((uVar4 & 0xff000000) - iVar1) + (uVar4 & 0xff0000) + (uVar4 & 0xff00) + (uVar4 & 0xff)
            + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar4) + 0x1124109 ^ uVar4 << 8;
                    /* try { // try from 00ee6454 to 00fe645f has its CatchHandler @ 00ee66f8 */
                    /* try { // try from 00ee6460 to 00fe6473 has its CatchHandler @ 00ee66d8 */
    uVar3 = 0xfeedbef7 - (uVar4 + uVar2) ^ uVar2 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xc;
                    /* try { // try from 00ee6474 to 00fe648b has its CatchHandler @ 00ee66b8 */
    plVar5 = *(long **)(*(long *)(this + 0x28) + 0x28);
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 3;
                    /* try { // try from 00ee64a4 to 00fe64b7 has its CatchHandler @ 00ee667c */
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 10;
    for (lVar6 = *(long *)(*plVar5 +
                          (ulong)(((uVar3 - uVar4) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) *
                          0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x48)) {
      lVar6 = lVar6 - plVar5[4];
      if ((*(int *)(lVar6 + 0x58) == 8) && ((Node *)**(undefined8 **)(lVar6 + 0x50) == param_1)) {
        *(undefined1 *)(lVar6 + 0x21) = 0;
        return;
      }
    }
  }
  return;
}

