
/* v8::internal::compiler::TurboCfgFile::TurboCfgFile(v8::internal::Isolate*) */

void __thiscall
v8::internal::compiler::TurboCfgFile::TurboCfgFile(TurboCfgFile *this,Isolate *param_1)

{
  char *__filename;
  byte bVar1;
  char *pcVar2;
  FILE *pFVar3;
  ios_base *this_00;
  byte local_58 [16];
  char *local_48;
  
  this_00 = (ios_base *)(this + 0xb0);
  *(undefined ***)this_00 = &PTR__ios_base_01caa698;
  Isolate::GetTurboCfgFileName(param_1,param_1);
  pcVar2 = local_48;
  bVar1 = local_58[0];
  *(undefined8 *)this = 0x1ccd1e0;
  *(undefined8 *)this_00 = 0x1ccd208;
  std::__ndk1::ios_base::init
            (this_00,(basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  *(undefined ***)this = &PTR__basic_ofstream_01ccd190;
  *(undefined ***)this_00 = &PTR__basic_ofstream_01ccd1b8;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  if (*(long *)(this + 0x80) == 0) {
    __filename = (char *)((ulong)local_58 | 1);
    if ((bVar1 & 1) != 0) {
      __filename = pcVar2;
    }
    pFVar3 = fopen(__filename,"a");
    *(FILE **)(this + 0x80) = pFVar3;
    if (pFVar3 != (FILE *)0x0) {
      *(undefined4 *)(this + 0xa0) = 0x11;
      goto joined_r0x016cb6a8;
    }
  }
  std::__ndk1::ios_base::clear
            ((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
             *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 4);
joined_r0x016cb6a8:
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  *(undefined8 *)this = 0x1ccd070;
  *(undefined8 *)(this + 0xb0) = 0x1ccd098;
  return;
}

