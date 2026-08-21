
/* v8::internal::FeedbackVectorSpec::HasTypeProfileSlot() const */

bool __thiscall v8::internal::FeedbackVectorSpec::HasTypeProfileSlot(FeedbackVectorSpec *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 8) - (long)*(char **)this;
  if ((int)lVar1 < 1) {
    return false;
  }
  if (lVar1 != 0) {
    return **(char **)this == '\x12';
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

