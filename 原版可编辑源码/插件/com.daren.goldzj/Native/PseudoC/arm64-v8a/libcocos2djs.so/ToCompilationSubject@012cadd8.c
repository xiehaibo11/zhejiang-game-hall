
/* v8::internal::compiler::Callee::ToCompilationSubject(v8::internal::Isolate*, v8::internal::Zone*)
   const */

void v8::internal::compiler::Callee::ToCompilationSubject(Isolate *param_1,Zone *param_2)

{
  uint uVar1;
  undefined8 *in_x8;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  
  if (param_1[8] != (Isolate)0x0) {
LAB_012cae70:
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    in_x8[1] = *(undefined8 *)(param_1 + 0x18);
    *in_x8 = uVar6;
    in_x8[2] = uVar3;
    in_x8[3] = 0;
    return;
  }
  if (*(ulong **)param_1 != (ulong *)0x0) {
    uVar4 = **(ulong **)param_1;
    uVar2 = uVar4 & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar2 | *(uint *)(uVar4 + 0xb)) + 3);
    if ((uVar1 == 0x84) ||
       ((((uVar1 & 1) != 0 &&
         (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) - 0x95 < 2)) ||
        (*(short *)((uVar2 | 7) +
                   (ulong)*(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(uVar4 + 0x13)) + 3)) - 1))
         != 0x9f)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","HasFeedbackVector()");
    }
    if (param_1[8] != (Isolate)0x0) goto LAB_012cae70;
    puVar5 = *(ulong **)param_1;
    if (puVar5 != (ulong *)0x0) {
      VirtualClosure::VirtualClosure();
      in_x8[3] = puVar5;
      uVar4 = *puVar5;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar1 = *(uint *)((uVar2 | *(uint *)(uVar4 + 0xb)) + 3);
      if (((uVar1 != 0x84) &&
          (((uVar1 & 1) == 0 ||
           (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) - 0x95)))) &&
         (*(short *)((uVar2 | 7) +
                    (ulong)*(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(uVar4 + 0x13)) + 3)) - 1)
                    ) == 0x9f)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","closure->has_feedback_vector()");
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

