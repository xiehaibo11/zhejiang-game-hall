
/* v8::internal::SerializedCodeData::GetScriptData() */

ScriptData * __thiscall v8::internal::SerializedCodeData::GetScriptData(SerializedCodeData *this)

{
  ScriptData *this_00;
  
  this_00 = operator_new(0x18);
  ScriptData::ScriptData(this_00,*(uchar **)(this + 8),*(int *)(this + 0x10));
  *this_00 = (ScriptData)((byte)*this_00 | 1);
  this[0x14] = (SerializedCodeData)0x0;
  *(undefined8 *)(this + 8) = 0;
  return this_00;
}

