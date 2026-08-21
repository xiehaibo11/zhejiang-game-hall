
/* v8::internal::Object::SetSuperProperty(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::StoreOrigin,
   v8::Maybe<v8::internal::ShouldThrow>) */

undefined2
v8::internal::Object::SetSuperProperty
          (uint *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  Factory *this;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  PropertyDescriptor local_e8 [8];
  undefined8 local_e0;
  long lStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined8 local_b4;
  Factory *local_a8;
  ulong *local_a0;
  undefined8 local_98;
  ulong *local_90;
  undefined8 local_88;
  ulong *local_80;
  ulong local_78;
  undefined8 local_70;
  
  this = *(Factory **)(param_1 + 6);
  if (param_1[1] != 4) {
    local_c0 = CONCAT31(local_c0._1_3_,1);
    uVar1 = SetPropertyInternal(param_1,param_2,param_4,param_4,&local_c0);
    if (local_c0._0_1_ != (LookupIterator)0x0) {
      return uVar1;
    }
  }
  if (*(long *)(param_1 + 0x12) == -1) {
    lVar7 = *(long *)(param_1 + 6);
    iVar3 = **(int **)(param_1 + 8);
    if (((((iVar3 == *(int *)(lVar7 + 0xc70)) || (iVar3 == *(int *)(lVar7 + 0x5d0))) ||
         (iVar3 == *(int *)(lVar7 + 0x848))) ||
        ((iVar3 == *(int *)(lVar7 + 0xc48) || (iVar3 == *(int *)(lVar7 + 0xc18))))) ||
       ((iVar3 == *(int *)(lVar7 + 0x960) || (iVar3 == *(int *)(lVar7 + 0xa38))))) {
      LookupIterator::InternalUpdateProtector(lVar7,*(undefined8 *)(param_1 + 0xc));
    }
  }
  puVar8 = *(ulong **)(param_1 + 0xc);
  uVar6 = *puVar8;
  if (((uVar6 & 1) == 0) ||
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9)) {
LAB_0110d610:
    uVar1 = WriteToReadOnlyProperty(param_1,param_2,param_4);
    return uVar1;
  }
  uVar9 = *(ulong *)(param_1 + 0x12);
  local_80 = puVar8;
  local_a8 = this;
  local_90 = puVar8;
  if (uVar9 == 0xffffffffffffffff) {
    puVar4 = *(ulong **)(param_1 + 8);
    if (*(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9) {
      local_80 = (ulong *)LookupIterator::GetRootForNonJSReceiver(this,puVar8,0xffffffffffffffff);
    }
    if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(*puVar4 - 1)) == 0x40) {
      local_c0 = ~*(uint *)(*puVar4 + 7) & 1;
    }
    else {
      local_c0 = 1;
    }
    local_b4 = 0xc000000000;
    if ((*(ushort *)((*puVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar4 - 1)) & 0xffe0)
        == 0x20) {
      puVar4 = (ulong *)StringTable::LookupString(this,puVar4);
    }
    local_98 = 0;
    local_88 = 0;
    local_70 = 0xffffffffffffffff;
    local_78 = 0xffffffffffffffff;
    local_a0 = puVar4;
    LookupIterator::Start<false>((LookupIterator *)&local_c0);
  }
  else {
    if (*(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9) {
      local_80 = (ulong *)LookupIterator::GetRootForNonJSReceiver(this,puVar8,uVar9);
    }
    local_c0 = 1;
    local_a0 = (ulong *)0x0;
    local_98 = 0;
    local_88 = 0;
    local_b4 = 0xc000000000;
    local_70 = 0xffffffffffffffff;
    puVar4 = local_a0;
    local_78 = uVar9;
    if (((0xfffffffe < uVar9) &&
        (*(short *)((*local_80 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*local_80 - 1)) != 0x41b
        )) && (puVar4 = (ulong *)Factory::SizeToString(this,uVar9,true),
              (*(ushort *)((*puVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar4 - 1)) &
              0xffe0) == 0x20)) {
      puVar4 = (ulong *)StringTable::LookupString(this);
    }
    local_a0 = puVar4;
    LookupIterator::Start<true>((LookupIterator *)&local_c0);
  }
  do {
    switch(local_bc) {
    case 0:
      uVar6 = LookupIterator::HasAccess((LookupIterator *)&local_c0);
      if ((uVar6 & 1) == 0) {
        uVar1 = JSObject::SetPropertyWithFailedAccessCheck(&local_c0,param_2,param_4);
        return uVar1;
      }
    default:
      LookupIterator::Next((LookupIterator *)&local_c0);
      break;
    case 2:
    case 3:
      local_e8[0] = (PropertyDescriptor)0x0;
      lStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uVar2 = JSReceiver::GetOwnPropertyDescriptor((LookupIterator *)&local_c0,local_e8);
      if ((uVar2 & 0xff) == 0) goto LAB_0110d894;
      if (uVar2 < 0x100) {
        uVar1 = JSReceiver::CreateDataProperty(&local_c0,param_2,param_4);
        return uVar1;
      }
      if (((lStack_d8 == 0) && (local_d0 == 0)) && (((byte)local_e8[0] >> 4 & 1) != 0)) {
        local_110[0] = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        uStack_100 = 0;
        lVar7 = *(long *)(param_1 + 8);
        local_108 = param_2;
        if (lVar7 == 0) {
          lVar7 = Factory::SizeToString(*(Factory **)(param_1 + 6),*(ulong *)(param_1 + 0x12),true);
          *(long *)(param_1 + 8) = lVar7;
        }
        uVar1 = JSReceiver::DefineOwnProperty(this,puVar8,lVar7,local_110,param_4);
        return uVar1;
      }
    case 1:
switchD_0110d714_caseD_1:
      lVar7 = *(long *)(param_1 + 8);
      if (lVar7 == 0) {
        lVar7 = Factory::SizeToString(*(Factory **)(param_1 + 6),*(ulong *)(param_1 + 0x12),true);
        *(long *)(param_1 + 8) = lVar7;
      }
      iVar3 = GetShouldThrow(this,param_4);
      if (iVar3 == 1) {
        uVar1 = 1;
      }
      else {
        puVar5 = (undefined8 *)Factory::NewTypeError(this,0x96,lVar7,0,0);
        Isolate::Throw((Isolate *)this,*puVar5,0);
LAB_0110d894:
        uVar1 = 0;
      }
      return uVar1;
    case 4:
      uVar1 = AddDataProperty(&local_c0,param_2,0,param_4,param_3);
      return uVar1;
    case 5:
      puVar8 = (ulong *)LookupIterator::GetAccessors();
      uVar6 = *puVar8;
      if (((uVar6 & 1) != 0) &&
         (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x51)) {
        if ((local_b4._4_1_ >> 3 & 1) == 0) {
          uVar1 = SetPropertyWithAccessor(&local_c0,param_2,param_4);
          return uVar1;
        }
        goto LAB_0110d8b0;
      }
      goto switchD_0110d714_caseD_1;
    case 6:
      if ((local_b4._4_1_ >> 3 & 1) == 0) {
        uVar1 = SetDataProperty(&local_c0,param_2);
        return uVar1;
      }
LAB_0110d8b0:
      param_1 = &local_c0;
      goto LAB_0110d610;
    case 7:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  } while( true );
}

