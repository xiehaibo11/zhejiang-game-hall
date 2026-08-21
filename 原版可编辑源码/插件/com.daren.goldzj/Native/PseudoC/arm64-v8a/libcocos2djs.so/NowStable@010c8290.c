
/* v8::internal::FieldType::NowStable() const */

bool __thiscall v8::internal::FieldType::NowStable(FieldType *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (((uVar1 & 1) != 0) &&
     (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0xa2)) {
    return (*(uint *)(uVar1 + 0xb) & 0x2000000) == 0;
  }
  return true;
}

