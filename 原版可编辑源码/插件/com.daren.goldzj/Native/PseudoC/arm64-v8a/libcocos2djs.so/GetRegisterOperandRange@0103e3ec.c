
/* v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperandRange(int) const */

undefined8 __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperandRange
          (BytecodeArrayAccessor *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar4 = (**(code **)(**(long **)this + 0x10))
                    (*(long **)this,*(int *)(this + 0x10) + *(int *)(this + 8));
  uVar5 = 1;
  switch(*(undefined1 *)(*(long *)(Bytecodes::kOperandTypes + (uVar4 & 0xff) * 8) + (long)param_1))
  {
  case 9:
  case 0xc:
    break;
  case 10:
  case 0xd:
    lVar6 = (**(code **)(**(long **)this + 0x20))();
    iVar1 = *(int *)(this + 8);
    iVar2 = *(int *)(this + 0x10);
    uVar5 = (**(code **)(**(long **)this + 0x10))(*(long **)this,iVar2 + iVar1);
    iVar3 = Bytecodes::GetOperandOffset(uVar5,param_1 + 1,this[0xc]);
    uVar5 = BytecodeDecoder::DecodeUnsignedOperand
                      (lVar6 + iVar1 + (long)iVar2 + (long)iVar3,7,this[0xc]);
    return uVar5;
  case 0xb:
  case 0xe:
    uVar5 = 2;
    break;
  case 0xf:
    uVar5 = 3;
    break;
  default:
    uVar5 = 0;
  }
  return uVar5;
}

