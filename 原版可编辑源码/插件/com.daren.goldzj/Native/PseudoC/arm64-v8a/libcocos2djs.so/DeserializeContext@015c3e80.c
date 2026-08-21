
/* v8::internal::PartialDeserializer::DeserializeContext(v8::internal::Isolate*,
   v8::internal::SnapshotData const*, bool, v8::internal::Handle<v8::internal::JSGlobalProxy>,
   v8::DeserializeInternalFieldsCallback) */

undefined8 __thiscall
v8::internal::PartialDeserializer::DeserializeContext
          (PartialDeserializer *this,SnapshotData *param_1,byte param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_2c8 [74];
  byte local_77;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Deserializer::Deserializer<v8::internal::SnapshotData_const>
            ((Deserializer *)local_2c8,param_1,false);
  local_77 = param_3 & 1;
  local_2c8[0] = &PTR__Deserializer_01cc94f8;
  uVar2 = Deserialize(local_2c8,this,param_4,param_5,param_6);
  Deserializer::~Deserializer((Deserializer *)local_2c8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

