
/* v8::internal::compiler::EscapeAnalysis::EscapeAnalysis(v8::internal::compiler::JSGraph*,
   v8::internal::TickCounter*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::EscapeAnalysis::EscapeAnalysis
          (EscapeAnalysis *this,JSGraph *param_1,TickCounter *param_2,Zone *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  Graph *pGVar3;
  EscapeAnalysis *pEVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined **local_90;
  EscapeAnalysis *pEStack_88;
  long *local_70 [3];
  long local_58;
  
  local_70[0] = (long *)&local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pGVar3 = *(Graph **)param_1;
  local_90 = &PTR_FUN_01cccf10;
  *this = (EscapeAnalysis)0x4;
  *(Graph **)(this + 8) = pGVar3;
  pEStack_88 = this;
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)(this + 0x10),pGVar3,4);
  *(Zone **)(this + 0x38) = param_3;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(Zone **)(this + 0x58) = param_3;
  *(undefined8 *)(this + 0x80) = 0;
  *(Zone **)(this + 0x88) = param_3;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(Zone **)(this + 0xa8) = param_3;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  if (local_70[0] == (long *)0x0) {
    pEVar4 = this + 0xe0;
  }
  else {
    if (&local_90 == (undefined ***)local_70[0]) {
      *(EscapeAnalysis **)(this + 0xe0) = this + 0xc0;
      (**(code **)(*local_70[0] + 0x18))();
      *(TickCounter **)(this + 0xf0) = param_2;
      if (&local_90 == (undefined ***)local_70[0]) {
        pcVar6 = *(code **)(*local_70[0] + 0x20);
      }
      else {
        if (local_70[0] == (long *)0x0) goto LAB_016baed0;
        pcVar6 = *(code **)(*local_70[0] + 0x28);
      }
      (*pcVar6)();
      goto LAB_016baed0;
    }
    pEVar4 = (EscapeAnalysis *)local_70;
    *(long **)(this + 0xe0) = local_70[0];
  }
  *(long **)pEVar4 = (long *)0x0;
  *(TickCounter **)(this + 0xf0) = param_2;
LAB_016baed0:
  puVar2 = *(undefined8 **)(param_3 + 0x10);
  if ((ulong)(*(long *)(param_3 + 0x18) - (long)puVar2) < 0x110) {
    puVar2 = (undefined8 *)Zone::NewExpand(param_3,0x110);
  }
  else {
    *(undefined8 **)(param_3 + 0x10) = puVar2 + 0x22;
  }
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = param_3;
  puVar2[4] = 0;
  puVar2[5] = param_3;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VirtualObject*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VirtualObject*>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VirtualObject*>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VirtualObject*>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VirtualObject*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VirtualObject*>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VirtualObject*>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VirtualObject*>>>
            *)(puVar2 + 1),100);
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = param_3;
  puVar2[0xc] = param_3;
  puVar2[0xd] = param_1;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = param_3;
  puVar2[0x12] = 0;
  puVar2[0x13] = param_3;
  puVar2[0x11] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = param_3;
  puVar2[0x16] = 0;
  *(undefined4 *)(puVar2 + 0x17) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>>>
            *)(puVar2 + 0x11),100);
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = param_3;
  puVar2[0x1c] = this;
  *(undefined4 *)(puVar2 + 0x1d) = 0;
  uVar5 = *(undefined8 *)(this + 0xf0);
  *(undefined4 *)(puVar2 + 0x1f) = 0;
  puVar2[0x20] = param_1;
  puVar2[0x21] = param_3;
  puVar2[0x1e] = uVar5;
  *(undefined8 **)(this + 0xf8) = puVar2;
  *(JSGraph **)(this + 0x100) = param_1;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

