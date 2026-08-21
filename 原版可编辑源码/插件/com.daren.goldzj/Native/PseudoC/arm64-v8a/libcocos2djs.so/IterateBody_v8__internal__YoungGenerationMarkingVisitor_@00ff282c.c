
/* void 
   v8::internal::WasmInstanceObject::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::YoungGenerationMarkingVisitor*) */

void v8::internal::WasmInstanceObject::BodyDescriptor::
     IterateBody<v8::internal::YoungGenerationMarkingVisitor>
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  BodyDescriptorBase::IteratePointers<v8::internal::YoungGenerationMarkingVisitor>(param_2,4,0xc);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x2c,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x38,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x70,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x74,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x78,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x7c,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x80,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x84,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x88,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x8c,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x90,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x94,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x98,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x9c,param_4);
  BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0xa0,param_4);
  BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::YoungGenerationMarkingVisitor>
            (param_1,param_2,0xc4,param_3,param_4);
  return;
}

