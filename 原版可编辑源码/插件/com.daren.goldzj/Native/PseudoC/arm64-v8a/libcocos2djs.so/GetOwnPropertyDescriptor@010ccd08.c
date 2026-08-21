
/* v8::internal::JSReceiver::GetOwnPropertyDescriptor(v8::internal::LookupIterator*,
   v8::internal::PropertyDescriptor*) */

undefined2
v8::internal::JSReceiver::GetOwnPropertyDescriptor
          (LookupIterator *param_1,PropertyDescriptor *param_2)

{
  char *pcVar1;
  ulong *puVar2;
  int iVar3;
  bool bVar4;
  undefined2 uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  PropertyDescriptor PVar14;
  ulong uVar15;
  byte bVar16;
  Factory *this;
  uint uVar17;
  undefined8 *puVar18;
  Logger *pLVar19;
  undefined **local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_98;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  iVar3 = *(int *)(param_1 + 4);
  this = *(Factory **)(param_1 + 0x18);
  if (iVar3 != 4) {
    puVar7 = *(ulong **)(param_1 + 0x38);
    uVar6 = *puVar7;
    if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xa9) {
      lVar11 = *(long *)(param_1 + 0x20);
      if (lVar11 == 0) {
        lVar11 = Factory::SizeToString(this,*(ulong *)(param_1 + 0x48),true);
        *(long *)(param_1 + 0x20) = lVar11;
      }
      uVar5 = JSProxy::GetOwnPropertyDescriptor(this,puVar7,lVar11,param_2);
      return uVar5;
    }
    if (iVar3 == 0) {
      uVar6 = LookupIterator::HasAccess(param_1);
      if ((uVar6 & 1) != 0) {
        LookupIterator::Next(param_1);
        puVar7 = (ulong *)0x0;
LAB_010ccef4:
        iVar3 = *(int *)(param_1 + 4);
        goto joined_r0x010ccefc;
      }
      puVar7 = (ulong *)LookupIterator::GetInterceptorForFailedAccessCheck(param_1);
      if (puVar7 != (ulong *)0x0) goto LAB_010ccef4;
      uVar6 = JSObject::AllCanRead(param_1);
      if (((uVar6 & 1) == 0) || (*(int *)(param_1 + 4) != 2)) {
        if (*(long *)(param_1 + 0x48) == -1) {
          LookupIterator::RestartInternal<false>(param_1,0);
        }
        else {
          LookupIterator::RestartInternal<true>(param_1,0);
        }
        goto LAB_010ccd3c;
      }
LAB_010ccf00:
      puVar7 = (ulong *)LookupIterator::GetInterceptor(param_1);
    }
    else {
      puVar7 = (ulong *)0x0;
joined_r0x010ccefc:
      if (iVar3 == 2) goto LAB_010ccf00;
    }
    if (puVar7 != (ulong *)0x0) {
      uVar6 = *puVar7;
      lVar11 = *(long *)(param_1 + 0x18);
      if (((*(uint *)(uVar6 + 0xf) & 1) == 0) ||
         (*(uint *)(uVar6 + 0xf) != *(uint *)(lVar11 + 0xa0))) {
        puVar2 = *(ulong **)(param_1 + 0x38);
        uVar15 = **(ulong **)(param_1 + 0x30);
        if (((uVar15 & 1) == 0) ||
           (*(ushort *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) < 0xa9)) {
          puVar12 = (ulong *)Object::ConvertReceiver(lVar11);
          if (puVar12 == (ulong *)0x0) {
            return 0;
          }
          uVar6 = *puVar7;
          uVar15 = *puVar12;
        }
        PropertyCallbackArguments::PropertyCallbackArguments
                  ((PropertyCallbackArguments *)&local_d0,lVar11,
                   uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x1f),uVar15,*puVar2,
                   0x100000001);
        uVar6 = *(ulong *)(param_1 + 0x48);
        if ((uVar6 < 0xffffffff) ||
           ((uVar6 != 0xffffffffffffffff &&
            ((byte)((*(byte *)((*puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 - 1)) + 10)
                    >> 3) - 0x11) < 0xb)))) {
          local_60 = 0;
          uStack_78 = 0;
          local_80 = (RuntimeCallStats *)0x0;
          uStack_68 = 0;
          uStack_70 = 0;
          if (TracingFlags::runtime_stats != 0) {
            local_80 = (RuntimeCallStats *)(*(long *)(local_a8 + 0x9520) + 0x58a0);
            RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x8f);
          }
          pLVar19 = *(Logger **)(local_a8 + 0x9558);
          uVar15 = Logger::is_logging(pLVar19);
          if ((uVar15 & 1) != 0) {
            Logger::ApiIndexedPropertyAccess
                      (pLVar19,"interceptor-indexed-descriptor",local_b0,uVar6 & 0xffffffff);
          }
          uVar17 = *(uint *)(*puVar7 + 0xf);
          if (uVar17 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)((*puVar7 & 0xffffffff00000000 | (ulong)uVar17) + 3);
          }
          lVar13 = PropertyCallbackArguments::BasicCallIndexedGetterCallback
                             ((PropertyCallbackArguments *)&local_d0,uVar8,uVar6 & 0xffffffff,puVar7
                             );
        }
        else {
          puVar18 = *(undefined8 **)(param_1 + 0x20);
          local_60 = 0;
          uStack_78 = 0;
          local_80 = (RuntimeCallStats *)0x0;
          uStack_68 = 0;
          uStack_70 = 0;
          if (TracingFlags::runtime_stats != 0) {
            local_80 = (RuntimeCallStats *)(*(long *)(local_a8 + 0x9520) + 0x58a0);
            RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x9e);
          }
          pLVar19 = *(Logger **)(local_a8 + 0x9558);
          uVar6 = Logger::is_logging(pLVar19);
          if ((uVar6 & 1) != 0) {
            Logger::ApiNamedPropertyAccess(pLVar19,"interceptor-named-descriptor",local_b0,*puVar18)
            ;
          }
          uVar17 = *(uint *)(*puVar7 + 0xf);
          if (uVar17 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined8 *)((*puVar7 & 0xffffffff00000000 | (ulong)uVar17) + 3);
          }
          lVar13 = PropertyCallbackArguments::BasicCallNamedGetterCallback
                             ((PropertyCallbackArguments *)&local_d0,uVar8,puVar18,puVar7,0);
        }
        if (local_80 == (RuntimeCallStats *)0x0) {
          if (lVar13 == 0) goto LAB_010cd1bc;
LAB_010cd114:
          uVar6 = PropertyDescriptor::ToPropertyDescriptor(lVar11,lVar13,param_2);
          if ((*(ulong *)(param_1 + 0x48) < 0xffffffff) ||
             ((*(ulong *)(param_1 + 0x48) != 0xffffffffffffffff &&
              ((byte)((*(byte *)((*puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 - 1)) + 10
                                ) >> 3) - 0x11) < 0xb)))) {
            pcVar1 = "v8::IndexedPropertyDescriptorCallback";
          }
          else {
            pcVar1 = "v8::NamedPropertyDescriptorCallback";
          }
          if ((uVar6 & 1) == 0) {
            Utils::ReportApiFailure(pcVar1,"Invalid property descriptor.");
            bVar4 = false;
          }
          else {
            bVar4 = false;
          }
        }
        else {
          RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
          if (lVar13 != 0) goto LAB_010cd114;
LAB_010cd1bc:
          LookupIterator::Next(param_1);
          bVar4 = true;
        }
        local_d0 = &PTR__Relocatable_01cacc40;
        local_98 = 0x1baddead0baddeaf;
        *(undefined8 *)(local_c8 + 0xb790) = uStack_c0;
        if (!bVar4) {
          return 0x101;
        }
      }
    }
  }
LAB_010ccd3c:
  uVar6 = GetPropertyAttributes(param_1);
  if ((uVar6 & 0xff) == 0) {
    return 0;
  }
  uVar17 = (uint)(uVar6 >> 0x20);
  if (uVar17 == 0x40) {
    return 1;
  }
  if (*(int *)(param_1 + 4) == 5) {
    puVar7 = (ulong *)LookupIterator::GetAccessors();
    uVar15 = *puVar7;
    if (((uVar15 & 1) != 0) &&
       (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) == 0x52)) {
      uVar8 = LookupIterator::GetAccessors();
      local_d0 = (undefined **)**(undefined8 **)(param_1 + 0x38);
      uVar9 = GetCreationContext((JSReceiver *)&local_d0);
      uVar10 = AccessorPair::GetComponent(this,uVar9,uVar8,0);
      *(undefined8 *)(param_2 + 0x10) = uVar10;
      uVar8 = AccessorPair::GetComponent(this,uVar9,uVar8,1);
      PVar14 = *param_2;
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      goto LAB_010cce9c;
    }
  }
  lVar11 = Object::GetProperty(param_1,false);
  if (lVar11 == 0) {
    return 0;
  }
  bVar16 = 0x30;
  if ((uVar6 & 0x100000000) != 0) {
    bVar16 = 0x20;
  }
  PVar14 = (PropertyDescriptor)((byte)*param_2 & 0xcf | bVar16);
  *(long *)(param_2 + 8) = lVar11;
  *param_2 = PVar14;
LAB_010cce9c:
  bVar16 = 0xc;
  if ((uVar6 >> 0x20 & 4) != 0) {
    bVar16 = 8;
  }
  *param_2 = (PropertyDescriptor)((bVar16 | (byte)(uVar17 >> 1) & 1 | (byte)PVar14 & 0xf0) ^ 3);
  return 0x101;
}

