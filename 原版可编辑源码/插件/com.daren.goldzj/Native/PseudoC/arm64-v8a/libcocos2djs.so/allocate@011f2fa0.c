
/* v8::internal::FixedStringAllocator::allocate(unsigned int) */

undefined8 __thiscall
v8::internal::FixedStringAllocator::allocate(FixedStringAllocator *this,uint param_1)

{
  if (param_1 <= *(uint *)(this + 0x10)) {
    return *(undefined8 *)(this + 8);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","bytes <= length_");
}

