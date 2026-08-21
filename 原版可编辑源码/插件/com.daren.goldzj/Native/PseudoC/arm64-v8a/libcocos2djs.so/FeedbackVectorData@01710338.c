
/* v8::internal::compiler::FeedbackVectorData::FeedbackVectorData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::FeedbackVector>) */

void __thiscall
v8::internal::compiler::FeedbackVectorData::FeedbackVectorData
          (FeedbackVectorData *this,long param_1,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  HeapObjectData::HeapObjectData();
  iVar2 = *(int *)(*param_4 + 0x13);
  this[0x20] = (FeedbackVectorData)0x0;
  *(double *)(this + 0x18) = (double)(long)iVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = uVar1;
  return;
}

