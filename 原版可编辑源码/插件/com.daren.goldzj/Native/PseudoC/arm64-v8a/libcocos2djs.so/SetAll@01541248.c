
/* v8::internal::BoyerMoorePositionInfo::SetAll() */

void __thiscall v8::internal::BoyerMoorePositionInfo::SetAll(BoyerMoorePositionInfo *this)

{
  *(undefined4 *)(this + 0x14) = 3;
  if (*(int *)(this + 0x10) != 0x80) {
    *(undefined4 *)(this + 0x10) = 0x80;
    *(undefined8 *)this = 0xffffffffffffffff;
    *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  }
  return;
}

