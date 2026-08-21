
/* universe::utils::CMD5Checksum::GetMD5(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall universe::utils::CMD5Checksum::GetMD5(CMD5Checksum *this,basic_string *param_1)

{
  long lVar1;
  FILE *__stream;
  size_t sVar2;
  int iVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  CMD5Checksum *__filename;
  uchar auStack_498 [1024];
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __filename = *(CMD5Checksum **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    __filename = this + 1;
  }
  __stream = fopen((char *)__filename,"rb");
  if (__stream == (FILE *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,"");
  }
  else {
    local_98 = &PTR__CMD5Checksum_016a0188;
    local_50 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_40 = 0x1032547698badcfe;
    local_48 = 0xefcdab8967452301;
    sVar2 = fread(auStack_498,1,0x400,__stream);
    iVar3 = (int)sVar2;
    while (0 < iVar3) {
      Update((CMD5Checksum *)&local_98,auStack_498,(uint)sVar2);
      sVar2 = fread(auStack_498,1,0x400,__stream);
      iVar3 = (int)sVar2;
    }
    fclose(__stream);
    Final();
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

