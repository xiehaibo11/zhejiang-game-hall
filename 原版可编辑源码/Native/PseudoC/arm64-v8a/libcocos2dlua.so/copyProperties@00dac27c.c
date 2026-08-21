
/* cocos2d::ui::Widget::copyProperties(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::Widget::copyProperties(Widget *this,Widget *param_1)

{
  Widget WVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  Widget *pWVar6;
  LayoutParameter *this_00;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  int local_84;
  LayoutParameter *local_80 [4];
  LayoutParameter **local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)this + 0x580))(this,param_1[0x382]);
  uVar3 = (**(code **)(*(long *)param_1 + 0x178))(param_1);
  (**(code **)(*(long *)this + 0x170))(this,uVar3 & 1);
  WVar1 = param_1[899];
  this[899] = WVar1;
  if (WVar1 == (Widget)0x0) {
    pcVar7 = *(code **)(*(long *)this + 0x648);
  }
  else {
    *(undefined4 *)(this + 0x38c) = 0;
    pcVar7 = *(code **)(*(long *)this + 0x638);
  }
  (*pcVar7)(this);
  (**(code **)(*(long *)this + 0x588))(this,param_1[900]);
  uVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  (**(code **)(*(long *)this + 0x18))(this,uVar4);
  uVar4 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1);
  (**(code **)(*(long *)this + 0x2c0))(this,uVar4);
  uVar5 = (**(code **)(*(long *)param_1 + 0x2c8))(param_1);
  (**(code **)(*(long *)this + 0x2d0))(this,uVar5);
  *(undefined4 *)(this + 0x398) = *(undefined4 *)(param_1 + 0x398);
  this[0x387] = param_1[0x387];
  (**(code **)(*(long *)this + 0x160))(this,param_1 + 0x80);
                    /* try { // try from 00dac3b4 to 00eac3b7 has its CatchHandler @ 00dac400 */
  Size::operator=((Size *)(this + 0x39c),(Size *)(param_1 + 0x39c));
  *(undefined4 *)(this + 0x390) = *(undefined4 *)(param_1 + 0x390);
  *(undefined8 *)(this + 0x3a4) = *(undefined8 *)(param_1 + 0x3a4);
  *(undefined4 *)(this + 0x394) = *(undefined4 *)(param_1 + 0x394);
  *(undefined8 *)(this + 0x3ac) = *(undefined8 *)(param_1 + 0x3ac);
  uVar5 = (**(code **)(*(long *)param_1 + 0xb0))(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dac3b4 with catch @ 00dac400
                        */
  (**(code **)(*(long *)this + 0x98))(this,uVar5);
  uVar5 = (**(code **)(*(long *)param_1 + 0x150))(param_1);
  (**(code **)(*(long *)this + 0x148))(this,uVar5);
  (**(code **)(*(long *)param_1 + 0x58))(param_1);
  (**(code **)(*(long *)this + 0x50))(this);
  (**(code **)(*(long *)param_1 + 0x68))(param_1);
  (**(code **)(*(long *)this + 0x60))(this);
                    /* try { // try from 00dac474 to 00eac4ab has its CatchHandler @ 00dac474
                       catch(type#1 @ 00000000) { ... } // from try @ 00dac474 with catch @ 00dac474
                       catch(type#1 @ 00000000) { ... } // from try @ 00dac4b8 with catch @ 00dac474
                       catch(type#1 @ 00000000) { ... } // from try @ 00dac5e4 with catch @ 00dac474
                       catch(type#1 @ 00000000) { ... } // from try @ 00dac670 with catch @ 00dac474
                        */
  (**(code **)(*(long *)param_1 + 0x188))(param_1);
  (**(code **)(*(long *)this + 0x180))(this);
  (**(code **)(*(long *)param_1 + 0x1c0))(param_1);
  (**(code **)(*(long *)this + 0x1b0))(this);
                    /* try { // try from 00dac4ac to 00eac4b7 has its CatchHandler @ 00dac6a8 */
  (**(code **)(*(long *)param_1 + 0x1e0))(param_1);
                    /* try { // try from 00dac4b8 to 00eac57b has its CatchHandler @ 00dac474 */
  (**(code **)(*(long *)this + 0x1d0))(this);
  uVar3 = (**(code **)(*(long *)param_1 + 0x5a0))(param_1);
  (**(code **)(*(long *)this + 0x598))(this,uVar3 & 1);
  uVar3 = (**(code **)(*(long *)param_1 + 0x5b0))(param_1);
  (**(code **)(*(long *)this + 0x5a8))(this,uVar3 & 1);
  uVar5 = (**(code **)(*(long *)param_1 + 0x4b0))(param_1);
  (**(code **)(*(long *)this + 0x4c0))(this,uVar5);
  uVar4 = (**(code **)(*(long *)param_1 + 0x480))(param_1);
  (**(code **)(*(long *)this + 0x490))(this,uVar4);
  uVar3 = (**(code **)(*(long *)param_1 + 0x4d0))(param_1);
  (**(code **)(*(long *)this + 0x4d8))(this,uVar3 & 1);
                    /* try { // try from 00dac57c to 00eac583 has its CatchHandler @ 00dac650 */
  uVar3 = (**(code **)(*(long *)param_1 + 0x4a0))(param_1);
                    /* try { // try from 00dac594 to 00eac597 has its CatchHandler @ 00dac6bc */
  (**(code **)(*(long *)this + 0x4a8))(this,uVar3 & 1);
  pWVar6 = *(Widget **)(param_1 + 0x450);
  if (pWVar6 == (Widget *)0x0) {
    local_60 = (LayoutParameter **)0x0;
  }
  else if (param_1 + 0x430 == pWVar6) {
    local_60 = local_80;
                    /* try { // try from 00dac5e0 to 00eac5e3 has its CatchHandler @ 00dac654 */
                    /* try { // try from 00dac5e4 to 00eac66b has its CatchHandler @ 00dac474 */
    (**(code **)(*(long *)pWVar6 + 0x18))(pWVar6,local_80);
  }
  else {
                    /* try { // try from 00dac5bc to 00eac5c3 has its CatchHandler @ 00dac658 */
    local_60 = (LayoutParameter **)(**(code **)(*(long *)pWVar6 + 0x10))();
  }
  FUN_00dad2cc(local_80,this + 0x430);
  if (local_80 == local_60) {
    pcVar7 = *(code **)(*local_60 + 0x20);
LAB_00dac61c:
    (*pcVar7)();
  }
  else if (local_60 != (LayoutParameter **)0x0) {
    pcVar7 = *(code **)(*local_60 + 0x28);
    goto LAB_00dac61c;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x418);
  uVar5 = *(undefined8 *)(param_1 + 0x428);
  *(undefined8 *)(this + 0x420) = *(undefined8 *)(param_1 + 0x420);
  *(undefined8 *)(this + 0x418) = uVar9;
  *(undefined8 *)(this + 0x428) = uVar5;
  pWVar6 = *(Widget **)(param_1 + 0x480);
  if (pWVar6 == (Widget *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dac5bc with catch @ 00dac658
                        */
    local_60 = (LayoutParameter **)0x0;
  }
  else if (param_1 + 0x460 == pWVar6) {
    local_60 = local_80;
                    /* try { // try from 00dac66c to 00eac66f has its CatchHandler @ 00dac694 */
                    /* try { // try from 00dac670 to 00eac6d7 has its CatchHandler @ 00dac474 */
    (**(code **)(*(long *)pWVar6 + 0x18))(pWVar6,local_80);
  }
  else {
    local_60 = (LayoutParameter **)(**(code **)(*(long *)pWVar6 + 0x10))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dac57c with catch @ 00dac650
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dac5e0 with catch @ 00dac654
                        */
  }
  FUN_00dad434(local_80,this + 0x460);
  if (local_80 == local_60) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dac4ac with catch @ 00dac6a8
                        */
    pcVar7 = *(code **)(*local_60 + 0x20);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dac66c with catch @ 00dac694
                        */
    if (local_60 == (LayoutParameter **)0x0) goto LAB_00dac6b0;
    pcVar7 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar7)();
LAB_00dac6b0:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dac594 with catch @ 00dac6bc
                        */
  this[0x414] = param_1[0x414];
  this[0x415] = param_1[0x415];
  this[0x388] = param_1[0x388];
  (**(code **)(*(long *)this + 0x670))(this,param_1);
  plVar8 = *(long **)(param_1 + 0x3f8);
  if (plVar8 != (long *)0x0) {
    do {
      this_00 = (LayoutParameter *)LayoutParameter::clone((LayoutParameter *)plVar8[3]);
      if (this_00 != (LayoutParameter *)0x0) {
        local_84 = LayoutParameter::getLayoutType(this_00);
        local_80[0] = this_00;
        Ref::retain((Ref *)this_00);
        Map<int,cocos2d::ui::LayoutParameter*>::erase
                  ((Map<int,cocos2d::ui::LayoutParameter*> *)(this + 1000),&local_84);
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>>>
        ::__emplace_unique_key_args<int,int_const&,cocos2d::ui::LayoutParameter*&>
                  ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::ui::LayoutParameter*>>>
                    *)(this + 1000),&local_84,&local_84,local_80);
        uVar4 = LayoutParameter::getLayoutType(this_00);
        *(undefined4 *)(this + 0x410) = uVar4;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

