
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0091e828 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* cocos2d::renderer::Pass::Pass(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::unordered_map<unsigned long,
   cocos2d::renderer::Technique::Parameter, std::__ndk1::hash<unsigned long>,
   std::__ndk1::equal_to<unsigned long>, std::__ndk1::allocator<std::__ndk1::pair<unsigned long
   const, cocos2d::renderer::Technique::Parameter> > >&,
   std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::Value, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >&) */

void __thiscall
cocos2d::renderer::Pass::Pass
          (Pass *this,basic_string *param_1,unordered_map *param_2,unordered_map *param_3)

{
  pair *ppVar1;
  basic_string *pbVar2;
  long lVar3;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  *p_Var4;
  __tree_node_base *p_Var5;
  Pass *pPVar6;
  ulong uVar7;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
  *p_Var8;
  void *__src;
  Pass *__dest;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  __tree_node_base *ap_Stack_80 [3];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__Pass_01c69448;
  pPVar6 = this + 0x10;
  *(undefined8 *)pPVar6 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar11 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar12;
    *(undefined8 *)pPVar6 = uVar11;
    goto LAB_0091e780;
  }
  uVar7 = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (uVar7 < 0x17) {
    __dest = this + 0x11;
    *pPVar6 = SUB41((int)uVar7 << 1,0);
    if (uVar7 != 0) goto LAB_0091e76c;
  }
  else {
    uVar9 = uVar7 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    *(ulong *)(this + 0x18) = uVar7;
    *(Pass **)(this + 0x20) = __dest;
    *(ulong *)(this + 0x10) = uVar9 | 1;
LAB_0091e76c:
    memcpy(__dest,__src,uVar7);
  }
  __dest[uVar7] = (Pass)0x0;
LAB_0091e780:
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  p_Var8 = (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
            *)(this + 0x38);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)p_Var8 = 0;
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  pPVar6 = this + 0x68;
  *(undefined8 *)pPVar6 = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(Pass **)(this + 0x60) = pPVar6;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf1] = (Pass)0x0;
  uVar7 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar7 = (ulong)((byte)*param_1 >> 1);
  }
  p_Var4 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            *)std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                        ((__murmur2_or_cityhash<unsigned_long,64ul> *)ap_Stack_80,pbVar2,uVar7);
  ppVar1 = (pair *)(this + 0x60);
  *(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
    **)(this + 0x28) = p_Var4;
  if (p_Var8 != (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
                 *)param_2) {
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_2 + 0x20);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,void*>*>>
              (p_Var8,*(undefined8 *)(param_2 + 0x10),0);
  }
  for (plVar10 = *(long **)(param_3 + 0x10); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    while (p_Var4 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                     *)std::__ndk1::
                       __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                       ::
                       __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 (p_Var4,pPVar6,&local_88,auStack_90,plVar10 + 2),
          *(long *)p_Var4 != 0) {
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_0091e894;
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
    ::
    __construct_node<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>const&>
              (ppVar1);
    *(undefined8 *)ap_Stack_80[0] = 0;
    *(undefined8 *)(ap_Stack_80[0] + 8) = 0;
    *(undefined8 *)(ap_Stack_80[0] + 0x10) = local_88;
    *(__tree_node_base **)p_Var4 = ap_Stack_80[0];
    p_Var5 = ap_Stack_80[0];
    if (**(long **)ppVar1 != 0) {
      *(long *)ppVar1 = **(long **)ppVar1;
      p_Var5 = *(__tree_node_base **)p_Var4;
    }
    p_Var4 = *(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
               **)(this + 0x68);
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)p_Var4,p_Var5);
    *(long *)(this + 0x70) = *(long *)(this + 0x70) + 1;
  }
LAB_0091e894:
  generateDefinesKey(this);
  *(undefined8 *)(this + 0xe4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xdc) = 0xffffffffffffffff;
  *(undefined8 *)(this + 200) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xd8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xd0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x80) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x90) = 0xffffffffffffffff;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

