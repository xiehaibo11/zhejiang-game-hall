
/* spine::RegionAttachment::~RegionAttachment() */

void __thiscall spine::RegionAttachment::~RegionAttachment(RegionAttachment *this)

{
  void *extraout_x1;
  
  ~RegionAttachment(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

