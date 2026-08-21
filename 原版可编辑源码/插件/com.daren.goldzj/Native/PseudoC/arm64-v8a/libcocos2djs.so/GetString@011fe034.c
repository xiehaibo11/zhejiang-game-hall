
/* v8::internal::Version::GetString(v8::internal::Vector<char>) */

void __thiscall v8::internal::Version::GetString(Version *this,undefined8 param_2)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (candidate_ != '\0') {
    pcVar1 = " (candidate)";
  }
  if (0 < patch_) {
    SNPrintF(this,param_2,"%d.%d.%d.%d%s%s",major_,minor_,build_,patch_,embedder_,pcVar1);
    return;
  }
  SNPrintF(this,param_2,"%d.%d.%d%s%s",major_,minor_,build_,embedder_,pcVar1);
  return;
}

