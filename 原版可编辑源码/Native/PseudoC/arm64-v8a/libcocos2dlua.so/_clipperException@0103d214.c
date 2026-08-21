
/* ClipperLib::clipperException::~clipperException() */

void __thiscall ClipperLib::clipperException::~clipperException(clipperException *this)

{
                    /* catch() { ... } // from try @ 0103cf50 with catch @ 0103d214 */
  *(undefined ***)this = &PTR__clipperException_01727ba8;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  std::bad_exception::~bad_exception((bad_exception *)this);
  operator_delete(this);
  return;
}

