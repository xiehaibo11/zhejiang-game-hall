
/* fairygui::Window::onUILoadComplete() */

void __thiscall fairygui::Window::onUILoadComplete(Window *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(long *)(this + 0x2c8) - (long)*(undefined8 **)(this + 0x2c0);
  if ((int)(uVar3 >> 3) < 1) {
LAB_00aa5a34:
    *(undefined2 *)(this + 0x2d8) = 1;
    UIEventDispatcher::dispatchEvent
              ((UIEventDispatcher *)this,100,(void *)0x0,(Value *)&cocos2d::Value::Null);
    if (*(long *)(this + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aa5a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0xf0))(this);
      return;
    }
  }
  else {
    uVar1 = (**(code **)(*(long *)**(undefined8 **)(this + 0x2c0) + 0x20))();
    if ((uVar1 & 1) != 0) {
      uVar1 = 1;
      do {
        if ((uVar3 >> 3 & 0xffffffff) == uVar1) goto LAB_00aa5a34;
        uVar2 = (**(code **)(**(long **)(*(long *)(this + 0x2c0) + uVar1 * 8) + 0x20))();
        uVar1 = uVar1 + 1;
      } while ((uVar2 & 1) != 0);
    }
  }
  return;
}

