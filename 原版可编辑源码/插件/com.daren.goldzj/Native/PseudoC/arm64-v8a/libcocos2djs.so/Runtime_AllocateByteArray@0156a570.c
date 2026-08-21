
/* v8::internal::Runtime_AllocateByteArray(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_AllocateByteArray(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0156a638(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((*param_2 & 1) == 0) {
    puVar2 = (undefined8 *)Factory::NewByteArray((Factory *)param_3,(int)*param_2 >> 1,0);
    uVar4 = *puVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSmi()");
}

