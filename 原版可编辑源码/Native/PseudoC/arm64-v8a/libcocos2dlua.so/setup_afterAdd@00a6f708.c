
/* fairygui::GComboBox::setup_afterAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GComboBox::setup_afterAdd(GComboBox *this,ByteBuffer *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  basic_string *pbVar10;
  long *plVar11;
  long lVar12;
  GTextField *this_00;
  undefined8 uVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  int iVar15;
  undefined4 local_74;
  Color3B aCStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  GComponent::setup_afterAdd((GComponent *)this,param_1,param_2);
  uVar9 = ByteBuffer::seek(param_1,param_2,6);
  if (((uVar9 & 1) != 0) &&
     (cVar4 = ByteBuffer::readByte(param_1), *(int *)(*(long *)(this + 0xb0) + 0x34) == (int)cVar4))
  {
    sVar5 = ByteBuffer::readShort(param_1);
    if (0 < sVar5) {
      iVar8 = 0;
      do {
        sVar6 = ByteBuffer::readShort(param_1);
        iVar1 = *(int *)(param_1 + 0x1c);
        pbVar10 = (basic_string *)ByteBuffer::readS(param_1);
        pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(this + 0x2b8);
        if (pbVar14 ==
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x2c0)) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)(this + 0x2b0),pbVar10);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar14,pbVar10);
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x2b8) = pbVar14 + 0x18;
        }
        pbVar10 = (basic_string *)ByteBuffer::readS(param_1);
        pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(this + 0x2e8);
        if (pbVar14 ==
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x2f0)) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)(this + 0x2e0),pbVar10);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(pbVar14,pbVar10);
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x2e8) = pbVar14 + 0x18;
        }
        pbVar10 = (basic_string *)ByteBuffer::readSP(param_1);
        if (pbVar10 != (basic_string *)0x0) {
          pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(this + 0x2d0);
          bVar3 = pbVar14 ==
                  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(this + 0x2d8);
          if (1 < (int)((ulong)(*(long *)(this + 0x2b8) - *(long *)(this + 0x2b0)) >> 3) *
                  -0x55555555) {
            iVar15 = 0;
            if (!bVar3) goto LAB_00a6f8f0;
            do {
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)(this + 0x2c8),(basic_string *)&cocos2d::STD_STRING_EMPTY);
              pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)(this + 0x2d0);
              while( true ) {
                iVar15 = iVar15 + 1;
                bVar3 = pbVar14 ==
                        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)(this + 0x2d8);
                if ((int)((ulong)(*(long *)(this + 0x2b8) - *(long *)(this + 0x2b0)) >> 3) *
                    -0x55555555 + -1 <= iVar15) goto LAB_00a6f908;
                    /* try { // try from 00a6f8ec to 00b6f93f has its CatchHandler @ 00a6f8ec
                       catch() { ... } // from try @ 00a6f8ec with catch @ 00a6f8ec
                       catch() { ... } // from try @ 00a6f9e4 with catch @ 00a6f8ec
                       catch() { ... } // from try @ 00a6fa44 with catch @ 00a6f8ec */
                if (bVar3) break;
LAB_00a6f8f0:
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string(pbVar14,(basic_string *)&cocos2d::STD_STRING_EMPTY);
                pbVar14 = pbVar14 + 0x18;
                *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x2d0) = pbVar14;
              }
            } while( true );
          }
LAB_00a6f908:
          if (bVar3) {
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                      ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                        *)(this + 0x2c8),pbVar10);
          }
          else {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(pbVar14,pbVar10);
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x2d0) = pbVar14 + 0x18;
          }
        }
        iVar8 = iVar8 + 1;
        *(int *)(param_1 + 0x1c) = iVar1 + sVar6;
      } while (iVar8 != sVar5);
    }
    pbVar10 = (basic_string *)ByteBuffer::readSP(param_1);
    if (pbVar10 == (basic_string *)0x0) {
      if (*(long *)(this + 0x2b0) == *(long *)(this + 0x2b8)) {
        *(undefined4 *)(this + 0x2fc) = 0xffffffff;
      }
      else {
                    /* try { // try from 00a6f988 to 00b6f9e3 has its CatchHandler @ 00a6fa88 */
        *(undefined4 *)(this + 0x2fc) = 0;
        if (*(long **)(this + 0x290) != (long *)0x0) {
          (**(code **)(**(long **)(this + 0x290) + 0x18))();
        }
        GObject::updateGear((GObject *)this,6);
      }
    }
    else {
      plVar11 = *(long **)(this + 0x290);
                    /* try { // try from 00a6f940 to 00b6f97b has its CatchHandler @ 00a6fa84 */
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11,pbVar10);
      }
      GObject::updateGear((GObject *)this,6);
      uVar7 = ToolSet::findInStringArray((vector *)(this + 0x2b0),pbVar10);
      *(undefined4 *)(this + 0x2fc) = uVar7;
    }
    lVar12 = ByteBuffer::readSP(param_1);
    if (lVar12 != 0) {
      (**(code **)(*(long *)this + 0x28))(this,lVar12);
    }
    uVar9 = ByteBuffer::readBool(param_1);
    if ((uVar9 & 1) != 0) {
                    /* try { // try from 00a6f9e4 to 00b6fa17 has its CatchHandler @ 00a6f8ec */
      local_74 = ByteBuffer::readColor(param_1);
      cocos2d::Color3B::Color3B(aCStack_70,(Color4B *)&local_74);
      this_00 = (GTextField *)getTextField(this);
      if (this_00 != (GTextField *)0x0) {
        GTextField::setColor(this_00,aCStack_70);
      }
    }
    iVar8 = ByteBuffer::readInt(param_1);
                    /* try { // try from 00a6fa18 to 00b6fa2b has its CatchHandler @ 00a6fa84 */
    if (0 < iVar8) {
      *(int *)(this + 0x280) = iVar8;
    }
    cVar4 = ByteBuffer::readByte(param_1);
                    /* try { // try from 00a6fa30 to 00b6fa43 has its CatchHandler @ 00a6fa88 */
    *(int *)(this + 0x284) = (int)cVar4;
    sVar5 = ByteBuffer::readShort(param_1);
    if (-1 < sVar5) {
                    /* try { // try from 00a6fa44 to 00b6faa3 has its CatchHandler @ 00a6f8ec */
      uVar13 = GComponent::getControllerAt(*(GComponent **)(this + 0xa0),(int)sVar5);
      *(undefined8 *)(this + 0x2a8) = uVar13;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

