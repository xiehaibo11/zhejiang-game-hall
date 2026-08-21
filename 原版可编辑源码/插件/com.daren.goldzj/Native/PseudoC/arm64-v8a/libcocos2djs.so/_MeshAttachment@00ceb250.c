
/* spine::MeshAttachment::~MeshAttachment() */

void __thiscall spine::MeshAttachment::~MeshAttachment(MeshAttachment *this)

{
  void *extraout_x1;
  
  ~MeshAttachment(this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

