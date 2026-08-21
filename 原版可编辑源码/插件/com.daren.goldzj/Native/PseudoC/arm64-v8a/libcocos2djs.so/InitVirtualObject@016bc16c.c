
/* v8::internal::compiler::EscapeAnalysisTracker::Scope::InitVirtualObject(int) */

VirtualObject * __thiscall
v8::internal::compiler::EscapeAnalysisTracker::Scope::InitVirtualObject(Scope *this,int param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  Zone *pZVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  VirtualObject *this_00;
  undefined8 *puVar15;
  long lVar16;
  undefined2 uVar17;
  
  puVar15 = *(undefined8 **)(this + 0x30);
  uVar1 = *(uint *)(*(long *)this + 0x14) & 0xffffff;
  uVar4 = base::hash_value(uVar1);
  uVar5 = puVar15[2];
  if (uVar5 != 0) {
    uVar14 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar17 = NEON_uaddlv(uVar14,1);
    uVar8 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar17) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = uVar5 - 1 & uVar4;
    }
    else {
      uVar9 = uVar4;
      if (uVar5 <= uVar4) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar4 / uVar5;
        }
        uVar9 = uVar4 - uVar9 * uVar5;
      }
    }
    plVar11 = *(long **)(puVar15[1] + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar13 = plVar11[1];
        if (uVar4 == uVar13) {
          if (*(uint *)(plVar11 + 2) == uVar1) {
            this_00 = (VirtualObject *)plVar11[3];
            goto joined_r0x016bc32c;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar13 = uVar13 & uVar5 - 1;
          }
          else if (uVar5 <= uVar13) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar3 * uVar5;
          }
          if (uVar13 != uVar9) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  this_00 = (VirtualObject *)*puVar15;
joined_r0x016bc32c:
  if (this_00 == (VirtualObject *)0x0) {
    lVar16 = *(long *)(this + 0x30);
    if (99 < *(uint *)(lVar16 + 0xf8)) {
      this_00 = (VirtualObject *)0x0;
      goto LAB_016bc384;
    }
    pZVar7 = *(Zone **)(lVar16 + 0x108);
    this_00 = *(VirtualObject **)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - (long)this_00) < 0x48) {
      this_00 = (VirtualObject *)Zone::NewExpand(pZVar7,0x48);
    }
    else {
      *(VirtualObject **)(pZVar7 + 0x10) = this_00 + 0x48;
    }
    uVar1 = *(uint *)(lVar16 + 0xf8);
    *(uint *)(lVar16 + 0xf8) = uVar1 + 1;
    VirtualObject::VirtualObject(this_00,(VariableTracker *)(lVar16 + 0x60),uVar1,param_1);
    if (this_00 == (VirtualObject *)0x0) goto LAB_016bc384;
  }
  else if ((*(int *)(this_00 + 0x30) - *(int *)(this_00 + 0x28) & 0xfffffffcU) != param_1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","vobject->size() == size");
  }
  puVar15 = *(undefined8 **)(this_00 + 8);
  uVar14 = *(undefined8 *)this;
  if (puVar15 == *(undefined8 **)(this_00 + 0x10)) {
    lVar16 = (long)puVar15 - *(long *)this_00 >> 3;
    uVar4 = lVar16 + 1;
    if (uVar4 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)*(undefined8 **)(this_00 + 0x10) - *(long *)this_00;
    uVar5 = lVar6 >> 2;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (0x7fffffe < (ulong)(lVar6 >> 3)) {
      uVar4 = 0xfffffff;
    }
    if (uVar4 == 0) {
      lVar6 = 0;
    }
    else {
      pZVar7 = *(Zone **)(this_00 + 0x18);
      uVar5 = uVar4 * 8;
      lVar6 = *(long *)(pZVar7 + 0x10);
      if (uVar5 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar6) ||
          uVar5 - (*(long *)(pZVar7 + 0x18) - lVar6) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar6 + uVar5;
      }
      else {
        lVar6 = Zone::NewExpand(pZVar7,uVar5);
      }
    }
    puVar15 = (undefined8 *)(lVar6 + lVar16 * 8);
    puVar10 = puVar15 + 1;
    *puVar15 = uVar14;
    puVar2 = *(undefined8 **)this_00;
    puVar12 = *(undefined8 **)(this_00 + 8);
    while (puVar12 != puVar2) {
      puVar12 = puVar12 + -1;
      puVar15 = puVar15 + -1;
      *puVar15 = *puVar12;
    }
    *(undefined8 **)this_00 = puVar15;
    *(undefined8 **)(this_00 + 8) = puVar10;
    *(ulong *)(this_00 + 0x10) = lVar6 + uVar4 * 8;
  }
  else {
    *puVar15 = uVar14;
    *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
  }
LAB_016bc384:
  *(VirtualObject **)(this + 0x40) = this_00;
  return this_00;
}

