
/* v8::internal::SerializedCodeData::SerializedCodeData(v8::internal::ScriptData*) */

void __thiscall
v8::internal::SerializedCodeData::SerializedCodeData(SerializedCodeData *this,ScriptData *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = (SerializedCodeData)0x0;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined ***)this = &PTR__SerializedData_01cbb8a0;
  *(undefined8 *)(this + 8) = uVar2;
  return;
}

