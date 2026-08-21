
/* v8::internal::interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand(int,
   v8::internal::Isolate*) const */

void __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
          (BytecodeArrayAccessor *this,int param_1,Isolate *param_2)

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
  uVar5 = BytecodeDecoder::DecodeUnsignedOperand
                    (lVar7 + iVar2 + (long)iVar3 + (long)iVar4,uVar1,this[0xc]);
                    /* WARNING: Could not recover jumptable at 0x0103e7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x28))(*(long **)this,uVar5,param_2);
  return;
}

