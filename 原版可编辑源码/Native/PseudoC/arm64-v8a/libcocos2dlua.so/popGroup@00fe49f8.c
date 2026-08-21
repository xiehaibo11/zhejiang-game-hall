
/* cocos2d::Renderer::popGroup() */

void __thiscall cocos2d::Renderer::popGroup(Renderer *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(this + 0x38);
  lVar3 = *(long *)(this + 0x20) - *(long *)(this + 0x18);
                    /* try { // try from 00fe4a1c to 010e4a2b has its CatchHandler @ 00fe4a3c */
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 * 0x80 + -1;
  }
  *(long *)(this + 0x38) = lVar2 + -1;
  if (0x7ff < (lVar1 - (lVar2 + *(long *)(this + 0x30))) + 1U) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe4a1c with catch @ 00fe4a3c
                        */
    operator_delete(*(void **)(*(long *)(this + 0x20) + -8));
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + -8;
  }
  return;
}

