
/* v8::internal::SourceTextModuleInfo::RegularExportCount() const */

int __thiscall v8::internal::SourceTextModuleInfo::RegularExportCount(SourceTextModuleInfo *this)

{
  return (*(int *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf)) +
                  3) >> 1) / 3;
}

