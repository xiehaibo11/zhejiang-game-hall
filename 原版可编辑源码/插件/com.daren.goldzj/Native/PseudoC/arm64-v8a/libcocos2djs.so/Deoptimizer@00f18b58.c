
/* v8::internal::Deoptimizer::Deoptimizer(v8::internal::Isolate*, v8::internal::JSFunction,
   v8::internal::DeoptimizeKind, unsigned int, unsigned long, int) */

void __thiscall
v8::internal::Deoptimizer::Deoptimizer
          (Deoptimizer *this,long param_1,ulong param_3,undefined4 param_4,undefined4 param_5,
          ulong param_6,undefined4 param_7)

{
  Mutex *this_00;
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
  *(long *)this = param_1;
  *(ulong *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = param_5;
  this[0x1c] = SUB41(param_4,0);
  *(ulong *)(this + 0x20) = param_6;
  *(undefined4 *)(this + 0x28) = param_7;
  this[0x2c] = (Deoptimizer)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  if (*(char *)(param_1 + 0x9578) != '\0') {
    *(undefined1 *)(param_1 + 0x9578) = 0;
    param_6 = *(ulong *)(this + 0x20);
    this[0x2c] = (Deoptimizer)0x1;
  }
  uVar5 = FindDeoptimizingCode(this,param_6);
  if ((int)uVar5 == 0) {
    uVar5 = Isolate::FindCodeObject(*(Isolate **)this,*(ulong *)(this + 0x20));
  }
  *(undefined8 *)(this + 0x10) = uVar5;
  if (FLAG_trace_deopt == '\0') {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = operator_new(8);
    puVar7 = (undefined8 *)Isolate::GetCodeTracer();
    *plVar6 = (long)puVar7;
    if (FLAG_redirect_code_traces != '\0') {
      if (puVar7[0x12] == 0) {
        uVar5 = base::OS::FOpen((char *)*puVar7,"ab");
        puVar7[0x12] = uVar5;
      }
      *(int *)(puVar7 + 0x13) = *(int *)(puVar7 + 0x13) + 1;
    }
  }
  uVar11 = *(ulong *)(this + 0x10);
  *(long **)(this + 0x110) = plVar6;
  if ((((*(byte *)(uVar11 + 0x17) & 0x3e) != 0) ||
      ((*(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xf)) + 7) >> 2 & 1) == 0
      )) && (this[0x1c] == (Deoptimizer)0x1)) {
    lVar12 = *(long *)(param_1 + 0x9520);
    if (*(char *)(lVar12 + 0x1c98) == '\0') {
      *(char *)(lVar12 + 0x1c98) = '\x01';
      piVar8 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar12 + 0x1c80));
      *(int **)(lVar12 + 0x1c90) = piVar8;
    }
    else {
      piVar8 = *(int **)(lVar12 + 0x1c90);
    }
    if (piVar8 != (int *)0x0) {
      *piVar8 = *piVar8 + 1;
    }
  }
  uVar11 = *(ulong *)(this + 0x10);
  if ((*(byte *)(uVar11 + 0x17) & 0x3e) == 0) {
    *(uint *)((*(ulong *)(this + 0x10) & 0xffffffff00000000 |
              (ulong)*(uint *)(*(ulong *)(this + 0x10) + 0xf)) + 7) =
         *(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xf)) + 7) | 4;
    uVar5 = *(undefined8 *)(this + 0x10);
    uVar13 = *(undefined8 *)(this + 0x20);
    lVar12 = *(long *)(*(long *)this + 0xb6d8);
    uVar2 = *(undefined4 *)(this + 0x28);
    this_00 = (Mutex *)(lVar12 + 0x28);
    base::Mutex::Lock(this_00);
    for (plVar6 = *(long **)(lVar12 + 0x10); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      (**(code **)(*(long *)plVar6[2] + 0x80))((long *)plVar6[2],uVar5,param_4,uVar13,uVar2);
    }
    base::Mutex::Unlock(this_00);
    uVar11 = *(ulong *)(this + 8);
  }
  else {
    uVar11 = *(ulong *)(this + 8);
  }
  if ((uVar11 & 1) == 0) {
    iVar10 = 0x10;
  }
  else {
    uVar1 = *(ushort *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xb)) + 0x15) + 1 &
            0xffff;
    uVar4 = ShouldPadArguments(uVar1);
    iVar10 = ((uVar4 & 1) + uVar1) * 8 + 0x10;
  }
  uVar1 = *(int *)(this + 0x28) + iVar10;
  if (((*(uint *)(*(long *)(this + 0x10) + 0x17) & 0x3e) == 0) &&
     ((iVar10 + (*(uint *)(*(long *)(this + 0x10) + 0x17) >> 4 & 0x7fffff8)) - 0x10 != uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "fixed_size_above_fp + (stack_slots * kSystemPointerSize) - CommonFrameConstants::kFixedFrameSizeAboveFp + outgoing_size == result"
            );
  }
  uVar3 = *(ushort *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x15);
  puVar9 = malloc((ulong)uVar1 + 0x240);
  puVar9[0x23] = 0;
  puVar9[0x22] = 0;
  puVar9[0x25] = 0;
  puVar9[0x24] = 0;
  puVar9[0x27] = 0;
  puVar9[0x26] = 0;
  puVar9[0x29] = 0;
  puVar9[0x28] = 0;
  puVar9[0x2b] = 0;
  puVar9[0x2a] = 0;
  puVar9[0x2d] = 0;
  puVar9[0x2c] = 0;
  puVar9[0x2f] = 0;
  puVar9[0x2e] = 0;
  puVar9[0x31] = 0;
  puVar9[0x30] = 0;
  puVar9[0x33] = 0;
  puVar9[0x32] = 0;
  puVar9[0x35] = 0;
  puVar9[0x34] = 0;
  puVar9[0x37] = 0;
  puVar9[0x36] = 0;
  puVar9[0x39] = 0;
  puVar9[0x38] = 0;
  puVar9[0x3b] = 0;
  puVar9[0x3a] = 0;
  puVar9[0x3d] = 0;
  puVar9[0x3c] = 0;
  puVar9[0x3f] = 0;
  puVar9[0x3e] = 0;
  puVar9[0x41] = 0;
  puVar9[0x40] = 0;
  *puVar9 = (ulong)uVar1;
  *(uint *)(puVar9 + 1) = uVar3 + 1 & 0xffff;
  puVar9[0x46] = 0xbeeddead;
  puVar9[0x43] = 0xbeeddead;
  puVar9[0x42] = 0xbeeddead;
  puVar9[0x45] = 0xbeeddead;
  puVar9[0x44] = 0xbeeddead;
  puVar9[3] = 0xbeeddead;
  puVar9[2] = 0xbeeddead;
  puVar9[5] = 0xbeeddead;
  puVar9[4] = 0xbeeddead;
  puVar9[7] = 0xbeeddead;
  puVar9[6] = 0xbeeddead;
  puVar9[9] = 0xbeeddead;
  puVar9[8] = 0xbeeddead;
  puVar9[0xb] = 0xbeeddead;
  puVar9[10] = 0xbeeddead;
  puVar9[0xd] = 0xbeeddead;
  puVar9[0xc] = 0xbeeddead;
  puVar9[0xf] = 0xbeeddead;
  puVar9[0xe] = 0xbeeddead;
  puVar9[0x11] = 0xbeeddead;
  puVar9[0x10] = 0xbeeddead;
  puVar9[0x13] = 0xbeeddead;
  puVar9[0x12] = 0xbeeddead;
  puVar9[0x15] = 0xbeeddead;
  puVar9[0x14] = 0xbeeddead;
  puVar9[0x17] = 0xbeeddead;
  puVar9[0x16] = 0xbeeddead;
  puVar9[0x19] = 0xbeeddead;
  puVar9[0x18] = 0xbeeddead;
  puVar9[0x1b] = 0xbeeddead;
  puVar9[0x1a] = 0xbeeddead;
  puVar9[0x1d] = 0xbeeddead;
  puVar9[0x1c] = 0xbeeddead;
  puVar9[0x1f] = 0xbeeddead;
  puVar9[0x1e] = 0xbeeddead;
  puVar9[0x21] = 0xbeeddead;
  puVar9[0x20] = 0xbeeddead;
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)((long)puVar9 + (ulong)uVar4 + 0x240) = 0xbeeddead;
      uVar4 = uVar4 + 8;
    } while (uVar4 < uVar1);
  }
  *(ulong **)(this + 0x38) = puVar9;
  uVar11 = *(ulong *)(this + 0x10);
  *(int *)(this + 0x18) =
       (((*(int *)(this + 0x20) - (int)uVar11) -
        (*(int *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 7)) + 0x27) >> 1)) +
       -0x43) / 4;
  return;
}

