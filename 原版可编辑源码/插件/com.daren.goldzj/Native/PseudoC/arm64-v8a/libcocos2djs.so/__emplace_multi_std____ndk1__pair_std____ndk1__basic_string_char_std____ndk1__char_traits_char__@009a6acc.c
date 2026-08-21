
/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   >::__emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   const&>(std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > const&) */

void std::__ndk1::
     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
     ::
     __emplace_multi<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
               (pair *param_1)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  pair pVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  pair *ppVar7;
  __tree_node_base *p_Var8;
  pair *ppVar9;
  pair *ppVar10;
  __tree_node_base *local_70;
  
                    /* try { // try from 009a6ae0 to 00aa6aeb has its CatchHandler @ 009a6ca4 */
  lVar4 = tpidr_el0;
                    /* try { // try from 009a6aec to 00aa6af7 has its CatchHandler @ 009a6ca0 */
  lVar6 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 009a6af8 to 00aa6c27 has its CatchHandler @ 009a6cb8 */
  __construct_node<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
            (param_1);
  ppVar7 = param_1 + 8;
  ppVar9 = *(pair **)ppVar7;
  ppVar10 = ppVar7;
  if (ppVar9 != (pair *)0x0) {
    uVar2 = *(ulong *)(local_70 + 0x28);
    p_Var8 = *(__tree_node_base **)(local_70 + 0x30);
    if (((byte)local_70[0x20] & 1) == 0) {
      p_Var8 = local_70 + 0x21;
      uVar2 = (ulong)((byte)local_70[0x20] >> 1);
    }
    do {
      while( true ) {
        ppVar10 = ppVar9;
        pVar3 = ppVar10[0x20];
        uVar1 = (ulong)((byte)pVar3 >> 1);
        if (((byte)pVar3 & 1) != 0) {
          uVar1 = *(ulong *)(ppVar10 + 0x28);
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        ppVar7 = *(pair **)(ppVar10 + 0x30);
        if (((byte)pVar3 & 1) == 0) {
          ppVar7 = ppVar10 + 0x21;
        }
        iVar5 = memcmp(p_Var8,ppVar7,__n);
        if (iVar5 == 0) break;
        if (iVar5 < 0) goto LAB_009a6b88;
LAB_009a6b74:
        ppVar9 = *(pair **)(ppVar10 + 8);
        if (*(pair **)(ppVar10 + 8) == (pair *)0x0) {
          ppVar7 = ppVar10 + 8;
          goto LAB_009a6ba4;
        }
      }
      if (uVar1 <= uVar2) goto LAB_009a6b74;
LAB_009a6b88:
      ppVar7 = ppVar10;
      ppVar9 = *(pair **)ppVar10;
    } while (*(pair **)ppVar10 != (pair *)0x0);
  }
LAB_009a6ba4:
  *(undefined8 *)local_70 = 0;
  *(undefined8 *)(local_70 + 8) = 0;
  *(pair **)(local_70 + 0x10) = ppVar10;
  *(__tree_node_base **)ppVar7 = local_70;
  p_Var8 = local_70;
  if (**(long **)param_1 != 0) {
    *(long *)param_1 = **(long **)param_1;
    p_Var8 = *(__tree_node_base **)ppVar7;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(param_1 + 8),p_Var8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}

