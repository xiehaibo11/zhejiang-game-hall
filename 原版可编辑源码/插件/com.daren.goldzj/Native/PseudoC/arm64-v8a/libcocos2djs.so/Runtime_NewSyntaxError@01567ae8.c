
/* v8::internal::Runtime_NewSyntaxError(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_NewSyntaxError(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_48;
  int local_24;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_01567c10(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_48 = *param_2;
  if (((local_48 & 1) != 0) &&
     (*(short *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsNumber()");
  }
  local_24 = 0;
  uVar2 = Object::ToInt32((Object *)&local_48,&local_24);
  if ((uVar2 & 1) != 0) {
    puVar3 = (undefined8 *)Factory::NewSyntaxError((Factory *)param_3,local_24,param_2 + -1,0,0);
    uVar5 = *puVar3;
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].ToInt32(&template_index)");
}

