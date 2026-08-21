
/* fairygui::GController::setup(fairygui::ByteBuffer*) */

void __thiscall fairygui::GController::setup(GController *this,ByteBuffer *param_1)

{
  undefined8 *puVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  basic_string *pbVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  int iVar16;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_01;
  ulong uVar17;
  byte *pbVar18;
  ControllerAction *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar16 = *(int *)(param_1 + 0x1c);
  ByteBuffer::seek(param_1,iVar16,0);
  pbVar9 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x48) != pbVar9) {
    uVar17 = *(ulong *)(pbVar9 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar9 + 0x10);
    if (((byte)*pbVar9 & 1) == 0) {
      pbVar2 = pbVar9 + 1;
      uVar17 = (ulong)((byte)*pbVar9 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x48),(char *)pbVar2,uVar17);
  }
  bVar5 = ByteBuffer::readBool(param_1);
  this[0x61] = (GController)(bVar5 & 1);
  ByteBuffer::seek(param_1,iVar16,1);
  sVar7 = ByteBuffer::readShort(param_1);
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x78);
                    /* try { // try from 00a6b788 to 00b6b7d3 has its CatchHandler @ 00a6b788
                       catch() { ... } // from try @ 00a6b788 with catch @ 00a6b788
                       catch() { ... } // from try @ 00a6b7d8 with catch @ 00a6b788 */
  uVar17 = (ulong)sVar7;
  pbVar11 = *(byte **)(this + 0x80);
  lVar13 = (long)pbVar11 - *(long *)this_00 >> 3;
  uVar14 = lVar13 * -0x5555555555555555;
  if (uVar14 < uVar17) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::__append(this_00,uVar17 + lVar13 * 0x5555555555555555);
  }
  else if (uVar14 - uVar17 != 0) {
    pbVar18 = (byte *)(*(long *)this_00 + uVar17 * 0x18);
    if (pbVar18 != pbVar11) {
                    /* try { // try from 00a6b7d4 to 00b6b7d7 has its CatchHandler @ 00a6b80c */
      bVar5 = pbVar11[-0x18];
      pbVar4 = pbVar11 + -0x18;
      while( true ) {
                    /* try { // try from 00a6b7d8 to 00b6b81f has its CatchHandler @ 00a6b788 */
        if ((bVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar11 + -8));
        }
        if (pbVar18 == pbVar4) break;
        bVar5 = pbVar4[-0x18];
        pbVar11 = pbVar4;
        pbVar4 = pbVar4 + -0x18;
      }
    }
    *(byte **)(this + 0x80) = pbVar18;
  }
  this_01 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(this + 0x90);
                    /* catch() { ... } // from try @ 00a6b7d4 with catch @ 00a6b80c */
  pbVar11 = *(byte **)(this + 0x98);
  lVar13 = (long)pbVar11 - *(long *)this_01 >> 3;
  uVar14 = lVar13 * -0x5555555555555555;
                    /* try { // try from 00a6b820 to 00b6bc1f has its CatchHandler @ 00a6b820
                       catch() { ... } // from try @ 00a6b820 with catch @ 00a6b820
                       catch() { ... } // from try @ 00a6bca0 with catch @ 00a6b820 */
  if (uVar14 < uVar17) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::__append(this_01,uVar17 + lVar13 * 0x5555555555555555);
  }
  else if (uVar14 - uVar17 != 0) {
    pbVar18 = (byte *)(*(long *)this_01 + uVar17 * 0x18);
    if (pbVar18 != pbVar11) {
      bVar5 = pbVar11[-0x18];
      pbVar4 = pbVar11 + -0x18;
      while( true ) {
        if ((bVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar11 + -8));
        }
        if (pbVar18 == pbVar4) break;
        bVar5 = pbVar4[-0x18];
        pbVar11 = pbVar4;
        pbVar4 = pbVar4 + -0x18;
      }
    }
    *(byte **)(this + 0x98) = pbVar18;
  }
  if (0 < sVar7) {
    lVar13 = 0;
    uVar17 = uVar17 & 0xffffffff;
    do {
      lVar12 = *(long *)this_00;
      pbVar9 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               ByteBuffer::readS(param_1);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar12 + lVar13) != pbVar9) {
        uVar14 = *(ulong *)(pbVar9 + 8);
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar9 + 0x10);
        if (((byte)*pbVar9 & 1) == 0) {
          pbVar2 = pbVar9 + 1;
          uVar14 = (ulong)((byte)*pbVar9 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar12 + lVar13),(char *)pbVar2,uVar14);
      }
      lVar12 = *(long *)this_01;
      pbVar9 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               ByteBuffer::readS(param_1);
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar12 + lVar13) != pbVar9) {
        uVar14 = *(ulong *)(pbVar9 + 8);
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar9 + 0x10);
        if (((byte)*pbVar9 & 1) == 0) {
          pbVar2 = pbVar9 + 1;
          uVar14 = (ulong)((byte)*pbVar9 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar12 + lVar13),(char *)pbVar2,uVar14);
      }
      uVar17 = uVar17 - 1;
      lVar13 = lVar13 + 0x18;
    } while (uVar17 != 0);
  }
  if (*(int *)param_1 < 2) {
LAB_00a6b95c:
    iVar15 = 0;
  }
  else {
    cVar6 = ByteBuffer::readByte(param_1);
    if (cVar6 == '\x03') {
      pbVar10 = (basic_string *)ByteBuffer::readS(param_1);
      pbVar10 = (basic_string *)UIPackage::getVar(pbVar10);
    }
    else {
      if (cVar6 != '\x02') {
        if (cVar6 == '\x01') {
          sVar7 = ByteBuffer::readShort(param_1);
          iVar15 = (int)sVar7;
          goto LAB_00a6b990;
        }
        goto LAB_00a6b95c;
      }
      pbVar10 = (basic_string *)&UIPackage::_branch;
    }
    iVar8 = ToolSet::findInStringArray((vector *)this_01,pbVar10);
    iVar15 = 0;
    if (iVar8 != -1) {
      iVar15 = iVar8;
    }
  }
LAB_00a6b990:
  ByteBuffer::seek(param_1,iVar16,2);
  sVar7 = ByteBuffer::readShort(param_1);
  iVar16 = (int)sVar7;
  if (0 < iVar16) {
    do {
      sVar7 = ByteBuffer::readShort(param_1);
      iVar8 = *(int *)(param_1 + 0x1c);
      cVar6 = ByteBuffer::readByte(param_1);
      local_70 = (ControllerAction *)ControllerAction::createAction((int)cVar6);
      (**(code **)(*(long *)local_70 + 0x10))(local_70,param_1);
      puVar1 = *(undefined8 **)(this + 0xb0);
      if (puVar1 == *(undefined8 **)(this + 0xb8)) {
        std::__ndk1::
        vector<fairygui::ControllerAction*,std::__ndk1::allocator<fairygui::ControllerAction*>>::
        __push_back_slow_path<fairygui::ControllerAction*const&>
                  ((vector<fairygui::ControllerAction*,std::__ndk1::allocator<fairygui::ControllerAction*>>
                    *)(this + 0xa8),&local_70);
      }
      else {
        *puVar1 = local_70;
        *(undefined8 **)(this + 0xb0) = puVar1 + 1;
      }
      iVar16 = iVar16 + -1;
      *(int *)(param_1 + 0x1c) = iVar8 + sVar7;
    } while (iVar16 != 0);
  }
  if ((*(long *)(this + 0x68) == 0) || (*(long *)(this + 0x80) == *(long *)(this + 0x78))) {
    iVar15 = -1;
  }
  *(int *)(this + 0x70) = iVar15;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

