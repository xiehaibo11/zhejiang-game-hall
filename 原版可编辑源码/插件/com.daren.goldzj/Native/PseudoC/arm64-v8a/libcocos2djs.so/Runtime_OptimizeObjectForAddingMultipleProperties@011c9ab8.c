
/* v8::internal::Runtime_OptimizeObjectForAddingMultipleProperties(int, unsigned long*,
   v8::internal::Isolate*) */

ulong v8::internal::Runtime_OptimizeObjectForAddingMultipleProperties
                (int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_011c9c0c(param_1,param_2,param_3);
    return uVar5;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
    uVar3 = uVar5 & 0xffffffff00000000 | 7;
    if (0xa9 < *(ushort *)(uVar3 + *(uint *)(uVar5 - 1))) {
      iVar4 = (int)param_2[-1];
      if ((param_2[-1] & 1) == 0) {
        if (iVar4 < 0x30d42) {
          if (((*(uint *)((uVar5 & 0xffffffff00000000 | 0xb) + (ulong)*(uint *)(uVar5 - 1)) >> 0x15
               & 1) == 0) && (*(short *)(uVar3 + *(uint *)(uVar5 - 1)) != 0xab)) {
            JSObject::NormalizeProperties(param_3,param_2,1,iVar4 >> 1,"OptimizeForAdding");
            uVar5 = *param_2;
          }
        }
        else {
          uVar5 = Isolate::ThrowIllegalOperation(param_3);
        }
        *(undefined8 *)(param_3 + 0x95a0) = uVar1;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar2) {
          *(long *)(param_3 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(param_3);
        }
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsSmi()");
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
}

