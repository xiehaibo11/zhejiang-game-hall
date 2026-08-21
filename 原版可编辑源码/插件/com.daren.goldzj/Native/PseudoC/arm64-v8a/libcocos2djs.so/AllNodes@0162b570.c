
/* v8::internal::compiler::AllNodes::AllNodes(v8::internal::Zone*, v8::internal::compiler::Graph
   const*, bool) */

void __thiscall
v8::internal::compiler::AllNodes::AllNodes(AllNodes *this,Zone *param_1,Graph *param_2,bool param_3)

{
  Zone *extraout_x1;
  Zone *local_38;
  bool local_14 [4];
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x18) = param_1;
  local_14[0] = false;
  local_38 = param_1;
  std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
            ((vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0x20),
             (ulong)*(uint *)(param_2 + 0x1c),local_14,(ZoneAllocator *)&local_38);
  this[0x40] = (AllNodes)param_3;
  Mark(this,extraout_x1,*(Node **)(param_2 + 0x10),param_2);
  return;
}

