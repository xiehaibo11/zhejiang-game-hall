
/* cocos2d::ui::LayoutComponent::refreshVerticalMargin() */

void __thiscall cocos2d::ui::LayoutComponent::refreshVerticalMargin(LayoutComponent *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  plVar1 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 00defa08 to 00eefa0f has its CatchHandler @ 00defa5c */
                    /* try { // try from 00defa10 to 00eefa77 has its CatchHandler @ 00def9cc */
    lVar2 = (**(code **)(**(long **)(this + 0x28) + 0xb0))();
    lVar3 = (**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
    lVar4 = (**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
    lVar5 = (**(code **)(*plVar1 + 0x168))(plVar1);
                    /* catch() { ... } // from try @ 00defa08 with catch @ 00defa5c */
    fVar6 = *(float *)(lVar3 + 4);
    fVar7 = *(float *)(lVar4 + 4);
    fVar8 = *(float *)(lVar2 + 4);
    *(float *)(this + 0x60) = fVar8 - fVar6 * fVar7;
                    /* catch() { ... } // from try @ 00defabc with catch @ 00defa78 */
    *(float *)(this + 100) = *(float *)(lVar5 + 4) - (fVar8 + (1.0 - fVar6) * fVar7);
  }
  return;
}

