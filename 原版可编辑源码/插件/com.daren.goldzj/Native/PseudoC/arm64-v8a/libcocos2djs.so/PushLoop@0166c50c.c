
/* v8::internal::compiler::BytecodeAnalysis::PushLoop(int, int) */

void __thiscall
v8::internal::compiler::BytecodeAnalysis::PushLoop(BytecodeAnalysis *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  Zone *pZStack_78;
  int local_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  Zone *pZStack_38;
  
  uVar5 = (*(long *)(this + 0x50) + *(long *)(this + 0x48)) - 1;
  uVar3 = *(undefined4 *)
           (*(long *)(*(long *)(this + 0x20) + (uVar5 >> 5 & 0x7fffffffffffff8)) +
           (uVar5 & 0xff) * 0x10);
  local_70 = param_2;
  iStack_6c = param_1;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
  ::__emplace_unique_key_args<int,std::__ndk1::pair<int_const,int>>
            ((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,int>>>
              *)(this + 0xa8),&local_70,(pair *)&local_70);
  pZStack_78 = *(Zone **)(this + 8);
  iVar2 = *(int *)(**(long **)this + 0x13);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  BytecodeLoopAssignments::BytecodeLoopAssignments
            ((BytecodeLoopAssignments *)&uStack_a0,*(int *)(**(long **)this + 0x17) >> 3,iVar1 >> 3,
             pZStack_78);
  local_68 = CONCAT44(uStack_a4,uVar3);
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_60 = uStack_a0;
  local_58 = local_98;
  local_70 = param_1;
  pZStack_38 = pZStack_78;
  lVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<int,v8::internal::compiler::LoopInfo>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::LoopInfo>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::LoopInfo>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::pair<int_const,v8::internal::compiler::LoopInfo>>
                    ((__tree<std::__ndk1::__value_type<int,v8::internal::compiler::LoopInfo>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::LoopInfo>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::LoopInfo>>>
                      *)(this + 200),&local_70,(pair *)&local_70);
  if (local_50 != 0) {
    local_48 = local_50;
  }
  lVar6 = *(long *)(this + 0x20);
  lVar8 = *(long *)(this + 0x28);
  uVar5 = 0;
  if (lVar8 - lVar6 != 0) {
    uVar5 = (lVar8 - lVar6) * 0x20 - 1;
  }
  uVar9 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
  if (uVar5 == uVar9) {
    std::__ndk1::
    deque<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeAnalysis::LoopStackEntry>>
                *)(this + 0x18));
    lVar6 = *(long *)(this + 0x20);
    lVar8 = *(long *)(this + 0x28);
    uVar9 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
  }
  if (lVar8 == lVar6) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)(*(long *)(lVar6 + (uVar9 >> 5 & 0x7fffffffffffff8)) + (uVar9 & 0xff) * 0x10);
  }
  *piVar7 = param_1;
  *(long *)(piVar7 + 2) = lVar4 + 0x28;
  *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  return;
}

