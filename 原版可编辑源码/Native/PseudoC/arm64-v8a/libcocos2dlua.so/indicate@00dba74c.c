
/* cocos2d::ui::PageViewIndicator::indicate(long) */

void __thiscall cocos2d::ui::PageViewIndicator::indicate(PageViewIndicator *this,long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((-1 < param_1) && (param_1 < *(long *)(this + 800) - *(long *)(this + 0x318) >> 3)) {
    plVar3 = *(long **)(this + 0x338);
    plVar1 = *(long **)(*(long *)(this + 0x318) + param_1 * 8);
    *(long **)(this + 0x338) = plVar1;
    if (plVar3 != plVar1) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x170))(plVar3,1);
        plVar1 = *(long **)(this + 0x338);
      }
      (**(code **)(*plVar1 + 0x170))(plVar1,0);
      plVar1 = *(long **)(this + 0x330);
      uVar2 = (**(code **)(**(long **)(this + 0x338) + 0xb0))();
                    /* WARNING: Could not recover jumptable at 0x00dba7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x98))(plVar1,uVar2);
      return;
    }
  }
  return;
}

