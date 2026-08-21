
/* cocos2d::Director::popProjectionMatrix(unsigned long) */

void __thiscall cocos2d::Director::popProjectionMatrix(Director *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
                    /* try { // try from 00f99674 to 010996db has its CatchHandler @ 00f995f0 */
  lVar6 = *(long *)(this + 0x58) + param_1 * 0x30;
  uVar4 = (*(long *)(lVar6 + 0x28) + *(long *)(lVar6 + 0x20)) - 1;
  Mat4::~Mat4((Mat4 *)(*(long *)(*(long *)(lVar6 + 8) + (uVar4 >> 3 & 0x1ffffffffffffff8)) +
                      (uVar4 & 0x3f) * 0x40));
  lVar2 = *(long *)(lVar6 + 0x28);
  *(long *)(lVar6 + 0x28) = lVar2 + -1;
  plVar5 = (long *)(lVar6 + 0x10);
  lVar3 = *plVar5 - *(long *)(lVar6 + 8);
                    /* try { // try from 00f996dc to 010996eb has its CatchHandler @ 00f996f0 */
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 * 8 + -1;
  }
                    /* try { // try from 00f996ec to 01099737 has its CatchHandler @ 00f995f0 */
  if (0x7f < (lVar1 - (lVar2 + *(long *)(lVar6 + 0x20))) + 1U) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f996dc with catch @ 00f996f0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9966c with catch @ 00f996f4
                        */
    operator_delete(*(void **)(*plVar5 + -8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f99640 with catch @ 00f996f8
                        */
    *plVar5 = *plVar5 + -8;
  }
  return;
}

