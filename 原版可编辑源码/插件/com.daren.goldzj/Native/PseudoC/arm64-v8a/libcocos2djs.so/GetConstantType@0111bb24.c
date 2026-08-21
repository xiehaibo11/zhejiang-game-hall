
/* v8::internal::PropertyCell::GetConstantType() */

uint __thiscall v8::internal::PropertyCell::GetConstantType(PropertyCell *this)

{
  return *(uint *)(*(long *)this + 0xb) & 1;
}

