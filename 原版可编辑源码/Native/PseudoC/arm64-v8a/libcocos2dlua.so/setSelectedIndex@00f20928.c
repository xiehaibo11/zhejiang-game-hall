
/* cocos2d::MenuItemToggle::setSelectedIndex(unsigned int) */

void __thiscall cocos2d::MenuItemToggle::setSelectedIndex(MenuItemToggle *this,uint param_1)

{
  long lVar1;
  long *plVar2;
  Size *pSVar3;
  long lVar4;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(this + 0x330) != param_1) &&
     (lVar4 = *(long *)(this + 0x340), 0 < *(long *)(this + 0x348) - lVar4)) {
    plVar2 = *(long **)(this + 0x338);
    *(uint *)(this + 0x330) = param_1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x278))(plVar2,0);
      param_1 = *(uint *)(this + 0x330);
      lVar4 = *(long *)(this + 0x340);
    }
    *(undefined8 *)(this + 0x338) = *(undefined8 *)(lVar4 + (ulong)param_1 * 8);
    (**(code **)(*(long *)this + 0x208))(this);
    pSVar3 = (Size *)(**(code **)(**(long **)(this + 0x338) + 0x168))();
    Size::Size((Size *)&local_30,pSVar3);
    (**(code **)(*(long *)this + 0x160))(this,&local_30);
    (**(code **)(**(long **)(this + 0x338) + 200))(local_30 * 0.5,fStack_2c * 0.5);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

