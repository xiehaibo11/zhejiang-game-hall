
/* v8::internal::ValueSerializer::~ValueSerializer() */

void __thiscall v8::internal::ValueSerializer::~ValueSerializer(ValueSerializer *this)

{
  IdentityMapBase *pIVar1;
  
  if (*(void **)(this + 0x10) != (void *)0x0) {
    if (*(long **)(this + 8) == (long *)0x0) {
      free(*(void **)(this + 0x10));
    }
    else {
      (**(code **)(**(long **)(this + 8) + 0x38))();
    }
  }
  pIVar1 = (IdentityMapBase *)(this + 0xc0);
  *(undefined ***)pIVar1 = &PTR__IdentityMap_01cb4f18;
  IdentityMapBase::Clear(pIVar1);
  IdentityMapBase::~IdentityMapBase(pIVar1);
  pIVar1 = (IdentityMapBase *)(this + 0x70);
  *(undefined ***)pIVar1 = &PTR__IdentityMap_01cb4f18;
  IdentityMapBase::Clear(pIVar1);
  IdentityMapBase::~IdentityMapBase(pIVar1);
  Zone::~Zone((Zone *)(this + 0x30));
  return;
}

