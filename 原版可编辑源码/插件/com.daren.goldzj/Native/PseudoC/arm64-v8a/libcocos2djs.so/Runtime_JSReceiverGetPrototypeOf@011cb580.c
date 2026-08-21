
/* v8::internal::Runtime_JSReceiverGetPrototypeOf(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_JSReceiverGetPrototypeOf(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  Isolate *pIVar5;
  Isolate *local_70;
  undefined8 uStack_68;
  Isolate *local_60;
  undefined4 local_58;
  char local_54;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_011cb6cc(param_1,param_2,param_3);
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return uVar4;
    }
    goto LAB_011cb6b4;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) == 0) ||
     (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
  }
  uStack_68 = 0;
  local_54 = '\0';
  local_58 = 1;
  local_50 = 0;
  local_70 = param_3;
  local_60 = (Isolate *)param_2;
  do {
    uVar4 = PrototypeIterator::HasAccess((PrototypeIterator *)&local_70);
    if ((uVar4 & 1) == 0) {
      pIVar5 = local_70 + 0xb0;
      goto LAB_011cb640;
    }
    uVar4 = PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
                      ((PrototypeIterator *)&local_70);
    if ((uVar4 & 1) == 0) goto LAB_011cb630;
  } while (local_54 == '\0');
  pIVar5 = local_60;
  if (local_60 == (Isolate *)0x0) {
LAB_011cb630:
    uVar4 = *(ulong *)(param_3 + 0x180);
LAB_011cb648:
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  else {
LAB_011cb640:
    uVar4 = *(ulong *)pIVar5;
    if (param_3 != (Isolate *)0x0) goto LAB_011cb648;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
LAB_011cb6b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

