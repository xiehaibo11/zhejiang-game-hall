
/* fairygui::ControllerAction::setup(fairygui::ByteBuffer*) */

void __thiscall fairygui::ControllerAction::setup(ControllerAction *this,ByteBuffer *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  byte bVar2;
  byte *pbVar3;
  short sVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *pvVar10;
  ulong uVar11;
  byte *pbVar12;
  
  sVar4 = ByteBuffer::readShort(param_1);
  pvVar10 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 8);
  uVar11 = (ulong)sVar4;
  pbVar6 = *(byte **)(this + 0x10);
  lVar8 = (long)pbVar6 - *(long *)pvVar10 >> 3;
  uVar9 = lVar8 * -0x5555555555555555;
  if (uVar9 < uVar11) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::__append(pvVar10,uVar11 + lVar8 * 0x5555555555555555);
  }
  else if (uVar9 - uVar11 != 0) {
    pbVar12 = (byte *)(*(long *)pvVar10 + uVar11 * 0x18);
    if (pbVar12 != pbVar6) {
      bVar2 = pbVar6[-0x18];
      pbVar3 = pbVar6 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
        if (pbVar12 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar6 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
    }
    *(byte **)(this + 0x10) = pbVar12;
  }
  if (0 < sVar4) {
    lVar8 = 0;
    uVar11 = uVar11 & 0xffffffff;
    do {
      lVar7 = *(long *)pvVar10;
      pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               ByteBuffer::readS(param_1);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar7 + lVar8) != pbVar5) {
        uVar9 = *(ulong *)(pbVar5 + 8);
        pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar5 + 0x10);
        if (((byte)*pbVar5 & 1) == 0) {
          pbVar1 = pbVar5 + 1;
          uVar9 = (ulong)((byte)*pbVar5 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar7 + lVar8),(char *)pbVar1,uVar9);
      }
      uVar11 = uVar11 - 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar11 != 0);
  }
  sVar4 = ByteBuffer::readShort(param_1);
  pvVar10 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x20);
  uVar11 = (ulong)sVar4;
  pbVar6 = *(byte **)(this + 0x28);
  lVar8 = (long)pbVar6 - *(long *)pvVar10 >> 3;
  uVar9 = lVar8 * -0x5555555555555555;
  if (uVar9 < uVar11) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::__append(pvVar10,uVar11 + lVar8 * 0x5555555555555555);
  }
  else if (uVar9 - uVar11 != 0) {
    pbVar12 = (byte *)(*(long *)pvVar10 + uVar11 * 0x18);
    if (pbVar12 != pbVar6) {
      bVar2 = pbVar6[-0x18];
      pbVar3 = pbVar6 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
        if (pbVar12 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar6 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
    }
    *(byte **)(this + 0x28) = pbVar12;
  }
  if (0 < sVar4) {
    lVar8 = 0;
    uVar11 = uVar11 & 0xffffffff;
    do {
      lVar7 = *(long *)pvVar10;
      pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               ByteBuffer::readS(param_1);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar7 + lVar8) != pbVar5) {
        uVar9 = *(ulong *)(pbVar5 + 8);
        pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar5 + 0x10);
        if (((byte)*pbVar5 & 1) == 0) {
          pbVar1 = pbVar5 + 1;
          uVar9 = (ulong)((byte)*pbVar5 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar7 + lVar8),(char *)pbVar1,uVar9);
      }
      uVar11 = uVar11 - 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar11 != 0);
  }
  return;
}

