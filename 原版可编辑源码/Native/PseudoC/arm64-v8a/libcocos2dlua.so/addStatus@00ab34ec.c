
/* fairygui::GearLook::addStatus(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, fairygui::ByteBuffer*) */

void __thiscall
fairygui::GearLook::addStatus(GearLook *this,basic_string *param_1,ByteBuffer *param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  GearLook *pGVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  basic_string *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 00ab3450 with catch @ 00ab3504 */
                    /* catch() { ... } // from try @ 00ab3414 with catch @ 00ab3508
                       catch() { ... } // from try @ 00ab34a0 with catch @ 00ab3508 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar7 = ByteBuffer::readFloat(param_2);
  uVar8 = ByteBuffer::readFloat(param_2);
  bVar3 = ByteBuffer::readBool(param_2);
  bVar4 = ByteBuffer::readBool(param_2);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 0) {
    *(undefined4 *)(this + 0x48) = uVar7;
    *(undefined4 *)(this + 0x4c) = uVar8;
    this[0x50] = (GearLook)(bVar3 & 1);
    pGVar6 = this + 0x51;
  }
  else {
    local_60 = param_1;
    lVar5 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::GearLook::GearLookValue>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x20),(piecewise_construct_t *)param_1,
                       (tuple *)&DAT_013cf215,(tuple *)&local_60);
    pGVar6 = (GearLook *)(lVar5 + 0x31);
    *(undefined4 *)(lVar5 + 0x28) = uVar7;
    *(undefined4 *)(lVar5 + 0x2c) = uVar8;
    *(byte *)(lVar5 + 0x30) = bVar3 & 1;
  }
  *pGVar6 = (GearLook)(bVar4 & 1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

