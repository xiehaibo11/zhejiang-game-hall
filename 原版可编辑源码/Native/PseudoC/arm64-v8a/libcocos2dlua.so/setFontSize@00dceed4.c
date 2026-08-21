
/* cocos2d::ui::TextField::setFontSize(int) */

void __thiscall cocos2d::ui::TextField::setFontSize(TextField *this,int param_1)

{
  long lVar1;
  basic_string *pbVar2;
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
  if (*(int *)(this + 0x574) == 2) {
    Label::setBMFontSize(*(Label **)(this + 0x4f0),(float)param_1);
  }
  else if (*(int *)(this + 0x574) == 0) {
    (**(code **)(**(long **)(this + 0x4f0) + 0x570))((float)param_1);
  }
  else {
                    /* catch() { ... } // from try @ 00dcd9d8 with catch @ 00dcef34
                       catch() { ... } // from try @ 00dcda4c with catch @ 00dcef34 */
    pbVar2 = (basic_string *)(**(code **)(**(long **)(this + 0x4f0) + 0x538))();
                    /* catch() { ... } // from try @ 00dcd878 with catch @ 00dcef44
                       catch() { ... } // from try @ 00dcd8ec with catch @ 00dcef44 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_70,pbVar2);
                    /* catch() { ... } // from try @ 00dcd718 with catch @ 00dcef54
                       catch() { ... } // from try @ 00dcd78c with catch @ 00dcef54 */
    uStack_44 = *(undefined8 *)(pbVar2 + 0x2c);
    uStack_50 = (undefined4)*(undefined8 *)(pbVar2 + 0x20);
                    /* catch() { ... } // from try @ 00dcd5ec with catch @ 00dcef64 */
    uStack_4c = (undefined4)*(undefined8 *)(pbVar2 + 0x24);
    uStack_48 = (undefined4)((ulong)*(undefined8 *)(pbVar2 + 0x24) >> 0x20);
    _local_58 = CONCAT44((int)((ulong)*(undefined8 *)(pbVar2 + 0x18) >> 0x20),(float)param_1);
    (**(code **)(**(long **)(this + 0x4f0) + 0x530))(*(long **)(this + 0x4f0),local_70);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  *(int *)(this + 0x570) = param_1;
  this[0x550] = (TextField)0x1;
  (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

