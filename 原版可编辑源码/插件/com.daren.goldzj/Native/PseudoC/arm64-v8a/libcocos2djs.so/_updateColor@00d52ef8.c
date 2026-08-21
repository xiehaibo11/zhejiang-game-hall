
/* dragonBones::CCSlot::_updateColor() */

void __thiscall dragonBones::CCSlot::_updateColor(CCSlot *this)

{
  this[0x1f0] = SUB41((int)(*(float *)(this + 0xa8) * 255.0),0);
  this[0x1f2] = SUB41((int)(*(float *)(this + 0xb0) * 255.0),0);
  this[0x1f1] = SUB41((int)(*(float *)(this + 0xac) * 255.0),0);
  this[499] = SUB41((int)(*(float *)(this + 0xa4) * 255.0),0);
  return;
}

