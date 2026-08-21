
/* v8::internal::Isolate::RunHostImportModuleDynamicallyCallback(v8::internal::Handle<v8::internal::Script>,
   v8::internal::Handle<v8::internal::Object>) */

long __thiscall
v8::internal::Isolate::RunHostImportModuleDynamicallyCallback
          (Isolate *this,undefined8 param_2,ulong *param_3)

{
  Isolate *pIVar1;
  char cVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  Resolver *pRVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar7 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pIVar1 = this + 0x95a0;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar7;
    if (*(long *)(this + 0xb678) == 0) goto LAB_00f565b4;
LAB_00f56538:
    uVar7 = *param_3;
    if (((uVar7 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
      param_3 = (ulong *)Object::ConvertToString(this,param_3);
    }
    if (param_3 != (ulong *)0x0) {
      lVar4 = (**(code **)(this + 0xb678))(puVar3,param_2,param_3);
      if (lVar4 != 0) {
        return lVar4;
      }
      goto LAB_00f566e4;
    }
    uVar7 = *(ulong *)(this + 0x2bd8);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
    }
    *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
    pRVar6 = (Resolver *)Promise::Resolver::New(puVar3);
    if (pRVar6 == (Resolver *)0x0) goto LAB_00f566e4;
    cVar2 = Promise::Resolver::Reject(pRVar6,puVar3,puVar5);
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
    if (*(long *)(this + 0xb678) != 0) goto LAB_00f56538;
LAB_00f565b4:
    uVar7 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1))
                                                + 0x13)) + 0x35f);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
    }
    uVar8 = Factory::NewError((Factory *)this,puVar5,7,0,0,0);
    pRVar6 = (Resolver *)Promise::Resolver::New(puVar3);
    if (pRVar6 == (Resolver *)0x0) goto LAB_00f566e4;
    cVar2 = Promise::Resolver::Reject(pRVar6,puVar3,uVar8);
  }
  if (cVar2 != '\0') {
    lVar4 = Promise::Resolver::GetPromise();
    return lVar4;
  }
LAB_00f566e4:
  uVar8 = *(undefined8 *)(this + 0x2c20);
  *(undefined8 *)(this + 0x2c20) = *(undefined8 *)(this + 0xa8);
  *(undefined8 *)(this + 0x2bd8) = uVar8;
  return 0;
}

