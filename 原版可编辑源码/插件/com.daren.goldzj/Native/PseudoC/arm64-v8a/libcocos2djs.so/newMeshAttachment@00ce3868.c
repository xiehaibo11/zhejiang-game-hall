
/* spine::AtlasAttachmentLoader::newMeshAttachment(spine::Skin&, spine::String const&, spine::String
   const&) */

MeshAttachment * __thiscall
spine::AtlasAttachmentLoader::newMeshAttachment
          (AtlasAttachmentLoader *this,Skin *param_1,String *param_2,String *param_3)

{
  long lVar1;
  MeshAttachment *this_00;
  undefined8 uVar2;
  
  lVar1 = Atlas::findRegion(*(Atlas **)(this + 8),param_3);
  if (lVar1 == 0) {
    this_00 = (MeshAttachment *)0x0;
  }
  else {
    this_00 = SpineObject::operator_new
                        (400,
                         "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/AtlasAttachmentLoader.cpp"
                         ,0x51);
    MeshAttachment::MeshAttachment(this_00,param_2);
    if (((*(code **)(this_00 + 0x90) != (code *)0x0) && (*(long *)(this_00 + 0x88) != 0)) &&
       (*(long *)(this_00 + 0x88) != lVar1)) {
      (**(code **)(this_00 + 0x90))();
    }
    *(long *)(this_00 + 0x88) = lVar1;
    *(undefined8 *)(this_00 + 0x90) = 0;
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(this_00 + 0x158) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(this_00 + 0x150) = uVar2;
    this_00[0x184] = *(MeshAttachment *)(lVar1 + 0x5c);
    *(undefined4 *)(this_00 + 0x188) = *(undefined4 *)(lVar1 + 0x60);
    *(undefined8 *)(this_00 + 0x98) = *(undefined8 *)(lVar1 + 0x48);
    uVar2 = NEON_scvtf(*(undefined8 *)(lVar1 + 0x30),4);
    *(undefined8 *)(this_00 + 0xa0) = uVar2;
    uVar2 = NEON_scvtf(*(undefined8 *)(lVar1 + 0x50),4);
    *(undefined8 *)(this_00 + 0xa8) = uVar2;
  }
  return this_00;
}

