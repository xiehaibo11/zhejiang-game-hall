
/* v8::internal::Runtime_SetAllowAtomicsWait(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_SetAllowAtomicsWait(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_015623ac(param_1);
    return uVar2;
  }
  iVar1 = *(int *)(param_3 + 0x95b0);
  *(int *)(param_3 + 0x95b0) = iVar1 + 1;
  uVar3 = *param_2;
  if ((((uVar3 & 1) != 0) &&
      (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x43)) &&
     ((*(uint *)(uVar3 + 0x17) >> 1 & 0xff) < 2)) {
    param_3[0xc728] = (Isolate)((int)uVar3 == *(int *)(param_3 + 0xb8));
    *(undefined8 *)(param_3 + 0x95a0) = *(undefined8 *)(param_3 + 0x95a0);
    *(int *)(param_3 + 0x95b0) = iVar1;
    return *(undefined8 *)(param_3 + 0xa0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsBoolean()");
}

