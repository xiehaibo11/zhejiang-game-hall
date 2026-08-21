
/* v8::internal::Runtime_DoubleToStringWithRadix(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_DoubleToStringWithRadix(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  char *__s;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  char *local_60;
  size_t sStack_58;
  int local_44;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0156e56c(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
    dVar6 = (double)((int)uVar4 >> 1);
    local_60 = (char *)param_2[-1];
  }
  else {
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    dVar6 = *(double *)(uVar4 + 3);
    local_60 = (char *)param_2[-1];
  }
  if ((((ulong)local_60 & 1) != 0) &&
     (*(short *)(((ulong)local_60 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_60 + -1)) !=
      0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsNumber()");
  }
  local_44 = 0;
  uVar4 = Object::ToInt32((Object *)&local_60,&local_44);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].ToInt32(&radix)");
  }
  __s = (char *)DoubleToRadixCString(dVar6,local_44);
  sStack_58 = strlen(__s);
  local_60 = __s;
  puVar2 = (undefined8 *)Factory::NewStringFromOneByte(param_3,&local_60,0);
  if (puVar2 != (undefined8 *)0x0) {
    if (__s != (char *)0x0) {
      operator_delete__(__s);
    }
    uVar5 = *puVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

