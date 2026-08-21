
/* v8::internal::compiler::InstructionSelector::VisitTryTruncateFloat32ToUint64(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitTryTruncateFloat32ToUint64
          (InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  Node *pNVar2;
  ulong uVar3;
  ulong local_50;
  ulong local_48;
  ulong local_28;
  
  pNVar2 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  pNVar2 = *(Node **)pNVar2;
  uVar1 = GetVirtualRegister(this,pNVar2);
  MarkAsUsed(this,pNVar2);
  local_48 = 0;
  local_28 = (uVar1 & 0xffffffff) << 3 | 0x5800000001;
  uVar1 = GetVirtualRegister(this,param_1);
  MarkAsDefined(this,param_1);
  uVar3 = 1;
  local_50 = (uVar1 & 0xffffffff) << 3 | 0xd800000001;
  pNVar2 = (Node *)NodeProperties::FindProjection(param_1,1);
  if (pNVar2 != (Node *)0x0) {
    uVar1 = GetVirtualRegister(this,pNVar2);
    MarkAsDefined(this,pNVar2);
    uVar3 = 2;
    local_48 = (uVar1 & 0xffffffff) << 3 | 0xd800000001;
  }
  Emit(this,0xd5,uVar3,(InstructionOperand *)&local_50,1,(InstructionOperand *)&local_28,0,
       (InstructionOperand *)0x0);
  return;
}

