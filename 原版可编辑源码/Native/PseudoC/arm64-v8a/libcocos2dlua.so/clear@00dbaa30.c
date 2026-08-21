
/* cocos2d::ui::PageViewIndicator::clear() */

void __thiscall cocos2d::ui::PageViewIndicator::clear(PageViewIndicator *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar1 = *(long **)(this + 0x338);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x170))(plVar1,1);
    *(undefined8 *)(this + 0x338) = 0;
  }
  puVar2 = *(undefined8 **)(this + 0x318);
  puVar4 = *(undefined8 **)(this + 800);
  if (puVar2 != puVar4) {
    do {
      puVar3 = puVar2 + 1;
      (**(code **)(*(long *)this + 0x550))(this,*puVar2,1);
      puVar2 = puVar3;
    } while (puVar4 != puVar3);
    puVar2 = *(undefined8 **)(this + 0x318);
    puVar4 = *(undefined8 **)(this + 800);
    if (puVar2 != puVar4) {
      do {
        puVar3 = puVar2 + 1;
        Ref::release((Ref *)*puVar2);
        puVar2 = puVar3;
      } while (puVar4 != puVar3);
      puVar2 = *(undefined8 **)(this + 0x318);
    }
  }
  *(undefined8 **)(this + 800) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00dbaad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x330) + 0x170))(*(long **)(this + 0x330),0);
  return;
}

