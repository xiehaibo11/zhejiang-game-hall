
/* cocos2d::Label::restoreFontSize() */

void __thiscall cocos2d::Label::restoreFontSize(Label *this)

{
  int iVar1;
  long lVar2;
  basic_string *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0x308);
  if (iVar1 == 3) {
    (**(code **)(*(long *)this + 0x570))(*(undefined4 *)(this + 0x688),this);
  }
  else if (iVar1 == 1) {
    (**(code **)(*(long *)this + 0x540))
              (*(undefined4 *)(this + 0x688),this,this + 0x348,&Vec2::ZERO);
    this[0x30c] = (Label)0x1;
  }
  else if (iVar1 == 0) {
    pbVar3 = (basic_string *)(**(code **)(*(long *)this + 0x538))(this);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_70,pbVar3);
    uStack_44 = *(undefined8 *)(pbVar3 + 0x2c);
    uStack_48 = (undefined4)((ulong)*(undefined8 *)(pbVar3 + 0x24) >> 0x20);
    uStack_50 = (undefined4)*(undefined8 *)(pbVar3 + 0x20);
    local_4c = (undefined4)((ulong)*(undefined8 *)(pbVar3 + 0x20) >> 0x20);
    _local_58 = CONCAT44((int)((ulong)*(undefined8 *)(pbVar3 + 0x18) >> 0x20),
                         *(undefined4 *)(this + 0x688));
    setTTFConfigInternal(this,(_ttfConfig *)local_70);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

