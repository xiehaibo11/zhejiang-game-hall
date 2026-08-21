
/* v8::internal::IC::ConfigureVectorState(v8::internal::Handle<v8::internal::Name>,
   std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map> > > const&,
   std::__ndk1::vector<v8::internal::MaybeObjectHandle,
   std::__ndk1::allocator<v8::internal::MaybeObjectHandle> >*) */

void v8::internal::IC::ConfigureVectorState(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(uint *)(param_1 + 0x1c) < 0xf) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x1c) & 0x1f) & 0x6308U) != 0)) {
    uVar2 = param_2;
  }
  FeedbackNexus::ConfigurePolymorphic((FeedbackNexus *)(param_1 + 0x50),uVar2);
  *(undefined1 *)(param_1 + 0x10) = 1;
  puVar1 = (undefined8 *)(param_1 + 0x58);
  if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x50);
  }
  OnFeedbackChanged(*(undefined8 *)(param_1 + 8),*puVar1,param_3,"Polymorphic");
  return;
}

