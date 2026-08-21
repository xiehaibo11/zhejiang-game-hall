
/* v8::internal::compiler::LinearScanAllocator::SpillNotLiveRanges(v8::internal::ZoneUnorderedSet<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,
   v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,
   v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals>*,
   v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::SpillNotLiveRanges
          (LinearScanAllocator *this,long *param_1,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  LiveRange *pLVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *__dest;
  long lVar16;
  LiveRange *pLVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  __dest = *(undefined8 **)(this + 0x48);
  if (*(undefined8 **)(this + 0x50) == __dest) {
LAB_0165e7d8:
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0165e440:
  pLVar17 = (LiveRange *)*__dest;
  uVar10 = param_1[1];
  lVar16 = *(long *)(pLVar17 + 0x20);
  uVar8 = (ulong)*(int *)(lVar16 + 0x5c);
  if (uVar10 != 0) {
    uVar19 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar12 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & uVar8;
    }
    else {
      uVar13 = uVar8;
      if (uVar10 <= uVar8) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar8 / uVar10;
        }
        uVar13 = uVar8 - uVar13 * uVar10;
      }
    }
    plVar14 = *(long **)(*param_1 + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      do {
        uVar15 = plVar14[1];
        if (uVar15 == uVar8) {
          if (plVar14[2] == lVar16) {
            uVar1 = *(uint *)(plVar14 + 3);
            std::__ndk1::
            __hash_table<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals,v8::internal::ZoneAllocator<v8::internal::compiler::LinearScanAllocator::RangeWithRegister>>
            ::remove(auStack_80,param_1);
            if (uVar1 == (*(uint *)(pLVar17 + 4) >> 7 & 0x3f)) {
              if ((*(uint *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
                pcVar7 = "unassigned";
                if (uVar1 != 0x20) {
                  puVar3 = &RegisterName(v8::internal::Register)::Names;
                  if (*(int *)(this + 8) != 0) {
                    puVar3 = &RegisterName(v8::internal::VRegister)::Names;
                  }
                  pcVar7 = (char *)puVar3[uVar1];
                }
                PrintF("Keeping %d:%d in %s\n",(ulong)*(uint *)(lVar16 + 0x5c),
                       (ulong)*(uint *)pLVar17,pcVar7);
              }
              goto LAB_0165e430;
            }
            if ((*(uint *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
              PrintF("Scheduling %d:%d\n",(ulong)*(uint *)(lVar16 + 0x5c),(ulong)*(uint *)pLVar17);
            }
            pLVar17 = (LiveRange *)
                      RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,pLVar17,param_3);
            *(uint *)(pLVar17 + 4) = *(uint *)(pLVar17 + 4) & 0xf03fffff | (uVar1 & 0xff) << 0x16;
            AddToUnhandled(this,pLVar17);
            goto LAB_0165e5e8;
          }
        }
        else {
          if (uVar12 < 2) {
            uVar15 = uVar15 & uVar10 - 1;
          }
          else if (uVar10 <= uVar15) {
            uVar4 = 0;
            if (uVar10 != 0) {
              uVar4 = uVar15 / uVar10;
            }
            uVar15 = uVar15 - uVar4 * uVar10;
          }
          if (uVar15 != uVar13) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  if (-1 < *(int *)(lVar16 + 0x5c)) {
    MaybeUndoPreviousSplit(this,pLVar17);
    if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
      PrintF("Putting back %d:%d\n",(ulong)*(uint *)(lVar16 + 0x5c),(ulong)*(uint *)pLVar17);
    }
    pLVar17 = (LiveRange *)
              RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,pLVar17,param_3);
    lVar9 = *(long *)(pLVar17 + 0x38);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x18) <= param_3)) goto LAB_0165e558;
    for (lVar9 = *(long *)(pLVar17 + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x10)) {
LAB_0165e558:
      if (param_3 <= *(int *)(lVar9 + 0x18)) {
        *(long *)(pLVar17 + 0x38) = lVar9;
        goto LAB_0165e5c0;
      }
    }
    *(undefined8 *)(pLVar17 + 0x38) = 0;
    goto LAB_0165e5d8;
  }
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    pcVar7 = "unassigned";
    uVar8 = (ulong)(*(uint *)(lVar16 + 4) >> 7) & 0x3f;
    if ((int)uVar8 != 0x20) {
      puVar3 = &RegisterName(v8::internal::Register)::Names;
      if (*(int *)(this + 8) != 0) {
        puVar3 = &RegisterName(v8::internal::VRegister)::Names;
      }
      pcVar7 = (char *)puVar3[uVar8];
    }
    PrintF("Keeping reactivated fixed range for %s\n",pcVar7);
  }
LAB_0165e430:
  __dest = __dest + 1;
  goto LAB_0165e434;
  while (lVar9 = *(long *)(lVar9 + 0x10), lVar9 != 0) {
LAB_0165e5c0:
    if ((*(uint *)(lVar9 + 0x1c) & 3) == 2) {
      lVar11 = *(long *)this;
      uVar1 = *(uint *)(lVar9 + 0x18) & 0xfffffffc;
      if ((*(byte *)(lVar11 + 0x1d0) >> 2 & 1) != 0) {
        PrintF("Next use at %d\n",(ulong)uVar1);
        lVar11 = *(long *)this;
      }
      uVar2 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1;
      }
      lVar9 = InstructionSequence::GetInstructionBlock
                        (*(InstructionSequence **)(lVar11 + 0x10),(int)uVar2 >> 2);
      if (*(int *)(lVar9 + 0x70) != (int)uVar2 >> 2) {
        uVar1 = uVar1 - 4;
      }
      if (param_3 < (int)uVar1) {
        pLVar6 = (LiveRange *)
                 RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,pLVar17,uVar1);
        RegisterAllocator::Spill((RegisterAllocator *)this,pLVar17,param_4);
        if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
          PrintF("Marking %d:%d to recombine\n",(ulong)*(uint *)(lVar16 + 0x5c),
                 (ulong)*(uint *)pLVar6);
        }
        *(uint *)(pLVar6 + 4) = *(uint *)(pLVar6 + 4) | 0x200000;
        AddToUnhandled(this,pLVar6);
      }
      else {
        AddToUnhandled(this,pLVar17);
      }
      goto LAB_0165e5e8;
    }
  }
LAB_0165e5d8:
  RegisterAllocator::Spill((RegisterAllocator *)this,pLVar17,param_4);
LAB_0165e5e8:
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Moving live range %d:%d from active to handled\n",
           (ulong)*(uint *)(*(long *)((uint *)*__dest + 8) + 0x5c),(ulong)*(uint *)*__dest);
  }
  __n = *(long *)(this + 0x50) - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x50) = __dest + ((long)__n >> 3);
LAB_0165e434:
  if (*(undefined8 **)(this + 0x50) == __dest) goto LAB_0165e7d8;
  goto LAB_0165e440;
}

