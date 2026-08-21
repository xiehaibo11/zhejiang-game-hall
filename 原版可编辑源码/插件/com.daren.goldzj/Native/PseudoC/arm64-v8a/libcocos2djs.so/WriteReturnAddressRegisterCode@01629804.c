
/* v8::internal::EhFrameWriter::WriteReturnAddressRegisterCode() */

void __thiscall v8::internal::EhFrameWriter::WriteReturnAddressRegisterCode(EhFrameWriter *this)

{
  WriteULeb128(this,0x1e);
  return;
}

