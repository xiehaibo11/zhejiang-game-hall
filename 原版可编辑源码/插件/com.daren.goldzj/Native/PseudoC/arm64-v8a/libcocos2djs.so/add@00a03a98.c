
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
  basic_string *pbVar2;
  long lVar3;
  BaseJob *pBVar4;
  BaseJob *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pBVar4 = operator_new(0xe0);
  *(undefined4 *)(pBVar4 + 200) = 0xffffffff;
  pBVar4[0xda] = (BaseJob)0x0;
  *(undefined2 *)(pBVar4 + 0xd8) = 0;
  *pBVar4 = (BaseJob)0x1;
  *(undefined8 *)(pBVar4 + 0x89) = 0;
  *(undefined8 *)(pBVar4 + 0x81) = 0;
  *(undefined8 *)(pBVar4 + 0x7c) = 0;
  *(undefined8 *)(pBVar4 + 0x74) = 0;
  *(undefined8 *)(pBVar4 + 0x6c) = 0;
  *(undefined8 *)(pBVar4 + 100) = 0;
  *(undefined8 *)(pBVar4 + 0x5c) = 0;
  *(undefined8 *)(pBVar4 + 0x54) = 0;
  *(undefined8 *)(pBVar4 + 0x4c) = 0;
  *(undefined8 *)(pBVar4 + 0x44) = 0;
  *(undefined8 *)(pBVar4 + 0x3c) = 0;
  *(undefined8 *)(pBVar4 + 0x34) = 0;
  *(undefined8 *)(pBVar4 + 0x2c) = 0;
  *(undefined8 *)(pBVar4 + 0x24) = 0;
  *(undefined8 *)(pBVar4 + 0x1c) = 0;
  *(undefined8 *)(pBVar4 + 0x14) = 0;
  *(undefined8 *)(pBVar4 + 0xc) = 0;
  *(undefined8 *)(pBVar4 + 4) = 0;
  *(undefined8 *)(pBVar4 + 0xc0) = 0;
  *(undefined8 *)(pBVar4 + 0xb8) = 0;
  *(undefined8 *)(pBVar4 + 0xb0) = 0;
  *(undefined8 *)(pBVar4 + 0xa8) = 0;
  *(undefined8 *)(pBVar4 + 0xa0) = 0;
  *(undefined8 *)(pBVar4 + 0x98) = 0;
  *(undefined8 *)(pBVar4 + 0xd0) = 0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pBVar4 + 0x20) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pBVar4 + 0x20),(char *)pbVar2,uVar1);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pBVar4 + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pBVar4 + 0x38),(char *)pbVar2,uVar1);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pBVar4 + 0x50) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar2 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar2 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pBVar4 + 0x50),(char *)pbVar2,uVar1);
  }
  *(ulong *)(pBVar4 + 0x68) = param_4;
  *(ulong *)(pBVar4 + 0x70) = param_5;
  pBVar4[0xd8] = (BaseJob)param_7;
  pBVar4[0xd9] = (BaseJob)param_8;
  pBVar4[0xda] = (BaseJob)param_9;
  *(ulong *)(pBVar4 + 0x78) = param_6;
  *(int *)(pBVar4 + 4) = param_10;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(pBVar4 + 8)
      != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_11)
  {
    uVar1 = *(ulong *)(param_11 + 8);
    pbVar2 = *(basic_string **)(param_11 + 0x10);
    if (((byte)*param_11 & 1) == 0) {
      pbVar2 = param_11 + 1;
      uVar1 = (ulong)((byte)*param_11 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pBVar4 + 8),(char *)pbVar2,uVar1);
  }
  *(int *)(pBVar4 + 200) = param_12;
  local_70 = pBVar4;
  if (*(undefined8 **)(this + 0x118) < *(undefined8 **)(this + 0x120)) {
    **(undefined8 **)(this + 0x118) = pBVar4;
    *(long *)(this + 0x118) = *(long *)(this + 0x118) + 8;
  }
  else {
    std::__ndk1::
    vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
    ::__push_back_slow_path<universe::Downloader2::BaseJob*>
              ((vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
                *)(this + 0x110),&local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a03c7c to 00b03de7 has its CatchHandler @ 00a03c7c
                       catch() { ... } // from try @ 00a03c7c with catch @ 00a03c7c
                       catch() { ... } // from try @ 00a03df0 with catch @ 00a03c7c */
  __stack_chk_fail();
}

