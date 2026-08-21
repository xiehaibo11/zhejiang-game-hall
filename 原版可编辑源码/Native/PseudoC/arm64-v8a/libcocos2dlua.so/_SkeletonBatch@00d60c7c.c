
/* spine::SkeletonBatch::~SkeletonBatch() */

void __thiscall spine::SkeletonBatch::~SkeletonBatch(SkeletonBatch *this)

{
  ~SkeletonBatch(this);
  operator_delete(this);
  return;
}

