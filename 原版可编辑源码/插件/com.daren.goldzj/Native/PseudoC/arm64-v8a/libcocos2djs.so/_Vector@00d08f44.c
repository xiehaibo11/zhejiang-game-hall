
/* spine::Vector<spine::Skin::AttachmentMap::Entry>::~Vector() */

void __thiscall
spine::Vector<spine::Skin::AttachmentMap::Entry>::~Vector
          (Vector<spine::Skin::AttachmentMap::Entry> *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  SpineObject *this_00;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(this + 8);
  *(undefined ***)this = &PTR__Vector_01c8f6b0;
  if (uVar2 != 0) {
    uVar4 = 0;
    lVar5 = -1;
    do {
      lVar3 = *(long *)(this + 0x18) + (uVar2 + lVar5) * 0x28;
      this_00 = (SpineObject *)(lVar3 + 8);
      *(undefined ***)this_00 = &PTR__String_01c67868;
      lVar3 = *(long *)(lVar3 + 0x18);
      if (lVar3 != 0) {
        plVar1 = (long *)SpineExtension::getInstance();
        (**(code **)(*plVar1 + 0x28))
                  (plVar1,lVar3,
                   "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                   0xc9);
      }
      SpineObject::~SpineObject(this_00);
      uVar2 = *(ulong *)(this + 8);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (uVar4 < uVar2);
  }
  lVar5 = *(long *)(this + 0x18);
  *(undefined8 *)(this + 8) = 0;
  if (lVar5 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

