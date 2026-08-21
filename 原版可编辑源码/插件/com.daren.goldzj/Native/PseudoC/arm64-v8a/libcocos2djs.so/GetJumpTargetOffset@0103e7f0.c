
/* v8::internal::interpreter::BytecodeArrayAccessor::GetJumpTargetOffset() const */

int __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::GetJumpTargetOffset(BytecodeArrayAccessor *this)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  
  bVar2 = (**(code **)(**(long **)this + 0x10))
                    (*(long **)this,*(int *)(this + 0x10) + *(int *)(this + 8));
  if (((bVar2 | 1) == 0x8b) || ((byte)(bVar2 + 0x69) < 10)) {
    lVar7 = (**(code **)(**(long **)this + 0x20))();
    iVar5 = *(int *)(this + 8);
    iVar9 = *(int *)(this + 0x10);
    uVar8 = (**(code **)(**(long **)this + 0x10))(*(long **)this,iVar9 + iVar5);
    iVar3 = Bytecodes::GetOperandOffset(uVar8,0,this[0xc]);
    iVar3 = BytecodeDecoder::DecodeUnsignedOperand
                      (lVar7 + iVar5 + (long)iVar9 + (long)iVar3,6,this[0xc]);
    iVar5 = *(int *)(this + 8);
    iVar9 = -iVar3;
    if (bVar2 != 0x8a) {
      iVar9 = iVar3;
    }
  }
  else {
    if (10 < (byte)(bVar2 + 0x74)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar6 = (**(code **)(**(long **)this + 0x10))
                      (*(long **)this,*(int *)(this + 0x10) + *(int *)(this + 8));
    uVar1 = **(undefined1 **)(Bytecodes::kOperandTypes + (uVar6 & 0xff) * 8);
    lVar7 = (**(code **)(**(long **)this + 0x20))(*(long **)this);
    iVar5 = *(int *)(this + 8);
    iVar9 = *(int *)(this + 0x10);
    uVar8 = (**(code **)(**(long **)this + 0x10))(*(long **)this,iVar9 + iVar5);
    iVar3 = Bytecodes::GetOperandOffset(uVar8,0,this[0xc]);
    uVar4 = BytecodeDecoder::DecodeUnsignedOperand
                      (lVar7 + iVar5 + (long)iVar9 + (long)iVar3,uVar1,this[0xc]);
    iVar5 = (**(code **)(**(long **)this + 0x38))(*(long **)this,uVar4);
    iVar5 = iVar5 >> 1;
    iVar9 = *(int *)(this + 8);
  }
  return iVar5 + iVar9 + *(int *)(this + 0x10);
}

