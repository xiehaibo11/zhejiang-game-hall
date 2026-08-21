
/* non-virtual thunk to spine::RegionAttachment::~RegionAttachment() */

void __thiscall spine::RegionAttachment::~RegionAttachment(RegionAttachment *this)

{
  void *extraout_x1;
  
  ~RegionAttachment(this + -0x28);
  SpineObject::operator_delete((SpineObject *)(this + -0x28),extraout_x1);
  return;
}

