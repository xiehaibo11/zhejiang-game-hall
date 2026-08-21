
/* spine::SkeletonBinary::DataInput::~DataInput() */

void __thiscall spine::SkeletonBinary::DataInput::~DataInput(DataInput *this)

{
  void *extraout_x1;
  
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

