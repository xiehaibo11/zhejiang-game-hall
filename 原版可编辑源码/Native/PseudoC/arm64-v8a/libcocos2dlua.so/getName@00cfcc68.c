
/* cocosbuilder::CCBSequence::getName() */

CCBSequence * __thiscall cocosbuilder::CCBSequence::getName(CCBSequence *this)

{
  if (((byte)this[0x28] & 1) == 0) {
    return this + 0x29;
  }
  return *(CCBSequence **)(this + 0x38);
}

