
/* cocos2d::ui::ListView::selectedItemEvent(cocos2d::ui::Widget::TouchEventType) */

void __thiscall cocos2d::ui::ListView::selectedItemEvent(ListView *this,int param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined4 local_44;
  ListView *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Ref::retain((Ref *)this);
  lVar3 = *(long *)(this + 0x908);
  if (param_2 == 0) {
    if (lVar3 != 0) {
      pcVar4 = *(code **)(this + 0x910);
      uVar5 = *(ulong *)(this + 0x918) & 1;
      if (uVar5 != 0 || pcVar4 != (code *)0x0) {
        plVar2 = (long *)(lVar3 + ((long)*(ulong *)(this + 0x918) >> 1));
        if (uVar5 != 0) {
          pcVar4 = *(code **)(pcVar4 + *plVar2);
        }
        (*pcVar4)(plVar2,this,0);
      }
    }
    plVar2 = *(long **)(this + 0x940);
    if (plVar2 != (long *)0x0) {
      local_44 = 0;
      local_40 = this;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,&local_44);
    }
    plVar2 = *(long **)(this + 0x4b0);
    if (plVar2 == (long *)0x0) goto LAB_00db6ac4;
    local_44 = 0;
  }
  else {
    if (lVar3 != 0) {
      pcVar4 = *(code **)(this + 0x910);
      uVar5 = *(ulong *)(this + 0x918) & 1;
      if (uVar5 != 0 || pcVar4 != (code *)0x0) {
        plVar2 = (long *)(lVar3 + ((long)*(ulong *)(this + 0x918) >> 1));
        if (uVar5 != 0) {
          pcVar4 = *(code **)(pcVar4 + *plVar2);
        }
        (*pcVar4)(plVar2,this,1);
      }
    }
    plVar2 = *(long **)(this + 0x940);
    if (plVar2 != (long *)0x0) {
      local_44 = 1;
      local_40 = this;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,&local_44);
    }
    plVar2 = *(long **)(this + 0x4b0);
    if (plVar2 == (long *)0x0) goto LAB_00db6ac4;
    local_44 = 1;
  }
  local_40 = this;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,&local_44);
LAB_00db6ac4:
  Ref::release((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

