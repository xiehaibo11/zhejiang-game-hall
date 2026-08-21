
/* v8::internal::Runtime_HasFastPackedElements(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_HasFastPackedElements(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_011d0910(param_1);
    return uVar3;
  }
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    bVar2 = *(byte *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 10);
    lVar1 = 0xb8;
    if ((bVar2 & 8) != 0 || 0x27 < bVar2) {
      lVar1 = 0xc0;
    }
    return *(undefined8 *)(param_3 + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsHeapObject()");
}

