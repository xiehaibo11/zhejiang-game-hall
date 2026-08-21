
/* v8::internal::IdentityMap<unsigned int,
   v8::internal::FreeStoreAllocationPolicy>::DeleteArray(void*) */

void __thiscall
v8::internal::IdentityMap<unsigned_int,v8::internal::FreeStoreAllocationPolicy>::DeleteArray
          (IdentityMap<unsigned_int,v8::internal::FreeStoreAllocationPolicy> *this,void *param_1)

{
  Malloced::operator_delete(param_1,param_1);
  return;
}

