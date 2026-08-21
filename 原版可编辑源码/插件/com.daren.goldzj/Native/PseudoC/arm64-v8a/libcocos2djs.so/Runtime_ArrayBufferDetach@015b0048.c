
/* v8::internal::Runtime_ArrayBufferDetach(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ArrayBufferDetach(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_28;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar4 = *param_2;
    if (((uVar4 & 1) == 0) ||
       (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x424)) {
      puVar2 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,99,0,0,0);
      uVar5 = Isolate::Throw(param_3,*puVar2,0);
    }
    else {
      local_28 = uVar4;
      JSArrayBuffer::Detach((JSArrayBuffer *)&local_28,false);
      uVar5 = *(undefined8 *)(param_3 + 0xa0);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
  uVar3 = FUN_015b0144(param_1,param_2,param_3);
  return uVar3;
}

