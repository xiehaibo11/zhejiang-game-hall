
void FUN_012abe18(long param_1,Node *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = v8::internal::compiler::SourcePositionTable::GetSourcePosition
                    (*(SourcePositionTable **)(param_1 + 0x10),param_2);
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  if ((uVar1 & 0x7fffffffffff) != 0) {
    *(ulong *)(lVar2 + 0x10) = uVar1;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),param_2);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  return;
}

