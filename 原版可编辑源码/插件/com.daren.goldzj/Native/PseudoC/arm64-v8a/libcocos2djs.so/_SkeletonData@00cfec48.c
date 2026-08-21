
/* spine::SkeletonData::~SkeletonData() */

void __thiscall spine::SkeletonData::~SkeletonData(SkeletonData *this)

{
  void *extraout_x1;
  
  ~SkeletonData(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

