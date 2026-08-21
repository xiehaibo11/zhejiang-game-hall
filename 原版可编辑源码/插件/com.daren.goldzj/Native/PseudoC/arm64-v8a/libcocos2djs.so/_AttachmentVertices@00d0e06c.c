
/* spine::AttachmentVertices::~AttachmentVertices() */

void __thiscall spine::AttachmentVertices::~AttachmentVertices(AttachmentVertices *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x10);
  *(undefined ***)this = &PTR__AttachmentVertices_01c8fad0;
  if (*plVar1 != 0) {
    operator_delete__((void *)(*plVar1 + -8));
    plVar1 = *(long **)(this + 0x10);
  }
  if (plVar1 != (long *)0x0) {
    operator_delete(plVar1);
  }
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 8));
    return;
  }
  return;
}

