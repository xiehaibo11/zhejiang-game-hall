
/* v8::internal::compiler::RawMachineAssembler::CreateNodeFromPredecessors(std::__ndk1::vector<v8::internal::compiler::BasicBlock*,
   std::__ndk1::allocator<v8::internal::compiler::BasicBlock*> > const&,
   std::__ndk1::vector<v8::internal::compiler::Node*,
   std::__ndk1::allocator<v8::internal::compiler::Node*> > const&, v8::internal::compiler::Operator
   const*, std::__ndk1::vector<v8::internal::compiler::Node*,
   std::__ndk1::allocator<v8::internal::compiler::Node*> > const&) */

undefined8 __thiscall
v8::internal::compiler::RawMachineAssembler::CreateNodeFromPredecessors
          (RawMachineAssembler *this,vector *param_1,vector *param_2,Operator *param_3,
          vector *param_4)

{
  Node **ppNVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  Node *local_60;
  Node **local_58;
  Node **local_50;
  undefined8 *puStack_48;
  
  plVar6 = *(long **)param_1;
  plVar3 = *(long **)(param_1 + 8);
  if ((long)plVar3 - (long)plVar6 == 8) {
    uVar5 = *(undefined8 *)(*(long *)param_2 + *(long *)(*plVar6 + 0xa0) * 8);
  }
  else {
    local_50 = (Node **)0x0;
    puStack_48 = (undefined8 *)0x0;
    local_58 = (Node **)0x0;
    if (plVar6 != plVar3) {
      while( true ) {
        ppNVar1 = (Node **)(*(long *)param_2 + *(long *)(*plVar6 + 0xa0) * 8);
        if (local_50 == (Node **)puStack_48) {
          std::__ndk1::
          vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
          ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                    ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                      *)&local_58,ppNVar1);
        }
        else {
          *local_50 = *ppNVar1;
          local_50 = local_50 + 1;
        }
        if (plVar3 + -1 == plVar6) break;
        plVar6 = plVar6 + 1;
      }
    }
    puVar4 = *(undefined8 **)(param_4 + 8);
    for (puVar2 = *(undefined8 **)param_4; puVar2 != puVar4; puVar2 = puVar2 + 1) {
      local_60 = (Node *)*puVar2;
      if (local_50 == (Node **)puStack_48) {
        std::__ndk1::
        vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
        ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                  ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                    *)&local_58,&local_60);
      }
      else {
        *local_50 = local_60;
        local_50 = local_50 + 1;
      }
    }
    uVar5 = Graph::NewNode(*(Graph **)(this + 8),param_3,
                           (int)((ulong)((long)local_50 - (long)local_58) >> 3),local_58,false);
    if (local_58 != (Node **)0x0) {
      local_50 = local_58;
      operator_delete(local_58);
    }
  }
  return uVar5;
}

