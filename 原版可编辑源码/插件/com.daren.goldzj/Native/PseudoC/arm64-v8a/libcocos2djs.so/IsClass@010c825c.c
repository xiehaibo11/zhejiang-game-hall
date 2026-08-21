
/* v8::internal::FieldType::IsClass() const */

bool __thiscall v8::internal::FieldType::IsClass(FieldType *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return *(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0xa2;
}

