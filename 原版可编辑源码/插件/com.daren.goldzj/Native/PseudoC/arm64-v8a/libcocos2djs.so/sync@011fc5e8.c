
/* v8::internal::OFStreamBase::sync() */

undefined8 __thiscall v8::internal::OFStreamBase::sync(OFStreamBase *this)

{
  fflush(*(FILE **)(this + 0x40));
  return 0;
}

