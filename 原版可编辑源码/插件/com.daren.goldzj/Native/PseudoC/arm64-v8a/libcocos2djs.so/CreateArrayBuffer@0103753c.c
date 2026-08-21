
/* v8::internal::Genesis::CreateArrayBuffer(v8::internal::Handle<v8::internal::String>,
   v8::internal::Genesis::ArrayBufferKind) */

ulong * __thiscall
v8::internal::Genesis::CreateArrayBuffer(Genesis *this,undefined8 param_2,int param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  Isolate *pIVar5;
  
  pIVar5 = *(Isolate **)this;
  uVar4 = *(ulong *)(pIVar5 + 0x2bc8) & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(pIVar5 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar4);
  }
  uVar2 = Factory::NewJSObject((Factory *)pIVar5,puVar1,1);
  FUN_01036ca4(*(undefined8 *)this,uVar2,param_2);
  puVar1 = (ulong *)FUN_01028494(*(undefined8 *)this,param_2,0x424,0x30,0,uVar2,0xca);
  *(undefined2 *)((*puVar1 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar1 + 0xb)) + 0x15) = 0xffff;
  *(undefined2 *)((*puVar1 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar1 + 0xb)) + 0x13) = 1;
  JSObject::AddProperty(*(long *)this,uVar2,*(long *)this + 0x5d0,puVar1,2);
  if (param_3 == 1) {
    FUN_01036d1c(*(long *)this,uVar2,*(long *)this + 0x568,0x209,0);
    uVar3 = 0x20a;
  }
  else {
    if (param_3 != 0) {
      return puVar1;
    }
    FUN_01036ba4(*(undefined8 *)this,puVar1,"isView",0xcd,1,1);
    FUN_01036d1c(*(long *)this,uVar2,*(long *)this + 0x568,0xcc,0);
    uVar3 = 0xce;
  }
  FUN_01029064(*(undefined8 *)this,uVar2,"slice",uVar3,2,1,2);
  return puVar1;
}

