
/* v8::internal::Runtime_AllocateSeqOneByteString(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_AllocateSeqOneByteString(int param_1,ulong *param_2,Isolate *param_3)

{
  int iVar1;
  long lVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_0156a914(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((*param_2 & 1) == 0) {
    iVar1 = (int)*param_2 >> 1;
    if (iVar1 == 0) {
      pIVar3 = param_3 + 200;
    }
    else {
      pIVar3 = (Isolate *)Factory::NewRawOneByteString((Factory *)param_3,iVar1,0);
      if (pIVar3 == (Isolate *)0x0) {
        pIVar3 = param_3 + 0x180;
      }
    }
    uVar5 = *(undefined8 *)pIVar3;
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSmi()");
}

