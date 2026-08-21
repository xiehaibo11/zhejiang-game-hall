
/* v8::PropertyDescriptor::writable() const */

byte __thiscall v8::PropertyDescriptor::writable(PropertyDescriptor *this)

{
  return **(byte **)this >> 4 & 1;
}

