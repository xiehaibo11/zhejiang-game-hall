
/* cocos2d::__Dictionary::setObject(cocos2d::Ref*, long) */

void __thiscall cocos2d::__Dictionary::setObject(__Dictionary *this,Ref *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  DictElement *pDVar7;
  Ref *this_00;
  
  if (*(int *)(this + 0x38) == 0) {
    *(undefined4 *)(this + 0x38) = 2;
    lVar4 = *(long *)(this + 0x30);
  }
  else {
    lVar4 = *(long *)(this + 0x30);
  }
  if (lVar4 != 0) {
    uVar6 = (uint)param_2;
    iVar1 = (int)((param_2 & 0xffffffffff000000U) >> 0x20) + -0x61c88647;
    uVar6 = ((int)(param_2 & 0xffffffffff000000U) - iVar1) + (uVar6 & 0xff0000) + (uVar6 & 0xff00) +
            (uVar6 & 0xff) + 0x9f49bac2 ^ 0x7f76d;
    uVar2 = (iVar1 - uVar6) + 0x1124109 ^ uVar6 << 8;
    uVar3 = 0xfeedbef7 - (uVar6 + uVar2) ^ uVar2 >> 0xd;
    uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    plVar5 = *(long **)(lVar4 + 0x110);
    uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar6 << 0x10;
    uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar2 >> 5;
                    /* try { // try from 00ffb5ac to 010fb5b3 has its CatchHandler @ 00ffb680 */
    uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar3 >> 3;
                    /* try { // try from 00ffb5b4 to 010fb693 has its CatchHandler @ 00ffb468 */
    uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar6 << 10;
    lVar4 = *(long *)(*plVar5 +
                     (ulong)(((uVar3 - uVar6) - uVar2 ^ uVar2 >> 0xf) & (int)plVar5[1] - 1U) * 0x10)
    ;
    while (lVar4 != 0) {
      pDVar7 = (DictElement *)(lVar4 - plVar5[4]);
      if ((*(int *)(pDVar7 + 0x140) == 8) && (**(long **)(pDVar7 + 0x138) == param_2)) {
        this_00 = *(Ref **)(pDVar7 + 0x108);
        if (this_00 != param_1) {
          Ref::retain(this_00);
          removeObjectForElememt(this,pDVar7);
          setObjectUnSafe(this,param_1,param_2);
          Ref::release(this_00);
          return;
        }
                    /* catch() { ... } // from try @ 00ffb5ac with catch @ 00ffb680 */
        return;
      }
      lVar4 = *(long *)(pDVar7 + 0x130);
    }
  }
  setObjectUnSafe(this,param_1,param_2);
  return;
}

