
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::CompilationStatistics::RecordPhaseKindStats(char const*,
   v8::internal::CompilationStatistics::BasicStats const&) */

void __thiscall
v8::internal::CompilationStatistics::RecordPhaseKindStats
          (CompilationStatistics *this,char *param_1,BasicStats *param_2)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  size_t __n;
  CompilationStatistics *pCVar3;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  void *pvVar6;
  ulong uVar7;
  ulong local_108;
  undefined8 uStack_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 uStack_78;
  ulong local_70;
  size_t local_68;
  void *local_60;
  __tree_end_node *local_58;
  
  base::Mutex::Lock((Mutex *)(this + 0x70));
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    pvVar6 = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_014e9918;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
    local_70 = uVar7 | 1;
    local_68 = __n;
    local_60 = pvVar6;
  }
  memcpy(pvVar6,param_1,__n);
LAB_014e9918:
  *(undefined1 *)((long)pvVar6 + __n) = 0;
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>>>
             *)(this + 0x40);
  pCVar3 = (CompilationStatistics *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     (this_00,(basic_string *)&local_70);
  if (this + 0x48 == pCVar3) {
    uStack_78 = *(undefined8 *)(this + 0x50);
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    local_80 = (void *)0x0;
    uStack_a8 = 0;
    local_b0 = 0;
    std::__ndk1::
    pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>
    ::
    pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,v8::internal::CompilationStatistics::OrderedStats&,false>
              ((pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>
                *)&local_108,(basic_string *)&local_70,(OrderedStats *)&local_b0);
    pp_Var4 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (this_00,&local_58,(basic_string *)&local_108);
    pCVar3 = (CompilationStatistics *)*pp_Var4;
    if (pCVar3 == (CompilationStatistics *)0x0) {
      pCVar3 = operator_new(0x78);
      uVar2 = uStack_c8;
      uVar7 = local_d0;
      pvVar6 = local_f8;
      uVar1 = uStack_100;
      uStack_100 = 0;
      local_f8 = (void *)0x0;
      *(undefined8 *)(pCVar3 + 0x28) = uVar1;
      *(ulong *)(pCVar3 + 0x20) = local_108;
      *(void **)(pCVar3 + 0x30) = pvVar6;
      *(void **)(pCVar3 + 0x68) = local_c0;
      *(undefined8 *)(pCVar3 + 0x70) = uStack_b8;
      *(undefined8 *)(pCVar3 + 0x50) = uStack_d8;
      *(undefined8 *)(pCVar3 + 0x48) = uStack_e0;
      local_108 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = (void *)0x0;
      *(undefined8 *)pCVar3 = 0;
      *(undefined8 *)(pCVar3 + 8) = 0;
      *(undefined8 *)(pCVar3 + 0x40) = uStack_e8;
      *(undefined8 *)(pCVar3 + 0x38) = local_f0;
      *(undefined8 *)(pCVar3 + 0x60) = uVar2;
      *(ulong *)(pCVar3 + 0x58) = uVar7;
      *(__tree_end_node **)(pCVar3 + 0x10) = local_58;
      *pp_Var4 = (__tree_node_base *)pCVar3;
      p_Var5 = (__tree_node_base *)pCVar3;
      if (**(long **)this_00 != 0) {
        *(long *)this_00 = **(long **)this_00;
        p_Var5 = *pp_Var4;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x48),p_Var5);
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
    }
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    if ((local_108 & 1) != 0) {
      operator_delete(local_f8);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  BasicStats::Accumulate((BasicStats *)(pCVar3 + 0x38),param_2);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  base::Mutex::Unlock((Mutex *)(this + 0x70));
  return;
}

