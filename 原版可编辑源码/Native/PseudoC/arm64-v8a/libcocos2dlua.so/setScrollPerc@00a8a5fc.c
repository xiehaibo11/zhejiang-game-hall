
/* fairygui::GScrollBar::setScrollPerc(float) */

void __thiscall fairygui::GScrollBar::setScrollPerc(GScrollBar *this,float param_1)

{
  GObject *this_00;
  long lVar1;
  
                    /* try { // try from 00a8a600 to 00b8a607 has its CatchHandler @ 00a8a628 */
  this_00 = *(GObject **)(this + 0x288);
                    /* try { // try from 00a8a608 to 00b8a66f has its CatchHandler @ 00a8a1d0 */
  lVar1 = *(long *)(this + 0x2a0);
  *(float *)(this + 0x2b4) = param_1;
  if (this[0x2b0] != (GScrollBar)0x0) {
                    /* catch() { ... } // from try @ 00a8a2f8 with catch @ 00a8a61c
                       catch() { ... } // from try @ 00a8a5e8 with catch @ 00a8a61c */
                    /* catch() { ... } // from try @ 00a8a2bc with catch @ 00a8a620 */
                    /* catch() { ... } // from try @ 00a8a2ac with catch @ 00a8a624 */
                    /* catch() { ... } // from try @ 00a8a4dc with catch @ 00a8a628
                       catch() { ... } // from try @ 00a8a600 with catch @ 00a8a628 */
                    /* catch() { ... } // from try @ 00a8a3c8 with catch @ 00a8a62c
                       catch() { ... } // from try @ 00a8a5dc with catch @ 00a8a62c */
                    /* catch() { ... } // from try @ 00a8a228 with catch @ 00a8a630
                       catch() { ... } // from try @ 00a8a538 with catch @ 00a8a630 */
    GObject::setY(this_00,(float)(int)(*(float *)(lVar1 + 0xc4) +
                                      (*(float *)(lVar1 + 0xcc) - *(float *)(this_00 + 0xcc)) *
                                      param_1));
    return;
  }
                    /* catch() { ... } // from try @ 00a8a324 with catch @ 00a8a640
                       catch() { ... } // from try @ 00a8a55c with catch @ 00a8a640 */
                    /* catch() { ... } // from try @ 00a8a414 with catch @ 00a8a644
                       catch() { ... } // from try @ 00a8a574 with catch @ 00a8a644 */
  GObject::setX(this_00,(float)(int)(*(float *)(lVar1 + 0xc0) +
                                    (*(float *)(lVar1 + 200) - *(float *)(this_00 + 200)) * param_1)
               );
  return;
}

