
/* cocos2d::TextFieldTTF::setString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::TextFieldTTF::setString(TextFieldTTF *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  byte bVar1;
  ulong uVar2;
  basic_string bVar3;
  long lVar4;
  uint uVar5;
  basic_string *pbVar6;
  TextFieldTTF *pTVar7;
  TextFieldTTF TVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_68 [2];
  void *local_58;
  Color3B aCStack_50 [8];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x6b8);
  local_68[1] = 0;
  local_58 = (void *)0x0;
  local_68[0] = 0;
  bVar3 = *param_1;
  uVar9 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  if (uVar9 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,"",0);
    uVar9 = 0;
  }
  else {
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      pbVar6 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        pbVar6 = param_1 + 1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,(char *)pbVar6,uVar9);
    }
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)local_68
        != this_00) {
      pTVar7 = *(TextFieldTTF **)(this + 0x6c8);
      uVar9 = *(ulong *)(this + 0x6c0);
      if (((byte)this[0x6b8] & 1) == 0) {
        pTVar7 = this + 0x6b9;
        uVar9 = (ulong)((byte)this[0x6b8] >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_68,(char *)pTVar7,uVar9);
    }
    if (((byte)*this_00 & 1) == 0) {
      pTVar7 = this + 0x6b9;
      TVar8 = *pTVar7;
      if (TVar8 == (TextFieldTTF)0x0) goto LAB_00f56b8c;
LAB_00f56b3c:
      uVar5 = 0;
      do {
        pTVar7 = pTVar7 + 1;
        bVar1 = (byte)TVar8 & 0xc0;
        TVar8 = *pTVar7;
        if (bVar1 != 0x80) {
          uVar5 = uVar5 + 1;
        }
      } while (TVar8 != (TextFieldTTF)0x0);
      uVar9 = (ulong)uVar5;
      TVar8 = this[0x6f0];
    }
    else {
      pTVar7 = *(TextFieldTTF **)(this + 0x6c8);
      TVar8 = *pTVar7;
      if (TVar8 != (TextFieldTTF)0x0) goto LAB_00f56b3c;
LAB_00f56b8c:
      uVar9 = 0;
      TVar8 = this[0x6f0];
    }
    if ((TVar8 != (TextFieldTTF)0x0) &&
       (std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_68,"",0), uVar9 != 0)) {
      uVar10 = uVar9;
      do {
        uVar2 = (ulong)((byte)this[0x6f8] >> 1);
        pTVar7 = this + 0x6f9;
        if (((byte)this[0x6f8] & 1) != 0) {
          uVar2 = *(ulong *)(this + 0x700);
          pTVar7 = *(TextFieldTTF **)(this + 0x708);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_68,(char *)pTVar7,uVar2);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (this[0x710] != (TextFieldTTF)0x0) {
    if (uVar9 != *(ulong *)(this + 0x6b0)) {
      *(ulong *)(this + 0x718) = uVar9;
    }
    Label::removeAllChildrenWithCleanup((Label *)this,false);
  }
  if (((byte)*this_00 & 1) == 0) {
    if ((byte)*this_00 >> 1 == 0) {
LAB_00f56c18:
      if ((this[0x710] == (TextFieldTTF)0x0) || (this[0x728] == (TextFieldTTF)0x0)) {
        if (*(int *)(this + 0x308) == 1) {
          Color3B::Color3B(aCStack_50,(Color4B *)(this + 0x6e8));
          Node::setColor((Node *)this,aCStack_50);
        }
        else {
          Label::setTextColor((Label *)this,(Color4B *)(this + 0x6e8));
        }
        Label::setString((Label *)this,(basic_string *)(this + 0x6d0));
        goto LAB_00f56cb8;
      }
    }
  }
  else if (*(long *)(this + 0x6c0) == 0) goto LAB_00f56c18;
  makeStringSupportCursor(this,(basic_string *)local_68);
                    /* catch() { ... } // from try @ 00f56c9c with catch @ 00f56c6c */
  if (*(int *)(this + 0x308) == 1) {
    Color3B::Color3B(aCStack_50,(Color4B *)(this + 0x6ec));
    Node::setColor((Node *)this,aCStack_50);
  }
  else {
    Label::setTextColor((Label *)this,(Color4B *)(this + 0x6ec));
  }
                    /* try { // try from 00f56c94 to 01056c9b has its CatchHandler @ 00f56cd4 */
                    /* try { // try from 00f56c9c to 01056cef has its CatchHandler @ 00f56c6c */
  Label::setString((Label *)this,(basic_string *)local_68);
LAB_00f56cb8:
  *(ulong *)(this + 0x6b0) = uVar9;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
                    /* catch() { ... } // from try @ 00f56c94 with catch @ 00f56cd4 */
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00f56cf0 to 01056d67 has its CatchHandler @ 00f56cf0
                       catch() { ... } // from try @ 00f56cf0 with catch @ 00f56cf0
                       catch() { ... } // from try @ 00f5760c with catch @ 00f56cf0 */
  return;
}

