
/* cocos2d::ui::Text::setFontSize(float) */

void __thiscall cocos2d::ui::Text::setFontSize(Text *this,float param_1)

{
  long lVar1;
  basic_string *pbVar2;
  undefined4 in_register_00005004;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x534) == 0) {
    (**(code **)(**(long **)(this + 0x528) + 0x570))(CONCAT44(in_register_00005004,param_1));
  }
  else {
    pbVar2 = (basic_string *)(**(code **)(**(long **)(this + 0x528) + 0x538))();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_70,pbVar2);
    uStack_44 = *(undefined8 *)(pbVar2 + 0x2c);
    uStack_50 = (undefined4)*(undefined8 *)(pbVar2 + 0x20);
    uStack_4c = (undefined4)*(undefined8 *)(pbVar2 + 0x24);
    uStack_48 = (undefined4)((ulong)*(undefined8 *)(pbVar2 + 0x24) >> 0x20);
    _local_58 = CONCAT44((int)((ulong)*(undefined8 *)(pbVar2 + 0x18) >> 0x20),param_1);
    (**(code **)(**(long **)(this + 0x528) + 0x530))(*(long **)(this + 0x528),local_70);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  *(float *)(this + 0x520) = param_1;
  (**(code **)(**(long **)(this + 0x528) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  this[0x530] = (Text)0x1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

