
/* v8::internal::IdentityMap<unsigned long*, v8::internal::ZoneAllocationPolicy>::~IdentityMap() */

void __thiscall
v8::internal::IdentityMap<unsigned_long*,v8::internal::ZoneAllocationPolicy>::~IdentityMap
          (IdentityMap<unsigned_long*,v8::internal::ZoneAllocationPolicy> *this)

{
  *(undefined ***)this = &PTR__IdentityMap_01ca7050;
  IdentityMapBase::Clear((IdentityMapBase *)this);
  IdentityMapBase::~IdentityMapBase((IdentityMapBase *)this);
  operator_delete(this);
  return;
}

