
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
                    /* try { // try from 00a09e04 to 00b09e23 has its CatchHandler @ 00a09f3c */
  pPVar5 = operator_new(0x90);
  *(undefined8 *)(pPVar5 + 0x78) = 0;
  *(undefined8 *)(pPVar5 + 0x70) = 0;
  *(undefined8 *)(pPVar5 + 0x88) = 0;
  *(undefined8 *)(pPVar5 + 0x80) = 0;
  *(undefined8 *)(pPVar5 + 0x58) = 0;
  *(undefined8 *)(pPVar5 + 0x50) = 0;
  *(undefined8 *)(pPVar5 + 0x68) = 0;
  *(undefined8 *)(pPVar5 + 0x60) = 0;
  *(undefined8 *)(pPVar5 + 0x38) = 0;
  *(undefined8 *)(pPVar5 + 0x30) = 0;
  *(undefined8 *)(pPVar5 + 0x48) = 0;
  *(undefined8 *)(pPVar5 + 0x40) = 0;
                    /* try { // try from 00a09e30 to 00b09e43 has its CatchHandler @ 00a09f68 */
  *(undefined8 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x10) = 0;
  *(undefined8 *)(pPVar5 + 0x28) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined8 *)(pPVar5 + 8) = 0;
  *(undefined8 *)pPVar5 = 0;
  core::Provided::Provided(pPVar5);
  *(undefined8 *)(pPVar5 + 0x68) = 0;
  *(undefined8 *)(pPVar5 + 0x60) = 0;
  *(undefined8 *)(pPVar5 + 0x78) = 0;
  *(undefined8 *)(pPVar5 + 0x70) = 0;
  *(undefined8 *)(pPVar5 + 0x48) = 0;
  *(undefined8 *)(pPVar5 + 0x40) = 0;
  *(undefined8 *)(pPVar5 + 0x58) = 0;
  *(undefined8 *)(pPVar5 + 0x50) = 0;
  *(undefined ***)pPVar5 = &PTR__UnzipTask_01c6cd80;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (pPVar5 + 0x20);
  *(undefined8 *)(pPVar5 + 0x28) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(pPVar5 + 0x38) = 0;
  *(undefined8 *)(pPVar5 + 0x30) = 0;
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
                    /* try { // try from 00a09ed0 to 00b09ed3 has its CatchHandler @ 00a09f34 */
                    /* try { // try from 00a09ed4 to 00b09fcf has its CatchHandler @ 00a09b14 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar5 + 0x50),(char *)pbVar2,uVar1);
  }
                    /* catch() { ... } // from try @ 00a09d38 with catch @ 00a09edc */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x60) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pPVar5 + 0x68)) {
                    /* catch() { ... } // from try @ 00a09b5c with catch @ 00a09ee8 */
    uVar1 = *(ulong *)(this + 0x68);
    pUVar3 = *(Unzipper **)(this + 0x70);
    if (((byte)this[0x60] & 1) == 0) {
      pUVar3 = this + 0x61;
      uVar1 = (ulong)((byte)this[0x60] >> 1);
    }
                    /* catch() { ... } // from try @ 00a09c50 with catch @ 00a09efc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar5 + 0x68),(char *)pUVar3,uVar1);
  }
                    /* catch() { ... } // from try @ 00a09cf8 with catch @ 00a09f04
                       catch() { ... } // from try @ 00a09d2c with catch @ 00a09f04 */
  *(Unzipper **)(pPVar5 + 0x80) = this;
                    /* catch() { ... } // from try @ 00a09bb0 with catch @ 00a09f0c */
  Example::addTask((Example *)this,*(uint *)(pPVar5 + 8));
                    /* catch() { ... } // from try @ 00a09d10 with catch @ 00a09f14 */
  pSVar6 = (Service *)core::Service::getInstance();
  local_50 = pPVar5;
  core::Service::addTask(pSVar6,&local_50);
  pPVar5 = local_50;
                    /* catch() { ... } // from try @ 00a09c9c with catch @ 00a09f24 */
  local_50 = (Provided *)0x0;
  if (pPVar5 != (Provided *)0x0) {
                    /* catch() { ... } // from try @ 00a09c34 with catch @ 00a09f34
                       catch() { ... } // from try @ 00a09ed0 with catch @ 00a09f34 */
    (**(code **)(*(long *)pPVar5 + 8))();
  }
                    /* catch() { ... } // from try @ 00a09e04 with catch @ 00a09f3c */
                    /* catch() { ... } // from try @ 00a09d84 with catch @ 00a09f40 */
  if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00a09c78 with catch @ 00a09f58
                       catch() { ... } // from try @ 00a09cc8 with catch @ 00a09f58 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

