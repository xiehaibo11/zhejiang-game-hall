
undefined8 FUN_014ce8fc(Isolate *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  ushort uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong local_c0 [2];
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  LookupIterator aLStack_98 [4];
  undefined4 local_94;
  Factory *local_80;
  long local_78;
  ulong *local_60;
  ulong local_50;
  undefined1 local_24 [4];
  
  uVar5 = *param_2;
  if (((uVar5 & 1) == 0) ||
     (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
    param_2 = (ulong *)v8::internal::Object::ToObjectImpl(param_1,param_2,0);
  }
  if (param_2 != (ulong *)0x0) {
    uVar5 = *param_3;
    if (((uVar5 & 1) != 0) &&
       (0x40 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
      param_3 = (ulong *)v8::internal::Object::ConvertToPropertyKey(param_1,param_3);
    }
    if (param_3 != (ulong *)0x0) {
      local_24[0] = 0;
      v8::internal::LookupIterator::PropertyOrElement(aLStack_98,param_1,param_2,param_3,local_24,2)
      ;
      do {
        puVar2 = local_60;
        switch(local_94) {
        case 0:
          uVar5 = v8::internal::LookupIterator::HasAccess(aLStack_98);
          if ((uVar5 & 1) == 0) {
            v8::internal::Isolate::ReportFailedAccessCheck(param_1,local_60);
            if (*(int *)(param_1 + 0x2c20) != *(int *)(param_1 + 0xa8)) {
              uVar3 = v8::internal::Isolate::PromoteScheduledException(param_1);
              return uVar3;
            }
            goto switchD_014ce9d0_caseD_1;
          }
          break;
        case 2:
        case 7:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 3:
          local_c0[0] = local_c0[0] & 0xffffffffffffff00;
          puStack_b0 = (undefined8 *)0x0;
          local_c0[1] = 0;
          uStack_a0 = 0;
          local_a8 = (undefined8 *)0x0;
          if (local_78 == 0) {
            local_78 = v8::internal::Factory::SizeToString(local_80,local_50,true);
          }
          uVar1 = v8::internal::JSProxy::GetOwnPropertyDescriptor(param_1,puVar2,local_78,local_c0);
          if ((uVar1 & 0xff) == 0) goto LAB_014ceac0;
          if (uVar1 < 0x100) {
            puVar2 = (ulong *)v8::internal::JSProxy::GetPrototype(local_60);
            if (puVar2 == (ulong *)0x0) goto LAB_014ceac0;
            if (((*puVar2 & 1) == 0) || ((int)*puVar2 != *(int *)(param_1 + 0xb0))) {
              uVar3 = FUN_014ce8fc(param_1,puVar2,param_3,param_4);
              return uVar3;
            }
          }
          else if (((param_4 == 1) || (local_a8 = puStack_b0, param_4 == 0)) &&
                  (local_a8 != (undefined8 *)0x0)) {
            return *local_a8;
          }
        case 1:
        case 4:
        case 6:
switchD_014ce9d0_caseD_1:
          return *(undefined8 *)(param_1 + 0xa0);
        case 5:
          puVar2 = (ulong *)v8::internal::LookupIterator::GetAccessors();
          uVar5 = *puVar2;
          if (((uVar5 & 1) != 0) &&
             (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x52)) {
            local_c0[0] = *local_60;
            uVar3 = v8::internal::JSReceiver::GetCreationContext((JSReceiver *)local_c0);
            puVar4 = (undefined8 *)
                     v8::internal::AccessorPair::GetComponent(param_1,uVar3,puVar2,param_4);
            return *puVar4;
          }
        }
        v8::internal::LookupIterator::Next(aLStack_98);
      } while( true );
    }
  }
LAB_014ceac0:
  return *(undefined8 *)(param_1 + 0x180);
}

