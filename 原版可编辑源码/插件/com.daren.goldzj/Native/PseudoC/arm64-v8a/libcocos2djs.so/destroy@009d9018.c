
/* std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::function<void ()> >,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::function<void ()> >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::function<void ()> >
   > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::function<void ()> >,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
::destroy(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void()>>>>
          *this,__tree_node *param_1)

{
  __tree_node *p_Var1;
  code *pcVar2;
  
  if (param_1 == (__tree_node *)0x0) {
    return;
  }
                    /* catch() { ... } // from try @ 009d8858 with catch @ 009d9028 */
                    /* catch() { ... } // from try @ 009d8930 with catch @ 009d902c */
                    /* catch() { ... } // from try @ 009d8840 with catch @ 009d9030 */
                    /* catch() { ... } // from try @ 009d88b8 with catch @ 009d9034 */
  destroy(this,*(__tree_node **)param_1);
                    /* catch() { ... } // from try @ 009d8954 with catch @ 009d9038 */
                    /* catch() { ... } // from try @ 009d8808 with catch @ 009d903c */
  destroy(this,*(__tree_node **)(param_1 + 8));
                    /* catch() { ... } // from try @ 009d8884 with catch @ 009d9044
                       catch() { ... } // from try @ 009d891c with catch @ 009d9044 */
  p_Var1 = *(__tree_node **)(param_1 + 0x60);
                    /* catch() { ... } // from try @ 009d895c with catch @ 009d9048
                       catch() { ... } // from try @ 009d89e4 with catch @ 009d9048 */
  if (param_1 + 0x40 == p_Var1) {
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x20);
  }
  else {
    if (p_Var1 == (__tree_node *)0x0) goto LAB_009d9074;
    pcVar2 = *(code **)(*(long *)p_Var1 + 0x28);
  }
  (*pcVar2)();
LAB_009d9074:
  if (((byte)param_1[0x20] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  operator_delete(param_1);
  return;
}

