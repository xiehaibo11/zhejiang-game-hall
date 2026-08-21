
/* v8::internal::Code::CopyFromNoFlush(v8::internal::Heap*, v8::internal::CodeDesc const&) */

void __thiscall v8::internal::Code::CopyFromNoFlush(Code *this,Heap *param_1,CodeDesc *param_2)

{
  Instruction *pIVar1;
  Instruction IVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  AssemblerBase *this_00;
  Instruction *pIVar17;
  RelocIterator aRStack_90 [16];
  Instruction *local_80;
  byte local_78;
  undefined8 local_68;
  char local_58;
  
  uVar14 = *(uint *)(param_2 + 0xc);
  uVar13 = (ulong)(int)uVar14;
  if (uVar14 == 0) {
LAB_01071904:
    lVar15 = *(long *)(param_2 + 0x38);
  }
  else {
    puVar6 = (undefined1 *)(*(long *)this + 0x3f);
    puVar12 = *(undefined1 **)param_2;
    if (uVar14 < 8) {
      do {
        uVar13 = uVar13 - 1;
        *puVar6 = *puVar12;
        puVar6 = puVar6 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar13 != 0);
      goto LAB_01071904;
    }
    MemCopy((undefined1 *)(*(long *)this + 0x3f),*(undefined1 **)param_2,uVar13);
    lVar15 = *(long *)(param_2 + 0x38);
  }
  if (lVar15 != 0) {
    *(long *)(*(long *)this + ((long)(*(int *)(*(long *)this + 0x13) + 0x47) & 0xfffffffffffffff8U)
             + -1) = (long)*(int *)(param_2 + 0x40);
    uVar14 = *(uint *)(param_2 + 0x40);
    uVar13 = (ulong)(int)uVar14;
    if (uVar14 != 0) {
      puVar6 = (undefined1 *)
               (*(long *)this + (long)(int)(*(int *)(*(long *)this + 0x13) + 0x47U & 0xfffffff8) + 7
               );
      puVar12 = *(undefined1 **)(param_2 + 0x38);
      if (7 < uVar14) {
        MemCopy(puVar6,*(undefined1 **)(param_2 + 0x38),uVar13);
        uVar14 = *(uint *)(param_2 + 0x34);
        goto joined_r0x01071c1c;
      }
      do {
        uVar13 = uVar13 - 1;
        *puVar6 = *puVar12;
        puVar6 = puVar6 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar13 != 0);
    }
  }
  uVar14 = *(uint *)(param_2 + 0x34);
joined_r0x01071c1c:
  if (uVar14 != 0) {
    uVar13 = (ulong)(int)uVar14;
    lVar15 = *(long *)param_2;
    iVar3 = *(int *)(param_2 + 8);
    puVar6 = (undefined1 *)
             ((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3)) + 7);
    if (uVar14 < 8) {
      lVar16 = -uVar13;
      do {
        puVar12 = (undefined1 *)(lVar15 + iVar3 + lVar16);
        bVar5 = lVar16 != -1;
        lVar16 = lVar16 + 1;
        *puVar6 = *puVar12;
        puVar6 = puVar6 + 1;
      } while (bVar5);
    }
    else {
      MemCopy(puVar6,(void *)((lVar15 + iVar3) - uVar13),uVar13);
    }
  }
  this_00 = *(AssemblerBase **)(param_2 + 0x48);
  RelocIterator::RelocIterator(aRStack_90,*(undefined8 *)this,0x14f);
  if (local_58 == '\0') {
    do {
      pIVar17 = local_80;
      if ((local_78 & 0xfe) == 2) {
        IVar2 = local_80[3];
        puVar7 = (ulong *)Instruction::ImmPCOffsetTarget(local_80);
        if (IVar2 == (Instruction)0x58) {
          uVar13 = *puVar7;
        }
        else {
          uVar13 = (ulong)(uint)*puVar7;
        }
        puVar9 = (undefined8 *)AssemblerBase::GetEmbeddedObject(this_00,uVar13);
        pIVar17 = (Instruction *)*puVar9;
        if (local_78 == 2) {
          if (local_80[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
          }
          puVar10 = (undefined4 *)Instruction::ImmPCOffsetTarget(local_80);
          *puVar10 = (int)pIVar17;
          uVar4 = local_68;
        }
        else if (local_80[3] == (Instruction)0x58) {
          puVar9 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_80);
          *puVar9 = pIVar17;
          uVar4 = local_68;
        }
        else {
          pIVar1 = local_80;
          if (pIVar17 != (Instruction *)0x0) {
            pIVar1 = pIVar17;
          }
          Instruction::SetBranchImmTarget(local_80,pIVar1);
          uVar4 = local_68;
        }
        local_68 = uVar4;
        if ((((ulong)pIVar17 & 1) != 0) && ((int)uVar4 != 0)) {
          uVar13 = *(ulong *)(((ulong)pIVar17 & 0xfffffffffffc0000) + 8);
          uVar14 = (uint)uVar13;
          if ((uVar13 & 0x18) != 0) {
            Heap_GenerationalBarrierForCodeSlow(uVar4,(RelocInfo *)&local_80,pIVar17);
            uVar14 = (uint)*(undefined8 *)((ulong)pIVar17 & 0xfffffffffffc0000 | 8);
          }
          if ((uVar14 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierForCodeSlow(uVar4,(RelocInfo *)&local_80,pIVar17);
          }
        }
      }
      else if ((char)local_78 < '\x02') {
        if (local_80[3] == (Instruction)0x58) {
          puVar9 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_80);
          plVar8 = (long *)*puVar9;
        }
        else {
          lVar15 = Instruction::ImmPCOffset(local_80);
          plVar8 = (long *)AssemblerBase::GetEmbeddedObject(this_00,lVar15 >> 2);
        }
        puVar9 = (undefined8 *)(*plVar8 + 0x3f);
LAB_01071a24:
        RelocInfo::set_target_address((RelocInfo *)&local_80,puVar9,4,1);
      }
      else if (local_78 == 6) {
        if (local_80[3] == (Instruction)0x58) {
          puVar9 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_80);
          puVar9 = (undefined8 *)*puVar9;
        }
        else {
          lVar15 = Instruction::ImmPCOffset(local_80);
          puVar9 = (undefined8 *)(*(long *)(this_00 + 0xa8) + lVar15);
        }
        IVar2 = local_80[3];
        puVar11 = (undefined8 *)Instruction::ImmPCOffsetTarget(local_80);
        if (IVar2 == (Instruction)0x58) {
          puVar11 = (undefined8 *)*puVar11;
        }
        if (puVar11 != puVar9) goto LAB_01071a24;
      }
      else {
        lVar15 = (*(long *)this - *(long *)param_2) + 0x3f;
        if (local_78 == 8) {
          *(long *)local_80 = *(long *)local_80 + lVar15;
        }
        else if ((*(uint *)local_80 | 0x80000000) >> 0x1a == 0x25) {
          lVar16 = Instruction::ImmPCOffsetTarget(local_80);
          Instruction::SetBranchImmTarget(pIVar17,(Instruction *)(lVar16 - lVar15));
        }
      }
      RelocIterator::next(aRStack_90);
    } while (local_58 == '\0');
  }
  return;
}

