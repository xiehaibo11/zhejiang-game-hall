
/* v8::internal::Runtime_GetOptimizationStatus(int, unsigned long*, v8::internal::Isolate*) */

long v8::internal::Runtime_GetOptimizationStatus(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_608 [177];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    lVar6 = FUN_0159e8c0(param_1,param_2,param_3);
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return lVar6;
    }
    goto LAB_0159e8bc;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar6 = *(long *)(param_3 + 0x95a8);
  uVar3 = (uint)(FLAG_jitless != '\0' || FLAG_lite_mode != '\0');
  uVar5 = Isolate::use_optimizer(param_3);
  uVar7 = uVar3 << 0xc;
  if ((uVar5 & 1) == 0) {
    uVar7 = uVar3 << 0xc | 2;
  }
  uVar5 = *param_2;
  if (FLAG_prepare_always_opt != '\0' || FLAG_always_opt != '\0') {
    uVar7 = uVar7 | 4;
  }
  if (FLAG_deopt_every_n_times != 0) {
    uVar7 = uVar7 | 8;
  }
  if (((uVar5 & 1) == 0) ||
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x439)) {
    lVar8 = (ulong)uVar7 << 1;
LAB_0159e3e4:
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar6) {
      *(long *)(param_3 + 0x95a8) = lVar6;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  else {
    if (param_1 == 2) {
      uVar5 = param_2[-1];
      if (((uVar5 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
        lVar8 = *(long *)(param_3 + 0xa0);
        goto LAB_0159e3e4;
      }
      local_608[0] = uVar5;
      uVar3 = String::IsOneByteEqualTo(local_608,"no sync",7);
      uVar3 = uVar3 ^ 1;
      lVar8 = *(long *)(param_3 + 0xc610);
    }
    else {
      uVar3 = 1;
      lVar8 = *(long *)(param_3 + 0xc610);
    }
    if ((lVar8 != 0) && ((uVar3 & 1) != 0)) {
      uVar5 = *param_2;
      uVar9 = uVar5 & 0xffffffff00000000;
      uVar3 = *(uint *)((uVar9 | *(uint *)(uVar5 + 0xb)) + 3);
      uVar11 = (ulong)uVar3;
      if (uVar3 != 0x84) {
        uVar10 = uVar9 | uVar11;
        do {
          if (((((uVar11 & 1) != 0) &&
               (*(ushort *)((uVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) - 0x95 < 2)) ||
              (uVar5 = uVar9 | *(uint *)((uVar9 | *(uint *)(uVar5 + 0x13)) + 3),
              *(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x9f)) ||
             (*(int *)(uVar5 + 7) != 8)) break;
          OptimizingCompileDispatcher::InstallOptimizedFunctions
                    (*(OptimizingCompileDispatcher **)(param_3 + 0xc610));
          base::OS::Sleep(50000);
          uVar5 = *param_2;
          uVar9 = uVar5 & 0xffffffff00000000;
          uVar3 = *(uint *)((uVar9 | *(uint *)(uVar5 + 0xb)) + 3);
          uVar11 = (ulong)uVar3;
          uVar10 = uVar9 | uVar11;
        } while (uVar3 != 0x84);
      }
    }
    uVar9 = *param_2;
    uVar5 = uVar9 & 0xffffffff00000000;
    uVar3 = *(uint *)((uVar5 | *(uint *)(uVar9 + 0xb)) + 3);
    if ((((uVar3 == 0x84) ||
         (((uVar3 & 1) != 0 &&
          (*(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar3) - 1)) - 0x95 < 2)))) ||
        (uVar9 = uVar5 | *(uint *)((uVar5 | *(uint *)(uVar9 + 0x13)) + 3),
        *(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x9f)) ||
       (*(int *)(uVar9 + 7) != 4)) {
      uVar9 = *param_2;
      uVar5 = uVar9 & 0xffffffff00000000;
      uVar3 = *(uint *)((uVar5 | *(uint *)(uVar9 + 0xb)) + 3);
      if (((uVar3 == 0x84) ||
          (((uVar3 & 1) != 0 &&
           (*(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar3) - 1)) - 0x95 < 2)))) ||
         ((uVar9 = uVar5 | *(uint *)((uVar5 | *(uint *)(uVar9 + 0x13)) + 3),
          *(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x9f ||
          (*(int *)(uVar9 + 7) != 8)))) {
        uVar9 = *param_2;
        uVar11 = (ulong)(uVar7 | 1);
        uVar5 = uVar9 & 0xffffffff00000000;
        uVar3 = *(uint *)((uVar5 | *(uint *)(uVar9 + 0xb)) + 3);
        if ((uVar3 != 0x84) &&
           ((((uVar3 & 1) == 0 ||
             (1 < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar3) - 1)) - 0x95)) &&
            (uVar9 = uVar5 | *(uint *)((uVar5 | *(uint *)(uVar9 + 0x13)) + 3),
            *(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x9f)))) {
          uVar3 = uVar7 | 0x201;
          if (*(int *)(uVar9 + 7) != 8) {
            uVar3 = uVar7 | 1;
          }
          uVar11 = (ulong)uVar3;
        }
      }
      else {
        uVar11 = (ulong)(uVar7 | 0x101);
      }
    }
    else {
      uVar11 = (ulong)(uVar7 | 0x81);
    }
    uVar9 = *param_2;
    uVar5 = uVar9 & 0xffffffff00000000;
    if (*(int *)((uVar5 | *(uint *)(uVar9 + 0x17)) + 0x27) != 0x42) {
      uVar7 = *(uint *)((uVar5 | *(uint *)(uVar9 + 0xb)) + 3);
      if ((((uVar7 != 0x84) &&
           (((uVar7 & 1) == 0 ||
            (1 < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar7) - 1)) - 0x95)))) &&
          ((*(byte *)((uVar5 | *(uint *)(uVar9 + 0x17)) + 0x17) & 0x3e) == 0)) &&
         ((*(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(uVar9 + 0x17)) + 0xf)) + 7) & 1) == 0)) {
        uVar5 = *param_2 & 0xffffffff00000000;
        uVar7 = 0x10;
        if ((*(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*param_2 + 0x17)) + 0xf)) + 7) & 1) !=
            0) {
          uVar7 = 0x2000;
        }
        uVar11 = (ulong)(uVar7 | (uint)uVar11 |
                        *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17)
                                  ) + 0x17) >> 1 & 0x20);
      }
    }
    uVar9 = *param_2;
    uVar5 = uVar9 & 0xffffffff00000000;
    if (*(int *)((uVar5 | *(uint *)(uVar9 + 0x17)) + 0x27) != 0x42) {
      uVar7 = *(uint *)((uVar5 | *(uint *)(uVar9 + 0xb)) + 3);
      if (((uVar7 != 0x84) &&
          (((uVar7 & 1) == 0 ||
           (1 < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar7) - 1)) - 0x95)))) &&
         (((uVar7 = *(int *)((uVar5 | *(uint *)(uVar9 + 0x17)) + 0x27) - 0x38, uVar7 < 9 &&
           ((1 << (ulong)(uVar7 & 0x1f) & 0x181U) != 0)) ||
          (((*(byte *)((uVar5 | *(uint *)(uVar9 + 0x17)) + 0x17) & 0x3e) == 0 &&
           ((*(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(uVar9 + 0x17)) + 0xf)) + 7) & 1) != 0))
          )))) {
        uVar11 = (ulong)((uint)uVar11 | 0x40);
      }
    }
    StackFrameIterator::StackFrameIterator((StackFrameIterator *)local_608,param_3);
    if ((local_80 == (long *)0x0) ||
       (JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)local_608),
       local_80 == (long *)0x0)) {
      lVar8 = uVar11 << 1;
      goto LAB_0159e3e4;
    }
    do {
      iVar4 = (**(code **)(*local_80 + 0x98))();
      if (iVar4 == (int)*param_2) {
        if (local_80 != (long *)0x0) {
          iVar4 = (**(code **)(*local_80 + 8))();
          uVar7 = 0xc00;
          if (iVar4 != 4) {
            uVar7 = 0x400;
          }
          uVar11 = (ulong)(uVar7 | (uint)uVar11);
        }
        break;
      }
      JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)local_608);
    } while (local_80 != (long *)0x0);
    lVar8 = uVar11 << 1;
    if (param_3 != (Isolate *)0x0) goto LAB_0159e3e4;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return lVar8;
  }
LAB_0159e8bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

