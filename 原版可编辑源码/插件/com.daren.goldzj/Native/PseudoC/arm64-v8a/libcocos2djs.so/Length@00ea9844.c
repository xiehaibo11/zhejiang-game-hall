
/* v8::PrimitiveArray::Length() const */

int __thiscall v8::PrimitiveArray::Length(PrimitiveArray *this)

{
  return *(int *)(*(long *)this + 3) >> 1;
}

