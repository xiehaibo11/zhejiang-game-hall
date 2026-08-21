
/* universe::Downloader::add(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
universe::Downloader::add
          (Downloader *this,basic_string *param_1,basic_string *param_2,char *param_3,
          basic_string *param_4)

{
  ulong uVar1;
  basic_string *pbVar2;
  Downloader *pDVar3;
  long lVar4;
  Provided *pPVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  size_t sVar6;
  Service *pSVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_02;
  Provided *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pPVar5 = operator_new(0x120);
  *(undefined8 *)(pPVar5 + 8) = 0;
  *(undefined8 *)pPVar5 = 0;
  *(undefined8 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x10) = 0;
  *(undefined8 *)(pPVar5 + 0x28) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined8 *)(pPVar5 + 0x38) = 0;
  *(undefined8 *)(pPVar5 + 0x30) = 0;
  *(undefined8 *)(pPVar5 + 0x48) = 0;
  *(undefined8 *)(pPVar5 + 0x40) = 0;
  *(undefined8 *)(pPVar5 + 0x58) = 0;
  *(undefined8 *)(pPVar5 + 0x50) = 0;
  *(undefined8 *)(pPVar5 + 0x68) = 0;
  *(undefined8 *)(pPVar5 + 0x60) = 0;
  *(undefined8 *)(pPVar5 + 0x78) = 0;
  *(undefined8 *)(pPVar5 + 0x70) = 0;
  *(undefined8 *)(pPVar5 + 0x88) = 0;
  *(undefined8 *)(pPVar5 + 0x80) = 0;
  *(undefined8 *)(pPVar5 + 0x98) = 0;
  *(undefined8 *)(pPVar5 + 0x90) = 0;
  *(undefined8 *)(pPVar5 + 0xa8) = 0;
  *(undefined8 *)(pPVar5 + 0xa0) = 0;
  *(undefined8 *)(pPVar5 + 0xb8) = 0;
  *(undefined8 *)(pPVar5 + 0xb0) = 0;
  *(undefined8 *)(pPVar5 + 200) = 0;
  *(undefined8 *)(pPVar5 + 0xc0) = 0;
  *(undefined8 *)(pPVar5 + 0xd8) = 0;
  *(undefined8 *)(pPVar5 + 0xd0) = 0;
  *(undefined8 *)(pPVar5 + 0xe8) = 0;
  *(undefined8 *)(pPVar5 + 0xe0) = 0;
  *(undefined8 *)(pPVar5 + 0xf8) = 0;
  *(undefined8 *)(pPVar5 + 0xf0) = 0;
  *(undefined8 *)(pPVar5 + 0x108) = 0;
  *(undefined8 *)(pPVar5 + 0x100) = 0;
  *(undefined8 *)(pPVar5 + 0x118) = 0;
  *(undefined8 *)(pPVar5 + 0x110) = 0;
  core::Provided::Provided(pPVar5);
  *(undefined ***)pPVar5 = &PTR__DownloadTask_016a0ef8;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (pPVar5 + 0x20);
  *(undefined8 *)(pPVar5 + 0x28) = 0;
  *(undefined8 *)this_00 = 0;
  pPVar5[0x70] = (Provided)0x0;
  this_02 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (pPVar5 + 0x78);
  *(undefined8 *)(pPVar5 + 0x80) = 0;
  *(undefined8 *)this_02 = 0;
  this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (pPVar5 + 200);
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)(pPVar5 + 0xd0) = 0;
  *(undefined8 *)(pPVar5 + 0xd8) = 0;
  *(undefined8 *)(pPVar5 + 0x110) = 0;
  *(undefined4 *)(pPVar5 + 0x118) = 0;
  *(undefined8 *)(pPVar5 + 0x38) = 0;
  *(undefined8 *)(pPVar5 + 0x30) = 0;
  *(undefined8 *)(pPVar5 + 0x48) = 0;
  *(undefined8 *)(pPVar5 + 0x40) = 0;
  *(undefined8 *)(pPVar5 + 0x58) = 0;
  *(undefined8 *)(pPVar5 + 0x50) = 0;
  *(undefined8 *)(pPVar5 + 0x60) = 0;
  *(undefined8 *)(pPVar5 + 0x90) = 0;
  *(undefined8 *)(pPVar5 + 0x88) = 0;
  *(undefined8 *)(pPVar5 + 0xa0) = 0;
  *(undefined8 *)(pPVar5 + 0x98) = 0;
  *(undefined8 *)(pPVar5 + 0xb0) = 0;
  *(undefined8 *)(pPVar5 + 0xa8) = 0;
  *(undefined8 *)(pPVar5 + 0xb8) = 0;
  *(undefined8 *)(pPVar5 + 0xf0) = 0;
  *(undefined8 *)(pPVar5 + 0xe8) = 0;
  *(undefined8 *)(pPVar5 + 0x100) = 0;
  *(undefined8 *)(pPVar5 + 0xf8) = 0;
  pPVar5[0x108] = (Provided)0x0;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pPVar5 + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar5 + 0x38),(char *)pbVar2,uVar1);
  }
  sVar6 = strlen(param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (pPVar5 + 0x50),param_3,sVar6);
  if (this_02 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
    uVar1 = *(ulong *)(param_4 + 8);
    pbVar2 = *(basic_string **)(param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pbVar2 = param_4 + 1;
      uVar1 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_02,(char *)pbVar2,uVar1);
  }
  *(Downloader **)(pPVar5 + 0xe0) = this;
  *(Downloader **)(pPVar5 + 0x68) = this + 0x30;
  *(Downloader *)(pPVar5 + 0xc0) = this[0xa0];
  if (this + 0xa8 != (Downloader *)this_01) {
    uVar1 = *(ulong *)(this + 0xb0);
    pDVar3 = *(Downloader **)(this + 0xb8);
    if (((byte)this[0xa8] & 1) == 0) {
      pDVar3 = this + 0xa9;
      uVar1 = (ulong)((byte)this[0xa8] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_01,(char *)pDVar3,uVar1);
  }
  pPVar5[0x108] = (Provided)(*(long *)(this + 0x90) != 0);
  *(undefined4 *)(pPVar5 + 0x18) = *(undefined4 *)(this + 0xc0);
  Example::addTask((Example *)this,*(uint *)(pPVar5 + 8));
  pSVar7 = (Service *)core::Service::getInstance();
  local_70 = pPVar5;
  core::Service::addTask(pSVar7,&local_70);
  pPVar5 = local_70;
  local_70 = (Provided *)0x0;
  if (pPVar5 != (Provided *)0x0) {
    (**(code **)(*(long *)pPVar5 + 8))();
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

