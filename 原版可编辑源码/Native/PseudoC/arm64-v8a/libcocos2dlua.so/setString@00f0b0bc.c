
/* cocos2d::Label::setString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Label::setString(Label *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  size_t __n;
  Label LVar2;
  basic_string bVar3;
  long lVar4;
  wchar32 *pwVar5;
  int iVar6;
  ulong uVar7;
  basic_string *pbVar8;
  Label *pLVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  wchar32 *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x328);
  LVar2 = this[0x328];
  bVar3 = *param_1;
  uVar7 = (ulong)((byte)LVar2 >> 1);
  if (((byte)LVar2 & 1) != 0) {
    uVar7 = *(ulong *)(this + 0x330);
  }
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  __n = uVar7;
  if (uVar1 <= uVar7) {
    __n = uVar1;
  }
  if (__n == 0) {
LAB_00f0b144:
    if (uVar1 == uVar7) goto LAB_00f0b250;
  }
  else {
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    pLVar9 = *(Label **)(this + 0x338);
    if (((byte)bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    if (((byte)LVar2 & 1) == 0) {
      pLVar9 = this + 0x329;
    }
    iVar6 = memcmp(pbVar8,pLVar9,__n);
    if (iVar6 == 0) goto LAB_00f0b144;
  }
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar8,uVar1);
  }
  this[0x30c] = (Label)0x1;
  local_68 = 0;
  local_60 = (wchar32 *)0x0;
  local_70 = 0;
  uVar7 = StringUtils::UTF8ToUTF32((basic_string *)this_00,(basic_string *)&local_70);
  if ((uVar7 & 1) != 0) {
    if ((basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
         *)(this + 0x310) !=
        (basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
         *)&local_70) {
      uVar7 = local_70 >> 1 & 0x7f;
      pwVar5 = (wchar32 *)((ulong)&local_70 | 4);
      if ((local_70 & 1) != 0) {
        uVar7 = local_68;
        pwVar5 = local_60;
      }
      std::__ndk1::
      basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::
      assign((basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
              *)(this + 0x310),pwVar5,uVar7);
    }
  }
  if ((((byte)this[0x310] & 1) != 0) && (0x4000 < *(ulong *)(this + 0x318))) {
    log("Error: Label text is too long %d > %d and it will be truncated!",*(ulong *)(this + 0x318),
        0x4000);
    pLVar9 = this + 0x310;
    std::__ndk1::
    basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::
    basic_string((basic_string *)&local_88,(ulong)pLVar9,0,(allocator *)0x4000);
    if (((byte)*pLVar9 & 1) == 0) {
      *(undefined4 *)(this + 0x314) = 0;
      *pLVar9 = (Label)0x0;
    }
    else {
      **(undefined4 **)(this + 800) = 0;
      *(undefined8 *)(this + 0x318) = 0;
      if (((byte)this[0x310] & 1) != 0) {
        operator_delete(*(void **)(this + 800));
        *(undefined8 *)(this + 0x310) = 0;
      }
    }
    *(undefined8 *)(this + 800) = local_78;
    *(undefined8 *)(this + 0x318) = uStack_80;
    *(undefined8 *)pLVar9 = local_88;
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00f0b250:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

