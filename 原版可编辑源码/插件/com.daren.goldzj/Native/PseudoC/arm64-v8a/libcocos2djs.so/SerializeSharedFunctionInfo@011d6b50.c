
/* v8::internal::CodeSerializer::SerializeSharedFunctionInfo(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

ScriptData * __thiscall
v8::internal::CodeSerializer::SerializeSharedFunctionInfo(CodeSerializer *this,undefined8 param_2)

{
  ScriptData *this_00;
  SerializedCodeData aSStack_38 [8];
  uchar *local_30;
  int local_28;
  
  (**(code **)(*(long *)this + 0x18))(this,10,0,param_2);
  Serializer::SerializeDeferredObjects((Serializer *)this);
  Serializer::Pad((Serializer *)this,0);
  SerializedCodeData::SerializedCodeData(aSStack_38,(vector *)(this + 0x50),this);
  this_00 = operator_new(0x18);
  ScriptData::ScriptData(this_00,local_30,local_28);
  *this_00 = (ScriptData)((byte)*this_00 | 1);
  return this_00;
}

