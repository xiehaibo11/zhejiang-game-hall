
/* v8::PropertyDescriptor::has_configurable() const */

byte __thiscall v8::PropertyDescriptor::has_configurable(PropertyDescriptor *this)

{
  return **(byte **)this >> 3 & 1;
}

