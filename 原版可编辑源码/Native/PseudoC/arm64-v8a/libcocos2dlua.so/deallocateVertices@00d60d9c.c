
/* spine::SkeletonBatch::deallocateVertices(unsigned int) */

void __thiscall spine::SkeletonBatch::deallocateVertices(SkeletonBatch *this,uint param_1)

{
  *(uint *)(this + 0x40) = *(int *)(this + 0x40) - param_1;
  return;
}

