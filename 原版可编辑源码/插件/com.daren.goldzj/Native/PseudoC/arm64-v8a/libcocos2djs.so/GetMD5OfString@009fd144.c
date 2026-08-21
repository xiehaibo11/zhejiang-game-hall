
/* universe::utils::CMD5Checksum::GetMD5OfString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void universe::utils::CMD5Checksum::GetMD5OfString(byte *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_a8 = &PTR__CMD5Checksum_01c6c5f0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
                    /* try { // try from 009fd18c to 00afd197 has its CatchHandler @ 009fd208 */
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_50 = 0x1032547698badcfe;
  local_58 = 0xefcdab8967452301;
                    /* try { // try from 009fd198 to 00afd19f has its CatchHandler @ 009fd204 */
                    /* try { // try from 009fd1a0 to 00afd1cb has its CatchHandler @ 009fd210 */
  if ((*param_1 & 1) == 0) {
    uVar5 = (ulong)(*param_1 >> 1);
    param_1 = param_1 + 1;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    param_1 = *(byte **)(param_1 + 0x10);
  }
  uVar4 = (uint)uVar5;
  local_60 = CONCAT44((int)(uVar5 >> 0x1d),uVar4 << 3) & 0x7ffffffff;
  if (uVar4 < 0x40) {
                    /* try { // try from 009fd1cc to 00afd22b has its CatchHandler @ 009fd138 */
    uVar3 = 0;
  }
  else {
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    local_80 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_98 = *(undefined8 *)(param_1 + 8);
    local_a0 = *(undefined8 *)param_1;
    uStack_88 = *(undefined8 *)(param_1 + 0x18);
    uStack_90 = *(undefined8 *)(param_1 + 0x10);
    Transform((CMD5Checksum *)&local_a8,(uchar *)&local_a0);
    if (uVar4 < 0x80) {
      uVar3 = 0x40;
    }
    else {
      uVar2 = 0x7f;
      do {
        uVar3 = uVar2;
                    /* catch() { ... } // from try @ 009fd198 with catch @ 009fd204 */
                    /* catch() { ... } // from try @ 009fd18c with catch @ 009fd208 */
        Transform((CMD5Checksum *)&local_a8,param_1 + (uVar3 - 0x3f));
                    /* catch() { ... } // from try @ 009fd1a0 with catch @ 009fd210 */
        uVar2 = uVar3 + 0x40;
      } while (uVar3 + 0x40 < uVar4);
      uVar3 = uVar3 + 1;
    }
  }
                    /* try { // try from 009fd22c to 00afd27f has its CatchHandler @ 009fd22c
                       catch() { ... } // from try @ 009fd22c with catch @ 009fd22c
                       catch() { ... } // from try @ 009fd2c0 with catch @ 009fd22c */
  memcpy(&local_a0,param_1 + uVar3,(ulong)(uVar4 - uVar3));
  Final();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

