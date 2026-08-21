
/* btDbvtBroadphase::~btDbvtBroadphase() */

void __thiscall btDbvtBroadphase::~btDbvtBroadphase(btDbvtBroadphase *this)

{
  *(undefined ***)this = &PTR__btDbvtBroadphase_017314c0;
  if (this[0x11c] != (btDbvtBroadphase)0x0) {
    (**(code **)**(undefined8 **)(this + 0xe0))();
    btAlignedFreeInternal(*(void **)(this + 0xe0));
  }
  btDbvt::~btDbvt((btDbvt *)(this + 0x68));
  btDbvt::~btDbvt((btDbvt *)(this + 8));
  return;
}

