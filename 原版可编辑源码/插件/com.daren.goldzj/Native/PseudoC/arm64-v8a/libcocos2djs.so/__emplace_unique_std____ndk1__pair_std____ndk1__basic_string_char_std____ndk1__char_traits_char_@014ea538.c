
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   v8::internal::CompilationStatistics::PhaseStats>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   v8::internal::CompilationStatistics::PhaseStats>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   v8::internal::CompilationStatistics::PhaseStats>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   v8::internal::CompilationStatistics::PhaseStats>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   v8::internal::CompilationStatistics::PhaseStats> >
   >::__emplace_unique<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   v8::internal::CompilationStatistics::PhaseStats>
   >(std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, v8::internal::CompilationStatistics::PhaseStats>&&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
::
__emplace_unique<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>
          (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
           *this,pair *param_1)

{
  __tree_node_base **pp_Var1;
  undefined8 uVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  __tree_end_node *local_38;
  
  pp_Var1 = __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this,&local_38,(basic_string *)param_1);
  p_Var4 = *pp_Var1;
  if (p_Var4 == (__tree_node_base *)0x0) {
    p_Var4 = operator_new(0x90);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(p_Var4 + 0x30) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(p_Var4 + 0x28) = uVar5;
    *(undefined8 *)(p_Var4 + 0x20) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(p_Var4 + 0x40) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(p_Var4 + 0x38) = uVar2;
    *(undefined8 *)(p_Var4 + 0x50) = uVar6;
    *(undefined8 *)(p_Var4 + 0x48) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(p_Var4 + 0x60) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(p_Var4 + 0x58) = uVar5;
    *(undefined8 *)(p_Var4 + 0x68) = uVar2;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(p_Var4 + 0x70) = *(undefined8 *)(param_1 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(p_Var4 + 0x88) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(p_Var4 + 0x80) = uVar5;
    *(undefined8 *)(p_Var4 + 0x78) = uVar2;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(__tree_end_node **)(p_Var4 + 0x10) = local_38;
    *pp_Var1 = p_Var4;
    p_Var3 = p_Var4;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var3 = *pp_Var1;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var3);
    uVar2 = 1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = p_Var4;
  return auVar7;
}

