
/* spine::Skin::AttachmentMap::~AttachmentMap() */

void __thiscall spine::Skin::AttachmentMap::~AttachmentMap(AttachmentMap *this)

{
  long *plVar1;
  void *extraout_x1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(this + 0x10);
  *(undefined ***)(this + 8) = &PTR__Vector_01c8f678;
  *(undefined ***)this = &PTR__AttachmentMap_01c8f608;
  if (uVar2 != 0) {
    uVar3 = 0;
    lVar4 = -1;
    do {
      (*(code *)**(undefined8 **)(*(long *)(this + 0x20) + (uVar2 + lVar4) * 0x20))();
      uVar2 = *(ulong *)(this + 0x10);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar3 < uVar2);
  }
  lVar4 = *(long *)(this + 0x20);
  *(undefined8 *)(this + 0x10) = 0;
  if (lVar4 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar4,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 8));
  SpineObject::~SpineObject((SpineObject *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

