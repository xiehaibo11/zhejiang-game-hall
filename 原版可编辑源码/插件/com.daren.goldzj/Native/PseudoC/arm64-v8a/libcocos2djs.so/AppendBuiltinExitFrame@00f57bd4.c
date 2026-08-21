
/* v8::internal::FrameArrayBuilder::AppendBuiltinExitFrame(v8::internal::BuiltinExitFrame*) */

void __thiscall
v8::internal::FrameArrayBuilder::AppendBuiltinExitFrame
          (FrameArrayBuilder *this,BuiltinExitFrame *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  Isolate *pIVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  ulong local_68;
  
  uVar4 = BuiltinExitFrame::function(param_1);
  pIVar10 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar10 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar4);
  }
  uVar4 = IsVisibleInStackTrace(this,puVar5);
  if ((uVar4 & 1) != 0) {
    if (FLAG_experimental_stack_trace_frames == '\0') {
      uVar4 = *puVar5 & 0xffffffff00000000;
      uVar3 = *(uint *)((uVar4 | *(uint *)(*puVar5 + 0xb)) + 3);
      if (((uVar3 & 1) != 0) &&
         (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar3) - 1)) == 0x4e)) {
        return;
      }
    }
    uVar4 = BuiltinExitFrame::receiver(param_1);
    pIVar10 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar4;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar4);
    }
    local_68 = StackFrame::LookupCode((StackFrame *)param_1);
    pIVar10 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar7 + 1;
      *puVar7 = local_68;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),local_68);
      local_68 = *puVar7;
    }
    uVar13 = **(undefined8 **)(param_1 + 0x28);
    if (*(int *)(local_68 + 0x17) < 0) {
      iVar2 = Code::OffHeapInstructionStart((Code *)&local_68);
    }
    else {
      iVar2 = (int)local_68 + 0x3f;
    }
    if ((this[0x19] == (FrameArrayBuilder)0x0) &&
       (uVar3 = *(uint *)((*puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb)) + 0x1b),
       this[0x19] = (FrameArrayBuilder)((byte)(uVar3 >> 6) & 1), (uVar3 >> 6 & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 8;
    }
    uVar4 = BuiltinExitFrame::IsConstructor(param_1);
    uVar1 = uVar3 | 0x10;
    if ((uVar4 & 1) == 0) {
      uVar1 = uVar3;
    }
    if (FLAG_detailed_error_stack_trace == '\0') {
      puVar8 = (ulong *)(*(long *)this + 0x168);
    }
    else {
      uVar3 = BuiltinExitFrame::ComputeParametersCount(param_1);
      puVar8 = (ulong *)Factory::NewFixedArray(*(Factory **)this,(ulong)uVar3,0);
      if (0 < (int)uVar3) {
        iVar14 = 0;
        uVar4 = 0;
        do {
          uVar11 = *puVar8;
          uVar9 = BuiltinExitFrame::GetParameter(param_1,(int)uVar4);
          *(int *)(uVar11 + (long)iVar14 + 7) = (int)uVar9;
          if ((uVar9 & 1) != 0) {
            uVar12 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar12 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar11);
              uVar12 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar12 & 0x18) != 0) &&
               ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar11,uVar11 + (long)iVar14 + 7,uVar9);
            }
          }
          uVar4 = uVar4 + 1;
          iVar14 = iVar14 + 4;
        } while (uVar3 != uVar4);
      }
    }
    uVar13 = FrameArray::AppendJSFrame
                       (*(undefined8 *)(this + 0x20),puVar6,puVar5,puVar7,(int)uVar13 - iVar2,uVar1,
                        puVar8);
    *(undefined8 *)(this + 0x20) = uVar13;
  }
  return;
}

