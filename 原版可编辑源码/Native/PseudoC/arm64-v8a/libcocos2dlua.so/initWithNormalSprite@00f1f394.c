
/* cocos2d::MenuItemSprite::initWithNormalSprite(cocos2d::Node*, cocos2d::Node*, cocos2d::Node*,
   std::__ndk1::function<void (cocos2d::Ref*)> const&) */

undefined8 __thiscall
cocos2d::MenuItemSprite::initWithNormalSprite
          (MenuItemSprite *this,Node *param_1,Node *param_2,Node *param_3,function *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  Node *pNVar4;
  code *pcVar5;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)this + 0x148))(this,local_80);
  plVar2 = *(long **)(param_4 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if ((long *)param_4 == plVar2) {
    local_60 = local_80;
    (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  FUN_00dad434(local_80,this + 0x300);
  if (local_80 == local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00f1f460;
    pcVar5 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar5)();
LAB_00f1f460:
  pNVar4 = *(Node **)(this + 0x330);
  *(undefined2 *)(this + 0x2f8) = 0x100;
  if (pNVar4 != param_1) {
    if (param_1 != (Node *)0x0) {
                    /* try { // try from 00f1f480 to 0101f487 has its CatchHandler @ 00f1fad4 */
                    /* try { // try from 00f1f488 to 0101f48f has its CatchHandler @ 00f1fa38 */
      (**(code **)(*(long *)this + 0x208))(this,param_1);
      local_80[0] = 0;
                    /* try { // try from 00f1f490 to 0101f557 has its CatchHandler @ 00f1f378 */
      (**(code **)(*(long *)param_1 + 0x148))(param_1,local_80);
      pNVar4 = *(Node **)(this + 0x330);
    }
    if (pNVar4 != (Node *)0x0) {
      (**(code **)(*(long *)this + 0x280))(this,pNVar4,1);
    }
    *(Node **)(this + 0x330) = param_1;
    if (param_1 != (Node *)0x0) {
      uVar3 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
      (**(code **)(*(long *)this + 0x160))(this,uVar3);
    }
    (**(code **)(*(long *)this + 0x560))(this);
    param_1 = *(Node **)(this + 0x330);
  }
  if (param_1 != param_2) {
    if (param_2 != (Node *)0x0) {
      (**(code **)(*(long *)this + 0x208))(this,param_2);
      local_80[0] = 0;
      (**(code **)(*(long *)param_2 + 0x148))(param_2,local_80);
    }
    if (*(long *)(this + 0x338) != 0) {
      (**(code **)(*(long *)this + 0x280))(this,*(long *)(this + 0x338),1);
    }
                    /* try { // try from 00f1f558 to 0101f55f has its CatchHandler @ 00f1fa34 */
    *(Node **)(this + 0x338) = param_2;
                    /* try { // try from 00f1f560 to 0101f567 has its CatchHandler @ 00f1f9ac */
    (**(code **)(*(long *)this + 0x560))(this);
                    /* try { // try from 00f1f568 to 0101fae3 has its CatchHandler @ 00f1f378 */
    param_2 = *(Node **)(this + 0x330);
  }
  if (param_2 != param_3) {
    if (param_3 != (Node *)0x0) {
      (**(code **)(*(long *)this + 0x208))(this,param_3);
      local_80[0] = 0;
      (**(code **)(*(long *)param_3 + 0x148))(param_3,local_80);
    }
    if (*(long *)(this + 0x340) != 0) {
      (**(code **)(*(long *)this + 0x280))(this,*(long *)(this + 0x340),1);
    }
    *(Node **)(this + 0x340) = param_3;
    (**(code **)(*(long *)this + 0x560))(this);
    param_3 = *(Node **)(this + 0x330);
  }
  if (param_3 != (Node *)0x0) {
    uVar3 = (**(code **)(*(long *)param_3 + 0x168))(param_3);
    (**(code **)(*(long *)this + 0x160))(this,uVar3);
  }
  (**(code **)(*(long *)this + 0x4d8))(this,1);
  (**(code **)(*(long *)this + 0x4a8))(this,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

