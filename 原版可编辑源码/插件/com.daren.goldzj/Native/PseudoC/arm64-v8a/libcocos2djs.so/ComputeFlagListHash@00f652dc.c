
/* v8::internal::ComputeFlagListHash() */

void v8::internal::ComputeFlagListHash(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte local_190 [8];
  ulong local_188;
  byte *local_180;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_178 = (undefined **)0x1c6c8a8;
  local_108[0] = (undefined **)0x1c6c8d0;
  std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
  local_78 = 0xffffffff;
  local_178 = &PTR__basic_ostringstream_01c6c858;
  local_108[0] = &PTR__basic_ostringstream_01c6c880;
  local_170 = &PTR__basic_streambuf_01c671a8;
  local_80 = 0;
  std::__ndk1::locale::locale(alStack_168);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  local_170 = &PTR__basic_stringbuf_01c67100;
  uStack_158 = 0;
  local_160 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  uVar6 = 0;
  piVar1 = &DAT_01d2f058;
  iVar2 = DAT_01d2f058;
  while( true ) {
    if (((iVar2 != 0) || (*(undefined1 **)(piVar1 + 4) != &FLAG_profile_deserialization)) &&
       (uVar4 = FUN_00f644a0(piVar1), (uVar4 & 1) == 0)) {
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,uVar6);
      FUN_00f64570(&local_178,piVar1);
    }
    uVar6 = uVar6 + 1;
    piVar1 = piVar1 + 0xc;
    if (uVar6 == 0x1d7) break;
    iVar2 = *piVar1;
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pbVar7 = (byte *)((ulong)local_190 | 1);
  uVar6 = (ulong)(local_190[0] >> 1);
  if ((local_190[0] & 1) != 0) {
    pbVar7 = local_180;
    uVar6 = local_188;
  }
  if (uVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar5 = base::hash_value((uint)*pbVar7);
      uVar5 = base::hash_combine(0,uVar5);
      uVar4 = base::hash_value(uVar4);
      uVar4 = base::hash_combine(uVar5,uVar4);
      uVar6 = uVar6 - 1;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
  }
  DAT_01d3f024 = (undefined4)uVar4;
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  local_178 = &PTR__basic_ostringstream_01c6c858;
  local_108[0] = &PTR__basic_ostringstream_01c6c880;
  local_170 = &PTR__basic_stringbuf_01c67100;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

