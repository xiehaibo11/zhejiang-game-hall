
/* spine::SkeletonData::~SkeletonData() */

void __thiscall spine::SkeletonData::~SkeletonData(SkeletonData *this)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar3 = *(ulong *)(this + 0x28);
  *(undefined ***)this = &PTR__SkeletonData_01c8f4f0;
  if (0 < (int)uVar3) {
    uVar6 = (long)(int)uVar3;
    do {
      uVar7 = uVar6 - 1;
      plVar2 = *(long **)(*(long *)(this + 0x38) + uVar7 * 8);
      uVar4 = uVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = *(ulong *)(this + 0x28);
      }
      uVar3 = uVar4 - 1;
      *(ulong *)(this + 0x28) = uVar3;
      if (uVar7 < uVar3) {
        do {
          lVar5 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x38) + lVar5);
          uVar8 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x38) + lVar5) = uVar8;
        } while (uVar4 != uVar6);
      }
      uVar6 = uVar7;
    } while (0 < (long)uVar7);
  }
  uVar3 = *(ulong *)(this + 0x48);
  if (0 < (int)uVar3) {
    uVar6 = (long)(int)uVar3;
    do {
      uVar7 = uVar6 - 1;
      plVar2 = *(long **)(*(long *)(this + 0x58) + uVar7 * 8);
      uVar4 = uVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = *(ulong *)(this + 0x48);
      }
      uVar3 = uVar4 - 1;
      *(ulong *)(this + 0x48) = uVar3;
      if (uVar7 < uVar3) {
        do {
          lVar5 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x58) + lVar5);
          uVar8 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x58) + lVar5) = uVar8;
        } while (uVar4 != uVar6);
      }
      uVar6 = uVar7;
    } while (0 < (long)uVar7);
  }
  uVar3 = *(ulong *)(this + 0x68);
  if (0 < (int)uVar3) {
    uVar6 = (long)(int)uVar3;
    do {
      uVar7 = uVar6 - 1;
      plVar2 = *(long **)(*(long *)(this + 0x78) + uVar7 * 8);
      uVar4 = uVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = *(ulong *)(this + 0x68);
      }
      uVar3 = uVar4 - 1;
      *(ulong *)(this + 0x68) = uVar3;
      if (uVar7 < uVar3) {
        do {
          lVar5 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x78) + lVar5);
          uVar8 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x78) + lVar5) = uVar8;
        } while (uVar4 != uVar6);
      }
      uVar6 = uVar7;
    } while (0 < (long)uVar7);
  }
  uVar3 = *(ulong *)(this + 0x90);
  *(undefined8 *)(this + 0x80) = 0;
  if (0 < (int)uVar3) {
    uVar6 = (long)(int)uVar3;
    do {
      uVar7 = uVar6 - 1;
      plVar2 = *(long **)(*(long *)(this + 0xa0) + uVar7 * 8);
      uVar4 = uVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = *(ulong *)(this + 0x90);
      }
      uVar3 = uVar4 - 1;
      *(ulong *)(this + 0x90) = uVar3;
      if (uVar7 < uVar3) {
        do {
          lVar5 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0xa0) + lVar5);
          uVar8 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0xa0) + lVar5) = uVar8;
        } while (uVar4 != uVar6);
      }
      uVar6 = uVar7;
    } while (0 < (long)uVar7);
  }
  uVar3 = *(ulong *)(this + 0xb0);
  if (0 < (int)uVar3) {
    uVar6 = (long)(int)uVar3;
    do {
      uVar7 = uVar6 - 1;
      plVar2 = *(long **)(*(long *)(this + 0xc0) + uVar7 * 8);
      uVar4 = uVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = *(ulong *)(this + 0xb0);
      }
      uVar3 = uVar4 - 1;
      *(ulong *)(this + 0xb0) = uVar3;
      if (uVar7 < uVar3) {
        do {
          lVar5 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0xc0) + lVar5);
          uVar8 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0xc0) + lVar5) = uVar8;
        } while (uVar4 != uVar6);
      }
      uVar6 = uVar7;
    } while (0 < (long)uVar7);
  }
  uVar3 = *(ulong *)(this + 0xd0);
  if (0 < (int)uVar3) {
    uVar6 = (long)(int)uVar3;
    do {
      uVar7 = uVar6 - 1;
      plVar2 = *(long **)(*(long *)(this + 0xe0) + uVar7 * 8);
      uVar4 = uVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = *(ulong *)(this + 0xd0);
      }
      uVar3 = uVar4 - 1;
      *(ulong *)(this + 0xd0) = uVar3;
      if (uVar7 < uVar3) {
        do {
          lVar5 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0xe0) + lVar5);
          uVar8 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0xe0) + lVar5) = uVar8;
        } while (uVar4 != uVar6);
      }
      uVar6 = uVar7;
    } while (0 < (long)uVar7);
  }
  uVar3 = *(ulong *)(this + 0xf0);
  if (0 < (int)uVar3) {
    uVar6 = (long)(int)uVar3;
    do {
      uVar7 = uVar6 - 1;
      plVar2 = *(long **)(*(long *)(this + 0x100) + uVar7 * 8);
      uVar4 = uVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = *(ulong *)(this + 0xf0);
      }
      uVar3 = uVar4 - 1;
      *(ulong *)(this + 0xf0) = uVar3;
      if (uVar7 < uVar3) {
        do {
          lVar5 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x100) + lVar5);
          uVar8 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x100) + lVar5) = uVar8;
        } while (uVar4 != uVar6);
      }
      uVar6 = uVar7;
    } while (0 < (long)uVar7);
  }
  uVar3 = *(ulong *)(this + 0x110);
  if (0 < (int)uVar3) {
    uVar6 = (long)(int)uVar3;
    do {
      uVar7 = uVar6 - 1;
      plVar2 = *(long **)(*(long *)(this + 0x120) + uVar7 * 8);
      uVar4 = uVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = *(ulong *)(this + 0x110);
      }
      uVar3 = uVar4 - 1;
      *(ulong *)(this + 0x110) = uVar3;
      if (uVar7 < uVar3) {
        do {
          lVar5 = uVar6 * 8;
          uVar6 = uVar6 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x120) + lVar5);
          uVar8 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x120) + lVar5) = uVar8;
        } while (uVar4 != uVar6);
      }
      uVar6 = uVar7;
    } while (0 < (long)uVar7);
  }
  if (*(long *)(this + 0x170) != 0) {
    uVar3 = 0;
    do {
      uVar8 = *(undefined8 *)(*(long *)(this + 0x180) + uVar3 * 8);
      plVar2 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar2 + 0x28))
                (plVar2,uVar8,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonData.cpp",
                 0x4b);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ulong *)(this + 0x170));
  }
  lVar5 = *(long *)(this + 0x1b8);
  *(undefined ***)(this + 0x1a8) = &PTR__String_01c67868;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x1a8));
  lVar5 = *(long *)(this + 0x1a0);
  *(undefined ***)(this + 400) = &PTR__String_01c67868;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 400));
  lVar5 = *(long *)(this + 0x180);
  *(undefined ***)(this + 0x168) = &PTR__Vector_01c8f528;
  *(undefined8 *)(this + 0x170) = 0;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x168));
  lVar5 = *(long *)(this + 0x160);
  *(undefined ***)(this + 0x150) = &PTR__String_01c67868;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x150));
  lVar5 = *(long *)(this + 0x148);
  *(undefined ***)(this + 0x138) = &PTR__String_01c67868;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x138));
  lVar5 = *(long *)(this + 0x120);
  *(undefined ***)(this + 0x108) = &PTR__Vector_01c8d358;
  *(undefined8 *)(this + 0x110) = 0;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x108));
  lVar5 = *(long *)(this + 0x100);
  *(undefined ***)(this + 0xe8) = &PTR__Vector_01c8d3c8;
  *(undefined8 *)(this + 0xf0) = 0;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xe8));
  lVar5 = *(long *)(this + 0xe0);
  *(undefined ***)(this + 200) = &PTR__Vector_01c8d2e8;
  *(undefined8 *)(this + 0xd0) = 0;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 200));
  lVar5 = *(long *)(this + 0xc0);
  *(undefined ***)(this + 0xa8) = &PTR__Vector_01c8d2b0;
  *(undefined8 *)(this + 0xb0) = 0;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xa8));
  lVar5 = *(long *)(this + 0xa0);
  *(undefined ***)(this + 0x88) = &PTR__Vector_01c8d320;
  *(undefined8 *)(this + 0x90) = 0;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x88));
  lVar5 = *(long *)(this + 0x78);
  *(undefined ***)(this + 0x60) = &PTR__Vector_01c8d278;
  *(undefined8 *)(this + 0x68) = 0;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x60));
  lVar5 = *(long *)(this + 0x58);
  *(undefined ***)(this + 0x40) = &PTR__Vector_01c8d390;
  *(undefined8 *)(this + 0x48) = 0;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x40));
  lVar5 = *(long *)(this + 0x38);
  *(undefined ***)(this + 0x20) = &PTR__Vector_01c8d0f0;
  *(undefined8 *)(this + 0x28) = 0;
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x20));
  *(undefined ***)(this + 8) = &PTR__String_01c67868;
  lVar5 = *(long *)(this + 0x18);
  if (lVar5 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,lVar5,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)(this + 8));
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

