
/* v8::PropertyDescriptor::configurable() const */

byte __thiscall v8::PropertyDescriptor::configurable(PropertyDescriptor *this)

{
  return **(byte **)this >> 2 & 1;
}

