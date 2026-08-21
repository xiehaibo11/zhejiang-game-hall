
undefined8 FUN_014cf998(int param_1,long param_2,Factory *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  Factory *pFVar7;
  ulong uVar8;
  Factory *pFVar9;
  Factory *pFVar10;
  Factory *pFVar11;
  char *local_a8;
  undefined8 uStack_a0;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  param_1 = param_1 + -4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (param_1 < 2) {
    pFVar9 = param_3 + 0xa0;
LAB_014cfa14:
    pFVar7 = param_3 + 0xa0;
LAB_014cfa18:
    pFVar10 = param_3 + 0xa0;
  }
  else {
    pFVar9 = (Factory *)(param_2 + -8);
    if (param_1 == 2) goto LAB_014cfa14;
    pFVar7 = (Factory *)(param_2 + -0x10);
    if (param_1 < 4) goto LAB_014cfa18;
    pFVar10 = (Factory *)(param_2 + -0x18);
    if (param_1 != 4) {
      pFVar11 = (Factory *)(param_2 + -0x20);
      uVar8 = *(ulong *)pFVar9;
      goto joined_r0x014cfa24;
    }
  }
  uVar8 = *(ulong *)pFVar9;
  pFVar11 = pFVar9;
joined_r0x014cfa24:
  if (((uVar8 & 1) == 0) ||
     (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xa9)) {
    uStack_a0 = __strlen_chk("Reflect.set",0xc);
    local_a8 = "Reflect.set";
    lVar4 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_a8,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar5 = (undefined8 *)v8::internal::Factory::NewTypeError(param_3,0x19,lVar4,0,0);
    uVar6 = v8::internal::Isolate::Throw((Isolate *)param_3,*puVar5,0);
  }
  else {
    uVar8 = *(ulong *)pFVar7;
    if (((uVar8 & 1) == 0) ||
       (0x40 < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
      pFVar7 = (Factory *)v8::internal::Object::ConvertToName(param_3,pFVar7);
    }
    if (pFVar7 == (Factory *)0x0) {
      uVar6 = *(undefined8 *)(param_3 + 0x180);
    }
    else {
      v8::internal::LookupIterator::PropertyOrElement
                ((LookupIterator *)&local_a8,param_3,pFVar11,pFVar7,pFVar9,3);
      uVar3 = v8::internal::Object::SetSuperProperty(&local_a8,pFVar10,0,0x100000001);
      if ((uVar3 & 0xff) == 0) {
        pFVar9 = param_3 + 0x180;
      }
      else {
        pFVar9 = (Factory *)v8::internal::Factory::ToBoolean(param_3,0xff < uVar3);
      }
      uVar6 = *(undefined8 *)pFVar9;
    }
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  return uVar6;
}

