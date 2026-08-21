
/* cocos2d::IMEDispatcher::detachDelegateWithIME(cocos2d::IMEDelegate*) */

undefined8 __thiscall
cocos2d::IMEDispatcher::detachDelegateWithIME(IMEDispatcher *this,IMEDelegate *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if ((param_1 != (IMEDelegate *)0x0) && (*(long *)this != 0)) {
    if ((*(IMEDelegate **)(*(long *)this + 0x18) == param_1) &&
       (uVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1), (uVar2 & 1) != 0)) {
      *(undefined8 *)(*(long *)this + 0x18) = 0;
      (**(code **)(*(long *)param_1 + 0x38))(param_1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

