
undefined4 FUN_010798c0(ulong param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  ulong uVar13;
  undefined2 *puVar14;
  undefined4 uVar15;
  double dVar16;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_88 [16];
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_78 [16];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pIVar12 = (Isolate *)(param_2 & 0xffffffff00000000);
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_88,pIVar12);
  if ((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination.WasDetached()");
  }
  bVar5 = *(byte *)(((ulong)pIVar12 | 10) + (ulong)*(uint *)(param_2 - 1));
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_78,pIVar12);
  uVar4 = *(uint *)(((ulong)pIVar12 | (ulong)*(uint *)(param_2 - 1)) + 0xf);
  if ((uVar4 & 1) == 0) {
LAB_01079950:
    if (*(uint *)((param_1 & 0xffffffff00000000 |
                  (ulong)*(uint *)((param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 - 1)) +
                                  0x13)) + 0xe7) != uVar4) goto LAB_01079a24;
    iVar9 = *(int *)(*(long *)(pIVar12 + 0xea8) + 0xb);
    v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(aPStack_78);
    if (iVar9 == 2) goto LAB_010799a0;
  }
  else {
    if (uVar4 == *(uint *)(pIVar12 + 0xb0)) {
      v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
      ~PerIsolateAssertScope(aPStack_78);
LAB_010799a0:
      bVar5 = bVar5 >> 3;
      uVar15 = 0;
      if (bVar5 < 6) {
        uVar11 = *(undefined8 *)(pIVar12 + 0xa0);
        puVar14 = (undefined2 *)
                  (*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f) + param_5 * 2);
        switch(bVar5) {
        case 0:
          if (param_4 != 0) {
            uVar4 = *(uint *)(param_2 + 7);
            iVar9 = 0;
            do {
              lVar1 = (long)iVar9;
              param_4 = param_4 + -1;
              iVar9 = iVar9 + 4;
              *puVar14 = (short)(*(uint *)(((ulong)pIVar12 | (ulong)uVar4) + 7 + lVar1) >> 1);
              puVar14 = puVar14 + 1;
            } while (param_4 != 0);
          }
          break;
        case 1:
          if (param_4 != 0) {
            iVar9 = 0;
            lVar1 = ((ulong)pIVar12 | (ulong)*(uint *)(param_2 + 7)) + 7;
            do {
              uVar4 = *(uint *)(lVar1 + iVar9);
              if (((uVar4 & 1) == 0) || (uVar4 != *(uint *)(pIVar12 + 0xa8))) {
                uVar7 = (undefined2)(*(uint *)(iVar9 + lVar1) >> 1);
              }
              else {
                uVar7 = FUN_010b4c1c(uVar11);
              }
              *puVar14 = uVar7;
              param_4 = param_4 + -1;
              iVar9 = iVar9 + 4;
              puVar14 = puVar14 + 1;
            } while (param_4 != 0);
          }
          break;
        default:
          goto switchD_010799d8_caseD_2;
        case 4:
          if (param_4 != 0) {
            uVar4 = *(uint *)(param_2 + 7);
            iVar9 = 7;
            do {
              dVar16 = *(double *)(((ulong)pIVar12 | (ulong)uVar4) + (long)iVar9);
              if (((dVar16 < -2147483648.0) || (2147483647.0 < dVar16)) ||
                 ((ABS(dVar16) == INFINITY ||
                  ((NAN(ABS(dVar16)) || (iVar8 = (int)dVar16, dVar16 != (double)(int)dVar16)))))) {
                uVar2 = 0xfffffbce;
                if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                  uVar2 = ((uint)((ulong)dVar16 >> 0x34) & 0x7ff) - 0x433;
                }
                if ((int)uVar2 < 0) {
                  if ((int)uVar2 < -0x34) goto LAB_01079a5c;
                  uVar13 = (ulong)dVar16 & 0xfffffffffffff;
                  if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                    uVar13 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
                  }
                  iVar10 = (int)(uVar13 >> ((ulong)-uVar2 & 0x3f));
                }
                else {
                  if (0x1f < (int)uVar2) {
LAB_01079a5c:
                    iVar8 = 0;
                    goto LAB_01079a60;
                  }
                  uVar13 = (ulong)dVar16 & 0xfffffffffffff;
                  if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                    uVar13 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
                  }
                  iVar10 = (int)(uVar13 << ((ulong)uVar2 & 0x3f));
                }
                iVar8 = -iVar10;
                if (-1 < (long)dVar16) {
                  iVar8 = iVar10;
                }
              }
LAB_01079a60:
              *puVar14 = (short)iVar8;
              param_4 = param_4 + -1;
              iVar9 = iVar9 + 8;
              puVar14 = puVar14 + 1;
            } while (param_4 != 0);
          }
          break;
        case 5:
          if (param_4 != 0) {
            iVar9 = 7;
            uVar13 = (ulong)pIVar12 | (ulong)*(uint *)(param_2 + 7);
            do {
              if (*(long *)(uVar13 + (long)iVar9) == -0x8000000080001) {
                iVar8 = FUN_010b4c1c(uVar11);
              }
              else {
                dVar16 = *(double *)((long)iVar9 + uVar13);
                if ((((dVar16 < -2147483648.0) || (2147483647.0 < dVar16)) ||
                    (ABS(dVar16) == INFINITY)) ||
                   ((NAN(ABS(dVar16)) || (iVar8 = (int)dVar16, dVar16 != (double)(int)dVar16)))) {
                  uVar4 = 0xfffffbce;
                  if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                    uVar4 = ((uint)((ulong)dVar16 >> 0x34) & 0x7ff) - 0x433;
                  }
                  if ((int)uVar4 < 0) {
                    if ((int)uVar4 < -0x34) goto LAB_01079c60;
                    uVar3 = (ulong)dVar16 & 0xfffffffffffff;
                    if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                      uVar3 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
                    }
                    iVar10 = (int)(uVar3 >> ((ulong)-uVar4 & 0x3f));
                  }
                  else {
                    if (0x1f < (int)uVar4) {
LAB_01079c60:
                      iVar8 = 0;
                      goto LAB_01079bac;
                    }
                    uVar3 = (ulong)dVar16 & 0xfffffffffffff;
                    if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                      uVar3 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
                    }
                    iVar10 = (int)(uVar3 << ((ulong)uVar4 & 0x3f));
                  }
                  iVar8 = -iVar10;
                  if (-1 < (long)dVar16) {
                    iVar8 = iVar10;
                  }
                }
              }
LAB_01079bac:
              *puVar14 = (short)iVar8;
              param_4 = param_4 + -1;
              iVar9 = iVar9 + 8;
              puVar14 = puVar14 + 1;
            } while (param_4 != 0);
          }
        }
        uVar15 = 1;
      }
      goto switchD_010799d8_caseD_2;
    }
    if (*(short *)(((ulong)pIVar12 | 7) + (ulong)*(uint *)(((ulong)pIVar12 | (ulong)uVar4) - 1)) !=
        0xa9) goto LAB_01079950;
LAB_01079a24:
    v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(aPStack_78);
  }
  uVar15 = 0;
switchD_010799d8_caseD_2:
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  ~PerIsolateAssertScope(aPStack_88);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

