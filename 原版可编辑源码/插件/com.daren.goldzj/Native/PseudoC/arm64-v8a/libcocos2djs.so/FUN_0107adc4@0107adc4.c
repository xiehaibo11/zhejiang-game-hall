
undefined4 FUN_0107adc4(ulong param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  double *pdVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  Isolate *pIVar10;
  undefined4 uVar11;
  double dVar12;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_78 [16];
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_68 [16];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pIVar10 = (Isolate *)(param_2 & 0xffffffff00000000);
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_78,pIVar10);
  if ((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!destination.WasDetached()");
  }
  bVar2 = *(byte *)(((ulong)pIVar10 | 10) + (ulong)*(uint *)(param_2 - 1));
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope(aPStack_68,pIVar10);
  uVar1 = *(uint *)(((ulong)pIVar10 | (ulong)*(uint *)(param_2 - 1)) + 0xf);
  if ((uVar1 & 1) == 0) {
LAB_0107ae50:
    if (*(uint *)((param_1 & 0xffffffff00000000 |
                  (ulong)*(uint *)((param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 - 1)) +
                                  0x13)) + 0xe7) != uVar1) {
LAB_0107af2c:
      v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
      ~PerIsolateAssertScope(aPStack_68);
      uVar11 = 0;
      goto switchD_0107aedc_caseD_2;
    }
    iVar5 = *(int *)(*(long *)(pIVar10 + 0xea8) + 0xb);
    v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(aPStack_68);
    if (iVar5 != 2) {
      uVar11 = 0;
      goto switchD_0107aedc_caseD_2;
    }
  }
  else {
    if (uVar1 != *(uint *)(pIVar10 + 0xb0)) {
      if (*(short *)(((ulong)pIVar10 | 7) + (ulong)*(uint *)(((ulong)pIVar10 | (ulong)uVar1) - 1))
          != 0xa9) goto LAB_0107ae50;
      goto LAB_0107af2c;
    }
    v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
    ~PerIsolateAssertScope(aPStack_68);
  }
  bVar2 = bVar2 >> 3;
  uVar11 = 0;
  if (bVar2 < 6) {
    uVar6 = *(ulong *)(pIVar10 + 0xa0);
    pdVar4 = (double *)(*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f) + param_5 * 8);
    iVar5 = (int)uVar6 >> 1;
    switch(bVar2) {
    case 0:
      if (param_4 != 0) {
        uVar1 = *(uint *)(param_2 + 7);
        iVar5 = 0;
        do {
          lVar7 = (long)iVar5;
          param_4 = param_4 + -1;
          iVar5 = iVar5 + 4;
          *pdVar4 = (double)(*(int *)(((ulong)pIVar10 | (ulong)uVar1) + 7 + lVar7) >> 1);
          pdVar4 = pdVar4 + 1;
        } while (param_4 != 0);
      }
      break;
    case 1:
      if (param_4 != 0) {
        iVar8 = 0;
        lVar7 = ((ulong)pIVar10 | (ulong)*(uint *)(param_2 + 7)) + 7;
        do {
          uVar1 = *(uint *)(lVar7 + iVar8);
          if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(pIVar10 + 0xa8))) {
            dVar12 = (double)(*(int *)(iVar8 + lVar7) >> 1);
          }
          else {
            dVar12 = (double)iVar5;
            if ((uVar6 & 1) != 0) {
              dVar12 = *(double *)(uVar6 + 3);
            }
          }
          *pdVar4 = dVar12;
          param_4 = param_4 + -1;
          iVar8 = iVar8 + 4;
          pdVar4 = pdVar4 + 1;
        } while (param_4 != 0);
      }
      break;
    default:
      goto switchD_0107aedc_caseD_2;
    case 4:
      if (param_4 != 0) {
        uVar1 = *(uint *)(param_2 + 7);
        lVar7 = 0;
        do {
          param_4 = param_4 + -1;
          *(undefined8 *)((long)pdVar4 + lVar7) =
               *(undefined8 *)(((ulong)pIVar10 | (ulong)uVar1) + (long)((int)lVar7 + 7));
          lVar7 = lVar7 + 8;
        } while (param_4 != 0);
      }
      break;
    case 5:
      if (param_4 != 0) {
        uVar1 = *(uint *)(param_2 + 7);
        lVar7 = 0;
        do {
          lVar9 = *(long *)(((ulong)pIVar10 | (ulong)uVar1) + (long)((int)lVar7 + 7));
          if (lVar9 == -0x8000000080001) {
            dVar12 = (double)iVar5;
            if ((uVar6 & 1) != 0) {
              dVar12 = *(double *)(uVar6 + 3);
            }
            *(double *)((long)pdVar4 + lVar7) = dVar12;
          }
          else {
            *(long *)((long)pdVar4 + lVar7) = lVar9;
          }
          param_4 = param_4 + -1;
          lVar7 = lVar7 + 8;
        } while (param_4 != 0);
      }
    }
    uVar11 = 1;
  }
switchD_0107aedc_caseD_2:
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  ~PerIsolateAssertScope(aPStack_78);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}

