
/* cocosbuilder::CCBReader::readStringCache() */

undefined8 __thiscall cocosbuilder::CCBReader::readStringCache(CCBReader *this)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar7 = 0xffffffffffffffff;
  iVar6 = *(int *)(this + 0x40);
  uVar8 = *(uint *)(this + 0x44);
  do {
    bVar4 = *(byte *)(*(long *)(this + 0x38) + (long)iVar6);
    uVar9 = uVar8 & 0x1f;
    *(uint *)(this + 0x44) = uVar8 + 1;
    bVar1 = 6 < (int)uVar8;
    uVar8 = uVar8 + 1;
    if (bVar1) {
      uVar8 = 0;
      iVar6 = iVar6 + 1;
      *(int *)(this + 0x40) = iVar6;
      *(undefined4 *)(this + 0x44) = 0;
    }
    uVar7 = uVar7 + 1;
  } while ((1 << (ulong)uVar9 & (uint)bVar4) == 0);
  if ((int)uVar7 == 0) {
    uVar7 = 0;
    uVar9 = 0;
  }
  else {
    uVar10 = 0;
    uVar11 = uVar7;
    do {
      bVar4 = *(byte *)(*(long *)(this + 0x38) + (long)iVar6);
      uVar9 = uVar8 & 0x1f;
      uVar11 = uVar11 - 1;
      *(uint *)(this + 0x44) = uVar8 + 1;
      bVar1 = 6 < (int)uVar8;
      uVar8 = uVar8 + 1;
      if (bVar1) {
        uVar8 = 0;
        iVar6 = iVar6 + 1;
        *(int *)(this + 0x40) = iVar6;
        *(undefined4 *)(this + 0x44) = 0;
      }
      uVar2 = 0;
      if ((1 << (ulong)uVar9 & (uint)bVar4) != 0) {
        uVar2 = 1L << (uVar11 & 0x3f);
      }
      uVar10 = uVar2 | uVar10;
      uVar9 = (uint)uVar10;
    } while (0 < (long)uVar11);
  }
  iVar12 = (uVar9 | (uint)(1L << (uVar7 & 0x3f))) - 1;
  if (uVar8 != 0) {
    *(int *)(this + 0x40) = iVar6 + 1;
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (0 < iVar12) {
    do {
      readUTF8();
      puVar3 = *(ulong **)(this + 0x50);
      if (puVar3 < *(ulong **)(this + 0x58)) {
        puVar3[2] = (ulong)local_40;
        puVar3[1] = uStack_48;
        *puVar3 = local_50;
        uStack_48 = 0;
        local_40 = (void *)0x0;
        local_50 = 0;
        *(ulong **)(this + 0x50) = puVar3 + 3;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(this + 0x48),(basic_string *)&local_50);
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
      }
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

