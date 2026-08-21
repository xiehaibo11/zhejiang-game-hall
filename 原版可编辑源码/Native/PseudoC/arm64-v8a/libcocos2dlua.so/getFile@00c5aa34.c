
/* cocostudio::ComAudio::getFile() */

ComAudio * __thiscall cocostudio::ComAudio::getFile(ComAudio *this)

{
  if (((byte)this[0x58] & 1) == 0) {
    return this + 0x59;
  }
  return *(ComAudio **)(this + 0x68);
}

