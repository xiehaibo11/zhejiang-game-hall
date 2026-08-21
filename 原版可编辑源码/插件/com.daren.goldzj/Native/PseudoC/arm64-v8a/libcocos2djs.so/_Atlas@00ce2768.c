
/* spine::Atlas::~Atlas() */

void __thiscall spine::Atlas::~Atlas(Atlas *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  plVar3 = *(long **)(this + 0x48);
  *(undefined ***)this = &PTR__Atlas_01c8e698;
  if (((plVar3 != (long *)0x0) && (lVar6 = *(long *)(this + 0x10), lVar6 != 0)) &&
     ((**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(**(long **)(this + 0x20) + 0x10)),
     lVar6 != 1)) {
    lVar8 = 1;
    do {
      (**(code **)(**(long **)(this + 0x48) + 0x18))
                (*(long **)(this + 0x48),
                 *(undefined8 *)(*(long *)(*(long *)(this + 0x20) + lVar8 * 8) + 0x10));
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
  }
  uVar4 = *(ulong *)(this + 0x10);
  if (0 < (int)uVar4) {
    uVar7 = (long)(int)uVar4;
    do {
      uVar9 = uVar7 - 1;
      plVar3 = *(long **)(*(long *)(this + 0x20) + uVar9 * 8);
      uVar5 = uVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = *(ulong *)(this + 0x10);
      }
      uVar4 = uVar5 - 1;
      *(ulong *)(this + 0x10) = uVar4;
      if (uVar9 < uVar4) {
        do {
          lVar6 = uVar7 * 8;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x20) + lVar6);
          uVar2 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x20) + lVar6) = uVar2;
        } while (uVar5 != uVar7);
      }
      uVar7 = uVar9;
    } while (0 < (long)uVar9);
  }
  uVar4 = *(ulong *)(this + 0x30);
  if (0 < (int)uVar4) {
    uVar7 = (long)(int)uVar4;
    do {
      uVar9 = uVar7 - 1;
      plVar3 = *(long **)(*(long *)(this + 0x40) + uVar9 * 8);
      uVar5 = uVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = *(ulong *)(this + 0x30);
      }
      uVar4 = uVar5 - 1;
      *(ulong *)(this + 0x30) = uVar4;
      if (uVar9 < uVar4) {
        do {
          lVar6 = uVar7 * 8;
          uVar7 = uVar7 + 1;
          puVar1 = (undefined8 *)(*(long *)(this + 0x40) + lVar6);
          uVar2 = puVar1[-1];
          puVar1[-1] = *puVar1;
          *(undefined8 *)(*(long *)(this + 0x40) + lVar6) = uVar2;
        } while (uVar5 != uVar7);
      }
      uVar7 = uVar9;
    } while (0 < (long)uVar9);
  }
  lVar6 = *(long *)(this + 0x40);
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8e838;
  *(undefined8 *)(this + 0x30) = 0;
  if (lVar6 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,lVar6,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x28));
  lVar6 = *(long *)(this + 0x20);
  *(undefined ***)(this + 8) = &PTR__Vector_01c8e800;
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

