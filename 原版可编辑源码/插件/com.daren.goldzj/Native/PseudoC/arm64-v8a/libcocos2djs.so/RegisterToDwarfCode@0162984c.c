
/* v8::internal::EhFrameWriter::RegisterToDwarfCode(v8::internal::Register) */

undefined8 v8::internal::EhFrameWriter::RegisterToDwarfCode(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((1 < iVar1 - 0x1dU) && (iVar1 != 0)) {
    if (iVar1 != 0x3f) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unimplemented code");
    }
    param_1 = 0x1f;
  }
  return param_1;
}

