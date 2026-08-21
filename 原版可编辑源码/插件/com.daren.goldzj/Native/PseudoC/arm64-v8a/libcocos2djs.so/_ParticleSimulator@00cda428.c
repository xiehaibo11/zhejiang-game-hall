
/* cocos2d::ParticleSimulator::~ParticleSimulator() */

void __thiscall cocos2d::ParticleSimulator::~ParticleSimulator(ParticleSimulator *this)

{
  undefined8 *puVar1;
  MiddlewareManager *this_00;
  void *pvVar2;
  ParticleSimulator *pPVar3;
  code *pcVar4;
  Vec3 *this_01;
  undefined8 *puVar5;
  
  *(undefined ***)this = &PTR__ParticleSimulator_01c8e220;
  *(undefined ***)(this + 0x10) = &PTR__ParticleSimulator_01c8e258;
  if (middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
    this_00 = operator_new(0x50);
    middleware::MiddlewareManager::MiddlewareManager(this_00);
    middleware::MiddlewareManager::_instance = this_00;
  }
  middleware::MiddlewareManager::removeTimer
            (middleware::MiddlewareManager::_instance,(IMiddleware *)(this + 0x10));
  if (*(Ref **)(this + 0xd0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xd0));
  }
  if (*(Ref **)(this + 0xb0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xb0));
  }
  puVar5 = *(undefined8 **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar5 != puVar1) {
    do {
      this_01 = (Vec3 *)*puVar5;
      if (this_01 != (Vec3 *)0x0) {
        Vec3::~Vec3(this_01 + 0x58);
        Vec3::~Vec3(this_01 + 0x4c);
        Vec3::~Vec3(this_01 + 0xc);
        Vec3::~Vec3(this_01);
        operator_delete(this_01);
      }
      puVar5 = puVar5 + 1;
    } while (puVar1 != puVar5);
    puVar5 = *(undefined8 **)(this + 0x18);
  }
  *(undefined8 **)(this + 0x20) = puVar5;
  Vec3::~Vec3((Vec3 *)(this + 0xf0));
  Vec3::~Vec3((Vec3 *)(this + 0xe4));
  Vec3::~Vec3((Vec3 *)(this + 0xd8));
  pvVar2 = *(void **)(this + 0xb8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar2;
    operator_delete(pvVar2);
  }
  pPVar3 = *(ParticleSimulator **)(this + 0xa0);
  if (this + 0x80 == pPVar3) {
    pcVar4 = *(code **)(*(long *)pPVar3 + 0x20);
LAB_00cda540:
    (*pcVar4)();
  }
  else if (pPVar3 != (ParticleSimulator *)0x0) {
    pcVar4 = *(code **)(*(long *)pPVar3 + 0x28);
    goto LAB_00cda540;
  }
  pPVar3 = *(ParticleSimulator **)(this + 0x70);
  if (this + 0x50 == pPVar3) {
    pcVar4 = *(code **)(*(long *)pPVar3 + 0x20);
  }
  else {
    if (pPVar3 == (ParticleSimulator *)0x0) goto LAB_00cda570;
    pcVar4 = *(code **)(*(long *)pPVar3 + 0x28);
  }
  (*pcVar4)();
LAB_00cda570:
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar2);
  }
  Ref::~Ref((Ref *)this);
  return;
}

