
/* cocos2d::MenuItemSprite::setNormalImage(cocos2d::Node*) */

void __thiscall cocos2d::MenuItemSprite::setNormalImage(MenuItemSprite *this,Node *param_1)

{
  long lVar1;
  undefined8 uVar2;
  Node *pNVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pNVar3 = *(Node **)(this + 0x330);
  if (pNVar3 != param_1) {
                    /* try { // try from 00f1ebf4 to 0101ebff has its CatchHandler @ 00f1ee8c */
    if (param_1 != (Node *)0x0) {
                    /* try { // try from 00f1ec00 to 0101ec0f has its CatchHandler @ 00f1ee7c */
      (**(code **)(*(long *)this + 0x208))(this,param_1);
      local_40 = 0;
      (**(code **)(*(long *)param_1 + 0x148))(param_1,&local_40);
      pNVar3 = *(Node **)(this + 0x330);
    }
    if (pNVar3 != (Node *)0x0) {
      (**(code **)(*(long *)this + 0x280))(this,pNVar3,1);
    }
    *(Node **)(this + 0x330) = param_1;
    if (param_1 != (Node *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
      (**(code **)(*(long *)this + 0x160))(this,uVar2);
    }
    (**(code **)(*(long *)this + 0x560))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

