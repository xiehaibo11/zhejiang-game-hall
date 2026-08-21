
/* cocos2d::TextFieldTTF::insertText(char const*, unsigned long) */

void __thiscall cocos2d::TextFieldTTF::insertText(TextFieldTTF *this,char *param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte local_a0 [16];
  void *local_90;
  StringUTF8 local_88 [16];
  void *local_78;
  ulong local_70;
  ulong local_68;
  byte *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = 0;
  local_60 = (byte *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (param_2 < 0x17) {
    pbVar11 = (byte *)((ulong)&local_70 | 1);
    local_70 = (ulong)(byte)((int)param_2 << 1);
    if (param_2 != 0) goto LAB_00f55f10;
  }
  else {
    uVar7 = param_2 + 0x10 & 0xfffffffffffffff0;
    pbVar11 = operator_new(uVar7);
    local_70 = uVar7 | 1;
                    /* try { // try from 00f55f04 to 01055f47 has its CatchHandler @ 00f55f04
                       catch(type#1 @ 00000000) { ... } // from try @ 00f55f04 with catch @ 00f55f04
                        */
    local_68 = param_2;
    local_60 = pbVar11;
LAB_00f55f10:
    memcpy(pbVar11,param_1,param_2);
  }
  uVar4 = local_70;
  pbVar11[param_2] = 0;
  pbVar12 = (byte *)((ulong)&local_70 | 1);
  pbVar11 = pbVar12;
  uVar7 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    pbVar11 = local_60;
    uVar7 = local_68;
  }
  if (uVar7 == 0) {
LAB_00f55f88:
    bVar3 = true;
    if (param_2 == 0) goto LAB_00f5613c;
LAB_00f55f90:
    plVar6 = *(long **)(this + 0x6a8);
    if (plVar6 != (long *)0x0) {
      pbVar11 = pbVar12;
      if ((local_70 & 1) != 0) {
        pbVar11 = local_60;
      }
      uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,this,pbVar11,param_2);
      if ((uVar7 & 1) != 0) goto LAB_00f56140;
    }
    pbVar11 = pbVar12;
    if ((local_70 & 1) != 0) {
      pbVar11 = local_60;
    }
    bVar10 = *pbVar11;
    if (bVar10 == 0) {
      uVar7 = 0;
    }
    else {
      uVar9 = 0;
      do {
        pbVar11 = pbVar11 + 1;
        bVar1 = bVar10 & 0xc0;
        bVar10 = *pbVar11;
        if (bVar1 != 0x80) {
          uVar9 = uVar9 + 1;
        }
      } while (bVar10 != 0);
      uVar7 = (ulong)uVar9;
    }
    *(ulong *)(this + 0x6b0) = *(long *)(this + 0x6b0) + uVar7;
    if (this[0x710] == (TextFieldTTF)0x0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_88,(basic_string *)(this + 0x6b8));
      uVar7 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        uVar7 = local_68;
        pbVar12 = local_60;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_88,(char *)pbVar12,uVar7);
      (**(code **)(*(long *)this + 0x588))(this,local_88);
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      goto LAB_00f5613c;
    }
    StringUtils::StringUTF8::StringUTF8(local_88);
    StringUtils::StringUTF8::replace(local_88,(basic_string *)(this + 0x6b8));
    StringUtils::StringUTF8::insert(local_88,*(ulong *)(this + 0x718),(basic_string *)&local_70);
    if ((this[0x710] != (TextFieldTTF)0x0) &&
       (*(long *)(this + 0x718) + uVar7 <= *(ulong *)(this + 0x6b0))) {
      *(ulong *)(this + 0x718) = *(long *)(this + 0x718) + uVar7;
      *(undefined4 *)(this + 0x724) = 0x3f800000;
    }
    StringUtils::StringUTF8::getAsCharSequence();
    (**(code **)(*(long *)this + 0x588))(this,local_a0);
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    StringUtils::StringUTF8::~StringUTF8(local_88);
    if (bVar3) goto LAB_00f56140;
  }
  else {
                    /* try { // try from 00f55f48 to 01055f6f has its CatchHandler @ 00f56004 */
    pvVar5 = memchr(pbVar11,10,uVar7);
    iVar8 = (int)pvVar5 - (int)pbVar11;
    if (pvVar5 == (void *)0x0) {
      iVar8 = -1;
    }
    if (iVar8 == -1) goto LAB_00f55f88;
    param_2 = (ulong)iVar8;
    if (uVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar7 = param_2;
    if ((uVar4 & 1) == 0) {
      local_70 = CONCAT71(local_70._1_7_,(char)(iVar8 << 1));
      uVar7 = local_68;
    }
    local_68 = uVar7;
    bVar3 = false;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f55f48 with catch @ 00f56004
                        */
    pbVar11[param_2] = 0;
    if (param_2 != 0) goto LAB_00f55f90;
LAB_00f5613c:
    if (bVar3) goto LAB_00f56140;
  }
  plVar6 = *(long **)(this + 0x6a8);
  if ((plVar6 == (long *)0x0) ||
     (uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,this,&DAT_013c61e6,1), (uVar7 & 1) == 0)) {
    (**(code **)(*(long *)this + 0x618))(this);
  }
LAB_00f56140:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

