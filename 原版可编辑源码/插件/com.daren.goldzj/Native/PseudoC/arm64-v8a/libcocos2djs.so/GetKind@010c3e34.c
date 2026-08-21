
/* v8::internal::FeedbackVector::GetKind(v8::internal::FeedbackSlot) const */

uint __thiscall v8::internal::FeedbackVector::GetKind(FeedbackVector *this,int param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this & 0xffffffff00000000;
  return *(uint *)((uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)this + 3)) + 0xb)) +
                   (long)((param_2 / 6) * 4) + 0xb) >> (ulong)((param_2 % 6) * 5 & 0x1f) & 0x1f;
}

