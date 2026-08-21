
/* fairygui::Window::initWindow() */

void __thiscall fairygui::Window::initWindow(Window *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  Window *local_78;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((this[0x2d8] != (Window)0x0) || (this[0x2d9] != (Window)0x0)) goto LAB_00aa5958;
  lVar3 = *(long *)(this + 0x2c0);
  if (lVar3 != *(long *)(this + 0x2c8)) {
    uVar5 = *(long *)(this + 0x2c8) - lVar3;
    this[0x2d9] = (Window)0x0;
    if (0 < (int)(uVar5 >> 3)) {
      lVar7 = 0;
      do {
        plVar6 = *(long **)(lVar3 + lVar7 * 8);
        uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
        if ((uVar2 & 1) == 0) {
          uStack_80 = 0;
          local_88 = onUILoadComplete;
          local_90 = &PTR_FUN_016a79b0;
          local_78 = this;
          local_70 = &local_90;
          (**(code **)(*plVar6 + 0x28))(plVar6,&local_90);
          if (&local_90 == local_70) {
            pcVar4 = (code *)(*local_70)[4];
LAB_00aa58fc:
            (*pcVar4)();
          }
          else if (local_70 != (undefined ***)0x0) {
            pcVar4 = (code *)(*local_70)[5];
            goto LAB_00aa58fc;
          }
          this[0x2d9] = (Window)0x1;
        }
        if ((uVar5 >> 3 & 0xffffffff) - 1 == lVar7) goto LAB_00aa5918;
        lVar3 = *(long *)(this + 0x2c0);
        lVar7 = lVar7 + 1;
      } while( true );
    }
  }
LAB_00aa5920:
  this[0x2d8] = (Window)0x1;
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,100,(void *)0x0,(Value *)&cocos2d::Value::Null);
  if (*(long *)(this + 0xa0) != 0) {
    (**(code **)(*(long *)this + 0xf0))(this);
  }
LAB_00aa5958:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00aa5918:
  if (this[0x2d9] != (Window)0x0) goto LAB_00aa5958;
  goto LAB_00aa5920;
}

