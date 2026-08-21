
/* cocos2d::__Dictionary::removeObjectForKey(long) */

void __thiscall cocos2d::__Dictionary::removeObjectForKey(__Dictionary *this,long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  DictElement *pDVar5;
  long *plVar6;
  long lVar7;
  
  if (*(int *)(this + 0x38) == 0) {
    return;
  }
  if (*(long *)(this + 0x30) != 0) {
                    /* try { // try from 00ffbd20 to 010fbd27 has its CatchHandler @ 00ffbdc4 */
    uVar4 = (uint)param_1;
    iVar1 = (int)((param_1 & 0xffffffffff000000U) >> 0x20) + -0x61c88647;
                    /* try { // try from 00ffbd3c to 010fbd57 has its CatchHandler @ 00ffbdcc */
                    /* try { // try from 00ffbd58 to 010fbdef has its CatchHandler @ 00ffbcf0 */
    uVar4 = ((int)(param_1 & 0xffffffffff000000U) - iVar1) + (uVar4 & 0xff0000) + (uVar4 & 0xff00) +
            (uVar4 & 0xff) + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar4) + 0x1124109 ^ uVar4 << 8;
    uVar3 = 0xfeedbef7 - (uVar4 + uVar2) ^ uVar2 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar6 = *(long **)(*(long *)(this + 0x30) + 0x110);
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 5;
                    /* catch() { ... } // from try @ 00ffbd20 with catch @ 00ffbdc4 */
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 3;
                    /* catch() { ... } // from try @ 00ffbd3c with catch @ 00ffbdcc */
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 10;
    lVar7 = *(long *)(*plVar6 +
                     (ulong)(((uVar3 - uVar4) - uVar2 ^ uVar2 >> 0xf) & (int)plVar6[1] - 1U) * 0x10)
    ;
    while (lVar7 != 0) {
      pDVar5 = (DictElement *)(lVar7 - plVar6[4]);
      if ((*(int *)(pDVar5 + 0x140) == 8) && (**(long **)(pDVar5 + 0x138) == param_1)) {
        removeObjectForElememt(this,pDVar5);
        return;
      }
      lVar7 = *(long *)(pDVar5 + 0x130);
    }
  }
  removeObjectForElememt(this,(DictElement *)0x0);
  return;
}

