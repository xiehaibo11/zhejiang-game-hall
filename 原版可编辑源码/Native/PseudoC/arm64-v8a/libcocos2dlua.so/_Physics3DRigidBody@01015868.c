
/* cocos2d::Physics3DRigidBody::~Physics3DRigidBody() */

void __thiscall cocos2d::Physics3DRigidBody::~Physics3DRigidBody(Physics3DRigidBody *this)

{
  undefined8 *puVar1;
  Physics3DWorld *this_00;
  long *plVar2;
  void *pvVar3;
  Physics3DRigidBody *pPVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 *puVar7;
  
  this_00 = *(Physics3DWorld **)(this + 0x30);
  *(undefined ***)this = &PTR__Physics3DRigidBody_01726790;
  if (this_00 != (Physics3DWorld *)0x0) {
    puVar7 = *(undefined8 **)(this + 0x88);
    puVar1 = *(undefined8 **)(this + 0x90);
    if (puVar7 != puVar1) {
      for (; Physics3DWorld::removePhysics3DConstraint(this_00,(Physics3DConstraint *)*puVar7),
          puVar1 + -1 != puVar7; puVar7 = puVar7 + 1) {
        this_00 = *(Physics3DWorld **)(this + 0x30);
      }
      puVar7 = *(undefined8 **)(this + 0x88);
    }
    *(undefined8 **)(this + 0x90) = puVar7;
  }
  plVar2 = *(long **)(this + 0x78);
  plVar5 = (long *)plVar2[0x40];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    plVar2 = *(long **)(this + 0x78);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  *(undefined8 *)(this + 0x78) = 0;
  if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x80));
  }
  pvVar3 = *(void **)(this + 0x88);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar3;
    operator_delete(pvVar3);
  }
  pPVar4 = *(Physics3DRigidBody **)(this + 0x60);
  *(undefined ***)this = &PTR__Physics3DObject_01726838;
  if (this + 0x40 == pPVar4) {
    pcVar6 = *(code **)(*(long *)pPVar4 + 0x20);
  }
  else {
    if (pPVar4 == (Physics3DRigidBody *)0x0) goto LAB_01015954;
    pcVar6 = *(code **)(*(long *)pPVar4 + 0x28);
  }
  (*pcVar6)();
LAB_01015954:
  Ref::~Ref((Ref *)this);
  return;
}

