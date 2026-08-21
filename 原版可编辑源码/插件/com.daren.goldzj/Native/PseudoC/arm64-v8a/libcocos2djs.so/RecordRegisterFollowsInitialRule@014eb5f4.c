
/* v8::internal::EhFrameWriter::RecordRegisterFollowsInitialRule(v8::internal::Register) */

void v8::internal::EhFrameWriter::RecordRegisterFollowsInitialRule
               (EhFrameWriter *param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  
  bVar1 = RegisterToDwarfCode(param_2,param_3);
  WriteByte(param_1,bVar1 | 0xc0);
  return;
}

