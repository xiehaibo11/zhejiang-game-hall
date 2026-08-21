
/* cocostudio::DisplayFactory::createDisplay(cocostudio::Bone*, cocostudio::DecorativeDisplay*) */

void cocostudio::DisplayFactory::createDisplay(Bone *param_1,DecorativeDisplay *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
  iVar1 = *(int *)(lVar2 + 0x24);
  if (iVar1 == 2) {
    lVar2 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
    plVar3 = (long *)cocos2d::ParticleSystemQuad::create((basic_string *)(lVar2 + 0x28));
    (**(code **)(*plVar3 + 0x270))();
    (**(code **)(*plVar3 + 0x340))(plVar3);
    lVar2 = (**(code **)(*(long *)param_1 + 0x570))(param_1);
    if (lVar2 != 0) {
      (**(code **)(*plVar3 + 600))(plVar3,lVar2);
    }
    lVar2 = *(long *)param_2;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        createSpriteDisplay(param_1,param_2);
        return;
      }
      return;
    }
    lVar2 = (**(code **)(*(long *)param_2 + 0x30))(param_2);
    plVar3 = (long *)Armature::create((basic_string *)(lVar2 + 0x28),param_1);
    lVar2 = *(long *)param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00c42ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x18))(param_2,plVar3);
  return;
}

