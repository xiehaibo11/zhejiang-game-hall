
/* cocosbuilder::CCBSequenceProperty::getName() */

CCBSequenceProperty * __thiscall
cocosbuilder::CCBSequenceProperty::getName(CCBSequenceProperty *this)

{
  if (((byte)this[0x28] & 1) == 0) {
    return this + 0x29;
  }
  return *(CCBSequenceProperty **)(this + 0x38);
}

