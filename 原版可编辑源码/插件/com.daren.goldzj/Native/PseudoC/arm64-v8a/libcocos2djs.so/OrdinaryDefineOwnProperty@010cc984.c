
/* v8::internal::JSReceiver::OrdinaryDefineOwnProperty(v8::internal::LookupIterator*,
   v8::internal::PropertyDescriptor*, v8::Maybe<v8::internal::ShouldThrow>) */

uint v8::internal::JSReceiver::OrdinaryDefineOwnProperty
               (LookupIterator *param_1,byte *param_2,undefined8 param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  PropertyDescriptor *this;
  PropertyDescriptor *pPVar10;
  ulong uVar11;
  Isolate *this_00;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  PropertyDescriptor local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  local_d8[0] = (PropertyDescriptor)0x0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  cVar5 = GetOwnPropertyDescriptor(param_1,local_d8);
  if (cVar5 != '\0') {
    if (*(long *)(param_1 + 0x48) == -1) {
      LookupIterator::RestartInternal<false>(param_1,0);
    }
    else {
      LookupIterator::RestartInternal<true>(param_1,0);
    }
    do {
      if (*(int *)(param_1 + 4) == 2) {
        uVar7 = LookupIterator::HolderIsReceiverOrHiddenPrototype(param_1);
        if ((uVar7 & 1) != 0) {
          puVar8 = (ulong *)LookupIterator::GetInterceptor(param_1);
          uVar7 = *puVar8;
          lVar13 = *(long *)(param_1 + 0x18);
          if (((*(uint *)(uVar7 + 0x1b) & 1) == 0) ||
             (*(uint *)(uVar7 + 0x1b) != *(uint *)(lVar13 + 0xa0))) {
            puVar1 = *(ulong **)(param_1 + 0x38);
            uVar11 = **(ulong **)(param_1 + 0x30);
            if (((uVar11 & 1) == 0) ||
               (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0xa9
               )) {
              puVar9 = (ulong *)Object::ConvertReceiver(lVar13);
              if (puVar9 == (ulong *)0x0) {
                uVar12 = 0;
                uVar6 = 0;
                goto LAB_010cccc8;
              }
              uVar7 = *puVar8;
              uVar11 = *puVar9;
            }
            PropertyCallbackArguments::PropertyCallbackArguments
                      ((PropertyCallbackArguments *)&local_b0,lVar13,
                       uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x1f),uVar11,*puVar1,
                       param_3);
            this = operator_new(8);
            v8::PropertyDescriptor::PropertyDescriptor(this);
            lVar13 = *(long *)(param_2 + 0x10);
            if ((lVar13 == 0) && (*(long *)(param_2 + 0x18) == 0)) {
              lVar13 = *(long *)(param_2 + 8);
              bVar4 = *param_2;
              if ((lVar13 != 0) || ((bVar4 >> 5 & 1) != 0)) {
                pPVar10 = operator_new(8);
                if ((bVar4 >> 5 & 1) == 0) {
                  v8::PropertyDescriptor::PropertyDescriptor(pPVar10,lVar13);
                }
                else {
                  v8::PropertyDescriptor::PropertyDescriptor(pPVar10,lVar13,bVar4 >> 4 & 1);
                }
                goto LAB_010ccaf8;
              }
              bVar4 = *param_2;
            }
            else {
              pPVar10 = operator_new(8);
              v8::PropertyDescriptor::PropertyDescriptor
                        (pPVar10,lVar13,*(undefined8 *)(param_2 + 0x18));
LAB_010ccaf8:
              v8::PropertyDescriptor::~PropertyDescriptor(this);
              operator_delete(this);
              bVar4 = *param_2;
              this = pPVar10;
            }
            if ((bVar4 >> 1 & 1) != 0) {
              v8::PropertyDescriptor::set_enumerable(this,(bool)(bVar4 & 1));
              bVar4 = *param_2;
            }
            if ((bVar4 >> 3 & 1) != 0) {
              v8::PropertyDescriptor::set_configurable(this,(bool)(bVar4 >> 2 & 1));
            }
            uVar7 = *(ulong *)(param_1 + 0x48);
            if ((uVar7 < 0xffffffff) ||
               ((uVar7 != 0xffffffffffffffff &&
                (uVar11 = *puVar1,
                (byte)((*(byte *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 - 1)) + 10)
                       >> 3) - 0x11) < 0xb)))) {
              lVar13 = PropertyCallbackArguments::CallIndexedDefiner
                                 ((PropertyCallbackArguments *)&local_b0,puVar8,uVar7,this);
            }
            else {
              lVar13 = PropertyCallbackArguments::CallNamedDefiner
                                 ((PropertyCallbackArguments *)&local_b0,puVar8,
                                  *(undefined8 *)(param_1 + 0x20),this);
            }
            this_00 = *(Isolate **)(param_1 + 0x18);
            iVar2 = *(int *)(this_00 + 0xa8);
            iVar3 = *(int *)(this_00 + 0x2c20);
            if (iVar3 != iVar2) {
              Isolate::PromoteScheduledException(this_00);
              uVar12 = 0;
            }
            else {
              uVar12 = (uint)(lVar13 != 0);
            }
            v8::PropertyDescriptor::~PropertyDescriptor(this);
            operator_delete(this);
            local_78 = 0x1baddead0baddeaf;
            local_b0 = &PTR__Relocatable_01cacc40;
            *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
            if (iVar3 != iVar2) {
              uVar6 = 0;
              goto LAB_010cccc8;
            }
            if (uVar12 != 0) goto LAB_010cccf4;
          }
        }
      }
      else if (*(int *)(param_1 + 4) == 4) {
        if (*(long *)(param_1 + 0x48) == -1) {
          LookupIterator::RestartInternal<false>(param_1,0);
        }
        else {
          LookupIterator::RestartInternal<true>(param_1,0);
        }
        uVar12 = JSObject::IsExtensible(*(undefined8 *)(param_1 + 0x30));
        uVar6 = ValidateAndApplyPropertyDescriptor
                          (uVar14,param_1,uVar12 & 1,param_2,local_d8,param_3,0);
        uVar12 = uVar6 >> 8 & 0xff;
        uVar6 = uVar6 & 0xff;
        goto LAB_010cccc8;
      }
      LookupIterator::Next(param_1);
    } while( true );
  }
  uVar6 = 0;
  uVar12 = 0;
LAB_010cccc8:
  return uVar6 | uVar12 << 8;
LAB_010cccf4:
  uVar6 = 1;
  uVar12 = 1;
  goto LAB_010cccc8;
}

