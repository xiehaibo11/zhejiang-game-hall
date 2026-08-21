
/* cocos2d::MenuItemToggle::initWithItem(cocos2d::MenuItem*) */

undefined8 __thiscall cocos2d::MenuItemToggle::initWithItem(MenuItemToggle *this,MenuItem *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long alStack_a0 [4];
  long *local_80;
  MenuItem *local_70 [4];
  MenuItem **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (long *)0x0;
  local_70[0] = (MenuItem *)0x3f0000003f000000;
  (**(code **)(*(long *)this + 0x148))(this,local_70);
  if (local_80 == (long *)0x0) {
    local_50 = (MenuItem **)0x0;
  }
  else if (alStack_a0 == local_80) {
    local_50 = local_70;
                    /* try { // try from 00f21174 to 0102117f has its CatchHandler @ 00f211c0 */
    (**(code **)(*local_80 + 0x18))(local_80,local_70);
  }
  else {
    local_50 = (MenuItem **)(**(code **)(*local_80 + 0x10))();
  }
                    /* try { // try from 00f21180 to 010211c7 has its CatchHandler @ 00f2108c */
  FUN_00dad434(local_70,this + 0x300);
  if (local_70 == local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00f211ac:
    (*pcVar2)();
  }
  else if (local_50 != (MenuItem **)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00f211ac;
  }
  *(undefined2 *)(this + 0x2f8) = 0x100;
                    /* catch() { ... } // from try @ 00f21174 with catch @ 00f211c0 */
  if (alStack_a0 == local_80) {
    pcVar2 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00f211e4;
    pcVar2 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar2)();
LAB_00f211e4:
  if (param_1 != (MenuItem *)0x0) {
    puVar3 = *(undefined8 **)(this + 0x348);
    local_70[0] = param_1;
    if (puVar3 == *(undefined8 **)(this + 0x350)) {
      std::__ndk1::vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>>::
      __push_back_slow_path<cocos2d::MenuItem*const&>
                ((vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)
                 (this + 0x340),local_70);
    }
    else {
      *puVar3 = param_1;
      *(undefined8 **)(this + 0x348) = puVar3 + 1;
    }
    Ref::retain((Ref *)local_70[0]);
  }
  *(undefined4 *)(this + 0x330) = 0xffffffff;
  setSelectedIndex(this,0);
  (**(code **)(*(long *)this + 0x4d8))(this,1);
  (**(code **)(*(long *)this + 0x4a8))(this,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

