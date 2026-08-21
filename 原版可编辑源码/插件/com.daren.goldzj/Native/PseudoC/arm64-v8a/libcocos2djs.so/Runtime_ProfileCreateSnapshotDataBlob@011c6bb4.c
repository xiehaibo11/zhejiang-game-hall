
/* v8::internal::Runtime_ProfileCreateSnapshotDataBlob(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_ProfileCreateSnapshotDataBlob(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    DisableEmbeddedBlobRefcounting();
    pvVar2 = (void *)CreateSnapshotDataBlobInternal(0,0,0);
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    Isolate::CurrentEmbeddedBlob();
    uVar3 = Isolate::CurrentEmbeddedBlobSize();
    PrintF("Embedded blob is %d bytes\n",uVar3 & 0xffffffff);
    FreeCurrentEmbeddedBlob();
    uVar5 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
  uVar4 = FUN_011c6c88(param_1,param_2,param_3);
  return uVar4;
}

