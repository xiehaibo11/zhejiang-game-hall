
/* v8::internal::ValueSerializer::TransferArrayBuffer(unsigned int,
   v8::internal::Handle<v8::internal::JSArrayBuffer>) */

void __thiscall
v8::internal::ValueSerializer::TransferArrayBuffer
          (ValueSerializer *this,undefined4 param_1,ulong *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)IdentityMapBase::GetEntry((IdentityMapBase *)(this + 0xc0),*param_3);
  *puVar1 = param_1;
  return;
}

