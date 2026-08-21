
/* spine::SkeletonJson::SkeletonJson(spine::AttachmentLoader*) */

void __thiscall spine::SkeletonJson::SkeletonJson(SkeletonJson *this,AttachmentLoader *param_1)

{
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x34] = (SkeletonJson)0x0;
  *(undefined ***)this = &PTR__SkeletonJson_01c8f560;
  *(AttachmentLoader **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x10) = &PTR__Vector_01c8f3d8;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)(this + 0x38) = &PTR__String_01c67868;
  return;
}

