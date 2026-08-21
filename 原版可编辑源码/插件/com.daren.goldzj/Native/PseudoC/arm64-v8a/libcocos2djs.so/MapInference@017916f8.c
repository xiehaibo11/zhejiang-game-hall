
/* v8::internal::compiler::MapInference::MapInference(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MapInference::MapInference
          (MapInference *this,JSHeapBroker *param_1,Node *param_2,Node *param_3)

{
  int iVar1;
  ulong *local_58;
  long lStack_50;
  ulong *local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  *(JSHeapBroker **)this = param_1;
  *(Node **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  local_38 = 1;
  iVar1 = NodeProperties::InferReceiverMapsUnsafe
                    (param_1,param_2,param_3,(ZoneHandleSet *)&local_38);
  uStack_40 = 0;
  if ((local_38 & 3) == 1) {
    lStack_50 = 0;
  }
  else if ((local_38 & 3) == 0) {
    lStack_50 = 1;
  }
  else {
    lStack_50 = *(long *)(local_38 + 6) - *(long *)(local_38 - 2) >> 3;
  }
  local_58 = &local_38;
  local_48 = &local_38;
  std::__ndk1::
  vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
  ::insert<v8::internal::ZoneHandleSet<v8::internal::Map>::const_iterator>
            ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
              *)(this + 0x10),*(undefined8 *)(this + 0x18),&local_48,&local_58);
  *(uint *)(this + 0x28) = (uint)(iVar1 == 2);
  return;
}

