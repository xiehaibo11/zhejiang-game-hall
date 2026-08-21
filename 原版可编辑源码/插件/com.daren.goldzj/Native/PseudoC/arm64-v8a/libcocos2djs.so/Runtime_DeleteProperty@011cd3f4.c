
/* v8::internal::Runtime_DeleteProperty(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DeleteProperty(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  ushort uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  Isolate *pIVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_011cd524(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = param_2[-2];
  if ((uVar8 & 1) == 0) {
    uVar5 = *param_2;
    if (((uVar5 & 1) == 0) ||
       (puVar3 = param_2,
       *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
      puVar3 = (ulong *)Object::ToObjectImpl(param_3,param_2,0);
    }
    if ((puVar3 == (ulong *)0x0) ||
       (uVar2 = Runtime::DeleteObjectProperty(param_3,puVar3,param_2 + -1,uVar8 >> 1 & 1),
       (uVar2 & 0xff) == 0)) {
      pIVar6 = param_3 + 0x180;
    }
    else {
      pIVar6 = param_3 + 0xb8;
      if (uVar2 < 0x100) {
        pIVar6 = param_3 + 0xc0;
      }
    }
    uVar7 = *(undefined8 *)pIVar6;
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].IsSmi()");
}

