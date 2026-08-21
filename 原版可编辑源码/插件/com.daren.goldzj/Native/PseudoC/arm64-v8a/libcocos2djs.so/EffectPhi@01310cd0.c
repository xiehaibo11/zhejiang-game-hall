
/* v8::internal::compiler::WasmGraphBuilder::EffectPhi(unsigned int, v8::internal::compiler::Node**)
    */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::EffectPhi
          (WasmGraphBuilder *this,uint param_1,Node **param_2)

{
  Graph *this_00;
  Operator *pOVar1;
  
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],param_1);
  Graph::NewNode(this_00,pOVar1,param_1 + 1,param_2,false);
  return;
}

