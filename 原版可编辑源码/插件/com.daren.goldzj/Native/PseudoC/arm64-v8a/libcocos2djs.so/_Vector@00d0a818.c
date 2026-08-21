
/* spine::Vector<spine::Vector<spine::Skin::AttachmentMap::Entry> >::~Vector() */

void __thiscall
spine::Vector<spine::Vector<spine::Skin::AttachmentMap::Entry>>::~Vector
          (Vector<spine::Vector<spine::Skin::AttachmentMap::Entry>> *this)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(this + 8);
  *(undefined ***)this = &PTR__Vector_01c8f678;
  if (uVar2 != 0) {
    uVar3 = 0;
    lVar4 = -1;
    do {
      (*(code *)**(undefined8 **)(*(long *)(this + 0x18) + (uVar2 + lVar4) * 0x20))();
      uVar2 = *(ulong *)(this + 8);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (uVar3 < uVar2);
  }
  lVar4 = *(long *)(this + 0x18);
  *(undefined8 *)(this + 8) = 0;
  if (lVar4 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar4,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

