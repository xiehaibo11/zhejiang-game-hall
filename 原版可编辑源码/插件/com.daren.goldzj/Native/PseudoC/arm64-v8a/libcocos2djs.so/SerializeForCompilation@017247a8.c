
/* v8::internal::compiler::BytecodeArrayData::SerializeForCompilation(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::BytecodeArrayData::SerializeForCompilation
          (BytecodeArrayData *this,JSHeapBroker *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  Zone *pZVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  
  if (this[0x28] != (BytecodeArrayData)0x0) {
    return;
  }
  puVar21 = *(ulong **)this;
  puVar9 = *(undefined1 **)(this + 0x40);
  lVar12 = *(long *)(this + 0x30);
  uVar14 = *puVar21;
  uVar20 = (long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21;
  if ((ulong)((long)puVar9 - lVar12) < uVar20) {
    pZVar10 = *(Zone **)(this + 0x48);
    lVar17 = *(long *)(this + 0x38);
    uVar14 = uVar20 + 7 & 0xfffffffffffffff8;
    lVar22 = *(long *)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - lVar22) < uVar14) {
      lVar22 = Zone::NewExpand(pZVar10,uVar14);
    }
    else {
      *(ulong *)(pZVar10 + 0x10) = lVar22 + uVar14;
    }
    puVar1 = *(undefined1 **)(this + 0x30);
    puVar18 = *(undefined1 **)(this + 0x38);
    puVar13 = (undefined1 *)(lVar22 + (lVar17 - lVar12));
    puVar9 = (undefined1 *)(lVar22 + uVar20);
    puVar15 = puVar13;
    while (puVar18 != puVar1) {
      puVar18 = puVar18 + -1;
      puVar15 = puVar15 + -1;
      *puVar15 = *puVar18;
    }
    *(undefined1 **)(this + 0x30) = puVar15;
    *(undefined1 **)(this + 0x38) = puVar13;
    *(undefined1 **)(this + 0x40) = puVar9;
    uVar14 = *puVar21;
  }
  if (1 < *(int *)(uVar14 + 3)) {
    puVar13 = *(undefined1 **)(this + 0x38);
    lVar12 = 0;
    while( true ) {
      uVar4 = *(undefined1 *)(lVar12 + uVar14 + 0x21);
      if (puVar13 < puVar9) {
        *puVar13 = uVar4;
        puVar13 = (undefined1 *)(*(long *)(this + 0x38) + 1);
        *(undefined1 **)(this + 0x38) = puVar13;
      }
      else {
        lVar22 = *(long *)(this + 0x30);
        puVar1 = puVar13 + (1 - lVar22);
        if ((ulong)puVar1 >> 0x1f != 0) goto LAB_01724fdc;
        puVar18 = (undefined1 *)(((long)puVar9 - lVar22) * 2);
        if (puVar1 <= puVar18) {
          puVar1 = puVar18;
        }
        if (0x3ffffffe < (ulong)((long)puVar9 - lVar22)) {
          puVar1 = (undefined1 *)0x7fffffff;
        }
        if (puVar1 == (undefined1 *)0x0) {
          lVar17 = 0;
        }
        else {
          pZVar10 = *(Zone **)(this + 0x48);
          uVar20 = (ulong)(puVar1 + 7) & 0xfffffffffffffff8;
          lVar17 = *(long *)(pZVar10 + 0x10);
          if ((ulong)(*(long *)(pZVar10 + 0x18) - lVar17) < uVar20) {
            lVar17 = Zone::NewExpand(pZVar10,uVar20);
          }
          else {
            *(ulong *)(pZVar10 + 0x10) = lVar17 + uVar20;
          }
        }
        puVar9 = puVar13 + (lVar17 - lVar22);
        puVar13 = puVar9 + 1;
        *puVar9 = uVar4;
        puVar18 = *(undefined1 **)(this + 0x30);
        puVar15 = *(undefined1 **)(this + 0x38);
        while (puVar15 != puVar18) {
          puVar15 = puVar15 + -1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar15;
        }
        *(undefined1 **)(this + 0x30) = puVar9;
        *(undefined1 **)(this + 0x38) = puVar13;
        *(undefined1 **)(this + 0x40) = puVar1 + lVar17;
      }
      uVar14 = *puVar21;
      lVar12 = lVar12 + 1;
      if (*(int *)(uVar14 + 3) >> 1 <= lVar12) break;
      puVar9 = *(undefined1 **)(this + 0x40);
    }
  }
  pIVar5 = *(Isolate **)param_1;
  uVar20 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 7);
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar20;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar20);
    uVar20 = *puVar6;
  }
  lVar12 = *(long *)(this + 0x90);
  uVar14 = (long)((ulong)*(uint *)(uVar20 + 3) << 0x20) >> 0x21;
  if ((ulong)(*(long *)(this + 0xa0) - lVar12 >> 3) < uVar14) {
    pZVar10 = *(Zone **)(this + 0xa8);
    lVar17 = *(long *)(this + 0x98);
    uVar20 = uVar14 * 8;
    lVar22 = *(long *)(pZVar10 + 0x10);
    if (uVar20 < (ulong)(*(long *)(pZVar10 + 0x18) - lVar22) ||
        uVar20 - (*(long *)(pZVar10 + 0x18) - lVar22) == 0) {
      *(ulong *)(pZVar10 + 0x10) = lVar22 + uVar20;
    }
    else {
      lVar22 = Zone::NewExpand(pZVar10,uVar20);
    }
    puVar2 = *(undefined8 **)(this + 0x90);
    puVar19 = *(undefined8 **)(this + 0x98);
    puVar11 = (undefined8 *)(lVar22 + (lVar17 - lVar12 >> 3) * 8);
    puVar16 = puVar11;
    while (puVar19 != puVar2) {
      puVar19 = puVar19 + -1;
      puVar16 = puVar16 + -1;
      *puVar16 = *puVar19;
    }
    *(undefined8 **)(this + 0x90) = puVar16;
    *(undefined8 **)(this + 0x98) = puVar11;
    *(ulong *)(this + 0xa0) = lVar22 + uVar14 * 8;
    uVar20 = *puVar6;
  }
  if (1 < *(int *)(uVar20 + 3)) {
    lVar12 = 0;
    do {
      pIVar5 = *(Isolate **)param_1;
      uVar20 = uVar20 & 0xffffffff00000000 | (ulong)*(uint *)(uVar20 + (long)((int)lVar12 << 2) + 7)
      ;
      if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar5 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar5 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar5);
        }
        *(ulong **)(pIVar5 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar20;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar20);
      }
      uVar8 = JSHeapBroker::GetOrCreateData(param_1,puVar7);
      puVar11 = *(undefined8 **)(this + 0x98);
      if (puVar11 < *(undefined8 **)(this + 0xa0)) {
        *puVar11 = uVar8;
        *(long *)(this + 0x98) = *(long *)(this + 0x98) + 8;
      }
      else {
        lVar22 = (long)puVar11 - *(long *)(this + 0x90) >> 3;
        uVar20 = lVar22 + 1;
        if (uVar20 >> 0x1c != 0) goto LAB_01724fdc;
        lVar17 = (long)*(undefined8 **)(this + 0xa0) - *(long *)(this + 0x90);
        uVar14 = lVar17 >> 2;
        if (uVar20 <= uVar14) {
          uVar20 = uVar14;
        }
        if (0x7fffffe < (ulong)(lVar17 >> 3)) {
          uVar20 = 0xfffffff;
        }
        if (uVar20 == 0) {
          lVar17 = 0;
        }
        else {
          pZVar10 = *(Zone **)(this + 0xa8);
          uVar14 = uVar20 * 8;
          lVar17 = *(long *)(pZVar10 + 0x10);
          if (uVar14 < (ulong)(*(long *)(pZVar10 + 0x18) - lVar17) ||
              uVar14 - (*(long *)(pZVar10 + 0x18) - lVar17) == 0) {
            *(ulong *)(pZVar10 + 0x10) = lVar17 + uVar14;
          }
          else {
            lVar17 = Zone::NewExpand(pZVar10,uVar14);
          }
        }
        puVar11 = (undefined8 *)(lVar17 + lVar22 * 8);
        puVar16 = puVar11 + 1;
        *puVar11 = uVar8;
        puVar2 = *(undefined8 **)(this + 0x90);
        puVar19 = *(undefined8 **)(this + 0x98);
        while (puVar19 != puVar2) {
          puVar19 = puVar19 + -1;
          puVar11 = puVar11 + -1;
          *puVar11 = *puVar19;
        }
        *(undefined8 **)(this + 0x90) = puVar11;
        *(undefined8 **)(this + 0x98) = puVar16;
        *(ulong *)(this + 0xa0) = lVar17 + uVar20 * 8;
      }
      uVar20 = *puVar6;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(uVar20 + 3) >> 1);
  }
  uVar3 = *(uint *)(*puVar21 + 0xf);
  uVar20 = *puVar21 & 0xffffffff00000000;
  if (((uVar3 & 1) == 0) ||
     ((uVar3 != *(uint *)(uVar20 + 0xa0) && (uVar3 != *(uint *)(uVar20 + 0x180))))) {
    uVar14 = uVar20 | uVar3;
    if (((uVar3 & 1) != 0) && (*(short *)((uVar20 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x85))
    goto LAB_01724be8;
    if (uVar3 != *(uint *)(uVar20 + 0x180)) {
      uVar14 = uVar20 | *(uint *)(uVar14 + 3);
      goto LAB_01724be8;
    }
  }
  uVar14 = *(ulong *)(uVar20 + 0x3c0);
LAB_01724be8:
  pIVar5 = *(Isolate **)param_1;
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar14;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar14);
    uVar14 = *puVar6;
  }
  puVar9 = *(undefined1 **)(this + 0x60);
  lVar12 = *(long *)(this + 0x50);
  uVar20 = (long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21;
  if ((ulong)((long)puVar9 - lVar12) < uVar20) {
    pZVar10 = *(Zone **)(this + 0x68);
    lVar17 = *(long *)(this + 0x58);
    uVar14 = uVar20 + 7 & 0xfffffffffffffff8;
    lVar22 = *(long *)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - lVar22) < uVar14) {
      lVar22 = Zone::NewExpand(pZVar10,uVar14);
    }
    else {
      *(ulong *)(pZVar10 + 0x10) = lVar22 + uVar14;
    }
    puVar1 = *(undefined1 **)(this + 0x50);
    puVar18 = *(undefined1 **)(this + 0x58);
    puVar13 = (undefined1 *)(lVar22 + (lVar17 - lVar12));
    puVar9 = (undefined1 *)(lVar22 + uVar20);
    puVar15 = puVar13;
    while (puVar18 != puVar1) {
      puVar18 = puVar18 + -1;
      puVar15 = puVar15 + -1;
      *puVar15 = *puVar18;
    }
    *(undefined1 **)(this + 0x50) = puVar15;
    *(undefined1 **)(this + 0x58) = puVar13;
    *(undefined1 **)(this + 0x60) = puVar9;
    uVar14 = *puVar6;
  }
  if (1 < *(int *)(uVar14 + 3)) {
    puVar13 = *(undefined1 **)(this + 0x58);
    lVar12 = 0;
    while( true ) {
      uVar4 = *(undefined1 *)(lVar12 + uVar14 + 7);
      if (puVar13 < puVar9) {
        *puVar13 = uVar4;
        puVar13 = (undefined1 *)(*(long *)(this + 0x58) + 1);
        *(undefined1 **)(this + 0x58) = puVar13;
      }
      else {
        lVar22 = *(long *)(this + 0x50);
        puVar1 = puVar13 + (1 - lVar22);
        if ((ulong)puVar1 >> 0x1f != 0) goto LAB_01724fdc;
        puVar18 = (undefined1 *)(((long)puVar9 - lVar22) * 2);
        if (puVar1 <= puVar18) {
          puVar1 = puVar18;
        }
        if (0x3ffffffe < (ulong)((long)puVar9 - lVar22)) {
          puVar1 = (undefined1 *)0x7fffffff;
        }
        if (puVar1 == (undefined1 *)0x0) {
          lVar17 = 0;
        }
        else {
          pZVar10 = *(Zone **)(this + 0x68);
          uVar20 = (ulong)(puVar1 + 7) & 0xfffffffffffffff8;
          lVar17 = *(long *)(pZVar10 + 0x10);
          if ((ulong)(*(long *)(pZVar10 + 0x18) - lVar17) < uVar20) {
            lVar17 = Zone::NewExpand(pZVar10,uVar20);
          }
          else {
            *(ulong *)(pZVar10 + 0x10) = lVar17 + uVar20;
          }
        }
        puVar9 = puVar13 + (lVar17 - lVar22);
        puVar13 = puVar9 + 1;
        *puVar9 = uVar4;
        puVar18 = *(undefined1 **)(this + 0x50);
        puVar15 = *(undefined1 **)(this + 0x58);
        while (puVar15 != puVar18) {
          puVar15 = puVar15 + -1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar15;
        }
        *(undefined1 **)(this + 0x50) = puVar9;
        *(undefined1 **)(this + 0x58) = puVar13;
        *(undefined1 **)(this + 0x60) = puVar1 + lVar17;
      }
      uVar14 = *puVar6;
      lVar12 = lVar12 + 1;
      if (*(int *)(uVar14 + 3) >> 1 <= lVar12) break;
      puVar9 = *(undefined1 **)(this + 0x60);
    }
  }
  pIVar5 = *(Isolate **)param_1;
  uVar20 = *puVar21 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar21 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar21 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar21 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar21 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar21 + 1;
    *puVar21 = uVar20;
  }
  else {
    puVar21 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar20);
    uVar20 = *puVar21;
  }
  puVar9 = *(undefined1 **)(this + 0x80);
  lVar12 = *(long *)(this + 0x70);
  uVar14 = (long)((ulong)*(uint *)(uVar20 + 3) << 0x20) >> 0x21;
  if ((ulong)((long)puVar9 - lVar12) < uVar14) {
    pZVar10 = *(Zone **)(this + 0x88);
    lVar17 = *(long *)(this + 0x78);
    uVar20 = uVar14 + 7 & 0xfffffffffffffff8;
    lVar22 = *(long *)(pZVar10 + 0x10);
    if ((ulong)(*(long *)(pZVar10 + 0x18) - lVar22) < uVar20) {
      lVar22 = Zone::NewExpand(pZVar10,uVar20);
    }
    else {
      *(ulong *)(pZVar10 + 0x10) = lVar22 + uVar20;
    }
    puVar1 = *(undefined1 **)(this + 0x70);
    puVar18 = *(undefined1 **)(this + 0x78);
    puVar13 = (undefined1 *)(lVar22 + (lVar17 - lVar12));
    puVar9 = (undefined1 *)(lVar22 + uVar14);
    puVar15 = puVar13;
    while (puVar18 != puVar1) {
      puVar18 = puVar18 + -1;
      puVar15 = puVar15 + -1;
      *puVar15 = *puVar18;
    }
    *(undefined1 **)(this + 0x70) = puVar15;
    *(undefined1 **)(this + 0x78) = puVar13;
    *(undefined1 **)(this + 0x80) = puVar9;
    uVar20 = *puVar21;
  }
  if (*(int *)(uVar20 + 3) < 2) {
LAB_01724f88:
    this[0x28] = (BytecodeArrayData)0x1;
    return;
  }
  puVar13 = *(undefined1 **)(this + 0x78);
  lVar12 = 0;
  do {
    uVar4 = *(undefined1 *)(lVar12 + uVar20 + 7);
    if (puVar13 < puVar9) {
      *puVar13 = uVar4;
      puVar13 = (undefined1 *)(*(long *)(this + 0x78) + 1);
      *(undefined1 **)(this + 0x78) = puVar13;
    }
    else {
      lVar22 = *(long *)(this + 0x70);
      puVar1 = puVar13 + (1 - lVar22);
      if ((ulong)puVar1 >> 0x1f != 0) {
LAB_01724fdc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar18 = (undefined1 *)(((long)puVar9 - lVar22) * 2);
      if (puVar1 <= puVar18) {
        puVar1 = puVar18;
      }
      if (0x3ffffffe < (ulong)((long)puVar9 - lVar22)) {
        puVar1 = (undefined1 *)0x7fffffff;
      }
      if (puVar1 == (undefined1 *)0x0) {
        lVar17 = 0;
      }
      else {
        pZVar10 = *(Zone **)(this + 0x88);
        uVar20 = (ulong)(puVar1 + 7) & 0xfffffffffffffff8;
        lVar17 = *(long *)(pZVar10 + 0x10);
        if ((ulong)(*(long *)(pZVar10 + 0x18) - lVar17) < uVar20) {
          lVar17 = Zone::NewExpand(pZVar10,uVar20);
        }
        else {
          *(ulong *)(pZVar10 + 0x10) = lVar17 + uVar20;
        }
      }
      puVar9 = puVar13 + (lVar17 - lVar22);
      puVar13 = puVar9 + 1;
      *puVar9 = uVar4;
      puVar18 = *(undefined1 **)(this + 0x70);
      puVar15 = *(undefined1 **)(this + 0x78);
      while (puVar15 != puVar18) {
        puVar15 = puVar15 + -1;
        puVar9 = puVar9 + -1;
        *puVar9 = *puVar15;
      }
      *(undefined1 **)(this + 0x70) = puVar9;
      *(undefined1 **)(this + 0x78) = puVar13;
      *(undefined1 **)(this + 0x80) = puVar1 + lVar17;
    }
    uVar20 = *puVar21;
    lVar12 = lVar12 + 1;
    if (*(int *)(uVar20 + 3) >> 1 <= lVar12) goto LAB_01724f88;
    puVar9 = *(undefined1 **)(this + 0x80);
  } while( true );
}

