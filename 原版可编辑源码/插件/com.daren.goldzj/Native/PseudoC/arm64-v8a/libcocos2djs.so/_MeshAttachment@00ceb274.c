
/* non-virtual thunk to spine::MeshAttachment::~MeshAttachment() */

void __thiscall spine::MeshAttachment::~MeshAttachment(MeshAttachment *this)

{
  void *extraout_x1;
  
  ~MeshAttachment(this + -0x80);
  SpineObject::operator_delete((SpineObject *)(this + -0x80),extraout_x1);
  return;
}

