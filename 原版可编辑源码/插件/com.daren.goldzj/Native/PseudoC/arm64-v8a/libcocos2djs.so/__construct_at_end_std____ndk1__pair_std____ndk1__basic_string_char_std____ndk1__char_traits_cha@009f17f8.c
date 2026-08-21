
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >*>::value, void>::type
   std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   >::__construct_at_end<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   >*>(std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >*, std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >*, unsigned long) */

void std::__ndk1::
     vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
     ::
     __construct_at_end<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
               (pair *param_1,pair *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  
  if (param_2 != (pair *)param_3) {
    puVar1 = *(ulong **)(param_1 + 8);
    do {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      if (((byte)*param_2 & 1) == 0) {
        uVar6 = *(ulong *)(param_2 + 8);
        uVar4 = *(ulong *)param_2;
        puVar1[2] = *(ulong *)(param_2 + 0x10);
        puVar1[1] = uVar6;
        *puVar1 = uVar4;
      }
      else {
        uVar4 = *(ulong *)(param_2 + 8);
        if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
          __basic_string_common<true>::__throw_length_error();
        }
        pvVar5 = *(void **)(param_2 + 0x10);
        if (uVar4 < 0x17) {
          pvVar3 = (void *)((long)puVar1 + 1);
          *(char *)puVar1 = (char)((int)uVar4 << 1);
          if (uVar4 != 0) goto LAB_009f1898;
        }
        else {
          uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
          pvVar3 = operator_new(uVar6);
          puVar1[1] = uVar4;
          puVar1[2] = (ulong)pvVar3;
          *puVar1 = uVar6 | 1;
LAB_009f1898:
                    /* try { // try from 009f189c to 00af1983 has its CatchHandler @ 009f15f4 */
          memcpy(pvVar3,pvVar5,uVar4);
        }
        *(undefined1 *)((long)pvVar3 + uVar4) = 0;
      }
      puVar2 = puVar1 + 3;
      *puVar2 = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      if (((byte)param_2[0x18] & 1) == 0) {
        uVar6 = *(ulong *)(param_2 + 0x20);
        uVar4 = *(ulong *)(param_2 + 0x18);
        puVar1[5] = *(ulong *)(param_2 + 0x28);
        puVar1[4] = uVar6;
        *puVar2 = uVar4;
      }
      else {
        uVar4 = *(ulong *)(param_2 + 0x20);
        if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
          __basic_string_common<true>::__throw_length_error();
        }
        pvVar5 = *(void **)(param_2 + 0x28);
        if (uVar4 < 0x17) {
          pvVar3 = (void *)((long)puVar1 + 0x19);
          *(char *)puVar2 = (char)((int)uVar4 << 1);
          if (uVar4 != 0) goto LAB_009f1920;
        }
        else {
          uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
          pvVar3 = operator_new(uVar6);
                    /* catch() { ... } // from try @ 009f1678 with catch @ 009f1914 */
                    /* catch() { ... } // from try @ 009f166c with catch @ 009f1918 */
          puVar1[4] = uVar4;
          puVar1[5] = (ulong)pvVar3;
                    /* catch() { ... } // from try @ 009f164c with catch @ 009f191c */
          puVar1[3] = uVar6 | 1;
LAB_009f1920:
                    /* catch() { ... } // from try @ 009f1684 with catch @ 009f192c */
          memcpy(pvVar3,pvVar5,uVar4);
        }
        *(undefined1 *)((long)pvVar3 + uVar4) = 0;
      }
      param_2 = param_2 + 0x30;
      puVar1 = (ulong *)(*(long *)(param_1 + 8) + 0x30);
      *(ulong **)(param_1 + 8) = puVar1;
    } while ((pair *)param_3 != param_2);
  }
  return;
}

