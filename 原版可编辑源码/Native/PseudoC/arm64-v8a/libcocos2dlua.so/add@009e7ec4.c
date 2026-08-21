
/* universe::Copy::add(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
universe::Copy::add(Copy *this,basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  Provided *pPVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  Service *pSVar5;
  Provided *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pPVar4 = operator_new(0x78);
  *(undefined8 *)(pPVar4 + 8) = 0;
  *(undefined8 *)pPVar4 = 0;
                    /* try { // try from 009e7f00 to 00ae7f23 has its CatchHandler @ 009e7e5c */
  *(undefined8 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x10) = 0;
  *(undefined8 *)(pPVar4 + 0x28) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined8 *)(pPVar4 + 0x38) = 0;
  *(undefined8 *)(pPVar4 + 0x30) = 0;
  *(undefined8 *)(pPVar4 + 0x48) = 0;
  *(undefined8 *)(pPVar4 + 0x40) = 0;
  *(undefined8 *)(pPVar4 + 0x58) = 0;
  *(undefined8 *)(pPVar4 + 0x50) = 0;
  *(undefined8 *)(pPVar4 + 0x68) = 0;
  *(undefined8 *)(pPVar4 + 0x60) = 0;
  *(undefined8 *)(pPVar4 + 0x70) = 0;
  core::Provided::Provided(pPVar4);
                    /* try { // try from 009e7f24 to 00ae7f37 has its CatchHandler @ 009e7f80 */
  *(undefined8 *)(pPVar4 + 0x38) = 0;
  *(undefined8 *)(pPVar4 + 0x30) = 0;
  *(undefined8 *)(pPVar4 + 0x48) = 0;
  *(undefined8 *)(pPVar4 + 0x40) = 0;
                    /* try { // try from 009e7f38 to 00ae7fa3 has its CatchHandler @ 009e7e5c */
  *(undefined ***)pPVar4 = &PTR__CopyTask_016a0be8;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (pPVar4 + 0x20);
  *(undefined8 *)(pPVar4 + 0x28) = 0;
  *(undefined8 *)this_00 = 0;
  pPVar4[0x70] = (Provided)0x0;
  *(undefined8 *)(pPVar4 + 0x58) = 0;
  *(undefined8 *)(pPVar4 + 0x50) = 0;
  *(undefined8 *)(pPVar4 + 0x60) = 0;
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
      (pPVar4 + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
                    /* catch() { ... } // from try @ 009e7eac with catch @ 009e7f7c */
                    /* catch() { ... } // from try @ 009e7eb4 with catch @ 009e7f80
                       catch() { ... } // from try @ 009e7f24 with catch @ 009e7f80 */
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar4 + 0x38),(char *)pbVar2,uVar1);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pPVar4 + 0x50) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3) {
    uVar1 = *(ulong *)(param_3 + 8);
    pbVar2 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar2 = param_3 + 1;
      uVar1 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar4 + 0x50),(char *)pbVar2,uVar1);
  }
  *(Copy **)(pPVar4 + 0x68) = this;
  Example::addTask((Example *)this,*(uint *)(pPVar4 + 8));
  pSVar5 = (Service *)core::Service::getInstance();
  local_50 = pPVar4;
  core::Service::addTask(pSVar5,&local_50);
  pPVar4 = local_50;
  local_50 = (Provided *)0x0;
  if (pPVar4 != (Provided *)0x0) {
    (**(code **)(*(long *)pPVar4 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 009e800c to 00ae807b has its CatchHandler @ 009e800c
                       catch() { ... } // from try @ 009e800c with catch @ 009e800c
                       catch() { ... } // from try @ 009e80b0 with catch @ 009e800c
                       catch() { ... } // from try @ 009e8114 with catch @ 009e800c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

