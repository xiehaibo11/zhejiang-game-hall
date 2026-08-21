
/* v8::internal::Runtime_DisallowCodegenFromStrings(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_DisallowCodegenFromStrings(int param_1,ulong *param_2,Isolate *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_015a5b70(param_1,param_2,param_3);
    return uVar2;
  }
  uVar3 = *param_2;
  if ((((uVar3 & 1) != 0) &&
      (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x43)) &&
     ((*(uint *)(uVar3 + 0x17) >> 1 & 0xff) < 2)) {
    pcVar1 = FUN_015affe4;
    if ((int)uVar3 != *(int *)(param_3 + 0xb8)) {
      pcVar1 = (_func_bool_Local_Local *)0x0;
    }
    v8::Isolate::SetAllowCodeGenerationFromStringsCallback((Isolate *)param_3,pcVar1);
    return *(undefined8 *)(param_3 + 0xa0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsBoolean()");
}

