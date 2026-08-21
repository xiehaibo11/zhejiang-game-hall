
/* v8::internal::compiler::RawMachineAssembler::Comment(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::Comment
          (RawMachineAssembler *this,basic_string *param_1)

{
  ulong uVar1;
  Zone *this_00;
  Operator *pOVar2;
  Node *pNVar3;
  char *pcVar4;
  ulong uVar5;
  basic_string *pbVar6;
  
  this_00 = (Zone *)**(undefined8 **)(this + 8);
  pcVar4 = *(char **)(this_00 + 0x10);
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  uVar5 = uVar1 + 8 & 0xfffffffffffffff8;
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pcVar4) < uVar5) {
    pcVar4 = (char *)Zone::NewExpand(this_00,uVar5);
  }
  else {
    *(char **)(this_00 + 0x10) = pcVar4 + uVar5;
  }
  pbVar6 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar6 = param_1 + 1;
  }
  MemCopy(pcVar4,pbVar6,uVar1 + 1);
  pOVar2 = (Operator *)
           MachineOperatorBuilder::Comment((MachineOperatorBuilder *)(this + 0x20),pcVar4);
  pNVar3 = (Node *)Graph::NewNodeUnchecked(*(Graph **)(this + 8),pOVar2,0,(Node **)0x0,false);
  Schedule::AddNode(*(Schedule **)(this + 0x10),*(BasicBlock **)(this + 0x98),pNVar3);
  return;
}

