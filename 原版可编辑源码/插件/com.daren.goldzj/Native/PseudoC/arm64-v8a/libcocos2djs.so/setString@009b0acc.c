
/* cocos2d::LabelLayout::setString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
cocos2d::LabelLayout::setString(LabelLayout *this,basic_string *param_1,bool param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  basic_string bVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  basic_string *pbVar6;
  long lVar7;
  LabelLayout *pLVar8;
  LabelLayout *__s2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  void *__dest;
  ulong uVar9;
  ulong local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
                    /* try { // try from 009b0ad4 to 00ab0adb has its CatchHandler @ 009b0bd0 */
                    /* try { // try from 009b0adc to 00ab0aff has its CatchHandler @ 009b0a6c */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 009b0b00 to 00ab0b0b has its CatchHandler @ 009b0bd0 */
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8);
  bVar1 = *this_00;
  bVar2 = *param_1;
                    /* try { // try from 009b0b0c to 00ab0b33 has its CatchHandler @ 009b0a6c */
  sVar5 = (ulong)((byte)bVar1 >> 1);
  if (((byte)bVar1 & 1) != 0) {
    sVar5 = *(size_t *)(this + 0x10);
  }
  uVar9 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
                    /* try { // try from 009b0b34 to 00ab0b3b has its CatchHandler @ 009b0bcc */
  if (sVar5 == uVar9) {
    pLVar8 = *(LabelLayout **)(this + 0x18);
                    /* try { // try from 009b0b3c to 00ab0b5b has its CatchHandler @ 009b0a6c */
    __s2 = *(LabelLayout **)(param_1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pLVar8 = this + 9;
    }
    if (((byte)bVar2 & 1) == 0) {
      __s2 = (LabelLayout *)(param_1 + 1);
    }
    if (((byte)bVar1 & 1) == 0) {
      if (sVar5 != 0) {
        pLVar8 = this + 9;
                    /* try { // try from 009b0b5c to 00ab0b63 has its CatchHandler @ 009b0bcc */
        lVar7 = -(ulong)((byte)bVar1 >> 1);
        do {
                    /* try { // try from 009b0b64 to 00ab0b83 has its CatchHandler @ 009b0a6c */
          if (*pLVar8 != *__s2) goto LAB_009b0b90;
          pLVar8 = pLVar8 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else {
                    /* try { // try from 009b0b84 to 00ab0b8f has its CatchHandler @ 009b0bcc */
      if ((sVar5 != 0) && (iVar4 = memcmp(pLVar8,__s2,sVar5), iVar4 != 0)) goto LAB_009b0b90;
    }
    if (!param_2) goto LAB_009b0c6c;
  }
  else {
LAB_009b0b90:
                    /* try { // try from 009b0b90 to 00ab0bd3 has its CatchHandler @ 009b0a6c */
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      pbVar6 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar6 = param_1 + 1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,(char *)pbVar6,uVar9);
      bVar2 = *param_1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b0b34 with catch @ 009b0bcc
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0b5c with catch @ 009b0bcc
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0b84 with catch @ 009b0bcc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b0ad4 with catch @ 009b0bd0
                       catch(type#1 @ 00000000) { ... } // from try @ 009b0b00 with catch @ 009b0bd0
                        */
    local_70 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
    pbVar6 = param_1 + 1;
    if (((byte)bVar2 & 1) != 0) {
      pbVar6 = *(basic_string **)(param_1 + 0x10);
    }
    sVar5 = strlen((char *)pbVar6);
    if (0xffffffffffffffef < sVar5) {
                    /* catch() { ... } // from try @ 009b0c84 with catch @ 009b0c9c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar5 < 0x17) {
      __dest = (void *)((ulong)&local_70 | 1);
      local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar5 << 1));
      if (sVar5 != 0) goto LAB_009b0c34;
    }
    else {
      uVar9 = sVar5 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar9);
      local_70 = uVar9 | 1;
      local_68 = sVar5;
      local_60 = __dest;
LAB_009b0c34:
                    /* try { // try from 009b0c40 to 00ab0c73 has its CatchHandler @ 009b0c40
                       catch() { ... } // from try @ 009b0c40 with catch @ 009b0c40
                       catch() { ... } // from try @ 009b0c88 with catch @ 009b0c40 */
      memcpy(__dest,pbVar6,sVar5);
    }
    *(undefined1 *)((long)__dest + sVar5) = 0;
    StringUtils::UTF8ToUTF32((basic_string *)&local_70,(basic_string *)(this + 0x20));
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
  }
  updateContent(this);
LAB_009b0c6c:
                    /* try { // try from 009b0c74 to 00ab0c7b has its CatchHandler @ 009b0cac */
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009b0c84 to 00ab0c87 has its CatchHandler @ 009b0c9c */
                    /* try { // try from 009b0c88 to 00ab0cbf has its CatchHandler @ 009b0c40 */
  return;
}

