
/* fairygui::GRichTextField::handleSizeChanged() */

void __thiscall fairygui::GRichTextField::handleSizeChanged(GRichTextField *this)

{
  long lVar1;
  float fVar2;
  
                    /* try { // try from 00a881e4 to 00b8825b has its CatchHandler @ 00a881e4
                       catch() { ... } // from try @ 00a881e4 with catch @ 00a881e4
                       catch() { ... } // from try @ 00a883c4 with catch @ 00a881e4
                       catch() { ... } // from try @ 00a885bc with catch @ 00a881e4
                       catch() { ... } // from try @ 00a88768 with catch @ 00a881e4
                       catch() { ... } // from try @ 00a88940 with catch @ 00a881e4
                       catch() { ... } // from try @ 00a88ae8 with catch @ 00a881e4
                       catch() { ... } // from try @ 00a88d3c with catch @ 00a881e4
                       catch() { ... } // from try @ 00a88f5c with catch @ 00a881e4
                       catch() { ... } // from try @ 00a89188 with catch @ 00a881e4
                       catch() { ... } // from try @ 00a89404 with catch @ 00a881e4
                       catch() { ... } // from try @ 00a895f4 with catch @ 00a881e4 */
  if (((this[0x208] == (GRichTextField)0x0) && (*(int *)(this + 500) != 1)) &&
     (FUIRichText::setDimensions
                (*(FUIRichText **)(this + 0x200),*(float *)(this + 200),*(float *)(this + 0xcc)),
     *(int *)(this + 500) == 2)) {
    if (((byte)this[0x1d8] & 1) == 0) {
      if ((byte)this[0x1d8] >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(this + 0x1e0) == 0) {
      return;
    }
    fVar2 = *(float *)(this + 200);
    lVar1 = (**(code **)(**(long **)(this + 0x200) + 0x168))();
                    /* try { // try from 00a8825c to 00b882ff has its CatchHandler @ 00a89680 */
    GObject::setSizeDirectly((GObject *)this,fVar2,*(float *)(lVar1 + 4));
    return;
  }
  return;
}

