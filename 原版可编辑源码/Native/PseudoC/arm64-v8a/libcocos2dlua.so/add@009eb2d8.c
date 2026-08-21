
/* universe::Downloader2::add(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned long, unsigned long, unsigned long, bool, bool, bool, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

void __thiscall
universe::Downloader2::add
          (Downloader2 *this,basic_string *param_1,basic_string *param_2,basic_string *param_3,
          ulong param_4,ulong param_5,ulong param_6,bool param_7,bool param_8,bool param_9,
          int param_10,basic_string *param_11,int param_12)

{
  ulong uVar1;
  undefined8 *puVar2;
  basic_string *pbVar3;
  long lVar4;
  BaseJob *pBVar5;
  BaseJob *local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 009eb220 with catch @ 009eb2d8
                       catch() { ... } // from try @ 009eb2bc with catch @ 009eb2d8 */
                    /* catch() { ... } // from try @ 009eb204 with catch @ 009eb2dc
                       catch() { ... } // from try @ 009eb270 with catch @ 009eb2dc */
                    /* try { // try from 009eb2f8 to 00aeb32f has its CatchHandler @ 009eb2f8
                       catch() { ... } // from try @ 009eb2f8 with catch @ 009eb2f8
                       catch() { ... } // from try @ 009eb374 with catch @ 009eb2f8
                       catch() { ... } // from try @ 009eb3f0 with catch @ 009eb2f8 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pBVar5 = operator_new(0xe0);
                    /* try { // try from 009eb330 to 00aeb347 has its CatchHandler @ 009eb408 */
  *(undefined4 *)(pBVar5 + 200) = 0xffffffff;
  *(undefined8 *)(pBVar5 + 0xd0) = 0;
  *pBVar5 = (BaseJob)0x1;
                    /* try { // try from 009eb34c to 00aeb373 has its CatchHandler @ 009eb404 */
  *(undefined8 *)(pBVar5 + 0xc) = 0;
  *(undefined8 *)(pBVar5 + 4) = 0;
  *(undefined8 *)(pBVar5 + 0x1c) = 0;
  *(undefined8 *)(pBVar5 + 0x14) = 0;
  *(undefined8 *)(pBVar5 + 0x2c) = 0;
  *(undefined8 *)(pBVar5 + 0x24) = 0;
  *(undefined8 *)(pBVar5 + 0x3c) = 0;
  *(undefined8 *)(pBVar5 + 0x34) = 0;
  *(undefined8 *)(pBVar5 + 0x4c) = 0;
  *(undefined8 *)(pBVar5 + 0x44) = 0;
  *(undefined8 *)(pBVar5 + 0x5c) = 0;
  *(undefined8 *)(pBVar5 + 0x54) = 0;
  *(undefined8 *)(pBVar5 + 0x6c) = 0;
  *(undefined8 *)(pBVar5 + 100) = 0;
  *(undefined8 *)(pBVar5 + 0x7c) = 0;
  *(undefined8 *)(pBVar5 + 0x74) = 0;
  *(undefined8 *)(pBVar5 + 0x89) = 0;
  *(undefined8 *)(pBVar5 + 0x81) = 0;
                    /* try { // try from 009eb374 to 00aeb39b has its CatchHandler @ 009eb2f8 */
  *(undefined8 *)(pBVar5 + 0xa0) = 0;
  *(undefined8 *)(pBVar5 + 0x98) = 0;
  *(undefined8 *)(pBVar5 + 0xb0) = 0;
  *(undefined8 *)(pBVar5 + 0xa8) = 0;
  *(undefined8 *)(pBVar5 + 0xc0) = 0;
  *(undefined8 *)(pBVar5 + 0xb8) = 0;
  *(undefined4 *)(pBVar5 + 0xd7) = 0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pBVar5 + 0x20) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar3 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
                    /* try { // try from 009eb39c to 00aeb3af has its CatchHandler @ 009eb408 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pBVar5 + 0x20),(char *)pbVar3,uVar1);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pBVar5 + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar3 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pBVar5 + 0x38),(char *)pbVar3,uVar1);
  }
                    /* try { // try from 009eb3e8 to 00aeb3ef has its CatchHandler @ 009eb404 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pBVar5 + 0x50) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
                    /* try { // try from 009eb3f0 to 00aeb423 has its CatchHandler @ 009eb2f8 */
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar3 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar3 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
                    /* catch() { ... } // from try @ 009eb34c with catch @ 009eb404
                       catch() { ... } // from try @ 009eb3e8 with catch @ 009eb404 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pBVar5 + 0x50),(char *)pbVar3,uVar1);
  }
                    /* catch() { ... } // from try @ 009eb330 with catch @ 009eb408
                       catch() { ... } // from try @ 009eb39c with catch @ 009eb408 */
  *(ulong *)(pBVar5 + 0x68) = param_4;
  *(ulong *)(pBVar5 + 0x70) = param_5;
  pBVar5[0xd8] = (BaseJob)param_7;
                    /* try { // try from 009eb424 to 00aeb45b has its CatchHandler @ 009eb424
                       catch() { ... } // from try @ 009eb424 with catch @ 009eb424
                       catch() { ... } // from try @ 009eb4a0 with catch @ 009eb424
                       catch() { ... } // from try @ 009eb51c with catch @ 009eb424 */
  pBVar5[0xd9] = (BaseJob)param_8;
  pBVar5[0xda] = (BaseJob)param_9;
  *(ulong *)(pBVar5 + 0x78) = param_6;
  *(int *)(pBVar5 + 4) = param_10;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(pBVar5 + 8)
      != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_11)
  {
    uVar1 = *(ulong *)(param_11 + 8);
    pbVar3 = *(basic_string **)(param_11 + 0x10);
    if (((byte)*param_11 & 1) == 0) {
      pbVar3 = param_11 + 1;
      uVar1 = (ulong)((byte)*param_11 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pBVar5 + 8),(char *)pbVar3,uVar1);
  }
  *(int *)(pBVar5 + 200) = param_12;
                    /* try { // try from 009eb45c to 00aeb473 has its CatchHandler @ 009eb534 */
  puVar2 = *(undefined8 **)(this + 0x118);
  local_70 = pBVar5;
  if (puVar2 < *(undefined8 **)(this + 0x120)) {
    *puVar2 = pBVar5;
    *(undefined8 **)(this + 0x118) = puVar2 + 1;
  }
  else {
                    /* try { // try from 009eb478 to 00aeb49f has its CatchHandler @ 009eb530 */
    std::__ndk1::
    vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
    ::__push_back_slow_path<universe::Downloader2::BaseJob*>
              ((vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
                *)(this + 0x110),&local_70);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 009eb4a0 to 00aeb4c7 has its CatchHandler @ 009eb424 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

