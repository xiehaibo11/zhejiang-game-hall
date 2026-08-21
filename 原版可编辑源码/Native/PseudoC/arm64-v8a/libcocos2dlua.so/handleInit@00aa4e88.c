
/* fairygui::Window::handleInit() */

void __thiscall fairygui::Window::handleInit(Window *this)

{
  long lVar1;
  code *pcVar2;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  Window *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GComponent::handleInit((GComponent *)this);
  local_70 = &PTR_FUN_016a7900;
  uStack_60 = 0;
  local_68 = onTouchBegin;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,10,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00aa4f1c;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00aa4f1c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

