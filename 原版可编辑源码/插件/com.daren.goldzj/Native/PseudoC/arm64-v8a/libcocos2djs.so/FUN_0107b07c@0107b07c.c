
undefined4 FUN_0107b07c(ulong param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined1 uVar9;
  ulong uVar10;
  int iVar11;
  undefined1 uVar12;
  Isolate *pIVar13;
  undefined4 uVar14;
  double dVar15;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_78 [16];
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_68 [16];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pIVar13 = (Isolate *)(param_2 & 0xffffffff00000000);
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_78,pIVar13);
  if ((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination.WasDetached()");
  }
  bVar3 = *(byte *)(((ulong)pIVar13 | 10) + (ulong)*(uint *)(param_2 - 1));
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_68,pIVar13);
  uVar2 = *(uint *)(((ulong)pIVar13 | (ulong)*(uint *)(param_2 - 1)) + 0xf);
  if ((uVar2 & 1) == 0) {
LAB_0107b108:
    if (*(uint *)((param_1 & 0xffffffff00000000 |
                  (ulong)*(uint *)((param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 - 1)) +
                                  0x13)) + 0xe7) != uVar2) goto LAB_0107b1ec;
    iVar7 = *(int *)(*(long *)(pIVar13 + 0xea8) + 0xb);
    v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(aPStack_68);
    if (iVar7 == 2) goto LAB_0107b158;
  }
  else {
    if (uVar2 == *(uint *)(pIVar13 + 0xb0)) {
      v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
      ~PerIsolateAssertScope(aPStack_68);
LAB_0107b158:
      bVar3 = bVar3 >> 3;
      uVar14 = 0;
      if (bVar3 < 6) {
        uVar8 = *(ulong *)(pIVar13 + 0xa0);
        puVar5 = (undefined1 *)
                 (*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f) + param_5);
        iVar6 = (int)uVar8;
        iVar7 = iVar6 >> 1;
        switch(bVar3) {
        case 0:
          if (param_4 != 0) {
            uVar2 = *(uint *)(param_2 + 7);
            iVar7 = 0;
            do {
              iVar11 = *(int *)(((ulong)pIVar13 | (ulong)uVar2) + 7 + (long)iVar7);
              iVar7 = iVar7 + 4;
              iVar6 = iVar11 >> 1;
              if (0xfe < iVar6) {
                iVar6 = -1;
              }
              uVar9 = 0;
              if (-1 < iVar11) {
                uVar9 = (char)iVar6;
              }
              param_4 = param_4 + -1;
              *puVar5 = uVar9;
              puVar5 = puVar5 + 1;
            } while (param_4 != 0);
          }
          break;
        case 1:
          if (param_4 != 0) {
            if (0xfe < iVar7) {
              iVar7 = -1;
            }
            iVar11 = 0;
            uVar9 = 0;
            if (-1 < iVar6) {
              uVar9 = (char)iVar7;
            }
            lVar1 = ((ulong)pIVar13 | (ulong)*(uint *)(param_2 + 7)) + 7;
            do {
              uVar2 = *(uint *)(lVar1 + iVar11);
              if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(pIVar13 + 0xa8))) {
                iVar6 = *(int *)(iVar11 + lVar1);
                iVar7 = iVar6 >> 1;
                if (0xfe < iVar7) {
                  iVar7 = -1;
                }
                uVar12 = 0;
                if (-1 < iVar6) {
                  uVar12 = (char)iVar7;
                }
              }
              else {
                uVar12 = uVar9;
                if ((uVar8 & 1) != 0) {
                  dVar15 = *(double *)(uVar8 + 3);
                  if (dVar15 <= 0.0) {
                    uVar12 = 0;
                  }
                  else if (dVar15 <= 255.0) {
                    uVar12 = (char)(long)(double)(long)dVar15;
                  }
                  else {
                    uVar12 = 0xff;
                  }
                }
              }
              *puVar5 = uVar12;
              param_4 = param_4 + -1;
              iVar11 = iVar11 + 4;
              puVar5 = puVar5 + 1;
            } while (param_4 != 0);
          }
          break;
        default:
          goto switchD_0107b190_caseD_2;
        case 4:
          if (param_4 != 0) {
            uVar2 = *(uint *)(param_2 + 7);
            iVar7 = 7;
            do {
              dVar15 = *(double *)(((ulong)pIVar13 | (ulong)uVar2) + (long)iVar7);
              if (dVar15 <= 0.0) {
                uVar9 = 0;
              }
              else if (dVar15 <= 255.0) {
                uVar9 = (undefined1)(long)(double)(long)dVar15;
              }
              else {
                uVar9 = 0xff;
              }
              *puVar5 = uVar9;
              param_4 = param_4 + -1;
              iVar7 = iVar7 + 8;
              puVar5 = puVar5 + 1;
            } while (param_4 != 0);
          }
          break;
        case 5:
          if (param_4 != 0) {
            if (0xfe < iVar7) {
              iVar7 = -1;
            }
            iVar11 = 7;
            uVar9 = 0;
            if (-1 < iVar6) {
              uVar9 = (char)iVar7;
            }
            uVar10 = (ulong)pIVar13 | (ulong)*(uint *)(param_2 + 7);
            do {
              if (*(long *)(uVar10 + (long)iVar11) == -0x8000000080001) {
                uVar12 = uVar9;
                if ((uVar8 & 1) != 0) {
                  dVar15 = *(double *)(uVar8 + 3);
                  if (dVar15 <= 0.0) goto LAB_0107b358;
LAB_0107b3ac:
                  if (dVar15 <= 255.0) {
                    uVar12 = (undefined1)(long)(double)(long)dVar15;
                  }
                  else {
                    uVar12 = 0xff;
                  }
                }
              }
              else {
                dVar15 = *(double *)((long)iVar11 + uVar10);
                if (0.0 < dVar15) goto LAB_0107b3ac;
LAB_0107b358:
                uVar12 = 0;
              }
              *puVar5 = uVar12;
              param_4 = param_4 + -1;
              iVar11 = iVar11 + 8;
              puVar5 = puVar5 + 1;
            } while (param_4 != 0);
          }
        }
        uVar14 = 1;
      }
      goto switchD_0107b190_caseD_2;
    }
    if (*(short *)(((ulong)pIVar13 | 7) + (ulong)*(uint *)(((ulong)pIVar13 | (ulong)uVar2) - 1)) !=
        0xa9) goto LAB_0107b108;
LAB_0107b1ec:
    v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(aPStack_68);
  }
  uVar14 = 0;
switchD_0107b190_caseD_2:
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  ~PerIsolateAssertScope(aPStack_78);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

