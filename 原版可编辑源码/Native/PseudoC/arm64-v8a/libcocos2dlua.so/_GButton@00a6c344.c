
/* WARNING: Type propagation algorithm not settling */
/* fairygui::GButton::~GButton() */

void __thiscall fairygui::GButton::~GButton(GButton *this)

{
  GButton GVar1;
  
  *(undefined ***)this = &PTR__GButton_016a4e30;
  if (((byte)this[800] & 1) == 0) {
    GVar1 = this[0x308];
  }
  else {
    operator_delete(*(void **)(this + 0x330));
    GVar1 = this[0x308];
  }
  if (((byte)GVar1 & 1) == 0) {
    GVar1 = this[0x2f0];
  }
  else {
    operator_delete(*(void **)(this + 0x318));
    GVar1 = this[0x2f0];
  }
  if (((byte)GVar1 & 1) == 0) {
    GVar1 = this[0x2d8];
  }
  else {
    operator_delete(*(void **)(this + 0x300));
    GVar1 = this[0x2d8];
  }
  if (((byte)GVar1 & 1) == 0) {
    GVar1 = this[0x2c0];
  }
  else {
    operator_delete(*(void **)(this + 0x2e8));
    GVar1 = this[0x2c0];
  }
  if (((byte)GVar1 & 1) == 0) {
    GVar1 = this[0x2a8];
  }
  else {
    operator_delete(*(void **)(this + 0x2d0));
    GVar1 = this[0x2a8];
  }
  if (((byte)GVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x2b8));
  }
  GComponent::~GComponent((GComponent *)this);
  return;
}

