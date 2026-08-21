
/* cocos2d::ui::Button::setTitleFontSize(float) */

void __thiscall cocos2d::ui::Button::setTitleFontSize(Button *this,float param_1)

{
  int iVar1;
  Button BVar2;
  long lVar3;
  long *plVar4;
  basic_string *pbVar5;
  Button *pBVar6;
  undefined4 in_register_00005004;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  long local_38;
  
  pBVar6 = (Button *)local_70;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  plVar4 = *(long **)(this + 0x508);
  if (plVar4 == (long *)0x0) {
                    /* try { // try from 00dc1c4c to 00ec1c5b has its CatchHandler @ 00dc1dac */
    (**(code **)(*(long *)this + 0x6a0))(this);
    plVar4 = *(long **)(this + 0x508);
  }
  iVar1 = (int)plVar4[0x61];
                    /* try { // try from 00dc1c5c to 00ec1dc7 has its CatchHandler @ 00dc1a50 */
  if (iVar1 == 3) {
    (**(code **)(*plVar4 + 0x570))(CONCAT44(in_register_00005004,param_1));
    BVar2 = this[0x381];
  }
  else {
    if (iVar1 == 1) goto LAB_00dc1d58;
    if (iVar1 == 0) {
      pbVar5 = (basic_string *)(**(code **)(*plVar4 + 0x538))();
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_70,pbVar5);
      uStack_44 = *(undefined8 *)(pbVar5 + 0x2c);
      uStack_50 = (undefined4)*(undefined8 *)(pbVar5 + 0x20);
      uStack_4c = (undefined4)*(undefined8 *)(pbVar5 + 0x24);
      uStack_48 = (undefined4)((ulong)*(undefined8 *)(pbVar5 + 0x24) >> 0x20);
      local_58 = CONCAT44((int)((ulong)*(undefined8 *)(pbVar5 + 0x18) >> 0x20),param_1);
      (**(code **)(**(long **)(this + 0x508) + 0x530))(*(long **)(this + 0x508),local_70);
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
    }
    BVar2 = this[0x381];
  }
  if (BVar2 == (Button)0x0) {
    if (this[0x387] != (Button)0x0) {
      (**(code **)(*(long *)this + 0x610))(local_70,this);
      (**(code **)(*(long *)this + 0x160))(this,local_70);
    }
  }
  else {
    if (this[0x515] == (Button)0x0) {
      (**(code **)(*(long *)this + 0x6a8))(local_70,this);
    }
    else {
      pBVar6 = this + 0x39c;
    }
    Node::setContentSize((Node *)this,(Size *)pBVar6);
    (**(code **)(*(long *)this + 0x628))(this);
  }
LAB_00dc1d58:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

