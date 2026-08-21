
/* ClipperLib::clipperException::~clipperException() */

void __thiscall ClipperLib::clipperException::~clipperException(clipperException *this)

{
  *(undefined ***)this = &PTR__clipperException_01727ba8;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
                    /* try { // try from 01032b64 to 01132b8b has its CatchHandler @ 0103326c */
  std::bad_exception::~bad_exception((bad_exception *)this);
  return;
}

