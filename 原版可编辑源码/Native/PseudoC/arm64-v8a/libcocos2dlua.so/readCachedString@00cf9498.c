
/* cocosbuilder::CCBReader::readCachedString() */

void cocosbuilder::CCBReader::readCachedString(void)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  long in_x0;
  int iVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  iVar5 = *(int *)(in_x0 + 0x40);
  uVar7 = *(uint *)(in_x0 + 0x44);
  uVar6 = 0xffffffffffffffff;
  do {
    bVar3 = *(byte *)(*(long *)(in_x0 + 0x38) + (long)iVar5);
    uVar4 = uVar7 & 0x1f;
    *(uint *)(in_x0 + 0x44) = uVar7 + 1;
    bVar1 = 6 < (int)uVar7;
    uVar7 = uVar7 + 1;
    if (bVar1) {
      uVar7 = 0;
      iVar5 = iVar5 + 1;
      *(int *)(in_x0 + 0x40) = iVar5;
      *(undefined4 *)(in_x0 + 0x44) = 0;
    }
    uVar6 = uVar6 + 1;
  } while ((1 << (ulong)uVar4 & (uint)bVar3) == 0);
  if ((int)uVar6 == 0) {
    uVar6 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar9 = uVar6;
    do {
      bVar3 = *(byte *)(*(long *)(in_x0 + 0x38) + (long)iVar5);
      uVar4 = uVar7 & 0x1f;
      uVar9 = uVar9 - 1;
      *(uint *)(in_x0 + 0x44) = uVar7 + 1;
      bVar1 = 6 < (int)uVar7;
      uVar7 = uVar7 + 1;
      if (bVar1) {
        uVar7 = 0;
        iVar5 = iVar5 + 1;
        *(int *)(in_x0 + 0x40) = iVar5;
        *(undefined4 *)(in_x0 + 0x44) = 0;
      }
      uVar2 = 0;
      if ((1 << (ulong)uVar4 & (uint)bVar3) != 0) {
        uVar2 = 1L << (uVar9 & 0x3f);
      }
      uVar8 = uVar2 | uVar8;
    } while (0 < (long)uVar9);
  }
  if (uVar7 != 0) {
    *(int *)(in_x0 + 0x40) = iVar5 + 1;
    *(undefined4 *)(in_x0 + 0x44) = 0;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8,(basic_string *)
                     (*(long *)(in_x0 + 0x48) +
                     ((long)(((uVar8 | 1L << (uVar6 & 0x3f)) << 0x20) + -0x100000000) >> 0x20) *
                     0x18));
  return;
}

