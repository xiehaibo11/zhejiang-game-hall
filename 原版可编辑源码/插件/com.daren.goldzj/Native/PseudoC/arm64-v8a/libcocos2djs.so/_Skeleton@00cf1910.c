
/* spine::Skeleton::~Skeleton() */

void __thiscall spine::Skeleton::~Skeleton(Skeleton *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar4 = *(ulong *)(this + 0x18);
  *(undefined ***)this = &PTR__Skeleton_01c8f330;
  if (0 < (int)uVar4) {
    uVar7 = (long)(int)uVar4;
    do {
      uVar8 = uVar7 - 1;
      plVar3 = *(long **)(*(long *)(this + 0x28) + uVar8 * 8);
      uVar5 = uVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = *(ulong *)(this + 0x18);
      }
      uVar4 = uVar5 - 1;
      *(ulong *)(this + 0x18) = uVar4;
      if (uVar8 < uVar4) {
        do {
          lVar6 = uVar7 * 8;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x28) + lVar6);
          uVar2 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x28) + lVar6) = uVar2;
        } while (uVar5 != uVar7);
      }
      uVar7 = uVar8;
    } while (0 < (long)uVar8);
  }
  uVar4 = *(ulong *)(this + 0x38);
  if (0 < (int)uVar4) {
    uVar7 = (long)(int)uVar4;
    do {
      uVar8 = uVar7 - 1;
      plVar3 = *(long **)(*(long *)(this + 0x48) + uVar8 * 8);
      uVar5 = uVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = *(ulong *)(this + 0x38);
      }
      uVar4 = uVar5 - 1;
      *(ulong *)(this + 0x38) = uVar4;
      if (uVar8 < uVar4) {
        do {
          lVar6 = uVar7 * 8;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x48) + lVar6);
          uVar2 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x48) + lVar6) = uVar2;
        } while (uVar5 != uVar7);
      }
      uVar7 = uVar8;
    } while (0 < (long)uVar8);
  }
  uVar4 = *(ulong *)(this + 0x78);
  if (0 < (int)uVar4) {
    uVar7 = (long)(int)uVar4;
    do {
      uVar8 = uVar7 - 1;
      plVar3 = *(long **)(*(long *)(this + 0x88) + uVar8 * 8);
      uVar5 = uVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = *(ulong *)(this + 0x78);
      }
      uVar4 = uVar5 - 1;
      *(ulong *)(this + 0x78) = uVar4;
      if (uVar8 < uVar4) {
        do {
          lVar6 = uVar7 * 8;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x88) + lVar6);
          uVar2 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x88) + lVar6) = uVar2;
        } while (uVar5 != uVar7);
      }
      uVar7 = uVar8;
    } while (0 < (long)uVar8);
  }
  uVar4 = *(ulong *)(this + 0x98);
  if (0 < (int)uVar4) {
    uVar7 = (long)(int)uVar4;
    do {
      uVar8 = uVar7 - 1;
      plVar3 = *(long **)(*(long *)(this + 0xa8) + uVar8 * 8);
      uVar5 = uVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = *(ulong *)(this + 0x98);
      }
      uVar4 = uVar5 - 1;
      *(ulong *)(this + 0x98) = uVar4;
      if (uVar8 < uVar4) {
        do {
          lVar6 = uVar7 * 8;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0xa8) + lVar6);
          uVar2 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0xa8) + lVar6) = uVar2;
        } while (uVar5 != uVar7);
      }
      uVar7 = uVar8;
    } while (0 < (long)uVar8);
  }
  uVar4 = *(ulong *)(this + 0xb8);
  if (0 < (int)uVar4) {
    uVar7 = (long)(int)uVar4;
    do {
      uVar8 = uVar7 - 1;
      plVar3 = *(long **)(*(long *)(this + 200) + uVar8 * 8);
      uVar5 = uVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = *(ulong *)(this + 0xb8);
      }
      uVar4 = uVar5 - 1;
      *(ulong *)(this + 0xb8) = uVar4;
      if (uVar8 < uVar4) {
        do {
          lVar6 = uVar7 * 8;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 200) + lVar6);
          uVar2 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 200) + lVar6) = uVar2;
        } while (uVar5 != uVar7);
      }
      uVar7 = uVar8;
    } while (0 < (long)uVar8);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x118));
  *(undefined ***)(this + 0xf0) = &PTR__Vector_01c8d080;
  lVar6 = *(long *)(this + 0x108);
  *(undefined8 *)(this + 0xf8) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xf0));
  *(undefined ***)(this + 0xd0) = &PTR__Vector_01c8d1d0;
  lVar6 = *(long *)(this + 0xe8);
  *(undefined8 *)(this + 0xd8) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xd0));
  lVar6 = *(long *)(this + 200);
  *(undefined ***)(this + 0xb0) = &PTR__Vector_01c8d208;
  *(undefined8 *)(this + 0xb8) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0xb0));
  lVar6 = *(long *)(this + 0xa8);
  *(undefined ***)(this + 0x90) = &PTR__Vector_01c8d240;
  *(undefined8 *)(this + 0x98) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x90));
  lVar6 = *(long *)(this + 0x88);
  *(undefined ***)(this + 0x70) = &PTR__Vector_01c8d198;
  *(undefined8 *)(this + 0x78) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x70));
  *(undefined ***)(this + 0x50) = &PTR__Vector_01c8d160;
  lVar6 = *(long *)(this + 0x68);
  *(undefined8 *)(this + 0x58) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x50));
  lVar6 = *(long *)(this + 0x48);
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c8d160;
  *(undefined8 *)(this + 0x38) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x30));
  lVar6 = *(long *)(this + 0x28);
  *(undefined ***)(this + 0x10) = &PTR__Vector_01c8d080;
  *(undefined8 *)(this + 0x18) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x10));
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

