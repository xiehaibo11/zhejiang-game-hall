
/* spine::AtlasAttachmentLoader::newRegionAttachment(spine::Skin&, spine::String const&,
   spine::String const&) */

RegionAttachment * __thiscall
spine::AtlasAttachmentLoader::newRegionAttachment
          (AtlasAttachmentLoader *this,Skin *param_1,String *param_2,String *param_3)

{
  long lVar1;
  RegionAttachment *this_00;
  undefined8 uVar2;
  
  lVar1 = Atlas::findRegion(*(Atlas **)(this + 8),param_3);
  if (lVar1 == 0) {
    this_00 = (RegionAttachment *)0x0;
  }
  else {
    this_00 = SpineObject::operator_new
                        (0xf8,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/AtlasAttachmentLoader.cpp"
                         ,0x3b);
    RegionAttachment::RegionAttachment(this_00,param_2);
    if (((*(code **)(this_00 + 0x38) != (code *)0x0) && (*(long *)(this_00 + 0x30) != 0)) &&
       (*(long *)(this_00 + 0x30) != lVar1)) {
      (**(code **)(this_00 + 0x38))();
    }
    *(long *)(this_00 + 0x30) = lVar1;
    *(undefined8 *)(this_00 + 0x38) = 0;
    RegionAttachment::setUVs
              (this_00,*(float *)(lVar1 + 0x38),*(float *)(lVar1 + 0x3c),*(float *)(lVar1 + 0x40),
               *(float *)(lVar1 + 0x44),*(bool *)(lVar1 + 0x5c));
    *(undefined8 *)(this_00 + 0x5c) = *(undefined8 *)(lVar1 + 0x48);
    uVar2 = NEON_scvtf(*(undefined8 *)(lVar1 + 0x30),4);
    *(undefined8 *)(this_00 + 100) = uVar2;
    uVar2 = NEON_scvtf(*(undefined8 *)(lVar1 + 0x50),4);
    *(undefined8 *)(this_00 + 0x6c) = uVar2;
  }
  return this_00;
}

