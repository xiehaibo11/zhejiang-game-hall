
/* v8::internal::Runtime_HasHoleyElements(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_HasHoleyElements(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_015a883c(param_1);
    return uVar2;
  }
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (0xa9 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
    uVar3 = (uint)*(byte *)((uVar4 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar4 - 1));
    lVar1 = 0xb8;
    if (((uint)(uVar3 < 0x30) & (uVar3 & 8) >> 3) == 0) {
      lVar1 = 0xc0;
    }
    return *(undefined8 *)(param_3 + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
}

