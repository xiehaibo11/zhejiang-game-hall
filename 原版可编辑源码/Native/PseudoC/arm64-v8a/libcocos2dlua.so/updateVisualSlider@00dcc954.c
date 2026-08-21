
/* cocos2d::ui::Slider::updateVisualSlider() */

void __thiscall cocos2d::ui::Slider::updateVisualSlider(Slider *this)

{
  long lVar1;
  long *plVar2;
  Size *pSVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  Size aSStack_58 [8];
  float local_50 [2];
  long local_48;
  
                    /* try { // try from 00dcc960 to 00ecc967 has its CatchHandler @ 00dcc9b4 */
                    /* try { // try from 00dcc968 to 00ecc96f has its CatchHandler @ 00dcc9b0 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00dcc970 to 00ecc977 has its CatchHandler @ 00dcc9ac */
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dcc978 to 00ecc97f has its CatchHandler @ 00dcc9a8 */
  iVar4 = *(int *)(this + 0x554);
                    /* try { // try from 00dcc980 to 00ecc987 has its CatchHandler @ 00dcc9a4 */
  iVar5 = *(int *)(this + 0x558);
                    /* try { // try from 00dcc988 to 00ecc98f has its CatchHandler @ 00dcc994 */
                    /* try { // try from 00dcc990 to 00eccdc3 has its CatchHandler @ 00dcb1b0 */
                    /* catch() { ... } // from try @ 00dcc988 with catch @ 00dcc994 */
                    /* catch() { ... } // from try @ 00dcc980 with catch @ 00dcc9a4 */
                    /* catch() { ... } // from try @ 00dcc978 with catch @ 00dcc9a8 */
                    /* catch() { ... } // from try @ 00dcc970 with catch @ 00dcc9ac */
                    /* catch() { ... } // from try @ 00dcc968 with catch @ 00dcc9b0 */
  fVar6 = *(float *)(this + 0x550) * (float)((double)(long)iVar4 / (double)(long)iVar5);
                    /* catch() { ... } // from try @ 00dcc960 with catch @ 00dcc9b4 */
                    /* catch() { ... } // from try @ 00dcc43c with catch @ 00dcc9b8 */
                    /* catch() { ... } // from try @ 00dcc460 with catch @ 00dcc9bc
                       catch() { ... } // from try @ 00dcc4c4 with catch @ 00dcc9bc */
                    /* catch() { ... } // from try @ 00dcc37c with catch @ 00dcc9c0 */
  (**(code **)(**(long **)(this + 0x548) + 200))(fVar6,*(float *)(this + 0x84) * 0.5);
                    /* catch() { ... } // from try @ 00dcc3dc with catch @ 00dcc9c4 */
                    /* catch() { ... } // from try @ 00dcbaf4 with catch @ 00dcc9c8 */
  if (this[0x55c] == (Slider)0x0) {
                    /* catch() { ... } // from try @ 00dcb6b8 with catch @ 00dcca00 */
    Rect::Rect((Rect *)aSStack_58,(Rect *)(*(long *)(this + 0x4f8) + 0x408));
                    /* catch() { ... } // from try @ 00dcb6ac with catch @ 00dcca10 */
    local_50[0] = *(float *)(this + 0x518) * (float)((double)(long)iVar4 / (double)(long)iVar5);
                    /* catch() { ... } // from try @ 00dcc17c with catch @ 00dcca14 */
    plVar2 = *(long **)(this + 0x4f8);
                    /* catch() { ... } // from try @ 00dcc170 with catch @ 00dcca24 */
                    /* catch() { ... } // from try @ 00dcb474 with catch @ 00dcca28 */
    (**(code **)(*plVar2 + 0x560))(plVar2,aSStack_58,(char)plVar2[0x83],local_50);
  }
  else {
    pSVar3 = *(Size **)(this + 0x4f8);
                    /* catch() { ... } // from try @ 00dcbae8 with catch @ 00dcc9d8 */
                    /* catch() { ... } // from try @ 00dcc400 with catch @ 00dcc9dc */
    Size::Size(aSStack_58,fVar6,*(float *)(this + 0x84));
                    /* catch() { ... } // from try @ 00dcc3a0 with catch @ 00dcc9e0 */
                    /* catch() { ... } // from try @ 00dcbf50 with catch @ 00dcc9e4 */
                    /* catch() { ... } // from try @ 00dcbd08 with catch @ 00dcc9e8 */
    Scale9Sprite::setPreferredSize(pSVar3);
                    /* catch() { ... } // from try @ 00dcbcac with catch @ 00dcc9ec */
  }
                    /* catch() { ... } // from try @ 00dcb2dc with catch @ 00dcca2c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00dcb2cc with catch @ 00dcca3c */
                    /* catch() { ... } // from try @ 00dcb2bc with catch @ 00dcca4c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

