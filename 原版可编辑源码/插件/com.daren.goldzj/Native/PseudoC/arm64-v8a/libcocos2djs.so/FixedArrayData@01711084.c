
/* v8::internal::compiler::FixedArrayData::FixedArrayData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::FixedArray>) */

void __thiscall
v8::internal::compiler::FixedArrayData::FixedArrayData
          (FixedArrayData *this,long param_1,undefined8 param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  HeapObjectData::HeapObjectData();
  iVar1 = *(int *)(*param_4 + 3);
  this[0x1c] = (FixedArrayData)0x0;
  *(int *)(this + 0x18) = iVar1 >> 1;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = uVar2;
  return;
}

