
/* ClipperLib::clipperException::what() const */

clipperException * __thiscall ClipperLib::clipperException::what(clipperException *this)

{
  if (((byte)this[8] & 1) == 0) {
    return this + 9;
  }
  return *(clipperException **)(this + 0x18);
}

