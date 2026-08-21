
/* cocos2d::GLProgramState::setParameterAutoBinding(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::GLProgramState::setParameterAutoBinding
          (GLProgramState *this,basic_string *param_1,basic_string *param_2)

{
  basic_string *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  basic_string *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 00fda120 with catch @ 00fda168 */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 00fda1b4 with catch @ 00fda184 */
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = param_1;
                    /* try { // try from 00fda1ac to 010da1b3 has its CatchHandler @ 00fda1f0 */
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0xe0),(piecewise_construct_t *)param_1,
                     (tuple *)&DAT_0144cee0,(tuple *)&local_60);
                    /* try { // try from 00fda1b4 to 010da20b has its CatchHandler @ 00fda184 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar4 + 0x28) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar5 = *(ulong *)(param_2 + 8);
    pbVar1 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar1 = param_2 + 1;
      uVar5 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar4 + 0x28),(char *)pbVar1,uVar5);
  }
  puVar3 = DAT_01792688;
  puVar6 = _customAutoBindingResolvers;
                    /* catch() { ... } // from try @ 00fda1ac with catch @ 00fda1f0 */
  if ((((*(long *)(this + 0xd8) != 0) && (_customAutoBindingResolvers != DAT_01792688)) &&
      (puVar7 = _customAutoBindingResolvers + 1,
      uVar5 = (**(code **)(*(long *)*_customAutoBindingResolvers + 0x10))
                        ((long *)*_customAutoBindingResolvers,this,*(long *)(this + 0xd8),param_1,
                         param_2), puVar7 != puVar3)) && ((uVar5 & 1) == 0)) {
    puVar6 = puVar6 + 2;
    do {
                    /* catch() { ... } // from try @ 00fda268 with catch @ 00fda238 */
      uVar5 = (**(code **)(*(long *)puVar6[-1] + 0x10))
                        ((long *)puVar6[-1],this,*(undefined8 *)(this + 0xd8),param_1,param_2);
      if (puVar3 == puVar6) break;
      puVar6 = puVar6 + 1;
    } while ((uVar5 & 1) == 0);
  }
                    /* try { // try from 00fda260 to 010da267 has its CatchHandler @ 00fda2a4 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00fda268 to 010da2bf has its CatchHandler @ 00fda238 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

