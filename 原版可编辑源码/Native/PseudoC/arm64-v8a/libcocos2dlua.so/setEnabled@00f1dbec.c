
/* cocos2d::MenuItemLabel::setEnabled(bool) */

void __thiscall cocos2d::MenuItemLabel::setEnabled(MenuItemLabel *this,bool param_1)

{
  MenuItemLabel MVar1;
  undefined2 *puVar2;
  MenuItemLabel *pMVar3;
  code *pcVar4;
  
  if (this[0x2f9] != (MenuItemLabel)param_1) {
    if (param_1) {
      pMVar3 = this + 0x330;
      pcVar4 = *(code **)(*(long *)this + 0x4c0);
    }
    else {
      puVar2 = (undefined2 *)(**(code **)(*(long *)this + 0x4b0))(this);
      MVar1 = *(MenuItemLabel *)(puVar2 + 1);
      pMVar3 = this + 0x338;
      *(undefined2 *)(this + 0x330) = *puVar2;
      this[0x332] = MVar1;
      pcVar4 = *(code **)(*(long *)this + 0x4c0);
    }
    (*pcVar4)(this,pMVar3);
  }
  this[0x2f9] = (MenuItemLabel)param_1;
  return;
}

