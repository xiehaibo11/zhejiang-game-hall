
/* v8::internal::CodeCommentsIterator::CodeCommentsIterator(unsigned long, unsigned int) */

void __thiscall
v8::internal::CodeCommentsIterator::CodeCommentsIterator
          (CodeCommentsIterator *this,ulong param_1,uint param_2)

{
  *(ulong *)this = param_1;
  *(uint *)(this + 8) = param_2;
  *(ulong *)(this + 0x10) = param_1 + 4;
  return;
}

