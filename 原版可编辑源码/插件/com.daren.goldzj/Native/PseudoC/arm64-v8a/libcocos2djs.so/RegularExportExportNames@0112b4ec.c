
/* v8::internal::SourceTextModuleInfo::RegularExportExportNames(int) const */

ulong __thiscall
v8::internal::SourceTextModuleInfo::RegularExportExportNames(SourceTextModuleInfo *this,int param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this & 0xffffffff00000000;
  return uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)this + 0xf)) + (long)(param_1 * 0xc + 8) + 7
                          );
}

