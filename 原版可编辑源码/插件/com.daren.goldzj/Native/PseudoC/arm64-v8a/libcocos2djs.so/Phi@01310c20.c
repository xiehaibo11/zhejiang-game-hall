
/* v8::internal::compiler::WasmGraphBuilder::Phi(v8::internal::wasm::ValueType, unsigned int,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::Phi
          (WasmGraphBuilder *this,byte param_2,int param_3,Node **param_4)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  
  if (param_2 < 10) {
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    uVar2 = 4;
    switch(param_2) {
    case 0:
      uVar2 = 0;
      break;
    case 1:
      break;
    case 2:
      uVar2 = 5;
      break;
    case 3:
      uVar2 = 0xb;
      break;
    case 4:
      uVar2 = 0xc;
      break;
    case 5:
      uVar2 = 0xd;
      break;
    default:
      uVar2 = 7;
    }
    pOVar1 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar2,param_3);
    Graph::NewNode(this_00,pOVar1,param_3 + 1,param_4,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

