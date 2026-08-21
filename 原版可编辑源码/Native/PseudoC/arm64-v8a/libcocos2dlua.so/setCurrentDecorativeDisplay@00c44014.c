
/* cocostudio::DisplayManager::setCurrentDecorativeDisplay(cocostudio::DecorativeDisplay*) */

void __thiscall
cocostudio::DisplayManager::setCurrentDecorativeDisplay
          (DisplayManager *this,DecorativeDisplay *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ColliderDetector *pCVar3;
  long lVar4;
  ParticleSystem *this_00;
  undefined8 uVar5;
  long *plVar6;
  
  if ((*(long **)(this + 0x50) != (long *)0x0) &&
     (lVar2 = (**(code **)(**(long **)(this + 0x50) + 0x40))(), lVar2 != 0)) {
    pCVar3 = (ColliderDetector *)(**(code **)(**(long **)(this + 0x50) + 0x40))();
    ColliderDetector::setActive(pCVar3,false);
  }
  *(DecorativeDisplay **)(this + 0x50) = param_1;
  lVar2 = 0;
  if (param_1 != (DecorativeDisplay *)0x0) {
    lVar2 = (**(code **)(*(long *)param_1 + 0x40))(param_1);
    if (lVar2 != 0) {
      pCVar3 = (ColliderDetector *)(**(code **)(**(long **)(this + 0x50) + 0x40))();
      ColliderDetector::setActive(pCVar3,true);
    }
    if (*(long **)(this + 0x50) == (long *)0x0) {
      lVar2 = 0;
      plVar6 = *(long **)(this + 0x40);
      goto joined_r0x00c440ac;
    }
    lVar2 = (**(code **)(**(long **)(this + 0x50) + 0x20))();
  }
  plVar6 = *(long **)(this + 0x40);
joined_r0x00c440ac:
  if (plVar6 != (long *)0x0) {
    lVar4 = __dynamic_cast(plVar6,&cocos2d::Node::typeinfo,&Armature::typeinfo,0);
    if (lVar4 != 0) {
      (**(code **)(**(long **)(this + 0x60) + 0x578))(*(long **)(this + 0x60),0);
      plVar6 = *(long **)(this + 0x40);
    }
    (**(code **)(*plVar6 + 0x278))(plVar6,1);
    cocos2d::Ref::release(*(Ref **)(this + 0x40));
  }
  *(long *)(this + 0x40) = lVar2;
  if (lVar2 == 0) {
    uVar1 = 3;
  }
  else {
    plVar6 = (long *)__dynamic_cast(lVar2,&cocos2d::Node::typeinfo,&Armature::typeinfo,0);
    if (plVar6 == (long *)0x0) {
      this_00 = (ParticleSystem *)
                __dynamic_cast(lVar2,&cocos2d::Node::typeinfo,&cocos2d::ParticleSystemQuad::typeinfo
                               ,0);
      if (this_00 != (ParticleSystem *)0x0) {
        cocos2d::ParticleSystem::resetSystem(this_00);
      }
    }
    else {
      (**(code **)(**(long **)(this + 0x60) + 0x578))(*(long **)(this + 0x60),plVar6);
      (**(code **)(*plVar6 + 0x5b0))(plVar6,*(undefined8 *)(this + 0x60));
    }
    plVar6 = *(long **)(this + 0x40);
    uVar5 = (**(code **)(**(long **)(this + 0x60) + 0x4b8))();
    (**(code **)(*plVar6 + 0x4c0))(plVar6,uVar5);
    plVar6 = *(long **)(this + 0x40);
    uVar1 = (**(code **)(**(long **)(this + 0x60) + 0x488))();
    (**(code **)(*plVar6 + 0x490))(plVar6,uVar1);
    cocos2d::Ref::retain(*(Ref **)(this + 0x40));
    (**(code **)(**(long **)(this + 0x40) + 0x170))(*(long **)(this + 0x40),this[0x5d]);
    lVar2 = (**(code **)(**(long **)(this + 0x50) + 0x30))();
    uVar1 = *(undefined4 *)(lVar2 + 0x24);
  }
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}

