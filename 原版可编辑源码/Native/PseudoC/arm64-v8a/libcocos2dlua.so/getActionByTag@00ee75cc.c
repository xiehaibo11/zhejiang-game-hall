
/* cocos2d::ActionManager::getActionByTag(int, cocos2d::Node const*) const */

long __thiscall
cocos2d::ActionManager::getActionByTag(ActionManager *this,int param_1,Node *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar4 = (uint)param_2;
  if (*(long *)(this + 0x28) != 0) {
    iVar1 = (int)((ulong)param_2 >> 0x20) + -0x61c88647;
                    /* try { // try from 00ee760c to 00fe761b has its CatchHandler @ 00ee76b8 */
                    /* try { // try from 00ee761c to 00fe7727 has its CatchHandler @ 00ee749c */
    uVar4 = ((uVar4 & 0xff000000) - iVar1) + (uVar4 & 0xff0000) + (uVar4 & 0xff00) + (uVar4 & 0xff)
            + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar4) + 0x1124109 ^ uVar4 << 8;
    uVar3 = 0xfeedbef7 - (uVar4 + uVar2) ^ uVar2 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar5 = *(long **)(*(long *)(this + 0x28) + 0x28);
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 3;
                    /* catch() { ... } // from try @ 00ee7508 with catch @ 00ee7684 */
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 10;
                    /* catch() { ... } // from try @ 00ee74d8 with catch @ 00ee76a4 */
    lVar6 = *(long *)(*plVar5 +
                     (ulong)(((uVar3 - uVar4) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) * 0x10)
    ;
    while (lVar6 != 0) {
      puVar7 = (undefined8 *)(lVar6 - plVar5[4]);
                    /* catch() { ... } // from try @ 00ee75b0 with catch @ 00ee76c8 */
      if ((*(int *)(puVar7 + 0xb) == 8) && (*(Node **)puVar7[10] == param_2)) {
        plVar5 = (long *)*puVar7;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        lVar6 = *plVar5;
        if (lVar6 < 1) {
          return 0;
        }
        plVar5 = (long *)plVar5[2];
        do {
          if (*(int *)(*plVar5 + 0x40) == param_1) {
            return *plVar5;
          }
          lVar6 = lVar6 + -1;
          plVar5 = plVar5 + 1;
        } while (lVar6 != 0);
        return 0;
      }
      lVar6 = puVar7[9];
                    /* catch() { ... } // from try @ 00ee758c with catch @ 00ee76b8
                       catch() { ... } // from try @ 00ee760c with catch @ 00ee76b8 */
    }
  }
                    /* try { // try from 00ee7728 to 00fe775b has its CatchHandler @ 00ee7728
                       catch() { ... } // from try @ 00ee7728 with catch @ 00ee7728
                       catch() { ... } // from try @ 00ee776c with catch @ 00ee7728 */
  return 0;
}

