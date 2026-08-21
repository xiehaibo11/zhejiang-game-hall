
/* v8::internal::compiler::FrameElider::PropagateIntoBlock(v8::internal::compiler::InstructionBlock*)
    */

undefined8 __thiscall
v8::internal::compiler::FrameElider::PropagateIntoBlock(FrameElider *this,InstructionBlock *param_1)

{
  long lVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  
  if (param_1[0x7c] == (InstructionBlock)0x0) {
    piVar4 = *(int **)param_1;
    piVar2 = *(int **)(param_1 + 8);
    if (piVar4 != piVar2) {
      piVar5 = *(int **)(param_1 + 0x20);
      if (piVar5 != *(int **)(param_1 + 0x28)) {
        lVar1 = **(long **)(*(long *)this + 0x10);
        do {
          if ((ulong)((*(long **)(*(long *)this + 0x10))[1] - lVar1 >> 3) <= (ulong)(long)*piVar5)
          goto LAB_01631e74;
          lVar6 = *(long *)(lVar1 + (long)*piVar5 * 8);
          if ((*(char *)(lVar6 + 0x7c) != '\0') &&
             ((*(char *)(lVar6 + 0x78) == '\0' || (param_1[0x78] != (InstructionBlock)0x0))))
          goto LAB_01631e64;
          piVar5 = piVar5 + 1;
        } while (*(int **)(param_1 + 0x28) != piVar5);
      }
      if ((long)piVar2 - (long)piVar4 == 4) {
        lVar1 = **(long **)(*(long *)this + 0x10);
        if ((ulong)((*(long **)(*(long *)this + 0x10))[1] - lVar1 >> 3) <= (ulong)(long)*piVar4) {
LAB_01631e74:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (*(char *)(*(long *)(lVar1 + (long)*piVar4 * 8) + 0x7c) != '\0') {
LAB_01631e64:
          param_1[0x7c] = (InstructionBlock)0x1;
          return 1;
        }
      }
      else {
        bVar3 = false;
        lVar1 = **(long **)(*(long *)this + 0x10);
        do {
          if ((ulong)((*(long **)(*(long *)this + 0x10))[1] - lVar1 >> 3) <= (ulong)(long)*piVar4)
          goto LAB_01631e74;
          lVar6 = *(long *)(lVar1 + (long)*piVar4 * 8);
          if (*(char *)(lVar6 + 0x78) == '\0') {
            if (*(char *)(lVar6 + 0x7c) == '\0') {
              return 0;
            }
            bVar3 = true;
          }
          piVar4 = piVar4 + 1;
        } while (piVar2 != piVar4);
        if (bVar3) goto LAB_01631e64;
      }
    }
  }
  return 0;
}

