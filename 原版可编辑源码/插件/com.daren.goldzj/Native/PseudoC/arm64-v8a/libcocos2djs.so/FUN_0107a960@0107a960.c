
undefined4 FUN_0107a960(ulong param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  float *pfVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  Isolate *pIVar11;
  undefined4 uVar12;
  float fVar13;
  double dVar14;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_78 [16];
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_68 [16];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pIVar11 = (Isolate *)(param_2 & 0xffffffff00000000);
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_78,pIVar11);
  if ((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination.WasDetached()");
  }
  bVar2 = *(byte *)(((ulong)pIVar11 | 10) + (ulong)*(uint *)(param_2 - 1));
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_68,pIVar11);
  uVar1 = *(uint *)(((ulong)pIVar11 | (ulong)*(uint *)(param_2 - 1)) + 0xf);
  if ((uVar1 & 1) == 0) {
LAB_0107a9ec:
    if (*(uint *)((param_1 & 0xffffffff00000000 |
                  (ulong)*(uint *)((param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 - 1)) +
                                  0x13)) + 0xe7) != uVar1) goto LAB_0107aac4;
    iVar5 = *(int *)(*(long *)(pIVar11 + 0xea8) + 0xb);
    v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(aPStack_68);
    if (iVar5 == 2) goto LAB_0107aa3c;
  }
  else {
    if (uVar1 == *(uint *)(pIVar11 + 0xb0)) {
      v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
      ~PerIsolateAssertScope(aPStack_68);
LAB_0107aa3c:
      bVar2 = bVar2 >> 3;
      uVar12 = 0;
      if (bVar2 < 6) {
        uVar6 = *(ulong *)(pIVar11 + 0xa0);
        pfVar4 = (float *)(*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f) +
                          param_5 * 4);
        iVar5 = (int)uVar6 >> 1;
        switch(bVar2) {
        case 0:
          if (param_4 != 0) {
            uVar1 = *(uint *)(param_2 + 7);
            lVar7 = 0;
            do {
              param_4 = param_4 + -1;
              *(float *)((long)pfVar4 + lVar7) =
                   (float)(*(int *)(((ulong)pIVar11 | (ulong)uVar1) + 7 + (long)(int)lVar7) >> 1);
              lVar7 = lVar7 + 4;
            } while (param_4 != 0);
          }
          break;
        case 1:
          if (param_4 != 0) {
            lVar8 = 0;
            lVar7 = ((ulong)pIVar11 | (ulong)*(uint *)(param_2 + 7)) + 7;
            do {
              uVar1 = *(uint *)(lVar7 + (int)lVar8);
              if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(pIVar11 + 0xa8))) {
                fVar13 = (float)(*(int *)((int)lVar8 + lVar7) >> 1);
              }
              else {
                fVar13 = (float)iVar5;
                if ((uVar6 & 1) != 0) {
                  dVar14 = *(double *)(uVar6 + 3);
                  if (dVar14 <= 3.4028234663852886e+38) {
                    if (-3.4028234663852886e+38 <= dVar14) {
                      fVar13 = (float)dVar14;
                    }
                    else if (-3.4028235677973362e+38 <= dVar14) {
                      fVar13 = -3.4028235e+38;
                    }
                    else {
                      fVar13 = -INFINITY;
                    }
                  }
                  else if (dVar14 <= 3.4028235677973362e+38) {
                    fVar13 = 3.4028235e+38;
                  }
                  else {
                    fVar13 = INFINITY;
                  }
                }
              }
              *(float *)((long)pfVar4 + lVar8) = fVar13;
              param_4 = param_4 + -1;
              lVar8 = lVar8 + 4;
            } while (param_4 != 0);
          }
          break;
        default:
          goto switchD_0107aa74_caseD_2;
        case 4:
          if (param_4 != 0) {
            uVar1 = *(uint *)(param_2 + 7);
            iVar5 = 7;
            do {
              dVar14 = *(double *)(((ulong)pIVar11 | (ulong)uVar1) + (long)iVar5);
              if (dVar14 <= 3.4028234663852886e+38) {
                if (-3.4028234663852886e+38 <= dVar14) {
                  fVar13 = (float)dVar14;
                }
                else if (-3.4028235677973362e+38 <= dVar14) {
                  fVar13 = -3.4028235e+38;
                }
                else {
                  fVar13 = -INFINITY;
                }
              }
              else if (dVar14 <= 3.4028235677973362e+38) {
                fVar13 = 3.4028235e+38;
              }
              else {
                fVar13 = INFINITY;
              }
              *pfVar4 = fVar13;
              param_4 = param_4 + -1;
              iVar5 = iVar5 + 8;
              pfVar4 = pfVar4 + 1;
            } while (param_4 != 0);
          }
          break;
        case 5:
          if (param_4 != 0) {
            iVar10 = 7;
            uVar9 = (ulong)pIVar11 | (ulong)*(uint *)(param_2 + 7);
            do {
              if (*(long *)(uVar9 + (long)iVar10) == -0x8000000080001) {
                fVar13 = (float)iVar5;
                if ((uVar6 & 1) != 0) {
                  dVar14 = *(double *)(uVar6 + 3);
                  if (3.4028234663852886e+38 < dVar14) goto LAB_0107ad40;
LAB_0107ad0c:
                  if (-3.4028234663852886e+38 <= dVar14) {
                    fVar13 = (float)dVar14;
                  }
                  else if (-3.4028235677973362e+38 <= dVar14) {
                    fVar13 = -3.4028235e+38;
                  }
                  else {
                    fVar13 = -INFINITY;
                  }
                }
              }
              else {
                dVar14 = *(double *)((long)iVar10 + uVar9);
                if (dVar14 <= 3.4028234663852886e+38) goto LAB_0107ad0c;
LAB_0107ad40:
                if (dVar14 <= 3.4028235677973362e+38) {
                  fVar13 = 3.4028235e+38;
                }
                else {
                  fVar13 = INFINITY;
                }
              }
              *pfVar4 = fVar13;
              param_4 = param_4 + -1;
              iVar10 = iVar10 + 8;
              pfVar4 = pfVar4 + 1;
            } while (param_4 != 0);
          }
        }
        uVar12 = 1;
      }
      goto switchD_0107aa74_caseD_2;
    }
    if (*(short *)(((ulong)pIVar11 | 7) + (ulong)*(uint *)(((ulong)pIVar11 | (ulong)uVar1) - 1)) !=
        0xa9) goto LAB_0107a9ec;
LAB_0107aac4:
    v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(aPStack_68);
  }
  uVar12 = 0;
switchD_0107aa74_caseD_2:
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  ~PerIsolateAssertScope(aPStack_78);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

