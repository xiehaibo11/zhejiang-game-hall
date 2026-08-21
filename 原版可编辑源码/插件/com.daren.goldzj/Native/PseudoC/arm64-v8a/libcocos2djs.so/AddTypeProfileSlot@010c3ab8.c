
/* v8::internal::FeedbackVectorSpec::AddTypeProfileSlot() */

ulong __thiscall v8::internal::FeedbackVectorSpec::AddTypeProfileSlot(FeedbackVectorSpec *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)(this + 8);
  append(this,0x12);
  if ((int)(lVar2 - lVar1) == 0) {
    return lVar2 - lVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",&DAT_019d6826);
}

