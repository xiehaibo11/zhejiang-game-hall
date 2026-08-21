
/* cocos2d::ActionManager::getNumberOfRunningActionsInTarget(cocos2d::Node const*) const */

undefined8 __thiscall
cocos2d::ActionManager::getNumberOfRunningActionsInTarget(ActionManager *this,Node *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  uVar4 = (uint)param_1;
  if (*(long *)(this + 0x28) != 0) {
    iVar1 = (int)((ulong)param_1 >> 0x20) + -0x61c88647;
                    /* try { // try from 00ee775c to 00fe776b has its CatchHandler @ 00ee77a8 */
                    /* try { // try from 00ee776c to 00fe77c3 has its CatchHandler @ 00ee7728 */
    uVar4 = ((uVar4 & 0xff000000) - iVar1) + (uVar4 & 0xff0000) + (uVar4 & 0xff00) + (uVar4 & 0xff)
            + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar4) + 0x1124109 ^ uVar4 << 8;
                    /* catch() { ... } // from try @ 00ee775c with catch @ 00ee77a8 */
    uVar3 = 0xfeedbef7 - (uVar4 + uVar2) ^ uVar2 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar5 = *(long **)(*(long *)(this + 0x28) + 0x28);
                    /* try { // try from 00ee77c4 to 00fe77f7 has its CatchHandler @ 00ee77c4
                       catch() { ... } // from try @ 00ee77c4 with catch @ 00ee77c4
                       catch() { ... } // from try @ 00ee7808 with catch @ 00ee77c4 */
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 10;
                    /* try { // try from 00ee77f8 to 00fe7807 has its CatchHandler @ 00ee783c */
                    /* try { // try from 00ee7808 to 00fe7857 has its CatchHandler @ 00ee77c4 */
    lVar6 = *(long *)(*plVar5 +
                     (ulong)(((uVar3 - uVar4) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) * 0x10)
    ;
    while (lVar6 != 0) {
      puVar7 = (undefined8 *)(lVar6 - plVar5[4]);
                    /* catch() { ... } // from try @ 00ee77f8 with catch @ 00ee783c */
      if ((*(int *)(puVar7 + 0xb) == 8) && (*(Node **)puVar7[10] == param_1)) {
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
          return 0;
        }
                    /* try { // try from 00ee7858 to 00fe788b has its CatchHandler @ 00ee7858
                       catch() { ... } // from try @ 00ee7858 with catch @ 00ee7858
                       catch() { ... } // from try @ 00ee789c with catch @ 00ee7858 */
        return *(undefined8 *)*puVar7;
      }
      lVar6 = puVar7[9];
    }
  }
  return 0;
}

