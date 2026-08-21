
/* v8::internal::Runtime_NormalizeElements(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_NormalizeElements(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0154f8b4(param_1,param_2,param_3);
    return uVar3;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar3 = *param_2;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar3 & 0xffffffff00000000 | 7;
    if (0xa9 < *(ushort *)(uVar4 + *(uint *)(uVar3 - 1))) {
      if ((byte)((*(byte *)((uVar3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar3 - 1)) >> 3) -
                0x11) < 0xb) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!array->HasTypedArrayElements()");
      }
      if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) != 0xab) {
        JSObject::NormalizeElements(param_2);
        uVar3 = *param_2;
        *(undefined8 *)(param_3 + 0x95a0) = uVar1;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar2) {
          *(long *)(param_3 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(param_3);
        }
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!array->IsJSGlobalProxy()");
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
}

