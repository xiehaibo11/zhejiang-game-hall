
/* universe::utils::CMD5Checksum::GetMD5(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall universe::utils::CMD5Checksum::GetMD5(CMD5Checksum *this,basic_string *param_1)

{
  uint uVar1;
  long lVar2;
  FILE *__stream;
  size_t sVar3;
  uchar *__dest;
  undefined8 *in_x8;
  long lVar4;
  CMD5Checksum *__filename;
  uint uVar5;
  uint uVar6;
  ulong __n;
  uchar auStack_4d0 [1024];
  undefined **local_d0;
  uchar local_c8 [64];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
                    /* try { // try from 009fbd44 to 00afbd4b has its CatchHandler @ 009fbf14 */
                    /* try { // try from 009fbd50 to 00afbd73 has its CatchHandler @ 009fbf10 */
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  __filename = *(CMD5Checksum **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    __filename = this + 1;
  }
  __stream = fopen((char *)__filename,"rb");
  if (__stream == (FILE *)0x0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
                    /* try { // try from 009fbd84 to 00afbd9b has its CatchHandler @ 009fbf64 */
    local_d0 = &PTR__CMD5Checksum_01c6c5f0;
                    /* try { // try from 009fbda0 to 00afbde3 has its CatchHandler @ 009fbf34 */
    local_88 = 0;
    local_c8[0x38] = '\0';
    local_c8[0x39] = '\0';
    local_c8[0x3a] = '\0';
    local_c8[0x3b] = '\0';
    local_c8[0x3c] = '\0';
    local_c8[0x3d] = '\0';
    local_c8[0x3e] = '\0';
    local_c8[0x3f] = '\0';
    local_c8[0x30] = '\0';
    local_c8[0x31] = '\0';
    local_c8[0x32] = '\0';
    local_c8[0x33] = '\0';
    local_c8[0x34] = '\0';
    local_c8[0x35] = '\0';
    local_c8[0x36] = '\0';
    local_c8[0x37] = '\0';
    local_c8[0x28] = '\0';
    local_c8[0x29] = '\0';
    local_c8[0x2a] = '\0';
    local_c8[0x2b] = '\0';
    local_c8[0x2c] = '\0';
    local_c8[0x2d] = '\0';
    local_c8[0x2e] = '\0';
    local_c8[0x2f] = '\0';
    local_c8[0x20] = '\0';
    local_c8[0x21] = '\0';
    local_c8[0x22] = '\0';
    local_c8[0x23] = '\0';
    local_c8[0x24] = '\0';
    local_c8[0x25] = '\0';
    local_c8[0x26] = '\0';
    local_c8[0x27] = '\0';
    local_c8[0x18] = '\0';
    local_c8[0x19] = '\0';
    local_c8[0x1a] = '\0';
    local_c8[0x1b] = '\0';
    local_c8[0x1c] = '\0';
    local_c8[0x1d] = '\0';
    local_c8[0x1e] = '\0';
    local_c8[0x1f] = '\0';
    local_c8[0x10] = '\0';
    local_c8[0x11] = '\0';
    local_c8[0x12] = '\0';
    local_c8[0x13] = '\0';
    local_c8[0x14] = '\0';
    local_c8[0x15] = '\0';
    local_c8[0x16] = '\0';
    local_c8[0x17] = '\0';
    local_c8[8] = '\0';
    local_c8[9] = '\0';
    local_c8[10] = '\0';
    local_c8[0xb] = '\0';
    local_c8[0xc] = '\0';
    local_c8[0xd] = '\0';
    local_c8[0xe] = '\0';
    local_c8[0xf] = '\0';
    local_c8[0] = '\0';
    local_c8[1] = '\0';
    local_c8[2] = '\0';
    local_c8[3] = '\0';
    local_c8[4] = '\0';
    local_c8[5] = '\0';
    local_c8[6] = '\0';
    local_c8[7] = '\0';
    uStack_78 = 0x1032547698badcfe;
    local_80 = 0xefcdab8967452301;
    sVar3 = fread(auStack_4d0,1,0x400,__stream);
    if (0 < (int)sVar3) {
      local_88._4_4_ = 0;
      local_88._0_4_ = 0;
                    /* try { // try from 009fbdf4 to 00afbe37 has its CatchHandler @ 009fbf14 */
      while( true ) {
        uVar1 = (uint)local_88 >> 3 & 0x3f;
        uVar5 = (uint)sVar3;
        if (CARRY4((uint)local_88,uVar5 * 8)) {
          local_88._4_4_ = local_88._4_4_ + 1;
        }
        uVar6 = -uVar1 + 0x40;
        __n = (ulong)uVar6;
        local_88 = CONCAT44(local_88._4_4_ + (uVar5 >> 0x1d),(uint)local_88 + uVar5 * 8);
        if (uVar5 < uVar6) {
          __n = 0;
          __dest = local_c8 + uVar1;
        }
        else {
          memcpy(local_c8 + uVar1,auStack_4d0,__n);
          Transform((CMD5Checksum *)&local_d0,local_c8);
          __dest = local_c8;
          if (-uVar1 + 0x7f < uVar5) {
                    /* try { // try from 009fbe60 to 00afbe9b has its CatchHandler @ 009fbf64 */
            uVar1 = 0x7f - uVar1;
            do {
              uVar6 = uVar1;
              Transform((CMD5Checksum *)&local_d0,auStack_4d0 + (uVar6 - 0x3f));
              uVar1 = uVar6 + 0x40;
            } while (uVar6 + 0x40 < uVar5);
            __n = (ulong)(uVar6 + 1);
          }
        }
        memcpy(__dest,auStack_4d0 + __n,(ulong)(uVar5 - (int)__n));
                    /* try { // try from 009fbe9c to 00afbfbb has its CatchHandler @ 009fbc64 */
        sVar3 = fread(auStack_4d0,1,0x400,__stream);
        if ((int)sVar3 < 1) break;
      }
    }
    fclose(__stream);
    Final();
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

