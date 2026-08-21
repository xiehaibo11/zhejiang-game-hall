
/* universe::utils::CMD5Checksum::Final() */

void universe::utils::CMD5Checksum::Final(void)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  CMD5Checksum *in_x0;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar8;
  int iVar9;
  CMD5Checksum *pCVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  char *local_1b0;
  ulong uStack_1a8;
  char *local_1a0;
  char *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 local_a1;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  byte local_90 [20];
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 009fc010 to 00afc027 has its CatchHandler @ 009fc0e0 */
  lVar8 = *(long *)(lVar3 + 0x28);
  iVar9 = 0x38;
  uVar7 = *(uint *)(in_x0 + 0x48);
                    /* try { // try from 009fc030 to 00afc03b has its CatchHandler @ 009fc0dc */
  local_90[0x11] = (byte)(uVar7 >> 8);
                    /* try { // try from 009fc03c to 00afc047 has its CatchHandler @ 009fc0d8 */
  local_90[0x12] = (byte)(uVar7 >> 0x10);
  local_90[0x13] = (byte)(uVar7 >> 0x18);
  local_90[0x10] = (byte)uVar7;
  iVar6 = *(int *)(in_x0 + 0x4c);
                    /* try { // try from 009fc048 to 00afc063 has its CatchHandler @ 009fc0f0 */
  uVar13 = (ulong)(uVar7 >> 3) & 0x3f;
  uVar12 = (uint)uVar13;
  if (0x37 < uVar12) {
    iVar9 = 0x78;
  }
  uVar2 = iVar9 - uVar12;
  local_7b = (undefined1)((uint)iVar6 >> 8);
                    /* try { // try from 009fc064 to 00afc147 has its CatchHandler @ 009fbfbc */
  local_7a = (undefined1)((uint)iVar6 >> 0x10);
  local_7c = (undefined1)iVar6;
  local_79 = (undefined1)((uint)iVar6 >> 0x18);
  *(uint *)(in_x0 + 0x48) = uVar7 + uVar2 * 8;
  if (CARRY4(uVar7,uVar2 * 8)) {
    iVar6 = iVar6 + 1;
    *(int *)(in_x0 + 0x4c) = iVar6;
  }
  *(uint *)(in_x0 + 0x4c) = iVar6 + (uVar2 >> 0x1d);
  uVar7 = -uVar12 + 0x40;
  uVar11 = (ulong)uVar7;
  pCVar10 = in_x0 + uVar13 + 8;
  if (uVar2 < uVar7) {
    uVar11 = 0;
  }
  else {
    memcpy(pCVar10,&DAT_01d1b670,uVar11);
    pCVar10 = in_x0 + 8;
    Transform(in_x0,(uchar *)pCVar10);
                    /* catch() { ... } // from try @ 009fc03c with catch @ 009fc0d8 */
                    /* catch() { ... } // from try @ 009fc030 with catch @ 009fc0dc */
                    /* catch() { ... } // from try @ 009fc010 with catch @ 009fc0e0 */
    if (-uVar12 + 0x7f < uVar2) {
      uVar7 = 0x7f - uVar12;
      do {
        uVar12 = uVar7;
                    /* catch() { ... } // from try @ 009fc048 with catch @ 009fc0f0 */
        Transform(in_x0,&DAT_01d1b670 + (uVar12 - 0x3f));
        uVar7 = uVar12 + 0x40;
      } while (uVar12 + 0x40 < uVar2);
      uVar11 = (ulong)(uVar12 + 1);
    }
  }
  memcpy(pCVar10,&DAT_01d1b670 + uVar11,(ulong)(uVar2 - (int)uVar11));
  uVar7 = *(uint *)(in_x0 + 0x48);
  iVar6 = *(int *)(in_x0 + 0x4c);
  uVar13 = (ulong)(uVar7 >> 3) & 0x3f;
  *(uint *)(in_x0 + 0x48) = uVar7 + 0x40;
  if (0xffffffbf < uVar7) {
    iVar6 = iVar6 + 1;
    *(int *)(in_x0 + 0x4c) = iVar6;
  }
  *(int *)(in_x0 + 0x4c) = iVar6;
                    /* try { // try from 009fc148 to 00afc19f has its CatchHandler @ 009fc148
                       catch() { ... } // from try @ 009fc148 with catch @ 009fc148
                       catch() { ... } // from try @ 009fc484 with catch @ 009fc148 */
  uVar7 = 0x40 - (int)uVar13;
  uVar11 = (ulong)uVar7;
  pCVar10 = in_x0 + uVar13 + 8;
  if (uVar7 < 9) {
    memcpy(pCVar10,local_90 + 0x10,uVar11);
    pCVar10 = in_x0 + 8;
    Transform(in_x0,(uchar *)pCVar10);
  }
  else {
    uVar11 = 0;
  }
  memcpy(pCVar10,local_90 + uVar11 + 0x10,(ulong)(8 - (int)uVar11));
                    /* try { // try from 009fc1a0 to 00afc1b7 has its CatchHandler @ 009fc4a8 */
  uVar7 = *(uint *)(in_x0 + 0x50);
  uVar13 = 1;
                    /* try { // try from 009fc1c0 to 00afc1cb has its CatchHandler @ 009fc4a4 */
  local_90[1] = (byte)(uVar7 >> 8);
  local_90[2] = (byte)(uVar7 >> 0x10);
  local_90[3] = (byte)(uVar7 >> 0x18);
  local_90[0] = (byte)uVar7;
                    /* try { // try from 009fc1cc to 00afc1d7 has its CatchHandler @ 009fc4a0 */
  uVar1 = *(undefined4 *)(in_x0 + 0x54);
                    /* try { // try from 009fc1d8 to 00afc29b has its CatchHandler @ 009fc4b8 */
  local_90[4] = (byte)uVar1;
  local_90[5] = (byte)((uint)uVar1 >> 8);
  local_90[6] = (byte)((uint)uVar1 >> 0x10);
  local_90[7] = (byte)((uint)uVar1 >> 0x18);
  uVar1 = *(undefined4 *)(in_x0 + 0x58);
  local_90[8] = (byte)uVar1;
  local_90[9] = (byte)((uint)uVar1 >> 8);
  local_90[10] = (byte)((uint)uVar1 >> 0x10);
  local_90[0xb] = (byte)((uint)uVar1 >> 0x18);
  uVar1 = *(undefined4 *)(in_x0 + 0x5c);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  local_90[0xc] = (byte)uVar1;
  local_90[0xd] = (byte)((uint)uVar1 >> 8);
  local_90[0xe] = (byte)((uint)uVar1 >> 0x10);
  *(undefined8 *)(in_x8 + 0x10) = 0;
  local_90[0xf] = (byte)((uint)uVar1 >> 0x18);
  while( true ) {
    local_1b0 = (char *)0x0;
    uStack_1a8 = 0;
    local_1a0 = (char *)0x0;
    if ((uVar7 & 0xff) == 0) {
      uStack_188 = 0;
      local_190 = "NS_5ValueEEE";
      local_180 = 0;
      local_1a0 = (char *)0x0;
      uStack_1a8 = 0;
      local_1b0 = "NS_5ValueEEE";
    }
    else if ((uVar7 & 0xff) < 0x10) {
      uStack_99 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      local_a1 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
                    /* try { // try from 009fc2a0 to 00afc2d3 has its CatchHandler @ 009fc490 */
      uStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      local_190 = (char *)0x0;
      sprintf((char *)&local_190,"0%x");
      sVar5 = strlen((char *)&local_190);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,(char *)&local_190,sVar5);
    }
    else {
      uStack_99 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      local_a1 = 0;
      uStack_b0 = 0;
                    /* try { // try from 009fc2fc to 00afc3ef has its CatchHandler @ 009fc4b8 */
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      local_190 = (char *)0x0;
      sprintf((char *)&local_190,"%x");
      sVar5 = strlen((char *)&local_190);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0,(char *)&local_190,sVar5);
    }
    uVar11 = (ulong)local_1b0 >> 1 & 0x7f;
    pcVar4 = (char *)((ulong)&local_1b0 | 1);
    if (((ulong)local_1b0 & 1) != 0) {
      uVar11 = uStack_1a8;
      pcVar4 = local_1a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(in_x8,pcVar4,uVar11);
    if (((ulong)local_1b0 & 1) != 0) {
      operator_delete(local_1a0);
    }
    if (0xf < uVar13) break;
    uVar7 = (uint)local_90[uVar13];
    uVar13 = uVar13 + 1;
  }
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

