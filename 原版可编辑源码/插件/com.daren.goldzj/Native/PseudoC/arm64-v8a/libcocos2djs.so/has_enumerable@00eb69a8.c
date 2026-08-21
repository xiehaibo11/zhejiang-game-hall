
/* v8::PropertyDescriptor::has_enumerable() const */

byte __thiscall v8::PropertyDescriptor::has_enumerable(PropertyDescriptor *this)

{
  return **(byte **)this >> 1 & 1;
}

