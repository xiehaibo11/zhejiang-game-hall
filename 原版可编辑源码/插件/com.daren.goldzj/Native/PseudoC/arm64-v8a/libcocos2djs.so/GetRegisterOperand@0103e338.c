
/* v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand(int) const */

undefined4 __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::GetRegisterOperand
          (BytecodeArrayAccessor *this,int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar6 = (**(code **)(**(long **)this + 0x10))
                    (*(long **)this,*(int *)(this + 0x10) + *(int *)(this + 8));
  uVar1 = *(undefined1 *)(*(long *)(Bytecodes::kOperandTypes + (uVar6 & 0xff) * 8) + (long)param_1);
  lVar7 = (**(code **)(**(long **)this + 0x20))(*(long **)this);
  iVar2 = *(int *)(this + 8);
  iVar3 = *(int *)(this + 0x10);
  uVar8 = (**(code **)(**(long **)this + 0x10))(*(long **)this,iVar3 + iVar2);
  iVar4 = Bytecodes::GetOperandOffset(uVar8,param_1,this[0xc]);
  uVar5 = BytecodeDecoder::DecodeRegisterOperand
                    (lVar7 + iVar2 + (long)iVar3 + (long)iVar4,uVar1,this[0xc]);
  return uVar5;
}

