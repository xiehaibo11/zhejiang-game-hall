
/* cocostudio::ActionObject::getName() */

ActionObject * __thiscall cocostudio::ActionObject::getName(ActionObject *this)

{
  if (((byte)this[0x40] & 1) == 0) {
    return this + 0x41;
  }
  return *(ActionObject **)(this + 0x50);
}

