
/* v8::internal::compiler::VariableTracker::VariableTracker(v8::internal::compiler::JSGraph*,
   v8::internal::compiler::EffectGraphReducer*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::VariableTracker::VariableTracker
          (VariableTracker *this,JSGraph *param_1,EffectGraphReducer *param_2,Zone *param_3)

{
  *(Zone **)this = param_3;
  *(JSGraph **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(Zone **)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Zone **)(this + 0x38) = param_3;
  *(undefined8 *)(this + 0x40) = 0;
  *(Zone **)(this + 0x48) = param_3;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,v8::base::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>,std::__ndk1::equal_to<unsigned_int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::compiler::VariableTracker::State>>>
            *)(this + 0x28),100);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(Zone **)(this + 0x78) = param_3;
  *(EffectGraphReducer **)(this + 0x80) = param_2;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_2 + 0xf0);
  return;
}

