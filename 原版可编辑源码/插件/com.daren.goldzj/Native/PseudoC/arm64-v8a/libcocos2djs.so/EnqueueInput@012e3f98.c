
/* v8::internal::compiler::RepresentationSelector::EnqueueInput(v8::internal::compiler::Node*, int,
   v8::internal::compiler::UseInfo) */

void __thiscall
v8::internal::compiler::RepresentationSelector::EnqueueInput
          (RepresentationSelector *this,long param_1,int param_2,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  Zone *this_00;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  ulong *puVar18;
  
  plVar7 = (long *)(param_1 + 0x20);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar7 = (long *)(*plVar7 + 0x10);
  }
  if (*(int *)(this + 0x78) != 0) {
    return;
  }
  lVar16 = plVar7[param_2];
  lVar15 = *(long *)(this + 0x18);
  uVar14 = (ulong)*(uint *)(lVar16 + 0x14) & 0xffffff;
  pcVar17 = (char *)(lVar15 + uVar14 * 0x28);
  if (*pcVar17 == '\0') {
    *pcVar17 = '\x03';
    plVar7 = *(long **)(this + 0x40);
    if (plVar7 == *(long **)(this + 0x48)) {
      lVar9 = (long)plVar7 - *(long *)(this + 0x38) >> 3;
      uVar10 = lVar9 + 1;
      if (uVar10 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = (long)*(long **)(this + 0x48) - *(long *)(this + 0x38);
      uVar12 = lVar8 >> 2;
      if (uVar10 <= uVar12) {
        uVar10 = uVar12;
      }
      if (0x7fffffe < (ulong)(lVar8 >> 3)) {
        uVar10 = 0xfffffff;
      }
      if (uVar10 == 0) {
        lVar8 = 0;
      }
      else {
        this_00 = *(Zone **)(this + 0x50);
        uVar12 = uVar10 * 8;
        lVar8 = *(long *)(this_00 + 0x10);
        if (uVar12 < (ulong)(*(long *)(this_00 + 0x18) - lVar8) ||
            uVar12 - (*(long *)(this_00 + 0x18) - lVar8) == 0) {
          *(ulong *)(this_00 + 0x10) = lVar8 + uVar12;
        }
        else {
          lVar8 = Zone::NewExpand(this_00,uVar12);
        }
      }
      plVar7 = (long *)(lVar8 + lVar9 * 8);
      plVar11 = plVar7 + 1;
      *plVar7 = lVar16;
      plVar5 = *(long **)(this + 0x38);
      plVar13 = *(long **)(this + 0x40);
      while (plVar13 != plVar5) {
        plVar13 = plVar13 + -1;
        plVar7 = plVar7 + -1;
        *plVar7 = *plVar13;
      }
      *(long **)(this + 0x38) = plVar7;
      *(long **)(this + 0x40) = plVar11;
      *(ulong *)(this + 0x48) = lVar8 + uVar10 * 8;
    }
    else {
      *plVar7 = lVar16;
      *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
    }
    lVar9 = *(long *)(this + 0x90);
    uVar10 = 0;
    if (*(long *)(this + 0x98) - lVar9 != 0) {
      uVar10 = (*(long *)(this + 0x98) - lVar9) * 0x40 - 1;
    }
    uVar12 = *(long *)(this + 0xc0) + *(long *)(this + 0xb8);
    if (uVar10 == uVar12) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)(this + 0x88));
      lVar9 = *(long *)(this + 0x90);
      uVar12 = *(long *)(this + 0xb8) + *(long *)(this + 0xc0);
    }
    *(long *)(*(long *)(lVar9 + (uVar12 >> 6 & 0x3fffffffffffff8)) + (uVar12 & 0x1ff) * 8) = lVar16;
    *(long *)(this + 0xc0) = *(long *)(this + 0xc0) + 1;
    if (FLAG_trace_representation != '\0') {
      PrintF("  initial #%i: ",(ulong)(*(uint *)(lVar16 + 0x14) & 0xffffff));
    }
    lVar15 = lVar15 + uVar14 * 0x28;
    uVar2 = *(undefined4 *)(param_4 + 8);
    uVar4 = *(undefined4 *)(lVar15 + 8);
    uVar14 = Truncation::Generalize(*(undefined4 *)(lVar15 + 4),*(undefined4 *)(param_4 + 4));
    lVar16 = Truncation::GeneralizeIdentifyZeros(uVar4,uVar2);
    uVar14 = uVar14 & 0xff | lVar16 << 0x20;
    *(ulong *)(lVar15 + 4) = uVar14;
    goto LAB_012e4298;
  }
  if (FLAG_trace_representation != '\0') {
    PrintF("   queue #%i?: ",uVar14);
  }
  lVar15 = lVar15 + uVar14 * 0x28;
  puVar18 = (ulong *)(lVar15 + 4);
  PrintTruncation(this,*puVar18);
  uVar2 = *(undefined4 *)(param_4 + 8);
  uVar1 = *(uint *)puVar18;
  uVar3 = *(uint *)(lVar15 + 8);
  uVar14 = Truncation::Generalize(uVar1,*(undefined4 *)(param_4 + 4));
  uVar6 = Truncation::GeneralizeIdentifyZeros(uVar3,uVar2);
  *puVar18 = uVar14 & 0xff | (ulong)uVar6 << 0x20;
  if ((((uint)uVar14 & 0xff) == (uVar1 & 0xff)) && (uVar6 == uVar3)) {
    return;
  }
  if (*pcVar17 == '\x03') {
    if (FLAG_trace_representation != '\0') {
      pcVar17 = " inqueue: ";
LAB_012e4148:
      PrintF(pcVar17);
    }
  }
  else {
    lVar15 = *(long *)(this + 0x90);
    uVar14 = 0;
    if (*(long *)(this + 0x98) - lVar15 != 0) {
      uVar14 = (*(long *)(this + 0x98) - lVar15) * 0x40 - 1;
    }
    uVar10 = *(long *)(this + 0xc0) + *(long *)(this + 0xb8);
    if (uVar14 == uVar10) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)(this + 0x88));
      lVar15 = *(long *)(this + 0x90);
      uVar10 = *(long *)(this + 0xb8) + *(long *)(this + 0xc0);
    }
    *(long *)(*(long *)(lVar15 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8) = lVar16
    ;
    *(long *)(this + 0xc0) = *(long *)(this + 0xc0) + 1;
    *pcVar17 = '\x03';
    if (FLAG_trace_representation != '\0') {
      pcVar17 = "   added: ";
      goto LAB_012e4148;
    }
  }
  uVar14 = *puVar18;
LAB_012e4298:
  PrintTruncation(this,uVar14);
  return;
}

