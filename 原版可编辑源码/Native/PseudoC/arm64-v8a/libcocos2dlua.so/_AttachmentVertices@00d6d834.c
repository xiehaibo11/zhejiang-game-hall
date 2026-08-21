
/* spine::AttachmentVertices::~AttachmentVertices() */

void __thiscall spine::AttachmentVertices::~AttachmentVertices(AttachmentVertices *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  *(undefined ***)this = &PTR__AttachmentVertices_016d5f48;
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete__((void *)*puVar1);
    puVar1 = *(undefined8 **)(this + 0x10);
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  operator_delete(this);
  return;
}

