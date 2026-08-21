
/* v8::internal::Runtime_HasElementsInALargeObjectSpace(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_HasElementsInALargeObjectSpace(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar1 = FUN_015a5388(param_1);
    return uVar1;
  }
  uVar2 = *param_2;
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x423)) {
    uVar4 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 7);
    uVar2 = LargeObjectSpace::Contains(*(LargeObjectSpace **)(param_3 + 0x8968),uVar4);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = LargeObjectSpace::Contains(*(LargeObjectSpace **)(param_3 + 0x8958),uVar4),
       (uVar2 & 1) == 0)) {
      pIVar3 = param_3 + 0xc0;
    }
    else {
      pIVar3 = param_3 + 0xb8;
    }
    return *(undefined8 *)pIVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSArray()");
}

