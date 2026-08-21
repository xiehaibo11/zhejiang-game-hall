
/* cocos2d::ui::LayoutComponent::setPositionPercentY(float) */

void __thiscall
cocos2d::ui::LayoutComponent::setPositionPercentY(LayoutComponent *this,float param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(float *)(this + 0x74) = param_1;
  if (((this[0x70] != (LayoutComponent)0x0) || (*(int *)(this + 0x54) == 3)) &&
     (plVar1 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))(), plVar1 != (long *)0x0)) {
    plVar6 = *(long **)(this + 0x28);
    lVar2 = (**(code **)(*plVar1 + 0x168))();
    (**(code **)(*plVar6 + 0xe8))(*(float *)(lVar2 + 4) * *(float *)(this + 0x74),plVar6);
    plVar1 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (plVar1 != (long *)0x0) {
      lVar2 = (**(code **)(**(long **)(this + 0x28) + 0xb0))();
      lVar3 = (**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
      lVar4 = (**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
      lVar5 = (**(code **)(*plVar1 + 0x168))(plVar1);
      fVar7 = *(float *)(lVar3 + 4);
      fVar8 = *(float *)(lVar4 + 4);
      fVar9 = *(float *)(lVar2 + 4);
      *(float *)(this + 0x60) = fVar9 - fVar7 * fVar8;
      *(float *)(this + 100) = *(float *)(lVar5 + 4) - (fVar9 + (1.0 - fVar7) * fVar8);
    }
  }
  return;
}

