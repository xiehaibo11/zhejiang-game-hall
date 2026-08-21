
/* cocos2d::ui::TabControl::initContainers() */

void __thiscall cocos2d::ui::TabControl::initContainers(TabControl *this)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  switch(*(undefined4 *)(this + 0x530)) {
  case 0:
    *(undefined8 *)(this + 0x534) = 0;
    fVar7 = *(float *)(this + 0x80);
    fVar6 = *(float *)(this + 0x84) - (float)*(int *)(this + 0x528);
    break;
  case 1:
    fVar7 = *(float *)(this + 0x80);
    fVar6 = *(float *)(this + 0x84);
    *(undefined4 *)(this + 0x538) = 0;
    fVar5 = (float)*(int *)(this + 0x52c);
    *(float *)(this + 0x534) = fVar5;
    goto LAB_00df20e8;
  case 2:
    fVar7 = *(float *)(this + 0x80);
    *(undefined4 *)(this + 0x534) = 0;
    *(float *)(this + 0x538) = (float)*(int *)(this + 0x528);
    fVar6 = *(float *)(this + 0x84) - (float)*(int *)(this + 0x528);
    break;
  case 3:
    *(undefined8 *)(this + 0x534) = 0;
    fVar7 = *(float *)(this + 0x80);
    fVar6 = *(float *)(this + 0x84);
    fVar5 = (float)*(int *)(this + 0x52c);
LAB_00df20e8:
    fVar7 = fVar7 - fVar5;
    break;
  default:
    goto switchD_00df2068_default;
  }
  Size::Size(aSStack_50,fVar7,fVar6);
  Size::operator=((Size *)(this + 0x53c),aSStack_50);
switchD_00df2068_default:
  plVar4 = *(long **)(this + 0x558);
  if (*(long **)(this + 0x550) != plVar4) {
    plVar2 = *(long **)(this + 0x550);
    do {
      plVar3 = plVar2 + 1;
      plVar2 = *(long **)(*plVar2 + 8);
      (**(code **)(*plVar2 + 0x98))(plVar2,this + 0x534);
      (**(code **)(*plVar2 + 0x160))(plVar2,this + 0x53c);
      plVar2 = plVar3;
    } while (plVar4 != plVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

