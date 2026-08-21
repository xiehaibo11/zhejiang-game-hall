
/* cocos2d::ActionManager::getNumberOfRunningActionsInTargetByTag(cocos2d::Node const*, int) */

int __thiscall
cocos2d::ActionManager::getNumberOfRunningActionsInTargetByTag
          (ActionManager *this,Node *param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  
  uVar4 = (uint)param_1;
  if (*(long *)(this + 0x28) != 0) {
    iVar11 = (int)((ulong)param_1 >> 0x20) + -0x61c88647;
                    /* try { // try from 00ee788c to 00fe789b has its CatchHandler @ 00ee78d0 */
                    /* try { // try from 00ee789c to 00fe78eb has its CatchHandler @ 00ee7858 */
    uVar4 = ((uVar4 & 0xff000000) - iVar11) + (uVar4 & 0xff0000) + (uVar4 & 0xff00) + (uVar4 & 0xff)
            + 0x9f49bac2 ^ 0x7f76d;
                    /* catch() { ... } // from try @ 00ee788c with catch @ 00ee78d0 */
    uVar2 = (iVar11 - uVar4) + 0x1124109 ^ uVar4 << 8;
    uVar3 = 0xfeedbef7 - (uVar4 + uVar2) ^ uVar2 >> 0xd;
                    /* try { // try from 00ee78ec to 00fe7927 has its CatchHandler @ 00ee78ec
                       catch() { ... } // from try @ 00ee78ec with catch @ 00ee78ec
                       catch() { ... } // from try @ 00ee794c with catch @ 00ee78ec */
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar5 = *(long **)(*(long *)(this + 0x28) + 0x28);
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 3;
                    /* try { // try from 00ee7928 to 00fe7933 has its CatchHandler @ 00ee79c4 */
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 10;
                    /* try { // try from 00ee7934 to 00fe794b has its CatchHandler @ 00ee7994 */
    lVar7 = *(long *)(*plVar5 +
                     (ulong)(((uVar3 - uVar4) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) * 0x10)
    ;
    while (lVar7 != 0) {
      puVar8 = (undefined8 *)(lVar7 - plVar5[4]);
      if ((*(int *)(puVar8 + 0xb) == 8) && (*(Node **)puVar8[10] == param_1)) {
        puVar9 = (ulong *)*puVar8;
        if (puVar9 == (ulong *)0x0) {
          return 0;
        }
        uVar6 = *puVar9;
        if ((long)uVar6 < 1) {
          return 0;
        }
                    /* catch() { ... } // from try @ 00ee7934 with catch @ 00ee7994 */
        if (uVar6 != 1) {
          uVar10 = uVar6 & 0xfffffffffffffffe;
          iVar12 = 0;
          iVar11 = 0;
                    /* catch() { ... } // from try @ 00ee7928 with catch @ 00ee79c4 */
          plVar5 = (long *)(puVar9[2] + 8);
          uVar13 = uVar10;
          do {
            plVar1 = plVar5 + -1;
            lVar7 = *plVar5;
            plVar5 = plVar5 + 2;
                    /* try { // try from 00ee79e0 to 00fe7a1b has its CatchHandler @ 00ee79e0
                       catch() { ... } // from try @ 00ee79e0 with catch @ 00ee79e0
                       catch() { ... } // from try @ 00ee7a40 with catch @ 00ee79e0 */
            if (*(int *)(*plVar1 + 0x40) == param_2) {
              iVar12 = iVar12 + 1;
            }
            if (*(int *)(lVar7 + 0x40) == param_2) {
              iVar11 = iVar11 + 1;
            }
            uVar13 = uVar13 - 2;
          } while (uVar13 != 0);
          iVar11 = iVar11 + iVar12;
          if (uVar6 != uVar10) {
LAB_00ee7a00:
            lVar7 = uVar6 - uVar10;
            plVar5 = (long *)(puVar9[2] + uVar10 * 8);
            do {
              if (*(int *)(*plVar5 + 0x40) == param_2) {
                iVar11 = iVar11 + 1;
              }
              lVar7 = lVar7 + -1;
              plVar5 = plVar5 + 1;
                    /* try { // try from 00ee7a1c to 00fe7a27 has its CatchHandler @ 00ee7ab8 */
            } while (lVar7 != 0);
          }
                    /* try { // try from 00ee7a28 to 00fe7a3f has its CatchHandler @ 00ee7a88 */
          return iVar11;
        }
        uVar10 = 0;
        iVar11 = 0;
        goto LAB_00ee7a00;
      }
      lVar7 = puVar8[9];
    }
  }
  return 0;
}

