
/* v8::internal::Runtime_ForInEnumerate(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ForInEnumerate(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong uVar5;
  undefined8 uVar6;
  Isolate *local_68;
  ulong *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  char local_44;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_0155fddc(param_1,param_2,param_3);
    return uVar6;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
  }
  JSObject::MakePrototypesFast(param_2,0,param_3);
  local_58 = 0;
  local_48 = 1;
  local_50 = 0x1200000001;
  local_44 = '\x01';
  local_68 = param_3;
  puStack_60 = param_2;
  FastKeyAccumulator::Prepare((FastKeyAccumulator *)&local_68);
  if (local_48._2_1_ == '\0') {
    pIVar4 = (Isolate *)
             FastKeyAccumulator::GetKeys
                       ((FastKeyAccumulator *)&local_68,(ulong)(local_44 == '\0') << 1);
    if (pIVar4 != (Isolate *)0x0) {
      if (local_48._2_1_ == '\0') goto LAB_0155fd60;
      goto LAB_0155fce8;
    }
  }
  else {
LAB_0155fce8:
    uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar4 = *(Isolate **)pIVar1;
      if (pIVar4 == *(Isolate **)(param_3 + 0x95a8)) {
        pIVar4 = (Isolate *)HandleScope::Extend(param_3);
      }
      *(Isolate **)pIVar1 = pIVar4 + 8;
      *(ulong *)pIVar4 = uVar5;
    }
    else {
      pIVar4 = (Isolate *)
               CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
    }
    if (pIVar4 != (Isolate *)0x0) goto LAB_0155fd60;
  }
  pIVar4 = param_3 + 0x180;
LAB_0155fd60:
  uVar6 = *(undefined8 *)pIVar4;
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

