
/* v8::internal::interpreter::JumpTableTargetOffsets::iterator::TEMPNAMEPLACEHOLDERVALUE() */

undefined8 __thiscall
v8::internal::interpreter::JumpTableTargetOffsets::iterator::operator*(iterator *this)

{
  return CONCAT44(*(int *)(*(long *)this + 8) + (*(int *)(this + 8) >> 1) +
                  *(int *)(*(long *)this + 0x10),*(undefined4 *)(this + 0x10));
}

