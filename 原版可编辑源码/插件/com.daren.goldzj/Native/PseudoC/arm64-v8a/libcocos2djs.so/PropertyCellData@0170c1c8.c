
/* v8::internal::compiler::PropertyCellData::PropertyCellData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::PropertyCell>) */

void __thiscall
v8::internal::compiler::PropertyCellData::PropertyCellData
          (PropertyCellData *this,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  
  HeapObjectData::HeapObjectData();
  iVar1 = *(int *)(*param_4 + 7);
  *(undefined8 *)(this + 0x20) = 0;
  *(int *)(this + 0x18) = iVar1 >> 1;
  return;
}

