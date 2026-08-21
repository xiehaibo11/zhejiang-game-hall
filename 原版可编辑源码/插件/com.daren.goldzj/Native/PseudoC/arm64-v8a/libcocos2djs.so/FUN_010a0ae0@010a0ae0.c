
void FUN_010a0ae0(undefined8 param_1,ulong *param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  if ((uint)(*(int *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7)) + 3) >> 1) <
      param_5) {
    FUN_010a12ec(param_2,param_5 & 0xffffffff);
    if ((*(byte *)((*param_2 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_2 - 1)) & 0xf8) !=
        0x58) goto LAB_010a0b68;
  }
  if (param_5 <= param_4) {
    return;
  }
  FUN_010a14cc();
LAB_010a0b68:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","Subclass::kind() == receiver->GetElementsKind()");
}

