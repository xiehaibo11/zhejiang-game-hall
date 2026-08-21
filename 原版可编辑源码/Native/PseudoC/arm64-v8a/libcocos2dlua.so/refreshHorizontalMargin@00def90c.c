
/* cocos2d::ui::LayoutComponent::refreshHorizontalMargin() */

void __thiscall cocos2d::ui::LayoutComponent::refreshHorizontalMargin(LayoutComponent *this)

{
  long *plVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  plVar1 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
  if (plVar1 != (long *)0x0) {
    pfVar2 = (float *)(**(code **)(**(long **)(this + 0x28) + 0xb0))();
    pfVar3 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
    pfVar4 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
    pfVar5 = (float *)(**(code **)(*plVar1 + 0x168))(plVar1);
    fVar6 = *pfVar3;
    fVar7 = *pfVar4;
    fVar8 = *pfVar2;
    *(float *)(this + 0x58) = fVar8 - fVar6 * fVar7;
    *(float *)(this + 0x5c) = *pfVar5 - (fVar8 + (1.0 - fVar6) * fVar7);
  }
                    /* catch() { ... } // from try @ 00defa10 with catch @ 00def9cc */
  return;
}

