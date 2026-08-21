
/* v8::PropertyDescriptor::has_writable() const */

byte __thiscall v8::PropertyDescriptor::has_writable(PropertyDescriptor *this)

{
  return **(byte **)this >> 5 & 1;
}

