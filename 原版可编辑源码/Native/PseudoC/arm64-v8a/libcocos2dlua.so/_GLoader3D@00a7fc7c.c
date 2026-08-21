
/* fairygui::GLoader3D::~GLoader3D() */

void __thiscall fairygui::GLoader3D::~GLoader3D(GLoader3D *this)

{
  GLoader3D GVar1;
  
                    /* try { // try from 00a7fc94 to 00b7fccf has its CatchHandler @ 00a7fdd8 */
  *(undefined ***)this = &PTR__GLoader3D_016a5f28;
  if (*(Ref **)(this + 0x260) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x260));
  }
  if (*(Ref **)(this + 600) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 600));
  }
  if (((byte)this[0x238] & 1) == 0) {
    GVar1 = this[0x220];
  }
  else {
    operator_delete(*(void **)(this + 0x248));
    GVar1 = this[0x220];
  }
  if (((byte)GVar1 & 1) == 0) {
    GVar1 = this[0x1d8];
  }
  else {
    operator_delete(*(void **)(this + 0x230));
    GVar1 = this[0x1d8];
  }
  if (((byte)GVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x1e8));
  }
                    /* try { // try from 00a7fcdc to 00b7fd37 has its CatchHandler @ 00a7fddc */
  GObject::~GObject((GObject *)this);
  return;
}

