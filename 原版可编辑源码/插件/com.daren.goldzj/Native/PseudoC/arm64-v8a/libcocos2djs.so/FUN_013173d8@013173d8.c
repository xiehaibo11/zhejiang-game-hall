
void FUN_013173d8(WasmGraphBuilder *param_1,undefined4 param_2,char *param_3,char *param_4,
                 Node *param_5,undefined8 param_6)

{
  Graph *this;
  Operator *pOVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Node *local_40;
  undefined8 uStack_38;
  
  if (*param_3 != '\x04') {
    this = (Graph *)**(undefined8 **)(param_1 + 8);
    pOVar1 = (Operator *)
             v8::internal::compiler::CommonOperatorBuilder::Projection
                       ((CommonOperatorBuilder *)(*(undefined8 **)(param_1 + 8))[1],1);
    uStack_38 = *(undefined8 *)(**(long **)(param_1 + 8) + 8);
    local_40 = param_5;
    v8::internal::compiler::Graph::NewNode(this,pOVar1,2,&local_40,false);
    return;
  }
  uVar2 = 0xb2;
  switch(param_2) {
  case 0xa8:
    break;
  case 0xa9:
switchD_0131743c_caseD_fc01:
    uVar2 = 0xb3;
    break;
  case 0xaa:
switchD_0131743c_caseD_fc02:
    uVar2 = 0xb7;
    break;
  case 0xab:
switchD_0131743c_caseD_fc03:
    uVar2 = 0xb8;
    break;
  default:
    switch(param_2) {
    case 0xfc00:
      break;
    case 0xfc01:
      goto switchD_0131743c_caseD_fc01;
    case 0xfc02:
      goto switchD_0131743c_caseD_fc02;
    case 0xfc03:
      goto switchD_0131743c_caseD_fc03;
    default:
      goto switchD_0131743c_default;
    }
  }
  uVar2 = v8::internal::compiler::WasmGraphBuilder::Unop(param_1,uVar2,param_6,0xffffffff);
  if (*param_4 == '\v') {
    uVar3 = 0x5c;
  }
  else {
    if (*param_4 != '\f') {
switchD_0131743c_default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = 0x62;
  }
  v8::internal::compiler::WasmGraphBuilder::Binop(param_1,uVar3,param_5,uVar2,0xffffffff);
  return;
}

