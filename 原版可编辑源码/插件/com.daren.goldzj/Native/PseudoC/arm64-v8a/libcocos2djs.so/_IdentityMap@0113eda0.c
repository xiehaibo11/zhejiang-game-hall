
/* v8::internal::IdentityMap<unsigned int, v8::internal::ZoneAllocationPolicy>::~IdentityMap() */

void __thiscall
v8::internal::IdentityMap<unsigned_int,v8::internal::ZoneAllocationPolicy>::~IdentityMap
          (IdentityMap<unsigned_int,v8::internal::ZoneAllocationPolicy> *this)

{
  *(undefined ***)this = &PTR__IdentityMap_01cb4f18;
  IdentityMapBase::Clear((IdentityMapBase *)this);
  IdentityMapBase::~IdentityMapBase((IdentityMapBase *)this);
  return;
}

