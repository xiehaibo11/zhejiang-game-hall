
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   cocos2d::JniHelper::getJNISignature<int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

void __thiscall
cocos2d::JniHelper::
getJNISignature<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (undefined8 *param_1,undefined8 param_2,basic_string *param_3,basic_string *param_4,
          basic_string *param_5,basic_string *param_6)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [16];
  void *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  JniHelper local_78 [8];
  ulong local_70;
  char *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 00de7ac4 with catch @ 00de8bf4 */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 00de78d0 with catch @ 00de8c08 */
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00de7ee8 with catch @ 00de8c1c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"I");
                    /* catch() { ... } // from try @ 00de736c with catch @ 00de8c3c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_90,param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_a8,param_4);
                    /* catch() { ... } // from try @ 00de7c60 with catch @ 00de8c4c */
                    /* catch() { ... } // from try @ 00de82fc with catch @ 00de8c50 */
                    /* catch() { ... } // from try @ 00de8078 with catch @ 00de8c54 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_c0,param_5);
                    /* catch() { ... } // from try @ 00de7e58 with catch @ 00de8c58 */
                    /* catch() { ... } // from try @ 00de7840 with catch @ 00de8c5c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_d8,param_6);
                    /* catch() { ... } // from try @ 00de7a34 with catch @ 00de8c6c */
  getJNISignature<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
            (local_78,local_90,local_a8,local_c0,local_d8);
                    /* catch() { ... } // from try @ 00de851c with catch @ 00de8c8c */
                    /* catch() { ... } // from try @ 00de8570 with catch @ 00de8c90 */
  uVar1 = (ulong)((byte)local_78[0] >> 1);
  pcVar3 = (char *)((ulong)local_78 | 1);
                    /* catch() { ... } // from try @ 00de7b98 with catch @ 00de8c94 */
  if (((byte)local_78[0] & 1) != 0) {
    uVar1 = local_70;
    pcVar3 = local_68;
  }
                    /* catch() { ... } // from try @ 00de7b84 with catch @ 00de8c98 */
                    /* catch() { ... } // from try @ 00de8234 with catch @ 00de8c9c */
                    /* catch() { ... } // from try @ 00de8220 with catch @ 00de8ca0 */
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (local_60,pcVar3,uVar1);
                    /* catch() { ... } // from try @ 00de7690 with catch @ 00de8ca4 */
                    /* catch() { ... } // from try @ 00de72e0 with catch @ 00de8ca8 */
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  param_1[2] = puVar4[2];
  param_1[1] = uVar6;
  *param_1 = uVar5;
  puVar4[1] = 0;
  puVar4[2] = 0;
                    /* catch() { ... } // from try @ 00de72f4 with catch @ 00de8cb8 */
  *puVar4 = 0;
                    /* catch() { ... } // from try @ 00de7f9c with catch @ 00de8cbc */
                    /* catch() { ... } // from try @ 00de7fb0 with catch @ 00de8cc0 */
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
                    /* catch() { ... } // from try @ 00de7d90 with catch @ 00de8cd0 */
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

