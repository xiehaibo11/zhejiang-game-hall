
/* v8::internal::SourceTextModuleInfo::RegularExportCellIndex(int) const */

int __thiscall
v8::internal::SourceTextModuleInfo::RegularExportCellIndex(SourceTextModuleInfo *this,int param_1)

{
  return *(int *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf)) +
                  (long)(param_1 * 0xc + 4) + 7) >> 1;
}

