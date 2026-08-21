
/* v8::internal::Map::CopyReplaceDescriptor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::DescriptorArray>,
   v8::internal::Descriptor*, v8::internal::InternalIndex, v8::internal::TransitionFlag) */

void v8::internal::Map::CopyReplaceDescriptor
               (undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4,
               undefined8 param_5,undefined4 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_58;
  
  uVar3 = *param_4;
  plVar1 = (long *)DescriptorArray::CopyUpTo
                             (param_1,param_3,*(uint *)(*param_2 + 0xb) >> 10 & 0x3ff,0);
  local_58 = *plVar1;
  DescriptorArray::Replace((DescriptorArray *)&local_58,param_5,param_4);
  uVar2 = LayoutDescriptor::New(param_1,param_2,plVar1,(int)*(short *)(*plVar1 + 5));
  CopyReplaceDescriptors
            (param_1,param_2,plVar1,uVar2,param_6,uVar3,"CopyReplaceDescriptor",
             *(short *)(*param_3 + 5) + -1 != (int)param_5);
  return;
}

