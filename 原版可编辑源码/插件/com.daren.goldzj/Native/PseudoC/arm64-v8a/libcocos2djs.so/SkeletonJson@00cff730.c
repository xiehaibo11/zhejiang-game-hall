
/* spine::SkeletonJson::SkeletonJson(spine::Atlas*) */

void __thiscall spine::SkeletonJson::SkeletonJson(SkeletonJson *this,Atlas *param_1)

{
  AtlasAttachmentLoader *this_00;
  
  *(undefined ***)this = &PTR__SkeletonJson_01c8f560;
  this_00 = SpineObject::operator_new
                      (0x10,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp"
                       ,0x53);
  AtlasAttachmentLoader::AtlasAttachmentLoader(this_00,param_1);
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  this[0x34] = (SkeletonJson)0x1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(AtlasAttachmentLoader **)(this + 8) = this_00;
  *(undefined ***)(this + 0x10) = &PTR__Vector_01c8f3d8;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)(this + 0x38) = &PTR__String_01c67868;
  return;
}

