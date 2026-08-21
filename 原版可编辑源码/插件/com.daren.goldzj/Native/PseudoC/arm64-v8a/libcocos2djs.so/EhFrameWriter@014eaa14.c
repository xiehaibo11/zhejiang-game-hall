
/* v8::internal::EhFrameWriter::EhFrameWriter(v8::internal::Zone*) */

void __thiscall v8::internal::EhFrameWriter::EhFrameWriter(EhFrameWriter *this,Zone *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(Zone **)(this + 0x38) = param_1;
  return;
}

