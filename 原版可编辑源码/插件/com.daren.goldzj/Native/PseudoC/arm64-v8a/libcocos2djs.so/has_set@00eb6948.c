
/* v8::PropertyDescriptor::has_set() const */

bool __thiscall v8::PropertyDescriptor::has_set(PropertyDescriptor *this)

{
  return *(long *)(*(long *)this + 0x18) != 0;
}

