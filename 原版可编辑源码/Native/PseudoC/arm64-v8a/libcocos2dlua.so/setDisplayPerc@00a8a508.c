
/* fairygui::GScrollBar::setDisplayPerc(float) */

void __thiscall fairygui::GScrollBar::setDisplayPerc(GScrollBar *this,float param_1)

{
                    /* try { // try from 00a8a50c to 00b8a537 has its CatchHandler @ 00a8a1d0 */
  if (this[0x2b0] == (GScrollBar)0x0) {
    if (this[0x2b8] == (GScrollBar)0x0) {
      GObject::setSize(*(GObject **)(this + 0x288),
                       (float)(int)(*(float *)(*(long *)(this + 0x2a0) + 200) * param_1),
                       *(float *)(*(GObject **)(this + 0x288) + 0xd4),false);
    }
    GObject::setX(*(GObject **)(this + 0x288),
                  (float)(int)(*(float *)(*(long *)(this + 0x2a0) + 0xc0) +
                              (*(float *)(*(long *)(this + 0x2a0) + 200) -
                              *(float *)(*(GObject **)(this + 0x288) + 200)) *
                              *(float *)(this + 0x2b4)));
  }
  else {
    if (this[0x2b8] == (GScrollBar)0x0) {
                    /* try { // try from 00a8a538 to 00b8a54b has its CatchHandler @ 00a8a630 */
      GObject::setSize(*(GObject **)(this + 0x288),*(float *)(*(GObject **)(this + 0x288) + 0xd0),
                       (float)(int)(*(float *)(*(long *)(this + 0x2a0) + 0xcc) * param_1),false);
    }
                    /* try { // try from 00a8a55c to 00b8a56f has its CatchHandler @ 00a8a640 */
                    /* try { // try from 00a8a574 to 00b8a587 has its CatchHandler @ 00a8a644 */
    GObject::setY(*(GObject **)(this + 0x288),
                  (float)(int)(*(float *)(*(long *)(this + 0x2a0) + 0xc4) +
                              (*(float *)(*(long *)(this + 0x2a0) + 0xcc) -
                              *(float *)(*(GObject **)(this + 0x288) + 0xcc)) *
                              *(float *)(this + 0x2b4)));
  }
                    /* try { // try from 00a8a5dc to 00b8a5e3 has its CatchHandler @ 00a8a62c */
                    /* try { // try from 00a8a5e8 to 00b8a5ef has its CatchHandler @ 00a8a61c */
  GObject::setVisible(*(GObject **)(this + 0x288),param_1 != 0.0 && param_1 != 1.0);
  return;
}

