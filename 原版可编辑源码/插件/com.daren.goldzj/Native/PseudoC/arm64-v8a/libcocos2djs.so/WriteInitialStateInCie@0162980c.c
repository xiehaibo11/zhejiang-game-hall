
/* v8::internal::EhFrameWriter::WriteInitialStateInCie() */

void __thiscall v8::internal::EhFrameWriter::WriteInitialStateInCie(EhFrameWriter *this)

{
  SetBaseAddressRegisterAndOffset(this,0x400000001d,0,0);
  RecordRegisterNotModified(this,0x400000001e,0);
  return;
}

