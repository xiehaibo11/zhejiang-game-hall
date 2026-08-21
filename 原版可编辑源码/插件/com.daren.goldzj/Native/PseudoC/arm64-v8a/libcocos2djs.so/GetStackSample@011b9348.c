
/* v8::internal::TickSample::GetStackSample(v8::internal::Isolate*, v8::RegisterState*,
   v8::internal::TickSample::RecordCEntryFrame, void**, unsigned long, v8::SampleInfo*, bool,
   void**) */

undefined4
v8::internal::TickSample::GetStackSample
          (Isolate *param_1,undefined8 *param_2,int param_3,undefined8 *param_4,ulong param_5,
          ulong *param_6,undefined8 param_7,ulong *param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  void *__s1;
  SafeStackFrameIterator aSStack_638 [1416];
  long *local_b0;
  int local_88;
  
  *param_6 = 0;
  iVar3 = *(int *)(param_1 + 0x2c60);
  param_6[2] = 0;
  param_6[3] = 0;
  *(int *)(param_6 + 1) = iVar3;
  if ((iVar3 != 1) && (uVar4 = *(ulong *)(param_1 + 0x2c50), uVar4 != 0)) {
    __s1 = (void *)*param_2;
    if ((__s1 != (void *)0x0) &&
       (((ulong)((long)__s1 - *(long *)(*(long *)(param_1 + 0x9070) + 0x30)) <
         *(ulong *)(*(long *)(param_1 + 0x9070) + 0x38) && (DAT_01d3f910 != 0)))) {
      piVar10 = &DAT_01d3f910;
      iVar3 = DAT_01d3f910;
LAB_011b93ec:
      lVar9 = 0xc;
      iVar2 = piVar10[3];
      if (iVar2 != 0) goto LAB_011b945c;
LAB_011b9438:
      lVar5 = 0;
      do {
        iVar2 = memcmp((void *)((long)__s1 - lVar5),piVar10 + 1,(long)iVar3);
        if (iVar2 == 0) {
          return 0;
        }
        while( true ) {
          lVar9 = lVar9 + 4;
          iVar2 = *(int *)((long)piVar10 + lVar9);
          if (iVar2 == 0) goto LAB_011b9438;
LAB_011b945c:
          if (iVar2 == -1) {
            piVar10 = piVar10 + 7;
            iVar3 = *piVar10;
            if (iVar3 == 0) goto LAB_011b9474;
            goto LAB_011b93ec;
          }
          lVar5 = (long)iVar2;
          if (((long)__s1 - lVar5 ^ (ulong)__s1) < 0x1000) break;
          iVar2 = memcmp(__s1,(void *)((long)piVar10 + lVar5 + 4),(long)(iVar3 - iVar2));
          if (iVar2 == 0) {
            return 0;
          }
        }
      } while( true );
    }
LAB_011b9474:
    uVar6 = *(ulong *)(param_1 + 0x2c58);
    if ((uVar6 != 0) && (uVar6 < *(ulong *)(param_1 + 0x2c30))) {
      param_6[2] = *(ulong *)(uVar6 + 8);
      __s1 = (void *)*param_2;
    }
    SafeStackFrameIterator::SafeStackFrameIterator
              (aSStack_638,param_1,(ulong)__s1,param_2[2],param_2[1],param_2[3],uVar4);
    param_6[3] = 0;
    if (local_b0 != (long *)0x0) {
      if ((param_3 == 0) && ((local_88 == 0x15 || (local_88 == 3)))) {
        *param_4 = *(undefined8 *)(param_1 + 0x2c38);
        if (param_8 != (ulong *)0x0) {
          *param_8 = param_6[3];
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x9520) + 0x58a0);
      if ((uVar4 < param_5) && (local_b0 != (long *)0x0)) {
        bVar1 = local_88 == 3 || local_88 == 0x15;
        uVar6 = uVar4;
        do {
          if (((puVar8 != (undefined8 *)0x0) && (uVar6 < param_5)) &&
             (puVar8 < (undefined8 *)local_b0[4])) {
            do {
              uVar4 = uVar6;
              if (param_8 != (ulong *)0x0) {
                param_8[uVar4] = 0;
              }
              uVar6 = uVar4 + 1;
              param_4[uVar4] = *puVar8;
              puVar8 = (undefined8 *)puVar8[1];
              if (puVar8 == (undefined8 *)0x0) goto LAB_011b9584;
            } while ((uVar6 < param_5) && (puVar8 < (undefined8 *)local_b0[4]));
            uVar6 = uVar4 + 1;
          }
LAB_011b9584:
          uVar4 = param_5;
          if (uVar6 == param_5) break;
          uVar4 = (**(code **)*local_b0)();
          if ((uVar4 & 1) == 0) {
            if (param_8 != (ulong *)0x0) {
              param_8[uVar6] = 0;
            }
          }
          else if (!(bool)(param_8 == (ulong *)0x0 & (bVar1 ^ 1U))) {
            if (param_8 != (ulong *)0x0) {
              param_8[uVar6] = 0;
            }
            if (bVar1) {
              param_6[3] = 0;
            }
          }
          iVar3 = (**(code **)(*local_b0 + 8))();
          if (iVar3 == 0xc) {
            uVar4 = *(ulong *)(local_b0[4] + -0x18);
            if (((uVar4 & 3) != 1) || (uVar7 = *(ulong *)(local_b0[4] + -0x20), (uVar7 & 1) != 0))
            goto LAB_011b9614;
            lVar9 = uVar4 + (long)((int)uVar7 >> 1);
          }
          else {
LAB_011b9614:
            lVar9 = *(long *)local_b0[5];
          }
          param_4[uVar6] = lVar9;
          uVar4 = uVar6 + 1;
          SafeStackFrameIterator::Advance(aSStack_638);
          if ((param_5 <= uVar4) || (bVar1 = false, uVar6 = uVar4, local_b0 == (long *)0x0)) break;
        } while( true );
      }
      *param_6 = uVar4;
    }
  }
  return 1;
}

