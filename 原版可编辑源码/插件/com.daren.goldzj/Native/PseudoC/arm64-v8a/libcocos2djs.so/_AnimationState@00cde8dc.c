
/* spine::AnimationState::~AnimationState() */

void __thiscall spine::AnimationState::~AnimationState(AnimationState *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(this + 0x58);
  *(undefined ***)(this + 8) = &PTR__AnimationState_01c8e420;
  *(undefined ***)this = &PTR__AnimationState_01c8e400;
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      plVar4 = *(long **)(*(long *)(this + 0x68) + uVar5 * 8);
      if (plVar4 != (long *)0x0) {
        plVar1 = (long *)plVar4[6];
        while (plVar1 != (long *)0x0) {
          lVar3 = *plVar1;
          plVar1 = (long *)plVar1[6];
          (**(code **)(lVar3 + 8))();
        }
        plVar1 = (long *)plVar4[5];
        while (plVar1 != (long *)0x0) {
          lVar3 = *plVar1;
          plVar1 = (long *)plVar1[5];
          (**(code **)(lVar3 + 8))();
        }
        (**(code **)(*plVar4 + 8))(plVar4);
        uVar2 = *(ulong *)(this + 0x58);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if (*(long **)(this + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x90) + 8))();
  }
  *(undefined ***)(this + 0x98) = &PTR__HashMap_01c8e310;
  plVar4 = *(long **)(this + 0xa0);
  while (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    plVar4 = (long *)plVar4[2];
    (**(code **)(lVar3 + 8))();
  }
  *(long *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  SpineObject::~SpineObject((SpineObject *)(this + 0x98));
  *(undefined ***)(this + 0x70) = &PTR__Vector_01c8d0b8;
  lVar3 = *(long *)(this + 0x88);
  *(undefined8 *)(this + 0x78) = 0;
  if (lVar3 != 0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,lVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x70));
  lVar3 = *(long *)(this + 0x68);
  *(undefined ***)(this + 0x50) = &PTR__Vector_01c8d010;
  *(undefined8 *)(this + 0x58) = 0;
  if (lVar3 != 0) {
    plVar4 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar4 + 0x28))
              (plVar4,lVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  SpineObject::~SpineObject((SpineObject *)(this + 0x50));
  Pool<spine::TrackEntry>::~Pool((Pool<spine::TrackEntry> *)(this + 0x28));
  *(undefined ***)(this + 8) = &PTR__HasRendererObject_01c8e4f0;
  if ((*(code **)(this + 0x18) != (code *)0x0) && (*(long *)(this + 0x10) != 0)) {
    (**(code **)(this + 0x18))();
  }
  SpineObject::~SpineObject((SpineObject *)this);
  return;
}

