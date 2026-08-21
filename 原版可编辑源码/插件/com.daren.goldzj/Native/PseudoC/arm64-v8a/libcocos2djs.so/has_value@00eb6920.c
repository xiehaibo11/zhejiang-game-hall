
/* v8::PropertyDescriptor::has_value() const */

bool __thiscall v8::PropertyDescriptor::has_value(PropertyDescriptor *this)

{
  return *(long *)(*(long *)this + 8) != 0;
}

