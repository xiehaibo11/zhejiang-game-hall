
/* universe::CustomFileManager::writeDataToFile(unsigned char*, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<void (bool)> const&) const */

void __thiscall
universe::CustomFileManager::writeDataToFile
          (CustomFileManager *this,uchar *param_1,ulong param_2,basic_string *param_3,
          function *param_4)

{
  long lVar1;
  Branches *this_00;
  ulong uVar2;
  basic_string *pbVar3;
  void *__src;
  void *__dest;
  ulong uVar4;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pbVar3 = (basic_string *)param_2;
  this_00 = (Branches *)Branches::getInstance();
  uVar2 = (**(code **)(*(long *)this + 0x40))(this,param_3);
  if ((uVar2 & 1) == 0) {
    std::__ndk1::operator+((__ndk1 *)(this + 8),param_3,pbVar3);
    goto LAB_009f7da8;
  }
  uStack_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if (((byte)*param_3 & 1) == 0) {
    local_70 = *(void **)(param_3 + 0x10);
    uStack_78 = *(ulong *)(param_3 + 8);
    local_80 = *(ulong *)param_3;
    goto LAB_009f7da8;
  }
  uVar2 = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 009f7e04 to 00af7e2b has its CatchHandler @ 009f7d64 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_3 + 0x10);
  if (uVar2 < 0x17) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f7dd4 with catch @ 009f7d64
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7e04 with catch @ 009f7d64
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7e34 with catch @ 009f7d64
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7e5c with catch @ 009f7d64
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7e88 with catch @ 009f7d64
                        */
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = (ulong)(byte)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_009f7d94;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_80 = uVar4 | 1;
    uStack_78 = uVar2;
    local_70 = __dest;
LAB_009f7d94:
    memcpy(__dest,__src,uVar2);
  }
  *(undefined1 *)((long)__dest + uVar2) = 0;
LAB_009f7da8:
  Branches::add(this_00,(basic_string *)&local_80,param_1,param_2,param_4);
  if ((local_80 & 1) != 0) {
                    /* try { // try from 009f7dcc to 00af7dd3 has its CatchHandler @ 009f7ec8 */
    operator_delete(local_70);
  }
                    /* try { // try from 009f7dd4 to 00af7df7 has its CatchHandler @ 009f7d64 */
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009f7df8 to 00af7e03 has its CatchHandler @ 009f7ec8 */
  return;
}

