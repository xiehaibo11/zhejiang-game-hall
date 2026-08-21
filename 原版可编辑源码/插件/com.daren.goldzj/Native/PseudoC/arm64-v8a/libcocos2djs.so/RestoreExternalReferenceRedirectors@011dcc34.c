
/* v8::internal::SerializerDeserializer::RestoreExternalReferenceRedirectors(std::__ndk1::vector<v8::internal::AccessorInfo,
   std::__ndk1::allocator<v8::internal::AccessorInfo> > const&) */

SerializerDeserializer * __thiscall
v8::internal::SerializerDeserializer::RestoreExternalReferenceRedirectors
          (SerializerDeserializer *this,vector *param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong local_18;
  
  puVar1 = *(ulong **)(param_1 + 8);
  for (puVar4 = *(ulong **)param_1; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    local_18 = *puVar4;
    uVar2 = *(uint *)(local_18 + 0x17);
    uVar3 = local_18 & 0xffffffff00000000;
    this = (SerializerDeserializer *)AccessorInfo::redirected_getter((AccessorInfo *)&local_18);
    *(SerializerDeserializer **)((uVar3 | uVar2) + 3) = this;
  }
  return this;
}

