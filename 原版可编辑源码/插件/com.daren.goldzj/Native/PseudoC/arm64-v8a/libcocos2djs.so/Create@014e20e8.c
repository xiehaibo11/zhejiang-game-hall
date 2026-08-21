
/* v8::internal::ExternalReference::Create(v8::internal::IsolateAddressId, v8::internal::Isolate*)
    */

void v8::internal::ExternalReference::Create(undefined4 param_1,Isolate *param_2)

{
  Isolate::get_address_from_id(param_2,param_1);
  return;
}

