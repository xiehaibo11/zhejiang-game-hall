
/* cocos2d::ui::LayoutComponent::setSizeHeight(float) */

void __thiscall cocos2d::ui::LayoutComponent::setSizeHeight(LayoutComponent *this,float param_1)

{
  long lVar1;
  Size *pSVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Size aSStack_60 [4];
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x28) + 0x168))();
  Size::Size(aSStack_60,pSVar2);
  local_5c = param_1;
  plVar3 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
  if (plVar3 == (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x160))(*(long **)(this + 0x28),aSStack_60);
  }
  else {
    lVar4 = (**(code **)(*plVar3 + 0x168))();
    if (*(float *)(lVar4 + 4) == 0.0) {
      *(undefined4 *)(this + 0x84) = 0;
      if (this[0x88] != (LayoutComponent)0x0) {
        local_5c = 0.0;
      }
    }
    else {
      *(float *)(this + 0x84) = local_5c / *(float *)(lVar4 + 4);
    }
    (**(code **)(**(long **)(this + 0x28) + 0x160))(*(long **)(this + 0x28),aSStack_60);
    plVar3 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (plVar3 != (long *)0x0) {
      lVar4 = (**(code **)(**(long **)(this + 0x28) + 0xb0))();
      lVar5 = (**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
      lVar6 = (**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
      lVar7 = (**(code **)(*plVar3 + 0x168))(plVar3);
      fVar8 = *(float *)(lVar5 + 4);
      fVar9 = *(float *)(lVar6 + 4);
      fVar10 = *(float *)(lVar4 + 4);
      *(float *)(this + 0x60) = fVar10 - fVar8 * fVar9;
      *(float *)(this + 100) = *(float *)(lVar7 + 4) - (fVar10 + (1.0 - fVar8) * fVar9);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

