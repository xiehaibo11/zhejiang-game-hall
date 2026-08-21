
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, bool>(int, bool) */

void cocos2d::JniHelper::getJNISignature<int,bool>(int param_1,bool param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *in_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_58;
  undefined8 uStack_50;
  void *local_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0;
  uStack_50 = 0;
  local_30 = (void *)0x0;
  local_40 = &DAT_00004902;
  local_48 = (void *)0x0;
  local_58 = &DAT_00005a02;
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_40,(char *)((ulong)&local_58 | 1),1);
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  in_x8[2] = puVar2[2];
  in_x8[1] = uVar4;
  *in_x8 = uVar3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if (((ulong)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (((ulong)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
                    /* try { // try from 009d9f1c to 00ad9fbf has its CatchHandler @ 009d9f1c
                       catch(type#1 @ 00000000) { ... } // from try @ 009d9f1c with catch @ 009d9f1c
                       catch(type#1 @ 00000000) { ... } // from try @ 009da05c with catch @ 009d9f1c
                        */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

