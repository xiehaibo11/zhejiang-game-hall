
/* v8::internal::compiler::JSCallReducer::ReplaceWithSubgraph(v8::internal::compiler::JSCallReducerAssembler*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReplaceWithSubgraph
          (JSCallReducer *this,JSCallReducerAssembler *param_1,Node *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  (**(code **)(**(long **)(this + 8) + 0x20))
            (*(long **)(this + 8),*(undefined8 *)(param_1 + 0x38),param_2,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if ((param_1[0x40] != (JSCallReducerAssembler)0x0) &&
     (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x58))) {
    JSCallReducerAssembler::MergeExceptionalPaths();
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),*(undefined8 *)(param_1 + 0x48),local_48,uStack_40,local_38);
  }
  return param_2;
}

