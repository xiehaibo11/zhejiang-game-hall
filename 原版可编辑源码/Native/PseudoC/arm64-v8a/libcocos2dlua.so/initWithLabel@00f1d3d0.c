
/* cocos2d::MenuItemLabel::initWithLabel(cocos2d::Node*, std::__ndk1::function<void (cocos2d::Ref*)>
   const&) */

undefined8 __thiscall
cocos2d::MenuItemLabel::initWithLabel(MenuItemLabel *this,Node *param_1,function *param_2)

{
  long lVar1;
  undefined2 uVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_70;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)this + 0x148))(this,&local_70);
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
                    /* try { // try from 00f1d43c to 0101d447 has its CatchHandler @ 00f1d490 */
  }
  else {
                    /* try { // try from 00f1d41c to 0101d423 has its CatchHandler @ 00f1d4b4 */
    if ((long *)param_2 == plVar3) {
                    /* try { // try from 00f1d448 to 0101d4c7 has its CatchHandler @ 00f1d3cc */
      local_50 = &local_70;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
    }
    else {
                    /* try { // try from 00f1d424 to 0101d42f has its CatchHandler @ 00f1d4b0 */
      local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
                    /* try { // try from 00f1d430 to 0101d43b has its CatchHandler @ 00f1d4a0 */
    }
  }
  FUN_00dad434(&local_70,this + 0x300);
  if (&local_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f1d490;
    pcVar5 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar5)();
LAB_00f1d490:
                    /* catch() { ... } // from try @ 00f1d43c with catch @ 00f1d490 */
                    /* catch() { ... } // from try @ 00f1d430 with catch @ 00f1d4a0 */
  *(undefined2 *)(this + 0x2f8) = 0x100;
  *(undefined4 *)(this + 0x334) = 0x3f800000;
  uVar2 = Color3B::WHITE;
                    /* catch() { ... } // from try @ 00f1d424 with catch @ 00f1d4b0 */
                    /* catch() { ... } // from try @ 00f1d41c with catch @ 00f1d4b4 */
  this[0x332] = DAT_01792432;
  *(undefined2 *)(this + 0x330) = uVar2;
                    /* try { // try from 00f1d4c8 to 0101d67b has its CatchHandler @ 00f1d4c8
                       catch() { ... } // from try @ 00f1d4c8 with catch @ 00f1d4c8
                       catch() { ... } // from try @ 00f1d684 with catch @ 00f1d4c8
                       catch() { ... } // from try @ 00f1d7c8 with catch @ 00f1d4c8
                       catch() { ... } // from try @ 00f1d8b0 with catch @ 00f1d4c8 */
  Color3B::Color3B((Color3B *)&local_70,'~','~','~');
  this[0x33a] = local_70._2_1_;
  *(undefined2 *)(this + 0x338) = (undefined2)local_70;
  if (param_1 != (Node *)0x0) {
    (**(code **)(*(long *)param_1 + 0x148))(param_1,&Vec2::ANCHOR_BOTTOM_LEFT);
    uVar4 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
    (**(code **)(*(long *)this + 0x160))(this,uVar4);
    (**(code **)(*(long *)this + 0x208))(this,param_1);
  }
  if (*(long *)(this + 0x340) != 0) {
    (**(code **)(*(long *)this + 0x280))(this,*(long *)(this + 0x340),1);
  }
  *(Node **)(this + 0x340) = param_1;
  (**(code **)(*(long *)this + 0x4d8))(this,1);
  (**(code **)(*(long *)this + 0x4a8))(this,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

