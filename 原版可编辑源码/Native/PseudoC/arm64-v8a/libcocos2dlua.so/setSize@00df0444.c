
/* cocos2d::ui::LayoutComponent::setSize(cocos2d::Size const&) */

void __thiscall cocos2d::ui::LayoutComponent::setSize(LayoutComponent *this,Size *param_1)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x160))(*(long **)(this + 0x28),param_1);
  }
  else {
    Size::Size((Size *)&local_60,param_1);
    pfVar3 = (float *)(**(code **)(*plVar2 + 0x168))(plVar2);
    if (*pfVar3 == 0.0) {
      *(undefined4 *)(this + 0x7c) = 0;
      if ((this[0x80] != (LayoutComponent)0x0) ||
         ((*(int *)(this + 0x50) != 3 && (this[0x78] != (LayoutComponent)0x0)))) {
        local_60 = 0.0;
      }
    }
    else {
      *(float *)(this + 0x7c) = local_60 / *pfVar3;
    }
    if (pfVar3[1] == 0.0) {
      *(undefined4 *)(this + 0x84) = 0;
      if ((this[0x88] != (LayoutComponent)0x0) ||
         ((*(int *)(this + 0x54) != 3 && (this[0x79] != (LayoutComponent)0x0)))) {
        local_5c = 0.0;
      }
    }
    else {
      *(float *)(this + 0x84) = local_5c / pfVar3[1];
    }
    (**(code **)(**(long **)(this + 0x28) + 0x160))(*(long **)(this + 0x28),&local_60);
    plVar2 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (plVar2 != (long *)0x0) {
      pfVar3 = (float *)(**(code **)(**(long **)(this + 0x28) + 0xb0))();
      pfVar4 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
      pfVar5 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
      pfVar6 = (float *)(**(code **)(*plVar2 + 0x168))(plVar2);
      fVar11 = *pfVar4;
      fVar12 = *pfVar5;
      fVar13 = *pfVar3;
      *(float *)(this + 0x58) = fVar13 - fVar11 * fVar12;
      *(float *)(this + 0x5c) = *pfVar6 - (fVar13 + (1.0 - fVar11) * fVar12);
    }
    plVar2 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (plVar2 != (long *)0x0) {
      lVar7 = (**(code **)(**(long **)(this + 0x28) + 0xb0))();
      lVar8 = (**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
                    /* try { // try from 00df063c to 00ef07c7 has its CatchHandler @ 00df063c
                       catch() { ... } // from try @ 00df063c with catch @ 00df063c
                       catch() { ... } // from try @ 00df07d0 with catch @ 00df063c */
      lVar9 = (**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
      lVar10 = (**(code **)(*plVar2 + 0x168))(plVar2);
      fVar11 = *(float *)(lVar8 + 4);
      fVar12 = *(float *)(lVar9 + 4);
      fVar13 = *(float *)(lVar7 + 4);
      *(float *)(this + 0x60) = fVar13 - fVar11 * fVar12;
      *(float *)(this + 100) = *(float *)(lVar10 + 4) - (fVar13 + (1.0 - fVar11) * fVar12);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

