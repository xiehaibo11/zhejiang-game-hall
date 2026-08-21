
/* v8::internal::EhFrameWriter::RecordRegisterFollowsInitialRule(int) */

void __thiscall
v8::internal::EhFrameWriter::RecordRegisterFollowsInitialRule(EhFrameWriter *this,int param_1)

{
  WriteByte(this,(byte)param_1 | 0xc0);
  return;
}

