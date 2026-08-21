
/* v8::internal::JSReceiver::HasInPrototypeChain(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::Object>) */

undefined8 v8::internal::JSReceiver::HasInPrototypeChain(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_60 [2];
  long *local_50;
  undefined4 local_48;
  char local_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60[1] = 0;
  local_48 = 0;
  local_44 = '\0';
  local_40 = 0;
  local_60[0] = param_1;
  local_50 = param_2;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!handle_.is_null()");
  }
  uVar2 = PrototypeIterator::HasAccess((PrototypeIterator *)local_60);
  if ((uVar2 & 1) != 0) {
    uVar3 = 1;
    do {
      uVar2 = PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
                        ((PrototypeIterator *)local_60);
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        goto LAB_010c9bf0;
      }
      if (local_44 != '\0') goto LAB_010c9bf0;
      if ((local_50 == param_3) ||
         (((param_3 != (long *)0x0 && (local_50 != (long *)0x0)) && (*local_50 == *param_3)))) {
        uVar3 = 0x101;
        goto LAB_010c9bf0;
      }
      uVar2 = PrototypeIterator::HasAccess((PrototypeIterator *)local_60);
    } while ((uVar2 & 1) != 0);
  }
  uVar3 = 1;
  local_44 = '\x01';
  local_50 = (long *)(local_60[0] + 0xb0);
LAB_010c9bf0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

