
/* v8::PropertyDescriptor::enumerable() const */

byte __thiscall v8::PropertyDescriptor::enumerable(PropertyDescriptor *this)

{
  return **(byte **)this & 1;
}

