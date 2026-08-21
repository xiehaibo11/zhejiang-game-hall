
/* v8::internal::IncrementalMarking::UpdateWeakReferencesAfterScavenge() */

void __thiscall
v8::internal::IncrementalMarking::UpdateWeakReferencesAfterScavenge(IncrementalMarking *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  lVar14 = *(long *)(this + 0x18);
  if (0 < *(int *)(lVar14 + 0x1048)) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(lVar14 + lVar6 * 0x50 + 0xda0);
      uVar12 = *(ulong *)(lVar7 + 8);
      if (uVar12 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar10 = 0;
        plVar5 = (long *)(lVar7 + 0x18);
        do {
          uVar13 = plVar5[-1];
          lVar3 = *plVar5;
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar1 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar1;
          }
          else {
            uVar1 = uVar13;
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar1 = 0;
            }
            iVar8 = (int)uVar1;
          }
          if (iVar8 != 0) {
            lVar2 = lVar7 + lVar9 * 0x10;
            *(ulong *)(lVar2 + 0x10) = uVar1;
            *(ulong *)(lVar2 + 0x18) = (lVar3 - uVar13) + uVar1;
            uVar12 = *(ulong *)(lVar7 + 8);
            lVar9 = lVar9 + 1;
          }
          uVar10 = uVar10 + 1;
          plVar5 = plVar5 + 2;
        } while (uVar10 < uVar12);
      }
      *(long *)(lVar7 + 8) = lVar9;
      lVar7 = *(long *)(lVar14 + lVar6 * 0x50 + 0xd98);
      uVar12 = *(ulong *)(lVar7 + 8);
      if (uVar12 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar10 = 0;
        plVar5 = (long *)(lVar7 + 0x18);
        do {
          uVar13 = plVar5[-1];
          lVar3 = *plVar5;
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar1 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar1;
          }
          else {
            uVar1 = uVar13;
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar1 = 0;
            }
            iVar8 = (int)uVar1;
          }
          if (iVar8 != 0) {
            lVar2 = lVar7 + lVar9 * 0x10;
            *(ulong *)(lVar2 + 0x10) = uVar1;
            *(ulong *)(lVar2 + 0x18) = (lVar3 - uVar13) + uVar1;
            uVar12 = *(ulong *)(lVar7 + 8);
            lVar9 = lVar9 + 1;
          }
          uVar10 = uVar10 + 1;
          plVar5 = plVar5 + 2;
        } while (uVar10 < uVar12);
      }
      *(long *)(lVar7 + 8) = lVar9;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar14 + 0x1048));
  }
  base::Mutex::Lock((Mutex *)(lVar14 + 0x1018));
  plVar5 = *(long **)(lVar14 + 0x1040);
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)0x0;
    uVar12 = plVar5[1];
    if (uVar12 != 0) goto LAB_00fa740c;
LAB_00fa747c:
    plVar5[1] = 0;
    do {
      plVar16 = (long *)(lVar14 + 0x1040);
      if (plVar15 != (long *)0x0) {
        plVar16 = plVar15;
      }
      *plVar16 = *plVar5;
      plVar16 = (long *)*plVar5;
      operator_delete(plVar5);
      while( true ) {
        plVar5 = plVar16;
        if (plVar5 == (long *)0x0) goto LAB_00fa74a0;
        uVar12 = plVar5[1];
        if (uVar12 == 0) goto LAB_00fa747c;
LAB_00fa740c:
        lVar6 = 0;
        uVar10 = 0;
        plVar16 = plVar5 + 3;
        do {
          uVar13 = plVar16[-1];
          lVar7 = *plVar16;
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar1 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar1;
          }
          else {
            uVar1 = uVar13;
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar1 = 0;
            }
            iVar8 = (int)uVar1;
          }
          if (iVar8 != 0) {
            plVar5[lVar6 * 2 + 2] = uVar1;
            plVar5[lVar6 * 2 + 3] = (lVar7 - uVar13) + uVar1;
            uVar12 = plVar5[1];
            lVar6 = lVar6 + 1;
          }
          uVar10 = uVar10 + 1;
          plVar16 = plVar16 + 2;
        } while (uVar10 < uVar12);
        plVar5[1] = lVar6;
        if (lVar6 == 0) break;
        plVar16 = (long *)*plVar5;
        plVar15 = plVar5;
      }
    } while( true );
  }
LAB_00fa74a0:
  base::Mutex::Unlock((Mutex *)(lVar14 + 0x1018));
  lVar14 = *(long *)(this + 0x18);
  if (0 < *(int *)(lVar14 + 0x1300)) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(lVar14 + lVar6 * 0x50 + 0x1058);
      uVar12 = *(ulong *)(lVar7 + 8);
      if (uVar12 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar10 = 0;
        puVar11 = (undefined8 *)(lVar7 + 0x18);
        do {
          uVar13 = puVar11[-1];
          uVar4 = *puVar11;
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar13 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar13;
          }
          else {
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar13 = 0;
            }
            iVar8 = (int)uVar13;
          }
          if (iVar8 != 0) {
            lVar3 = lVar7 + lVar9 * 0x10;
            *(ulong *)(lVar3 + 0x10) = uVar13;
            *(undefined8 *)(lVar3 + 0x18) = uVar4;
            uVar12 = *(ulong *)(lVar7 + 8);
            lVar9 = lVar9 + 1;
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 2;
        } while (uVar10 < uVar12);
      }
      *(long *)(lVar7 + 8) = lVar9;
      lVar7 = *(long *)(lVar14 + lVar6 * 0x50 + 0x1050);
      uVar12 = *(ulong *)(lVar7 + 8);
      if (uVar12 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar10 = 0;
        puVar11 = (undefined8 *)(lVar7 + 0x18);
        do {
          uVar13 = puVar11[-1];
          uVar4 = *puVar11;
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar13 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar13;
          }
          else {
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar13 = 0;
            }
            iVar8 = (int)uVar13;
          }
          if (iVar8 != 0) {
            lVar3 = lVar7 + lVar9 * 0x10;
            *(ulong *)(lVar3 + 0x10) = uVar13;
            *(undefined8 *)(lVar3 + 0x18) = uVar4;
            uVar12 = *(ulong *)(lVar7 + 8);
            lVar9 = lVar9 + 1;
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 2;
        } while (uVar10 < uVar12);
      }
      *(long *)(lVar7 + 8) = lVar9;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar14 + 0x1300));
  }
  base::Mutex::Lock((Mutex *)(lVar14 + 0x12d0));
  plVar5 = *(long **)(lVar14 + 0x12f8);
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)0x0;
    uVar12 = plVar5[1];
    if (uVar12 != 0) goto LAB_00fa7628;
LAB_00fa7690:
    plVar5[1] = 0;
    do {
      plVar16 = (long *)(lVar14 + 0x12f8);
      if (plVar15 != (long *)0x0) {
        plVar16 = plVar15;
      }
      *plVar16 = *plVar5;
      plVar16 = (long *)*plVar5;
      operator_delete(plVar5);
      while( true ) {
        plVar5 = plVar16;
        if (plVar5 == (long *)0x0) goto LAB_00fa76b4;
        uVar12 = plVar5[1];
        if (uVar12 == 0) goto LAB_00fa7690;
LAB_00fa7628:
        lVar6 = 0;
        uVar10 = 0;
        plVar16 = plVar5 + 3;
        do {
          uVar13 = plVar16[-1];
          lVar7 = *plVar16;
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar13 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar13;
          }
          else {
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar13 = 0;
            }
            iVar8 = (int)uVar13;
          }
          if (iVar8 != 0) {
            plVar5[lVar6 * 2 + 2] = uVar13;
            plVar5[lVar6 * 2 + 3] = lVar7;
            uVar12 = plVar5[1];
            lVar6 = lVar6 + 1;
          }
          uVar10 = uVar10 + 1;
          plVar16 = plVar16 + 2;
        } while (uVar10 < uVar12);
        plVar5[1] = lVar6;
        if (lVar6 == 0) break;
        plVar16 = (long *)*plVar5;
        plVar15 = plVar5;
      }
    } while( true );
  }
LAB_00fa76b4:
  base::Mutex::Unlock((Mutex *)(lVar14 + 0x12d0));
  lVar14 = *(long *)(this + 0x18);
  if (0 < *(int *)(lVar14 + 0x568)) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(lVar14 + lVar6 * 0x50 + 0x2c0);
      uVar12 = *(ulong *)(lVar7 + 8);
      if (uVar12 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar10 = 0;
        do {
          uVar13 = *(ulong *)(lVar7 + 0x10 + uVar10 * 8);
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar13 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar13;
          }
          else {
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar13 = 0;
            }
            iVar8 = (int)uVar13;
          }
          if (iVar8 != 0) {
            *(ulong *)(lVar7 + lVar9 * 8 + 0x10) = uVar13;
            uVar12 = *(ulong *)(lVar7 + 8);
            lVar9 = lVar9 + 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
      *(long *)(lVar7 + 8) = lVar9;
      lVar7 = *(long *)(lVar14 + lVar6 * 0x50 + 0x2b8);
      uVar12 = *(ulong *)(lVar7 + 8);
      if (uVar12 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar10 = 0;
        do {
          uVar13 = *(ulong *)(lVar7 + 0x10 + uVar10 * 8);
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar13 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar13;
          }
          else {
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar13 = 0;
            }
            iVar8 = (int)uVar13;
          }
          if (iVar8 != 0) {
            *(ulong *)(lVar7 + lVar9 * 8 + 0x10) = uVar13;
            uVar12 = *(ulong *)(lVar7 + 8);
            lVar9 = lVar9 + 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
      *(long *)(lVar7 + 8) = lVar9;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar14 + 0x568));
  }
  base::Mutex::Lock((Mutex *)(lVar14 + 0x538));
  plVar5 = *(long **)(lVar14 + 0x560);
  if (plVar5 != (long *)0x0) {
    plVar15 = (long *)0x0;
    uVar12 = plVar5[1];
    if (uVar12 != 0) goto LAB_00fa782c;
LAB_00fa7890:
    plVar5[1] = 0;
    do {
      plVar16 = (long *)(lVar14 + 0x560);
      if (plVar15 != (long *)0x0) {
        plVar16 = plVar15;
      }
      *plVar16 = *plVar5;
      plVar16 = (long *)*plVar5;
      operator_delete(plVar5);
      while( true ) {
        plVar5 = plVar16;
        if (plVar5 == (long *)0x0) goto LAB_00fa78b4;
        uVar12 = plVar5[1];
        if (uVar12 == 0) goto LAB_00fa7890;
LAB_00fa782c:
        lVar6 = 0;
        uVar10 = 0;
        do {
          uVar13 = plVar5[uVar10 + 2];
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar13 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar13;
          }
          else {
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar13 = 0;
            }
            iVar8 = (int)uVar13;
          }
          if (iVar8 != 0) {
            plVar5[lVar6 + 2] = uVar13;
            uVar12 = plVar5[1];
            lVar6 = lVar6 + 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
        plVar5[1] = lVar6;
        if (lVar6 == 0) break;
        plVar16 = (long *)*plVar5;
        plVar15 = plVar5;
      }
    } while( true );
  }
LAB_00fa78b4:
  base::Mutex::Unlock((Mutex *)(lVar14 + 0x538));
  FUN_00fa7af8(*(long *)(this + 0x18) + 0x570);
  FUN_00fa7af8(*(long *)(this + 0x18) + 0x828);
  FUN_00fa7af8(*(long *)(this + 0x18) + 0xae0);
  lVar14 = *(long *)(this + 0x18);
  if (0 < *(int *)(lVar14 + 0x1de0)) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(lVar14 + lVar6 * 0x50 + 0x1b38);
      uVar12 = *(ulong *)(lVar7 + 8);
      if (uVar12 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar10 = 0;
        do {
          uVar13 = *(ulong *)(lVar7 + 0x10 + uVar10 * 8);
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar13 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar13;
          }
          else {
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar13 = 0;
            }
            iVar8 = (int)uVar13;
          }
          if (iVar8 != 0) {
            *(ulong *)(lVar7 + lVar9 * 8 + 0x10) = uVar13;
            uVar12 = *(ulong *)(lVar7 + 8);
            lVar9 = lVar9 + 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
      *(long *)(lVar7 + 8) = lVar9;
      lVar7 = *(long *)(lVar14 + lVar6 * 0x50 + 0x1b30);
      uVar12 = *(ulong *)(lVar7 + 8);
      if (uVar12 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar10 = 0;
        do {
          uVar13 = *(ulong *)(lVar7 + 0x10 + uVar10 * 8);
          if ((*(uint *)(uVar13 - 1) & 1) == 0) {
            uVar13 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
            iVar8 = (int)uVar13;
          }
          else {
            if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
              uVar13 = 0;
            }
            iVar8 = (int)uVar13;
          }
          if (iVar8 != 0) {
            *(ulong *)(lVar7 + lVar9 * 8 + 0x10) = uVar13;
            uVar12 = *(ulong *)(lVar7 + 8);
            lVar9 = lVar9 + 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
      *(long *)(lVar7 + 8) = lVar9;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar14 + 0x1de0));
  }
  base::Mutex::Lock((Mutex *)(lVar14 + 0x1db0));
  plVar5 = *(long **)(lVar14 + 0x1dd8);
  if (plVar5 == (long *)0x0) {
LAB_00fa7ae0:
    base::Mutex::Unlock((Mutex *)(lVar14 + 0x1db0));
    return;
  }
  plVar15 = (long *)0x0;
  uVar12 = plVar5[1];
  if (uVar12 != 0) goto LAB_00fa7a58;
LAB_00fa7abc:
  plVar5[1] = 0;
  do {
    plVar16 = (long *)(lVar14 + 0x1dd8);
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15;
    }
    *plVar16 = *plVar5;
    plVar16 = (long *)*plVar5;
    operator_delete(plVar5);
    while( true ) {
      plVar5 = plVar16;
      if (plVar5 == (long *)0x0) goto LAB_00fa7ae0;
      uVar12 = plVar5[1];
      if (uVar12 == 0) goto LAB_00fa7abc;
LAB_00fa7a58:
      lVar6 = 0;
      uVar10 = 0;
      do {
        uVar13 = plVar5[uVar10 + 2];
        if ((*(uint *)(uVar13 - 1) & 1) == 0) {
          uVar13 = (uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1)) + 1;
          iVar8 = (int)uVar13;
        }
        else {
          if ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 8) != 0) {
            uVar13 = 0;
          }
          iVar8 = (int)uVar13;
        }
        if (iVar8 != 0) {
          plVar5[lVar6 + 2] = uVar13;
          uVar12 = plVar5[1];
          lVar6 = lVar6 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar12);
      plVar5[1] = lVar6;
      if (lVar6 == 0) break;
      plVar16 = (long *)*plVar5;
      plVar15 = plVar5;
    }
  } while( true );
}

