
/* v8::internal::interpreter::BytecodeArrayAccessor::GetIntrinsicIdOperand(int) const */

void __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::GetIntrinsicIdOperand
          (BytecodeArrayAccessor *this,int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar5 = (**(code **)(**(long **)this + 0x10))
                    (*(long **)this,*(int *)(this + 0x10) + *(int *)(this + 8));
  uVar1 = *(undefined1 *)(*(long *)(Bytecodes::kOperandTypes + (uVar5 & 0xff) * 8) + (long)param_1);
  lVar6 = (**(code **)(**(long **)this + 0x20))(*(long **)this);
  iVar2 = *(int *)(this + 8);
  iVar3 = *(int *)(this + 0x10);
  uVar7 = (**(code **)(**(long **)this + 0x10))(*(long **)this,iVar3 + iVar2);
  iVar4 = Bytecodes::GetOperandOffset(uVar7,param_1,this[0xc]);
  BytecodeDecoder::DecodeUnsignedOperand(lVar6 + iVar2 + (long)iVar3 + (long)iVar4,uVar1,this[0xc]);
  IntrinsicsHelper::ToRuntimeId();
  return;
}

