
/* fairygui::GButton::setup_afterAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GButton::setup_afterAdd(GButton *this,ByteBuffer *param_1,int param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  undefined4 uVar13;
  undefined4 local_44;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  GComponent::setup_afterAdd((GComponent *)this,param_1,param_2);
  uVar7 = ByteBuffer::seek(param_1,param_2,6);
  if (((uVar7 & 1) == 0) ||
     (cVar3 = ByteBuffer::readByte(param_1), *(int *)(*(long *)(this + 0xb0) + 0x34) != (int)cVar3))
  goto LAB_00a6e160;
  pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readSP(param_1);
  if (pbVar8 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0) {
    pbVar12 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x2c0);
    if (pbVar12 != pbVar8) {
      uVar7 = *(ulong *)(pbVar8 + 8);
      pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar8 + 0x10);
      if (((byte)*pbVar8 & 1) == 0) {
        pbVar1 = pbVar8 + 1;
        uVar7 = (ulong)((byte)*pbVar8 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar12,(char *)pbVar1,uVar7);
    }
    plVar9 = *(long **)(this + 0x288);
    if (plVar9 != (long *)0x0) {
      if (this[0x33c] == (GButton)0x0) {
LAB_00a6df64:
        pbVar8 = pbVar12;
      }
      else {
        pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x2d8);
        if (((byte)this[0x2d8] & 1) == 0) {
          if ((byte)this[0x2d8] >> 1 == 0) goto LAB_00a6df64;
        }
        else if (*(long *)(this + 0x2e0) == 0) goto LAB_00a6df64;
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,pbVar8);
    }
    GObject::updateGear((GObject *)this,6);
  }
  pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readSP(param_1);
  if (pbVar8 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0) {
    pbVar12 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x2d8);
    if (pbVar12 != pbVar8) {
      uVar7 = *(ulong *)(pbVar8 + 8);
      pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar8 + 0x10);
      if (((byte)*pbVar8 & 1) == 0) {
        pbVar1 = pbVar8 + 1;
        uVar7 = (ulong)((byte)*pbVar8 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar12,(char *)pbVar1,uVar7);
    }
    plVar9 = *(long **)(this + 0x288);
    if (plVar9 != (long *)0x0) {
      if (this[0x33c] == (GButton)0x0) {
LAB_00a6dfe4:
        pbVar12 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (this + 0x2c0);
      }
      else if (((byte)*pbVar12 & 1) == 0) {
        if ((byte)*pbVar12 >> 1 == 0) goto LAB_00a6dfe4;
      }
      else if (*(long *)(this + 0x2e0) == 0) goto LAB_00a6dfe4;
      (**(code **)(*plVar9 + 0x18))(plVar9,pbVar12);
    }
  }
  lVar10 = ByteBuffer::readSP(param_1);
  if (lVar10 != 0) {
    (**(code **)(*(long *)this + 0x28))(this,lVar10);
  }
  pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readSP(param_1);
  if (pbVar8 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0) {
    pbVar12 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x308);
    if (pbVar12 != pbVar8) {
      uVar7 = *(ulong *)(pbVar8 + 8);
      pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar8 + 0x10);
      if (((byte)*pbVar8 & 1) == 0) {
        pbVar1 = pbVar8 + 1;
        uVar7 = (ulong)((byte)*pbVar8 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pbVar12,(char *)pbVar1,uVar7);
    }
    plVar9 = *(long **)(this + 0x290);
    if (plVar9 != (long *)0x0) {
      if (this[0x33c] == (GButton)0x0) {
LAB_00a6e07c:
        pbVar12 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (this + 0x2f0);
      }
      else if (((byte)*pbVar12 & 1) == 0) {
        if ((byte)*pbVar12 >> 1 == 0) goto LAB_00a6e07c;
      }
      else if (*(long *)(this + 0x310) == 0) goto LAB_00a6e07c;
      (**(code **)(*plVar9 + 0x28))(plVar9,pbVar12);
    }
  }
  uVar7 = ByteBuffer::readBool(param_1);
                    /* try { // try from 00a6e098 to 00b6e12b has its CatchHandler @ 00a6e098
                       catch() { ... } // from try @ 00a6e098 with catch @ 00a6e098
                       catch() { ... } // from try @ 00a6e134 with catch @ 00a6e098 */
  if ((uVar7 & 1) != 0) {
    local_44 = ByteBuffer::readColor(param_1);
    cocos2d::Color3B::Color3B(aCStack_40,(Color4B *)&local_44);
    setTitleColor(this,aCStack_40);
  }
  iVar6 = ByteBuffer::readInt(param_1);
  if (iVar6 != 0) {
    setTitleFontSize(this,iVar6);
  }
  sVar5 = ByteBuffer::readShort(param_1);
  if (-1 < sVar5) {
    uVar11 = GComponent::getControllerAt(*(GComponent **)(this + 0xa0),(int)sVar5);
    *(undefined8 *)(this + 0x2a0) = uVar11;
  }
  pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x2a8) != pbVar8) {
    uVar7 = *(ulong *)(pbVar8 + 8);
    pbVar12 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar8 + 0x10);
    if (((byte)*pbVar8 & 1) == 0) {
      pbVar12 = pbVar8 + 1;
      uVar7 = (ulong)((byte)*pbVar8 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x2a8),(char *)pbVar12,uVar7);
  }
                    /* try { // try from 00a6e12c to 00b6e133 has its CatchHandler @ 00a6e170 */
  ByteBuffer::readS(param_1,(basic_string *)(this + 800));
                    /* try { // try from 00a6e134 to 00b6e18b has its CatchHandler @ 00a6e098 */
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    uVar13 = ByteBuffer::readFloat(param_1);
    *(undefined4 *)(this + 0x338) = uVar13;
  }
  bVar4 = ByteBuffer::readBool(param_1);
  setSelected(this,(bool)(bVar4 & 1));
LAB_00a6e160:
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00a6e12c with catch @ 00a6e170 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

