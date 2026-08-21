
/* spine::Triangulator::~Triangulator() */

void __thiscall spine::Triangulator::~Triangulator(Triangulator *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar4 = *(ulong *)(this + 0x10);
  *(undefined ***)this = &PTR__Triangulator_01c91e88;
  if (0 < (int)uVar4) {
    uVar7 = (long)(int)uVar4;
    do {
      uVar8 = uVar7 - 1;
      plVar3 = *(long **)(*(long *)(this + 0x20) + uVar8 * 8);
      uVar5 = uVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = *(ulong *)(this + 0x10);
      }
      uVar4 = uVar5 - 1;
      *(ulong *)(this + 0x10) = uVar4;
      if (uVar8 < uVar4) {
        do {
          lVar6 = uVar7 * 8;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x20) + lVar6);
          uVar2 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x20) + lVar6) = uVar2;
        } while (uVar5 != uVar7);
      }
      uVar7 = uVar8;
    } while (0 < (long)uVar8);
  }
  uVar4 = *(ulong *)(this + 0x30);
  if (0 < (int)uVar4) {
    uVar7 = (long)(int)uVar4;
    do {
      uVar8 = uVar7 - 1;
      plVar3 = *(long **)(*(long *)(this + 0x40) + uVar8 * 8);
      uVar5 = uVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = *(ulong *)(this + 0x30);
      }
      uVar4 = uVar5 - 1;
      *(ulong *)(this + 0x30) = uVar4;
      if (uVar8 < uVar4) {
        do {
          lVar6 = uVar7 * 8;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x40) + lVar6);
          uVar2 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x40) + lVar6) = uVar2;
        } while (uVar5 != uVar7);
      }
      uVar7 = uVar8;
    } while (0 < (long)uVar8);
  }
  Pool<spine::Vector<int>>::~Pool((Pool<spine::Vector<int>> *)(this + 0xd0));
  Pool<spine::Vector<float>>::~Pool((Pool<spine::Vector<float>> *)(this + 0xa8));
  *(undefined ***)(this + 0x88) = &PTR__Vector_01c8e510;
  lVar6 = *(long *)(this + 0xa0);
  *(undefined8 *)(this + 0x90) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x88));
  *(undefined ***)(this + 0x68) = &PTR__Vector_01c91de0;
  lVar6 = *(long *)(this + 0x80);
  *(undefined8 *)(this + 0x70) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x68));
  *(undefined ***)(this + 0x48) = &PTR__Vector_01c8e510;
  lVar6 = *(long *)(this + 0x60);
  *(undefined8 *)(this + 0x50) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x48));
  lVar6 = *(long *)(this + 0x40);
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c91da8;
  *(undefined8 *)(this + 0x30) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x28));
  lVar6 = *(long *)(this + 0x20);
  *(undefined ***)(this + 8) = &PTR__Vector_01c91d70;
  *(undefined8 *)(this + 0x10) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 8));
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

