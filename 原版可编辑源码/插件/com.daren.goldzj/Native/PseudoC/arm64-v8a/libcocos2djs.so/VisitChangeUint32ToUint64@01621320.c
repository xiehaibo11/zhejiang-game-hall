
/* v8::internal::compiler::InstructionSelector::VisitChangeUint32ToUint64(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitChangeUint32ToUint64
          (InstructionSelector *this,Node *param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  Node *pNVar4;
  
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  pNVar4 = *(Node **)pNVar4;
  switch(*(undefined2 *)(*(Operator **)pNVar4 + 0x10)) {
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x14b:
  case 0x14d:
  case 0x14e:
  case 0x14f:
  case 0x150:
    goto switchD_01621380_caseD_128;
  default:
switchD_01621380_caseD_134:
    uVar2 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    uVar3 = GetVirtualRegister(this,pNVar4);
    MarkAsUsed(this,pNVar4);
    Emit(this,0x94,(uVar2 & 0xffffffff) << 3 | 0xd800000001,(uVar3 & 0xffffffff) << 3 | 0x5800000001
         ,0,0);
    return;
  case 0x1aa:
    cVar1 = LoadRepresentationOf(*(Operator **)pNVar4);
    if (2 < (byte)(cVar1 - 2U)) goto switchD_01621380_caseD_134;
switchD_01621380_caseD_128:
    EmitIdentity(this,param_1);
    return;
  }
}

