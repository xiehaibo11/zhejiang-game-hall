
undefined4 FUN_0107a110(ulong param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  Isolate *pIVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 uVar14;
  long lVar15;
  double dVar16;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_88 [16];
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_78 [16];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pIVar11 = (Isolate *)(param_2 & 0xffffffff00000000);
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_88,pIVar11);
  if ((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination.WasDetached()");
  }
  bVar4 = *(byte *)(((ulong)pIVar11 | 10) + (ulong)*(uint *)(param_2 - 1));
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_78,pIVar11);
  uVar3 = *(uint *)(((ulong)pIVar11 | (ulong)*(uint *)(param_2 - 1)) + 0xf);
  if ((uVar3 & 1) == 0) {
LAB_0107a1a0:
    if (*(uint *)((param_1 & 0xffffffff00000000 |
                  (ulong)*(uint *)((param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 - 1)) +
                                  0x13)) + 0xe7) != uVar3) goto LAB_0107a274;
    iVar6 = *(int *)(*(long *)(pIVar11 + 0xea8) + 0xb);
    v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(aPStack_78);
    if (iVar6 == 2) goto LAB_0107a1f0;
  }
  else {
    if (uVar3 == *(uint *)(pIVar11 + 0xb0)) {
      v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
      ~PerIsolateAssertScope(aPStack_78);
LAB_0107a1f0:
      bVar4 = bVar4 >> 3;
      uVar14 = 0;
      if (bVar4 < 6) {
        uVar10 = *(undefined8 *)(pIVar11 + 0xa0);
        piVar13 = (int *)(*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f) + param_5 * 4
                         );
        switch(bVar4) {
        case 0:
          if (param_4 != 0) {
            uVar3 = *(uint *)(param_2 + 7);
            lVar8 = 0;
            do {
              param_4 = param_4 + -1;
              *(int *)((long)piVar13 + lVar8) =
                   *(int *)(((ulong)pIVar11 | (ulong)uVar3) + 7 + (long)(int)lVar8) >> 1;
              lVar8 = lVar8 + 4;
            } while (param_4 != 0);
          }
          break;
        case 1:
          if (param_4 != 0) {
            lVar15 = 0;
            lVar8 = ((ulong)pIVar11 | (ulong)*(uint *)(param_2 + 7)) + 7;
            do {
              uVar3 = *(uint *)(lVar8 + (int)lVar15);
              if (((uVar3 & 1) == 0) || (uVar3 != *(uint *)(pIVar11 + 0xa8))) {
                iVar6 = *(int *)((int)lVar15 + lVar8) >> 1;
              }
              else {
                iVar6 = FUN_010b8cdc(uVar10);
              }
              *(int *)((long)piVar13 + lVar15) = iVar6;
              param_4 = param_4 + -1;
              lVar15 = lVar15 + 4;
            } while (param_4 != 0);
          }
          break;
        default:
          goto switchD_0107a228_caseD_2;
        case 4:
          if (param_4 != 0) {
            uVar3 = *(uint *)(param_2 + 7);
            iVar6 = 7;
            do {
              dVar16 = *(double *)(((ulong)pIVar11 | (ulong)uVar3) + (long)iVar6);
              if (((dVar16 < -2147483648.0) || (2147483647.0 < dVar16)) ||
                 ((ABS(dVar16) == INFINITY ||
                  ((NAN(ABS(dVar16)) || (iVar7 = (int)dVar16, dVar16 != (double)(int)dVar16)))))) {
                uVar1 = 0xfffffbce;
                if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                  uVar1 = ((uint)((ulong)dVar16 >> 0x34) & 0x7ff) - 0x433;
                }
                if ((int)uVar1 < 0) {
                  if ((int)uVar1 < -0x34) goto LAB_0107a2ac;
                  uVar12 = (ulong)dVar16 & 0xfffffffffffff;
                  if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                    uVar12 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
                  }
                  iVar9 = (int)(uVar12 >> ((ulong)-uVar1 & 0x3f));
                }
                else {
                  if (0x1f < (int)uVar1) {
LAB_0107a2ac:
                    iVar7 = 0;
                    goto LAB_0107a2b0;
                  }
                  uVar12 = (ulong)dVar16 & 0xfffffffffffff;
                  if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                    uVar12 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
                  }
                  iVar9 = (int)(uVar12 << ((ulong)uVar1 & 0x3f));
                }
                iVar7 = -iVar9;
                if (-1 < (long)dVar16) {
                  iVar7 = iVar9;
                }
              }
LAB_0107a2b0:
              *piVar13 = iVar7;
              param_4 = param_4 + -1;
              iVar6 = iVar6 + 8;
              piVar13 = piVar13 + 1;
            } while (param_4 != 0);
          }
          break;
        case 5:
          if (param_4 != 0) {
            iVar6 = 7;
            uVar12 = (ulong)pIVar11 | (ulong)*(uint *)(param_2 + 7);
            do {
              if (*(long *)(uVar12 + (long)iVar6) == -0x8000000080001) {
                iVar7 = FUN_010b8cdc(uVar10);
              }
              else {
                dVar16 = *(double *)((long)iVar6 + uVar12);
                if ((((dVar16 < -2147483648.0) || (2147483647.0 < dVar16)) ||
                    (ABS(dVar16) == INFINITY)) ||
                   ((NAN(ABS(dVar16)) || (iVar7 = (int)dVar16, dVar16 != (double)(int)dVar16)))) {
                  uVar3 = 0xfffffbce;
                  if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                    uVar3 = ((uint)((ulong)dVar16 >> 0x34) & 0x7ff) - 0x433;
                  }
                  if ((int)uVar3 < 0) {
                    if ((int)uVar3 < -0x34) goto LAB_0107a4b0;
                    uVar2 = (ulong)dVar16 & 0xfffffffffffff;
                    if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                      uVar2 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
                    }
                    iVar9 = (int)(uVar2 >> ((ulong)-uVar3 & 0x3f));
                  }
                  else {
                    if (0x1f < (int)uVar3) {
LAB_0107a4b0:
                      iVar7 = 0;
                      goto LAB_0107a3fc;
                    }
                    uVar2 = (ulong)dVar16 & 0xfffffffffffff;
                    if (((ulong)dVar16 & 0x7ff0000000000000) != 0) {
                      uVar2 = (ulong)dVar16 & 0xfffffffffffff | 0x10000000000000;
                    }
                    iVar9 = (int)(uVar2 << ((ulong)uVar3 & 0x3f));
                  }
                  iVar7 = -iVar9;
                  if (-1 < (long)dVar16) {
                    iVar7 = iVar9;
                  }
                }
              }
LAB_0107a3fc:
              *piVar13 = iVar7;
              param_4 = param_4 + -1;
              iVar6 = iVar6 + 8;
              piVar13 = piVar13 + 1;
            } while (param_4 != 0);
          }
        }
        uVar14 = 1;
      }
      goto switchD_0107a228_caseD_2;
    }
    if (*(short *)(((ulong)pIVar11 | 7) + (ulong)*(uint *)(((ulong)pIVar11 | (ulong)uVar3) - 1)) !=
        0xa9) goto LAB_0107a1a0;
LAB_0107a274:
    v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(aPStack_78);
  }
  uVar14 = 0;
switchD_0107a228_caseD_2:
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  ~PerIsolateAssertScope(aPStack_88);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

