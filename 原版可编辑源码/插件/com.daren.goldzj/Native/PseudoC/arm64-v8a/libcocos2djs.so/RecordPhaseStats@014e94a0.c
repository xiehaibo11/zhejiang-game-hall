
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::CompilationStatistics::RecordPhaseStats(char const*, char const*,
   v8::internal::CompilationStatistics::BasicStats const&) */

void __thiscall
v8::internal::CompilationStatistics::RecordPhaseStats
          (CompilationStatistics *this,char *param_1,char *param_2,BasicStats *param_3)

{
  size_t sVar1;
  CompilationStatistics *pCVar2;
  void *__dest;
  void *pvVar3;
  ulong uVar4;
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  PhaseStats aPStack_128 [32];
  byte local_108;
  void *local_f8;
  byte local_e8;
  void *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  size_t sStack_88;
  void *local_80;
  ulong local_78;
  size_t sStack_70;
  void *local_68;
  
  base::Mutex::Lock((Mutex *)(this + 0x70));
  sStack_70 = 0;
  local_68 = (void *)0x0;
  local_78 = 0;
  sVar1 = strlen(param_2);
  if (0xffffffffffffffef < sVar1) goto LAB_014e9754;
  if (sVar1 < 0x17) {
    pvVar3 = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar1 << 1));
    if (sVar1 != 0) goto LAB_014e9538;
  }
  else {
    uVar4 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = operator_new(uVar4);
    local_78 = uVar4 | 1;
    sStack_70 = sVar1;
    local_68 = pvVar3;
LAB_014e9538:
    memcpy(pvVar3,param_2,sVar1);
  }
  *(undefined1 *)((long)pvVar3 + sVar1) = 0;
  pCVar2 = (CompilationStatistics *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
                       *)(this + 0x58),(basic_string *)&local_78);
  if (this + 0x60 != pCVar2) goto LAB_014e96cc;
  uStack_98 = *(undefined8 *)(this + 0x68);
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_a0 = (void *)0x0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_90 = 0;
  sStack_88 = 0;
  local_80 = (void *)0x0;
  sVar1 = strlen(param_1);
  if (0xffffffffffffffef < sVar1) goto LAB_014e9754;
  if (sVar1 < 0x17) {
    pvVar3 = (void *)((long)&local_90 + 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar1 << 1));
    if (sVar1 != 0) goto LAB_014e95e0;
  }
  else {
    uVar4 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = operator_new(uVar4);
    local_90 = uVar4 | 1;
    sStack_88 = sVar1;
    local_80 = pvVar3;
LAB_014e95e0:
    memcpy(pvVar3,param_1,sVar1);
  }
  uVar4 = local_78;
  *(undefined1 *)((long)pvVar3 + sVar1) = 0;
  pvVar3 = local_68;
  sVar1 = sStack_70;
  uStack_138 = 0;
  local_130 = (void *)0x0;
  local_140 = 0;
  if ((uVar4 & 1) == 0) {
    uStack_138 = sStack_70;
    local_140 = local_78;
    local_130 = local_68;
  }
  else {
    if (0xffffffffffffffef < sStack_70) {
LAB_014e9754:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (sStack_70 < 0x17) {
      __dest = (void *)((ulong)&local_140 | 1);
      local_140 = (ulong)(byte)((int)sStack_70 << 1);
      if (sStack_70 != 0) goto LAB_014e9668;
    }
    else {
      uVar4 = sStack_70 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar4);
      local_140 = uVar4 | 1;
      uStack_138 = sVar1;
      local_130 = __dest;
LAB_014e9668:
      memcpy(__dest,pvVar3,sVar1);
    }
    *(undefined1 *)((long)__dest + sVar1) = 0;
  }
  PhaseStats::PhaseStats(aPStack_128,(PhaseStats *)&local_d0);
  pCVar2 = (CompilationStatistics *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
           ::
           __emplace_unique<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
                       *)(this + 0x58),(pair *)&local_140);
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  if ((local_140 & 1) != 0) {
    operator_delete(local_130);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
LAB_014e96cc:
  BasicStats::Accumulate((BasicStats *)(pCVar2 + 0x38),param_3);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  base::Mutex::Unlock((Mutex *)(this + 0x70));
  return;
}

