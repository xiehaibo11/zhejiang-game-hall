
/* v8::internal::SourceTextModuleDescriptor::GetCellIndexKind(int) */

uint v8::internal::SourceTextModuleDescriptor::GetCellIndexKind(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1 >> 0x1e & 2;
  if (0 < param_1) {
    uVar1 = 1;
  }
  return uVar1;
}

