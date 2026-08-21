
undefined8 FUN_014cd358(undefined8 param_1,Isolate *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  Isolate *pIVar5;
  undefined8 uVar6;
  Isolate *local_70;
  undefined8 uStack_68;
  Isolate *local_60;
  undefined4 local_58;
  char local_54;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *(ulong *)param_2;
  if (((uVar4 & 1) == 0) ||
     (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9)) {
    param_2 = (Isolate *)v8::internal::Object::ToObjectImpl(param_3,param_2,0);
  }
  if (param_2 == (Isolate *)0x0) {
LAB_014cd40c:
    uVar6 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
    uStack_68 = 0;
    local_54 = '\0';
    local_58 = 1;
    local_50 = 0;
    local_70 = param_3;
    local_60 = param_2;
    do {
      uVar4 = v8::internal::PrototypeIterator::HasAccess((PrototypeIterator *)&local_70);
      if ((uVar4 & 1) == 0) {
        pIVar5 = local_70 + 0xb0;
        goto LAB_014cd41c;
      }
      uVar4 = v8::internal::PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
                        ((PrototypeIterator *)&local_70);
      if ((uVar4 & 1) == 0) goto LAB_014cd40c;
    } while (local_54 == '\0');
    pIVar5 = local_60;
    if (local_60 == (Isolate *)0x0) goto LAB_014cd40c;
LAB_014cd41c:
    uVar6 = *(undefined8 *)pIVar5;
    if (param_3 == (Isolate *)0x0) goto LAB_014cd44c;
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_014cd44c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

