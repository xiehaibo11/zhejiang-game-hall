
/* v8::internal::Runtime_WeakCollectionDelete(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WeakCollectionDelete(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0155c0e4(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     ((*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) & 0xfffe) ==
      0x41e)) {
    if ((param_2[-2] & 1) == 0) {
      uVar4 = JSWeakCollection::Delete(param_2,param_2 + -1,(int)param_2[-2] >> 1);
      lVar1 = 0xb8;
      if ((uVar4 & 1) == 0) {
        lVar1 = 0xc0;
      }
      uVar5 = *(undefined8 *)(param_3 + lVar1);
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSWeakCollection()");
}

