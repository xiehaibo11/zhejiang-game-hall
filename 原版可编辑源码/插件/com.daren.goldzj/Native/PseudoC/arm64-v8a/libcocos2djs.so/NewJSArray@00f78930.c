
/* v8::internal::Factory::NewJSArray(v8::internal::ElementsKind, int, int,
   v8::internal::ArrayStorageAllocationMode, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewJSArray
          (Factory *this,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 param_6)

{
  Factory *pFVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if (param_4 == 0) {
    puVar5 = (ulong *)NewJSArrayWithUnverifiedElements(this,this + 0x168,param_2,param_3,param_6);
    JSObject::ValidateElements(*puVar5);
  }
  else {
    pFVar1 = this + 0x95a0;
    lVar2 = *(long *)pFVar1;
    lVar3 = *(long *)(this + 0x95a8);
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
    uVar4 = NewJSArrayStorage(this,param_2,param_4,param_5);
    puVar5 = (ulong *)NewJSArrayWithUnverifiedElements(this,uVar4,param_2,param_3,param_6);
    uVar6 = *puVar5;
    *(long *)pFVar1 = lVar2;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar3) {
      *(long *)(this + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions((Isolate *)this);
    }
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar6;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
    }
  }
  return puVar5;
}

