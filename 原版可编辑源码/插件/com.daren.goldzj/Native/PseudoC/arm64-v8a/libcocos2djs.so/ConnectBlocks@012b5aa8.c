
/* v8::internal::compiler::CFGBuilder::ConnectBlocks(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::CFGBuilder::ConnectBlocks(CFGBuilder *this,Node *param_1)

{
  ulong uVar1;
  
  if (0x6c < *(ushort *)(*(long *)param_1 + 0x10) - 0x2b1) {
    switch((uint)*(ushort *)(*(long *)param_1 + 0x10)) {
    case 1:
    case 10:
      ConnectMerge(this,param_1);
      return;
    case 2:
      Scheduler::UpdatePlacement(*(Scheduler **)(this + 8),param_1,2);
      ConnectBranch(this,param_1);
      return;
    case 3:
      Scheduler::UpdatePlacement(*(Scheduler **)(this + 8),param_1,2);
      ConnectSwitch(this,param_1);
      return;
    default:
      return;
    case 0xb:
      Scheduler::UpdatePlacement(*(Scheduler **)(this + 8),param_1,2);
      ConnectDeoptimize(this,param_1);
      return;
    case 0x10:
      Scheduler::UpdatePlacement(*(Scheduler **)(this + 8),param_1,2);
      ConnectReturn(this,param_1);
      return;
    case 0x11:
      Scheduler::UpdatePlacement(*(Scheduler **)(this + 8),param_1,2);
      ConnectTailCall(this,param_1);
      return;
    case 0x15:
      Scheduler::UpdatePlacement(*(Scheduler **)(this + 8),param_1,2);
      ConnectThrow(this,param_1);
      return;
    case 0x31:
      break;
    }
  }
  uVar1 = NodeProperties::IsExceptionalCall(param_1,(Node **)0x0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  Scheduler::UpdatePlacement(*(Scheduler **)(this + 8),param_1,2);
  ConnectCall(this,param_1);
  return;
}

