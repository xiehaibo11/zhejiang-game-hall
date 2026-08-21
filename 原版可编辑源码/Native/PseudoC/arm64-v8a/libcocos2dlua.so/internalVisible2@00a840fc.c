
/* fairygui::GObject::internalVisible2() const */

undefined8 __thiscall fairygui::GObject::internalVisible2(GObject *this)

{
  GObject GVar1;
  
  GVar1 = this[0xf4];
  while( true ) {
    if (GVar1 == (GObject)0x0) {
      return 0;
    }
    this = *(GObject **)(this + 0x128);
    if (this == (GObject *)0x0) break;
    GVar1 = this[0xf4];
  }
  return 1;
}

