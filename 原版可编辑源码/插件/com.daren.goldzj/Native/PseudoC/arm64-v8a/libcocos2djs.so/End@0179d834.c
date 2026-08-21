
/* v8::internal::compiler::PipelineStatistics::CommonStats::End(v8::internal::compiler::PipelineStatistics*,
   v8::internal::CompilationStatistics::BasicStats*) */

void __thiscall
v8::internal::compiler::PipelineStatistics::CommonStats::End
          (CommonStats *this,PipelineStatistics *param_1,BasicStats *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong __n;
  PipelineStatistics *__src;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  StatsScope *this_01;
  long lVar7;
  BasicStats *__dest;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (param_2 + 0x20);
  if (this_00 ==
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_1 + 0x18)) goto LAB_0179d910;
  __n = *(ulong *)(param_1 + 0x20);
  __src = *(PipelineStatistics **)(param_1 + 0x28);
  bVar1 = *this_00;
  if (((byte)param_1[0x18] & 1) == 0) {
    __src = param_1 + 0x19;
    __n = (ulong)((byte)param_1[0x18] >> 1);
  }
  if (((byte)bVar1 & 1) == 0) {
    uVar3 = 0x16;
    uVar4 = __n - 0x16;
    if (0x15 < __n && uVar4 != 0) {
LAB_0179d8b4:
      if (((byte)bVar1 & 1) == 0) {
        uVar5 = (ulong)((byte)bVar1 >> 1);
      }
      else {
        uVar5 = *(ulong *)(param_2 + 0x28);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by_and_replace(this_00,uVar3,uVar4,uVar5,0,uVar5,__n,(char *)__src);
      goto LAB_0179d910;
    }
  }
  else {
    uVar3 = (*(ulong *)this_00 & 0xfffffffffffffffe) - 1;
    uVar4 = __n - uVar3;
    if (uVar3 <= __n && uVar4 != 0) goto LAB_0179d8b4;
  }
  if (((byte)bVar1 & 1) == 0) {
    __dest = param_2 + 0x21;
  }
  else {
    __dest = *(BasicStats **)(param_2 + 0x30);
  }
  if (__n != 0) {
    memmove(__dest,__src,__n);
  }
  __dest[__n] = (BasicStats)0x0;
  if (((byte)*this_00 & 1) == 0) {
    *this_00 = SUB41((int)__n << 1,0);
  }
  else {
    *(ulong *)(param_2 + 0x28) = __n;
  }
LAB_0179d910:
  lVar2 = base::TimeTicks::HighResolutionNow();
  *(long *)param_2 = lVar2 - *(long *)(this + 8);
  plVar6 = *(long **)param_1;
  lVar2 = 0;
  if (plVar6[5] != 0) {
    lVar2 = (plVar6[2] - plVar6[5]) + -0x18;
  }
  lVar7 = (*plVar6 + lVar2) - *(long *)(this + 0x10);
  lVar2 = ZoneStats::StatsScope::GetMaxAllocatedBytes(*(StatsScope **)this);
  lVar2 = lVar2 + lVar7;
  *(long *)(param_2 + 0x10) = lVar2;
  *(long *)(param_2 + 0x18) = *(long *)(this + 0x18) + lVar2;
  lVar2 = ZoneStats::StatsScope::GetTotalAllocatedBytes(*(StatsScope **)this);
  *(long *)(param_2 + 8) = lVar2 + lVar7;
  this_01 = *(StatsScope **)this;
  *(undefined8 *)this = 0;
  if (this_01 != (StatsScope *)0x0) {
    ZoneStats::StatsScope::~StatsScope(this_01);
    operator_delete(this_01);
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}

