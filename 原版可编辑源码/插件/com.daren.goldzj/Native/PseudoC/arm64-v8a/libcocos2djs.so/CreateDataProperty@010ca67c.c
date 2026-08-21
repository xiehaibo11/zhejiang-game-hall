
/* v8::internal::JSObject::CreateDataProperty(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::Maybe<v8::internal::ShouldThrow>) */

undefined8
v8::internal::JSObject::CreateDataProperty(LookupIterator *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  Factory *pFVar7;
  
  cVar1 = JSReceiver::GetPropertyAttributes(param_1);
  if (cVar1 != '\0') {
    pFVar7 = (Factory *)((ulong)*(uint *)(*(long *)(param_1 + 0x30) + 4) << 0x20);
    if (*(int *)(param_1 + 4) == 4) {
      uVar3 = IsExtensible();
      if ((uVar3 & 1) != 0) {
LAB_010ca714:
        cVar1 = DefineOwnPropertyIgnoreAttributes(param_1,param_2,0,1,1);
        if (cVar1 != '\0' && param_2 != 0) {
          return 0x101;
        }
        return 0;
      }
      iVar2 = GetShouldThrow(pFVar7,param_3);
      if (iVar2 == 1) {
        return 1;
      }
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) {
        lVar6 = Factory::SizeToString(*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true)
        ;
        *(long *)(param_1 + 0x20) = lVar6;
      }
      uVar5 = 0x30;
    }
    else {
      uVar3 = JSReceiver::GetPropertyAttributes(param_1);
      if ((uVar3 & 0xff) == 0) {
        return 0;
      }
      if ((uVar3 >> 0x22 & 1) == 0) goto LAB_010ca714;
      iVar2 = GetShouldThrow(pFVar7,param_3);
      if (iVar2 == 1) {
        return 1;
      }
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) {
        lVar6 = Factory::SizeToString(*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true)
        ;
        *(long *)(param_1 + 0x20) = lVar6;
      }
      uVar5 = 0x96;
    }
    puVar4 = (undefined8 *)Factory::NewTypeError(pFVar7,uVar5,lVar6,0,0);
    Isolate::Throw((Isolate *)pFVar7,*puVar4,0);
  }
  return 0;
}

