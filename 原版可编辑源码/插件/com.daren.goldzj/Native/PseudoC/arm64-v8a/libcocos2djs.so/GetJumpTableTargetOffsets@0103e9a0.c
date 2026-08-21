
/* v8::internal::interpreter::BytecodeArrayAccessor::GetJumpTableTargetOffsets() const */

void v8::internal::interpreter::BytecodeArrayAccessor::GetJumpTableTargetOffsets(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *in_x0;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long *in_x8;
  
  cVar4 = (**(code **)(*(long *)*in_x0 + 0x10))
                    ((long *)*in_x0,*(int *)(in_x0 + 2) + *(int *)(in_x0 + 1));
  uVar9 = (**(code **)(*(long *)*in_x0 + 0x10))
                    ((long *)*in_x0,*(int *)(in_x0 + 2) + *(int *)(in_x0 + 1));
  if (cVar4 == -0x51) {
    uVar1 = (*(undefined1 **)(Bytecodes::kOperandTypes + (uVar9 & 0xff) * 8))[1];
    lVar10 = (**(code **)(*(long *)*in_x0 + 0x20))();
    iVar2 = *(int *)(in_x0 + 1);
    iVar3 = *(int *)(in_x0 + 2);
    uVar11 = (**(code **)(*(long *)*in_x0 + 0x10))((long *)*in_x0,iVar3 + iVar2);
    iVar5 = Bytecodes::GetOperandOffset(uVar11,1,*(undefined1 *)((long)in_x0 + 0xc));
    uVar6 = BytecodeDecoder::DecodeUnsignedOperand
                      (lVar10 + iVar2 + (long)iVar3 + (long)iVar5,uVar1,
                       *(undefined1 *)((long)in_x0 + 0xc));
    lVar10 = (**(code **)(*(long *)*in_x0 + 0x20))((long *)*in_x0);
    iVar2 = *(int *)(in_x0 + 1);
    iVar3 = *(int *)(in_x0 + 2);
    uVar11 = (**(code **)(*(long *)*in_x0 + 0x10))((long *)*in_x0,iVar3 + iVar2);
    iVar5 = Bytecodes::GetOperandOffset(uVar11,2,*(undefined1 *)((long)in_x0 + 0xc));
    uVar7 = BytecodeDecoder::DecodeUnsignedOperand
                      (lVar10 + iVar2 + (long)iVar3 + (long)iVar5,6,
                       *(undefined1 *)((long)in_x0 + 0xc));
    uVar8 = 0;
  }
  else {
    uVar1 = **(undefined1 **)(Bytecodes::kOperandTypes + (uVar9 & 0xff) * 8);
    lVar10 = (**(code **)(*(long *)*in_x0 + 0x20))();
    iVar2 = *(int *)(in_x0 + 1);
    iVar3 = *(int *)(in_x0 + 2);
    uVar11 = (**(code **)(*(long *)*in_x0 + 0x10))((long *)*in_x0,iVar3 + iVar2);
    iVar5 = Bytecodes::GetOperandOffset(uVar11,0,*(undefined1 *)((long)in_x0 + 0xc));
    uVar6 = BytecodeDecoder::DecodeUnsignedOperand
                      (lVar10 + iVar2 + (long)iVar3 + (long)iVar5,uVar1,
                       *(undefined1 *)((long)in_x0 + 0xc));
    lVar10 = (**(code **)(*(long *)*in_x0 + 0x20))((long *)*in_x0);
    iVar2 = *(int *)(in_x0 + 1);
    iVar3 = *(int *)(in_x0 + 2);
    uVar11 = (**(code **)(*(long *)*in_x0 + 0x10))((long *)*in_x0,iVar3 + iVar2);
    iVar5 = Bytecodes::GetOperandOffset(uVar11,1,*(undefined1 *)((long)in_x0 + 0xc));
    uVar7 = BytecodeDecoder::DecodeUnsignedOperand
                      (lVar10 + iVar2 + (long)iVar3 + (long)iVar5,6,
                       *(undefined1 *)((long)in_x0 + 0xc));
    lVar10 = (**(code **)(*(long *)*in_x0 + 0x20))((long *)*in_x0);
    iVar2 = *(int *)(in_x0 + 1);
    iVar3 = *(int *)(in_x0 + 2);
    uVar11 = (**(code **)(*(long *)*in_x0 + 0x10))((long *)*in_x0,iVar3 + iVar2);
    iVar5 = Bytecodes::GetOperandOffset(uVar11,2,*(undefined1 *)((long)in_x0 + 0xc));
    uVar8 = BytecodeDecoder::DecodeSignedOperand
                      (lVar10 + iVar2 + (long)iVar3 + (long)iVar5,8,
                       *(undefined1 *)((long)in_x0 + 0xc));
  }
  *in_x8 = (long)in_x0;
  *(undefined4 *)(in_x8 + 1) = uVar6;
  *(undefined4 *)((long)in_x8 + 0xc) = uVar7;
  *(undefined4 *)(in_x8 + 2) = uVar8;
  return;
}

