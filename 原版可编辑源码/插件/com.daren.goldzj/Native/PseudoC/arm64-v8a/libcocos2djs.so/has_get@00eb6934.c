
/* v8::PropertyDescriptor::has_get() const */

bool __thiscall v8::PropertyDescriptor::has_get(PropertyDescriptor *this)

{
  return *(long *)(*(long *)this + 0x10) != 0;
}

