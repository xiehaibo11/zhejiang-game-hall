
/* v8::internal::IdentityMap<unsigned int, v8::internal::FreeStoreAllocationPolicy>::~IdentityMap()
    */

void __thiscall
v8::internal::IdentityMap<unsigned_int,v8::internal::FreeStoreAllocationPolicy>::~IdentityMap
          (IdentityMap<unsigned_int,v8::internal::FreeStoreAllocationPolicy> *this)

{
  *(undefined ***)this = &PTR__IdentityMap_01ca5ee8;
  IdentityMapBase::Clear((IdentityMapBase *)this);
  IdentityMapBase::~IdentityMapBase((IdentityMapBase *)this);
  operator_delete(this);
  return;
}

