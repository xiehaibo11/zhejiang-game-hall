
/* v8::internal::EhFrameWriter::GetEhFrame(v8::internal::CodeDesc*) */

void __thiscall v8::internal::EhFrameWriter::GetEhFrame(EhFrameWriter *this,CodeDesc *param_1)

{
  *(int *)(param_1 + 0x40) = *(int *)(this + 0x28) - *(int *)(this + 0x20);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(this + 0x20);
  return;
}

