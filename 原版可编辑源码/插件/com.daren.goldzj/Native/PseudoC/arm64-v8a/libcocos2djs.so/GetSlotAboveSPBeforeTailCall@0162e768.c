
/* v8::internal::compiler::CodeGenerator::GetSlotAboveSPBeforeTailCall(v8::internal::compiler::Instruction*,
   int*) */

undefined4 __thiscall
v8::internal::compiler::CodeGenerator::GetSlotAboveSPBeforeTailCall
          (CodeGenerator *this,Instruction *param_1,int *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  Constant local_30 [8];
  int iStack_28;
  
  if (0xb < (*(uint *)param_1 & 0x1ff)) {
    return 0;
  }
  if ((1 << (ulong)(*(uint *)param_1 & 0x1f) & 0x816U) == 0) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 +
                    (((ulong)*(uint *)(param_1 + 4) & 0xff) +
                    (ulong)(ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x20);
  if ((uVar2 & 7) == 3) {
    if (((uint)uVar2 >> 3 & 1) == 0) {
      Constant::Constant(local_30,(int)(uVar2 >> 0x20));
    }
    else {
      iStack_28 = (int)*(undefined8 *)
                        (*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar2 >> 0x20) * 0x10 + 8
                        );
    }
    goto LAB_0162e83c;
  }
  plVar1 = (long *)(*(long *)(this + 0x28) + 0x48);
  plVar5 = (long *)*plVar1;
  if (plVar5 == (long *)0x0) {
LAB_0162e81c:
    plVar3 = plVar1;
  }
  else {
    plVar3 = plVar1;
    do {
      iVar4 = (int)(uVar2 >> 3);
      if (iVar4 <= (int)plVar5[4]) {
        plVar3 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < iVar4];
    } while (plVar5 != (long *)0x0);
    if ((plVar3 == plVar1) || (iVar4 < (int)plVar3[4])) goto LAB_0162e81c;
  }
  iStack_28 = (int)plVar3[6];
LAB_0162e83c:
  *param_2 = iStack_28;
  return 1;
}

