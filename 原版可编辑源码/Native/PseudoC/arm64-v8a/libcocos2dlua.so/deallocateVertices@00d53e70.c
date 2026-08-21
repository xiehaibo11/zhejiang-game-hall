
/* spine::SkeletonTwoColorBatch::deallocateVertices(unsigned int) */

void __thiscall
spine::SkeletonTwoColorBatch::deallocateVertices(SkeletonTwoColorBatch *this,uint param_1)

{
  *(uint *)(this + 0x40) = *(int *)(this + 0x40) - param_1;
  return;
}

