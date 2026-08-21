
/* cocos2d::ui::TabHeader::setTitleFontSize(float) */

void __thiscall cocos2d::ui::TabHeader::setTitleFontSize(TabHeader *this,float param_1)

{
  long lVar1;
  basic_string *pbVar2;
  int iVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = *(int *)(this + 0x610);
  *(float *)(this + 0x5c8) = param_1;
  if (iVar3 == 1) {
    pbVar2 = (basic_string *)(**(code **)(**(long **)(this + 0x5c0) + 0x538))();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_70,pbVar2);
    uStack_44 = *(undefined8 *)(pbVar2 + 0x2c);
    uStack_48 = (undefined4)((ulong)*(undefined8 *)(pbVar2 + 0x24) >> 0x20);
    uStack_50 = (undefined4)*(undefined8 *)(pbVar2 + 0x20);
    local_4c = (undefined4)((ulong)*(undefined8 *)(pbVar2 + 0x20) >> 0x20);
    _local_58 = CONCAT44((int)((ulong)*(undefined8 *)(pbVar2 + 0x18) >> 0x20),
                         *(undefined4 *)(this + 0x5c8));
    (**(code **)(**(long **)(this + 0x5c0) + 0x530))(*(long **)(this + 0x5c0),local_70);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    if (iVar3 != 0) goto LAB_00df35e8;
    (**(code **)(**(long **)(this + 0x5c0) + 0x570))();
  }
  iVar3 = *(int *)(this + 0x610);
LAB_00df35e8:
  if (iVar3 != 2) {
    Node::setContentSize((Node *)this,(Size *)(this + 0x39c));
                    /* try { // try from 00df3604 to 00ef364b has its CatchHandler @ 00df3604
                       catch(type#1 @ 00000000) { ... } // from try @ 00df3604 with catch @ 00df3604
                       catch(type#1 @ 00000000) { ... } // from try @ 00df3688 with catch @ 00df3604
                        */
    (**(code **)(*(long *)this + 0x628))(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

