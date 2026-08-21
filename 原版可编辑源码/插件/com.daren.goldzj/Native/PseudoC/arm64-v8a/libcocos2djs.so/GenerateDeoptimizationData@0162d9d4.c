
/* v8::internal::compiler::CodeGenerator::GenerateDeoptimizationData() */

ulong * __thiscall
v8::internal::compiler::CodeGenerator::GenerateDeoptimizationData(CodeGenerator *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  Factory *pFVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  undefined8 uVar18;
  
  uVar8 = *(ulong *)(this + 0x328);
  lVar16 = *(long *)(this + 0xa0);
  if (((int)uVar8 == 0) && (*(int *)(lVar16 + 0x38) == -1)) {
    puVar4 = (ulong *)DeoptimizationData::Empty(*(Isolate **)(this + 0x10));
  }
  else {
    puVar4 = (ulong *)DeoptimizationData::New(*(undefined8 *)(this + 0x10),uVar8,1);
    puVar5 = (ulong *)TranslationBuffer::CreateByteArray
                                ((TranslationBuffer *)(this + 0x398),*(Factory **)(this + 0x10));
    uVar15 = *puVar4;
    uVar14 = *puVar5;
    *(int *)(uVar15 + 7) = (int)uVar14;
    if ((uVar14 & 1) != 0) {
      uVar9 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar15,uVar15 + 7,uVar14);
        uVar9 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar15,uVar15 + 7,uVar14);
      }
    }
    *(int *)(*puVar4 + 0xb) = *(int *)(this + 0x390) << 1;
    *(int *)(*puVar4 + 0x1b) = *(int *)(lVar16 + 0x70) << 1;
    *(int *)(*puVar4 + 0x27) = *(int *)(this + 0x2ec) << 1;
    uVar14 = *puVar4;
    if (*(ulong **)(lVar16 + 0x18) == (ulong *)0x0) {
      *(undefined4 *)(uVar14 + 0x1f) = 0;
    }
    else {
      uVar15 = **(ulong **)(lVar16 + 0x18);
      *(int *)(uVar14 + 0x1f) = (int)uVar15;
      if ((uVar15 & 1) != 0) {
        uVar9 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x1f,uVar15);
          uVar9 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x1f,uVar15);
        }
      }
    }
    puVar5 = (ulong *)Factory::NewFixedArray
                                (*(Factory **)(this + 0x10),*(undefined4 *)(this + 0x378),1);
    if (*(long *)(this + 0x378) != 0) {
      iVar17 = 0;
      uVar14 = 0;
      uVar15 = 1;
      do {
        lVar10 = *(long *)(*(long *)(this + 0x348) +
                          (*(long *)(this + 0x370) + uVar14 >> 4 & 0xffffffffffffff8));
        uVar14 = *(long *)(this + 0x370) + uVar14 & 0x7f;
        iVar2 = *(int *)(lVar10 + uVar14 * 0x20);
        if (iVar2 == 2) {
          puVar6 = (ulong *)StringConstantBase::AllocateStringConstant
                                      (*(StringConstantBase **)(lVar10 + uVar14 * 0x20 + 0x18),
                                       *(Isolate **)(this + 0x10));
        }
        else if (iVar2 == 1) {
          puVar6 = (ulong *)Factory::NewNumber<(v8::internal::AllocationType)0>
                                      ((Factory *)*(Isolate **)(this + 0x10),
                                       *(double *)(lVar10 + uVar14 * 0x20 + 0x10));
        }
        else {
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          puVar6 = *(ulong **)(lVar10 + uVar14 * 0x20 + 8);
        }
        uVar9 = *puVar5;
        uVar14 = *puVar6;
        *(int *)(uVar9 + (long)iVar17 + 7) = (int)uVar14;
        if ((uVar14 & 1) != 0) {
          uVar11 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
          lVar10 = uVar9 + (long)iVar17 + 7;
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar9,lVar10,uVar14);
            uVar11 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar9,lVar10,uVar14);
          }
        }
        iVar17 = iVar17 + 4;
        bVar1 = uVar15 < *(ulong *)(this + 0x378);
        uVar14 = uVar15;
        uVar15 = (ulong)((int)uVar15 + 1);
      } while (bVar1);
    }
    uVar15 = *puVar4;
    uVar14 = *puVar5;
    *(int *)(uVar15 + 0xf) = (int)uVar14;
    if ((uVar14 & 1) != 0) {
      uVar9 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar15,uVar15 + 0xf,uVar14);
        uVar9 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0xf,uVar14);
      }
    }
    uVar14 = *(long *)(lVar16 + 0x60) - *(long *)(lVar16 + 0x58);
    if (uVar14 == 0) {
      pFVar7 = *(Factory **)(this + 0x10) + 0x3c0;
    }
    else {
      pFVar7 = (Factory *)
               Factory::NewByteArray(*(Factory **)(this + 0x10),(uint)(uVar14 >> 1) & 0xfffffff0,1);
      lVar10 = *(long *)(lVar16 + 0x58);
      if (*(long *)(lVar16 + 0x60) != lVar10) {
        uVar14 = 0;
        iVar17 = 7;
        lVar12 = 0x10;
        do {
          lVar13 = *(long *)pFVar7;
          puVar3 = (undefined8 *)(lVar10 + lVar12);
          uVar18 = *puVar3;
          uVar14 = uVar14 + 1;
          lVar12 = lVar12 + 0x20;
          ((undefined8 *)(lVar13 + iVar17))[1] = puVar3[1];
          *(undefined8 *)(lVar13 + iVar17) = uVar18;
          lVar10 = *(long *)(lVar16 + 0x58);
          iVar17 = iVar17 + 0x10;
        } while (uVar14 < (ulong)(*(long *)(lVar16 + 0x60) - lVar10 >> 5));
      }
    }
    uVar15 = *puVar4;
    uVar14 = *(ulong *)pFVar7;
    *(int *)(uVar15 + 0x23) = (int)uVar14;
    if ((uVar14 & 1) != 0) {
      uVar9 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar15,uVar15 + 0x23,uVar14);
        uVar9 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0x23,uVar14);
      }
    }
    if (*(int *)(lVar16 + 0x38) == -1) {
      iVar17 = -2;
      *(undefined4 *)(*puVar4 + 0x13) = 0xfffffffe;
    }
    else {
      *(int *)(*puVar4 + 0x13) = *(int *)(*(long *)(this + 0xa0) + 0x38) << 1;
      iVar17 = *(int *)(this + 0x3f8) << 1;
    }
    *(int *)(*puVar4 + 0x17) = iVar17;
    if (0 < (int)uVar8) {
      uVar14 = 0;
      iVar17 = 0x2c;
      do {
        lVar16 = *(long *)(*(long *)(*(long *)(this + 0x2f8) +
                                    (uVar14 + *(long *)(this + 800) >> 6 & 0x3fffffffffffff8)) +
                          (uVar14 + *(long *)(this + 800) & 0x1ff) * 8);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(deoptimization_exit) != nullptr");
        }
        uVar14 = uVar14 + 1;
        *(int *)(*puVar4 + (long)(iVar17 + -8) + 7) = *(int *)(lVar16 + 0x18) << 1;
        *(int *)(*puVar4 + (long)(iVar17 + -4) + 7) = *(int *)(lVar16 + 0x1c) << 1;
        lVar10 = (long)iVar17;
        iVar17 = iVar17 + 0xc;
        *(int *)(*puVar4 + lVar10 + 7) = *(int *)(lVar16 + 0x20) << 1;
      } while ((uVar8 & 0xffffffff) != uVar14);
    }
  }
  return puVar4;
}

