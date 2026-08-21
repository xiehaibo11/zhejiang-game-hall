
/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >,
   std::__ndk1::__map_value_compare<unsigned long, std::__ndk1::__value_type<unsigned long,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >, std::__ndk1::less<unsigned
   long>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > > >
   >::erase(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >, void*>*, long>) */

long * __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>
::erase(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>
        *this,__tree_node_base *param_2)

{
  long *plVar1;
  __tree_node_base *p_Var2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  
                    /* try { // try from 009cfcb4 to 00acfccb has its CatchHandler @ 009d08b8 */
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
                    /* try { // try from 009cfcd4 to 00acfcdf has its CatchHandler @ 009d08b4 */
    p_Var2 = param_2 + 0x10;
    plVar5 = *(long **)p_Var2;
                    /* try { // try from 009cfce0 to 00acfceb has its CatchHandler @ 009d08b0 */
    if ((__tree_node_base *)*plVar5 != param_2) {
      do {
        lVar4 = *(long *)p_Var2;
                    /* try { // try from 009cfcec to 00ad036b has its CatchHandler @ 009d08c8 */
        p_Var2 = (__tree_node_base *)(lVar4 + 0x10);
        plVar5 = *(long **)p_Var2;
      } while (*plVar5 != lVar4);
    }
  }
  else {
    do {
      plVar5 = plVar1;
      plVar1 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if (*(__tree_node_base **)this == param_2) {
    *(long **)this = plVar5;
  }
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
  __tree_remove<std::__ndk1::__tree_node_base<void*>*>(*(__tree_node_base **)(this + 8),param_2);
  pbVar6 = *(byte **)(param_2 + 0x28);
  if (pbVar6 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_2 + 0x30);
    pbVar7 = pbVar6;
    if (pbVar3 != pbVar6) {
      do {
        pbVar7 = pbVar3 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar7;
      } while (pbVar6 != pbVar7);
      pbVar7 = *(byte **)(param_2 + 0x28);
    }
    *(byte **)(param_2 + 0x30) = pbVar6;
    operator_delete(pbVar7);
  }
  operator_delete(param_2);
  return plVar5;
}

