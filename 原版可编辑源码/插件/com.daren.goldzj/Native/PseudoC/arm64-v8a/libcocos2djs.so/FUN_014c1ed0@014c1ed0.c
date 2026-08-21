
undefined8 FUN_014c1ed0(int param_1,Isolate *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  Isolate *local_90;
  ulong *local_88;
  undefined8 uStack_80;
  Isolate *local_78;
  undefined8 uStack_70;
  Isolate *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (param_1 < 5) {
    param_2 = param_3 + 0xa0;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *(ulong *)param_2;
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  if (((uVar7 & 1) == 0) ||
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9)) {
    param_2 = (Isolate *)v8::internal::Object::ToObjectImpl(param_3,param_2,0);
  }
  if ((param_2 != (Isolate *)0x0) &&
     (((uVar7 = *(ulong *)param_2, pIVar3 = param_2, (uVar7 & 1) == 0 ||
       (*(ushort *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 7) < 0x44)) ||
      (pIVar3 = (Isolate *)v8::internal::JSReceiver::ToPrimitive(param_2,1),
      pIVar3 != (Isolate *)0x0)))) {
    uVar7 = *(ulong *)pIVar3;
    if ((uVar7 & 1) == 0) {
      dVar9 = (double)((int)uVar7 >> 1);
LAB_014c1fb4:
      if ((INFINITY <= ABS(dVar9)) && (ABS(dVar9) == INFINITY)) {
        uVar8 = *(undefined8 *)(param_3 + 0xb0);
        goto LAB_014c216c;
      }
    }
    else if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x42) {
      dVar9 = *(double *)(uVar7 + 3);
      goto LAB_014c1fb4;
    }
    uVar8 = __strlen_chk("toISOString",0xc);
    local_a8 = "toISOString";
    uStack_a0 = (undefined4)uVar8;
    local_9c = (undefined4)((ulong)uVar8 >> 0x20);
    puVar4 = (ulong *)v8::internal::Factory::NewStringFromOneByte(param_3,&local_a8,0);
    if (puVar4 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    if (((*(ulong *)param_2 & 1) == 0) ||
       (local_68 = param_2,
       *(ushort *)(((ulong)param_3 | 7) + (ulong)*(uint *)(*(ulong *)param_2 - 1)) < 0xa9)) {
      local_68 = (Isolate *)
                 v8::internal::LookupIterator::GetRootForNonJSReceiver
                           (param_3,param_2,0xffffffffffffffff);
    }
    uVar6 = 3;
    if ((*(short *)(((ulong)param_3 | 7) + (ulong)*(uint *)(*puVar4 - 1)) == 0x40) &&
       (uVar6 = 3, (*(byte *)(*puVar4 + 7) & 1) != 0)) {
      uVar6 = 0;
    }
    local_a8 = (char *)CONCAT44(local_a8._4_4_,uVar6);
    local_9c = 0;
    uStack_98 = 0xc0;
    local_88 = puVar4;
    local_90 = param_3;
    if ((*(ushort *)((*puVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar4 - 1)) & 0xffe0)
        == 0x20) {
      local_88 = (ulong *)v8::internal::StringTable::LookupString(param_3,puVar4);
    }
    uStack_80 = 0;
    uStack_70 = 0;
    local_58 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_78 = param_2;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_a8);
    if (local_a8._4_4_ == 4) {
      pIVar3 = local_90 + 0xa0;
      uVar7 = *(ulong *)pIVar3;
    }
    else {
      pIVar3 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_a8,false);
      if (pIVar3 == (Isolate *)0x0) goto LAB_014c2168;
      uVar7 = *(ulong *)pIVar3;
    }
    if (((uVar7 & 1) == 0) ||
       ((*(byte *)((uVar7 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar7 - 1)) >> 1 & 1) == 0))
    {
      puVar5 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x18,puVar4,0,0)
      ;
      uVar8 = v8::internal::Isolate::Throw(param_3,*puVar5,0);
      goto LAB_014c216c;
    }
    puVar5 = (undefined8 *)v8::internal::Execution::Call(param_3,pIVar3,param_2,0,0);
    if (puVar5 != (undefined8 *)0x0) {
      uVar8 = *puVar5;
      goto LAB_014c216c;
    }
  }
LAB_014c2168:
  uVar8 = *(undefined8 *)(param_3 + 0x180);
LAB_014c216c:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar8;
}

