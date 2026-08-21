
/* v8::internal::Version::GetSONAME(v8::internal::Vector<char>) */

void __thiscall v8::internal::Version::GetSONAME(Version *this,undefined8 param_2)

{
  char *pcVar1;
  
  if ((soname_ != (undefined *)0x0) && (*soname_ != '\0')) {
    SNPrintF(this,param_2,"%s");
    return;
  }
  pcVar1 = "";
  if (candidate_ != '\0') {
    pcVar1 = "-candidate";
  }
  if (0 < patch_) {
    SNPrintF(this,param_2,"libv8-%d.%d.%d.%d%s%s.so",major_,minor_,build_,patch_,embedder_,pcVar1);
    return;
  }
  SNPrintF(this,param_2,"libv8-%d.%d.%d%s%s.so",major_,minor_,build_,embedder_,pcVar1);
  return;
}

