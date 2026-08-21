
/* fairygui::GBasicTextField::handleSizeChanged() */

void __thiscall fairygui::GBasicTextField::handleSizeChanged(GBasicTextField *this)

{
  long lVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 00a8ccd4 with catch @ 00a8cd18 */
  if (((this[0x208] == (GBasicTextField)0x0) && (*(int *)(this + 500) != 1)) &&
     (cocos2d::Label::setDimensions
                (*(Label **)(this + 0x200),*(float *)(this + 200),*(float *)(this + 0xcc)),
     *(int *)(this + 500) == 2)) {
    if (((byte)this[0x1d8] & 1) == 0) {
      if ((byte)this[0x1d8] >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(this + 0x1e0) == 0) {
      return;
    }
                    /* try { // try from 00a8cd34 to 00b8cd83 has its CatchHandler @ 00a8cd34
                       catch() { ... } // from try @ 00a8cd34 with catch @ 00a8cd34
                       catch() { ... } // from try @ 00a8cdbc with catch @ 00a8cd34
                       catch() { ... } // from try @ 00a8ce00 with catch @ 00a8cd34 */
    fVar2 = *(float *)(this + 200);
    lVar1 = (**(code **)(**(long **)(this + 0x200) + 0x168))();
    GObject::setSizeDirectly((GObject *)this,fVar2,*(float *)(lVar1 + 4));
    return;
  }
  return;
}

