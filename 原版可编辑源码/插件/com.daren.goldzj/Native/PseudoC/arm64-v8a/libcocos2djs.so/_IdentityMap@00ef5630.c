
/* v8::internal::IdentityMap<unsigned long, v8::internal::FreeStoreAllocationPolicy>::~IdentityMap()
    */

void __thiscall
v8::internal::IdentityMap<unsigned_long,v8::internal::FreeStoreAllocationPolicy>::~IdentityMap
          (IdentityMap<unsigned_long,v8::internal::FreeStoreAllocationPolicy> *this)

{
  *(undefined ***)this = &PTR__IdentityMap_01ca43a8;
  IdentityMapBase::Clear((IdentityMapBase *)this);
  IdentityMapBase::~IdentityMapBase((IdentityMapBase *)this);
  return;
}

