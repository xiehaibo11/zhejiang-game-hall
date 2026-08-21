
/* universe::Unzipper::add(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
universe::Unzipper::add
          (Unzipper *this,basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  Unzipper *pUVar3;
  long lVar4;
  Provided *pPVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  Service *pSVar6;
  Provided *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pPVar5 = operator_new(0x90);
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
  core::Provided::Provided(pPVar5);
  *(undefined8 *)(pPVar5 + 0x38) = 0;
  *(undefined8 *)(pPVar5 + 0x30) = 0;
  *(undefined8 *)(pPVar5 + 0x48) = 0;
  *(undefined8 *)(pPVar5 + 0x40) = 0;
  *(undefined ***)pPVar5 = &PTR__UnzipTask_016a1248;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (pPVar5 + 0x20);
  *(undefined8 *)(pPVar5 + 0x28) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(pPVar5 + 0x58) = 0;
  *(undefined8 *)(pPVar5 + 0x50) = 0;
  *(undefined8 *)(pPVar5 + 0x68) = 0;
  *(undefined8 *)(pPVar5 + 0x60) = 0;
  *(undefined8 *)(pPVar5 + 0x78) = 0;
  *(undefined8 *)(pPVar5 + 0x70) = 0;
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
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pPVar5 + 0x50) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar2 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar2 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar5 + 0x50),(char *)pbVar2,uVar1);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x60) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pPVar5 + 0x68)) {
    uVar1 = *(ulong *)(this + 0x68);
    pUVar3 = *(Unzipper **)(this + 0x70);
    if (((byte)this[0x60] & 1) == 0) {
      pUVar3 = this + 0x61;
      uVar1 = (ulong)((byte)this[0x60] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar5 + 0x68),(char *)pUVar3,uVar1);
  }
  *(Unzipper **)(pPVar5 + 0x80) = this;
  Example::addTask((Example *)this,*(uint *)(pPVar5 + 8));
  pSVar6 = (Service *)core::Service::getInstance();
  local_50 = pPVar5;
  core::Service::addTask(pSVar6,&local_50);
  pPVar5 = local_50;
  local_50 = (Provided *)0x0;
  if (pPVar5 != (Provided *)0x0) {
    (**(code **)(*(long *)pPVar5 + 8))();
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

