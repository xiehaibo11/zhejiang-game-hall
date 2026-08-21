
undefined8 FUN_014af044(int param_1,long param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (*(int *)(param_2 - (param_1 * 8 + -8)) != *(int *)(param_3 + 0xa0)) {
    puVar4 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x59,param_3 + 0x518,0,0);
    uVar6 = v8::internal::Isolate::Throw(param_3,*puVar4,0);
    goto LAB_014af150;
  }
  pIVar3 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar3 = param_3 + 0xa0;
  }
  uVar5 = *(ulong *)pIVar3;
  if ((uVar5 & 1) == 0) {
LAB_014af0f4:
    puVar4 = (undefined8 *)v8::internal::BigInt::FromNumber(param_3,pIVar3);
joined_r0x014af148:
    if (puVar4 != (undefined8 *)0x0) {
      uVar6 = *puVar4;
      goto LAB_014af150;
    }
  }
  else {
    if (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9) {
LAB_014af0dc:
      if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x42)
      goto LAB_014af0f4;
      puVar4 = (undefined8 *)v8::internal::BigInt::FromObject(param_3,pIVar3);
      goto joined_r0x014af148;
    }
    pIVar3 = (Isolate *)v8::internal::JSReceiver::ToPrimitive(pIVar3,1);
    if (pIVar3 != (Isolate *)0x0) {
      uVar5 = *(ulong *)pIVar3;
      if ((uVar5 & 1) == 0) goto LAB_014af0f4;
      goto LAB_014af0dc;
    }
  }
  uVar6 = *(undefined8 *)(param_3 + 0x180);
LAB_014af150:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

