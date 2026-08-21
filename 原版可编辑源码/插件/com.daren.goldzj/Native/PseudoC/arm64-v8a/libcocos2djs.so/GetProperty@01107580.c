
/* v8::internal::JSProxy::GetProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSProxy>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, bool*) */

long v8::internal::JSProxy::GetProperty
               (Isolate *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
               undefined1 *param_5)

{
  Isolate *pIVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  *param_5 = 1;
  uVar2 = GetCurrentStackPosition();
  if (uVar2 < *(ulong *)(param_1 + 0x58)) {
    Isolate::StackOverflow(param_1);
    lVar7 = 0;
  }
  else {
    pIVar1 = param_1 + 0x95a0;
    uVar2 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar2;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
    }
    uVar10 = *param_2;
    uVar2 = uVar10 & 0xffffffff00000000;
    if (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | *(uint *)(uVar10 + 0xb)) - 1)) < 0xa9) {
      puVar4 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0x90,param_1 + 0x700,0,0);
      Isolate::Throw(param_1,*puVar4,0);
      lVar7 = 0;
    }
    else {
      uVar2 = uVar2 | *(uint *)(uVar10 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar2;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
      }
      puVar6 = (ulong *)Object::GetMethod(puVar3,param_1 + 0x700);
      lVar7 = 0;
      if (puVar6 != (ulong *)0x0) {
        if (((*puVar6 & 1) == 0) || ((int)*puVar6 != *(int *)(param_1 + 0xa0))) {
          local_b8 = puVar5;
          uStack_b0 = param_3;
          local_a8 = param_4;
          lVar8 = Execution::Call(param_1,puVar6,puVar3,3,&local_b8);
          lVar7 = lVar8;
          if (lVar8 != 0) {
            lVar9 = CheckGetSetTrapResult(param_1,param_3,puVar5,lVar8,0);
            lVar7 = 0;
            if (lVar9 != 0) {
              lVar7 = lVar8;
            }
          }
        }
        else {
          LookupIterator::PropertyOrElement
                    ((LookupIterator *)&local_b8,param_1,param_4,param_3,puVar5,3);
          lVar7 = Object::GetProperty((LookupIterator *)&local_b8,false);
          *param_5 = local_b8._4_4_ != 4;
        }
      }
    }
  }
  return lVar7;
}

