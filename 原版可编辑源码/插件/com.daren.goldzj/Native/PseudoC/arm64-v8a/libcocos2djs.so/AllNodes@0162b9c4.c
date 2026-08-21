
/* v8::internal::compiler::AllNodes::AllNodes(v8::internal::Zone*, v8::internal::compiler::Node*,
   v8::internal::compiler::Graph const*, bool) */

void __thiscall
v8::internal::compiler::AllNodes::AllNodes
          (AllNodes *this,Zone *param_1,Node *param_2,Graph *param_3,bool param_4)

{
  Zone *extraout_x1;
  Zone *local_40;
  bool local_34 [4];
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x18) = param_1;
  local_34[0] = false;
  local_40 = param_1;
  std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
            ((vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0x20),
             (ulong)*(uint *)(param_3 + 0x1c),local_34,(ZoneAllocator *)&local_40);
  this[0x40] = (AllNodes)param_4;
  Mark(this,extraout_x1,param_2,param_3);
  return;
}

