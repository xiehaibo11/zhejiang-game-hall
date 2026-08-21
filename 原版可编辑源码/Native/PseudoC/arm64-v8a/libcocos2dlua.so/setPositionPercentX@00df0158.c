
/* cocos2d::ui::LayoutComponent::setPositionPercentX(float) */

void __thiscall
cocos2d::ui::LayoutComponent::setPositionPercentX(LayoutComponent *this,float param_1)

{
  long *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(float *)(this + 0x6c) = param_1;
  if (((this[0x68] != (LayoutComponent)0x0) || (*(int *)(this + 0x50) == 3)) &&
     (plVar1 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))(), plVar1 != (long *)0x0)) {
    plVar6 = *(long **)(this + 0x28);
    pfVar2 = (float *)(**(code **)(*plVar1 + 0x168))();
    (**(code **)(*plVar6 + 0xd8))(*pfVar2 * *(float *)(this + 0x6c),plVar6);
    plVar1 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (plVar1 != (long *)0x0) {
      pfVar2 = (float *)(**(code **)(**(long **)(this + 0x28) + 0xb0))();
      pfVar3 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
      pfVar4 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
      pfVar5 = (float *)(**(code **)(*plVar1 + 0x168))(plVar1);
      fVar7 = *pfVar3;
      fVar8 = *pfVar4;
      fVar9 = *pfVar2;
      *(float *)(this + 0x58) = fVar9 - fVar7 * fVar8;
      *(float *)(this + 0x5c) = *pfVar5 - (fVar9 + (1.0 - fVar7) * fVar8);
    }
  }
  return;
}

