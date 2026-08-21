
/* v8::internal::Runtime_DeoptimizeFunction(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DeoptimizeFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar4 = *param_2;
    if ((uVar4 & 1) != 0) {
      uVar5 = uVar4 & 0xffffffff00000000;
      if ((*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x439) &&
         (*(int *)((uVar5 | *(uint *)(uVar4 + 0x17)) + 0x27) != 0x42)) {
        uVar1 = *(uint *)((uVar5 | *(uint *)(uVar4 + 0xb)) + 3);
        if (((uVar1 != 0x84) &&
            ((((uVar1 & 1) == 0 ||
              (1 < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar1) - 1)) - 0x95)) &&
             ((*(byte *)((uVar5 | *(uint *)(uVar4 + 0x17)) + 0x17) & 0x3e) == 0)))) &&
           ((*(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(uVar4 + 0x17)) + 0xf)) + 7) & 1) == 0))
        {
          Deoptimizer::DeoptimizeFunction(*param_2,0);
        }
      }
    }
    uVar6 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar6;
  }
  uVar3 = FUN_0159b94c(param_1,param_2,param_3);
  return uVar3;
}

