
/* cocos2d::ActionManager::pauseTarget(cocos2d::Node*) */

void __thiscall cocos2d::ActionManager::pauseTarget(ActionManager *this,Node *param_1)

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
                    /* try { // try from 00ee62f8 to 00fe630b has its CatchHandler @ 00ee63c0 */
                    /* try { // try from 00ee630c to 00fe6327 has its CatchHandler @ 00ee63ac */
    uVar4 = ((uVar4 & 0xff000000) - iVar1) + (uVar4 & 0xff0000) + (uVar4 & 0xff00) + (uVar4 & 0xff)
            + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar4) + 0x1124109 ^ uVar4 << 8;
                    /* try { // try from 00ee6328 to 00fe640b has its CatchHandler @ 00ee6074 */
    uVar3 = 0xfeedbef7 - (uVar4 + uVar2) ^ uVar2 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar5 = *(long **)(*(long *)(this + 0x28) + 0x28);
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 10;
    for (lVar6 = *(long *)(*plVar5 +
                          (ulong)(((uVar3 - uVar4) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) *
                          0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x48)) {
                    /* catch() { ... } // from try @ 00ee630c with catch @ 00ee63ac */
                    /* catch() { ... } // from try @ 00ee60c0 with catch @ 00ee63b0 */
      lVar6 = lVar6 - plVar5[4];
                    /* catch() { ... } // from try @ 00ee6194 with catch @ 00ee63c0
                       catch() { ... } // from try @ 00ee62f8 with catch @ 00ee63c0 */
      if ((*(int *)(lVar6 + 0x58) == 8) && ((Node *)**(undefined8 **)(lVar6 + 0x50) == param_1)) {
        *(undefined1 *)(lVar6 + 0x21) = 1;
        return;
      }
                    /* catch() { ... } // from try @ 00ee6298 with catch @ 00ee63a4 */
                    /* catch() { ... } // from try @ 00ee61e0 with catch @ 00ee63a8 */
    }
  }
                    /* catch() { ... } // from try @ 00ee625c with catch @ 00ee63a0 */
  return;
}

