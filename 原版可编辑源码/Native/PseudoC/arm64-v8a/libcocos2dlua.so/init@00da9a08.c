
/* cocos2d::ui::Widget::init() */

undefined4 __thiscall cocos2d::ui::Widget::init(Widget *this)

{
  long lVar1;
  ulong uVar2;
  Widget *pWVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  Widget *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = Node::init();
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
    goto LAB_00da9b2c;
  }
  (**(code **)(*(long *)this + 0x630))(this);
  this[899] = (Widget)0x1;
  *(undefined4 *)(this + 0x38c) = 0;
  (**(code **)(*(long *)this + 0x638))(this);
  local_70 = &PTR_FUN_016d8ea8;
  uStack_60 = 0;
  local_68 = onFocusChange;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_00963a28(&local_70,this + 800);
  if (&local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00da9ac4:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00da9ac4;
  }
  pWVar3 = *(Widget **)(this + 0x370);
  *(undefined8 *)(this + 0x370) = 0;
  if (this + 0x350 == pWVar3) {
    pcVar4 = *(code **)(*(long *)pWVar3 + 0x20);
LAB_00da9af4:
    (*pcVar4)();
  }
  else if (pWVar3 != (Widget *)0x0) {
    pcVar4 = *(code **)(*(long *)pWVar3 + 0x28);
    goto LAB_00da9af4;
  }
  local_70 = (undefined **)0x3f0000003f000000;
  (**(code **)(*(long *)this + 0x148))(this,&local_70);
  uVar5 = 1;
  (**(code **)(*(long *)this + 0x600))(this,1);
LAB_00da9b2c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

