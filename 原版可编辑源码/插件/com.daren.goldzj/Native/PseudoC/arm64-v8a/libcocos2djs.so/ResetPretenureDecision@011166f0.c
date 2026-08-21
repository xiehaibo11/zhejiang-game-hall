
/* v8::internal::AllocationSite::ResetPretenureDecision() */

void __thiscall v8::internal::AllocationSite::ResetPretenureDecision(AllocationSite *this)

{
  *(uint *)(*(long *)this + 0xf) = *(uint *)(*(long *)this + 0xf) & 0xe3ffffff;
  *(uint *)(*(long *)this + 0xf) = *(uint *)(*(long *)this + 0xf) & 0xfc000000;
  *(undefined4 *)(*(long *)this + 0x13) = 0;
  return;
}

