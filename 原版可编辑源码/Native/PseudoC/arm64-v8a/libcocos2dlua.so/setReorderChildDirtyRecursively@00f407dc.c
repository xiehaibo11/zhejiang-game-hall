
/* cocos2d::Sprite::setReorderChildDirtyRecursively() */

void __thiscall cocos2d::Sprite::setReorderChildDirtyRecursively(Sprite *this)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 00f404cc with catch @ 00f407e8
                       catch() { ... } // from try @ 00f407d8 with catch @ 00f407e8
                       try { // try from 00f407e8 to 010408a3 has its CatchHandler @ 00f403fc */
                    /* catch() { ... } // from try @ 00f40774 with catch @ 00f407ec */
  if (this[0x1fb] == (Sprite)0x0) {
                    /* catch() { ... } // from try @ 00f405d8 with catch @ 00f407f0 */
    plVar1 = *(long **)(this + 400);
                    /* catch() { ... } // from try @ 00f405d0 with catch @ 00f407f4 */
    this[0x1fb] = (Sprite)0x1;
                    /* catch() { ... } // from try @ 00f406e4 with catch @ 00f40804 */
    for (; (plVar1 != (long *)0x0 && (plVar1 != *(long **)(this + 0x310)));
        plVar1 = (long *)(**(code **)(*plVar1 + 0x260))(plVar1)) {
                    /* catch() { ... } // from try @ 00f406b0 with catch @ 00f4081c */
      (**(code **)(*plVar1 + 0x650))(plVar1);
                    /* catch() { ... } // from try @ 00f406c0 with catch @ 00f40820 */
                    /* catch() { ... } // from try @ 00f40614 with catch @ 00f40830 */
                    /* catch() { ... } // from try @ 00f4061c with catch @ 00f40834 */
    }
  }
                    /* catch() { ... } // from try @ 00f40630 with catch @ 00f40838 */
  return;
}

