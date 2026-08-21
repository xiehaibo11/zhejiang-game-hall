
/* universe::MergeFile::add(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall universe::MergeFile::add(MergeFile *this,vector *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  Provided *pPVar4;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  Service *pSVar5;
  Provided *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a08dcc to 00b08e0b has its CatchHandler @ 00a08eac */
  pPVar4 = operator_new(0x60);
  *(undefined8 *)(pPVar4 + 0x48) = 0;
  *(undefined8 *)(pPVar4 + 0x40) = 0;
  *(undefined8 *)(pPVar4 + 0x58) = 0;
  *(undefined8 *)(pPVar4 + 0x50) = 0;
  *(undefined8 *)(pPVar4 + 0x28) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined8 *)(pPVar4 + 0x38) = 0;
  *(undefined8 *)(pPVar4 + 0x30) = 0;
  *(undefined8 *)(pPVar4 + 8) = 0;
  *(undefined8 *)pPVar4 = 0;
  *(undefined8 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x10) = 0;
  core::Provided::Provided(pPVar4);
  *(undefined ***)pPVar4 = &PTR__MergeFileTask_01c6cd00;
                    /* try { // try from 00a08e0c to 00b08ed7 has its CatchHandler @ 00a08c4c */
  this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)(pPVar4 + 0x20);
  *(undefined8 *)(pPVar4 + 0x28) = 0;
  *(undefined8 *)this_00 = 0;
  pPVar4[0x58] = (Provided)0x0;
  *(undefined8 *)(pPVar4 + 0x38) = 0;
  *(undefined8 *)(pPVar4 + 0x30) = 0;
  *(undefined8 *)(pPVar4 + 0x48) = 0;
  *(undefined8 *)(pPVar4 + 0x40) = 0;
  if (this_00 !=
      (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)param_1) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              (this_00,*(basic_string **)param_1,*(basic_string **)(param_1 + 8));
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pPVar4 + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
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
                    /* catch() { ... } // from try @ 00a08d8c with catch @ 00a08e54 */
  *(MergeFile **)(pPVar4 + 0x50) = this;
  Example::addTask((Example *)this,*(uint *)(pPVar4 + 8));
                    /* catch() { ... } // from try @ 00a08d30 with catch @ 00a08e60 */
  pSVar5 = (Service *)core::Service::getInstance();
  local_50 = pPVar4;
  core::Service::addTask(pSVar5,&local_50);
  pPVar4 = local_50;
  local_50 = (Provided *)0x0;
  if (pPVar4 != (Provided *)0x0) {
    (**(code **)(*(long *)pPVar4 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00a08cfc with catch @ 00a08e98 */
                    /* catch() { ... } // from try @ 00a08ca4 with catch @ 00a08e9c */
                    /* catch() { ... } // from try @ 00a08cb8 with catch @ 00a08eac
                       catch() { ... } // from try @ 00a08d5c with catch @ 00a08eac
                       catch() { ... } // from try @ 00a08dcc with catch @ 00a08eac */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

