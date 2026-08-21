
/* spine::SkeletonClipping::~SkeletonClipping() */

void __thiscall spine::SkeletonClipping::~SkeletonClipping(SkeletonClipping *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x1b8);
  *(undefined ***)this = &PTR__SkeletonClipping_01c91d38;
  *(undefined ***)(this + 0x1a0) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x1a8) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x1a0));
  lVar2 = *(long *)(this + 0x198);
  *(undefined ***)(this + 0x180) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x188) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x180));
  lVar2 = *(long *)(this + 0x178);
  *(undefined ***)(this + 0x160) = &PTR__Vector_01c8d128;
  *(undefined8 *)(this + 0x168) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x160));
  lVar2 = *(long *)(this + 0x158);
  *(undefined ***)(this + 0x140) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x148) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x140));
  lVar2 = *(long *)(this + 0x138);
  *(undefined ***)(this + 0x120) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x128) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x120));
  lVar2 = *(long *)(this + 0x118);
  *(undefined ***)(this + 0x100) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x108) = 0;
  if (lVar2 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar1 + 0x28))
              (plVar1,lVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x100));
  Triangulator::~Triangulator((Triangulator *)(this + 8));
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

