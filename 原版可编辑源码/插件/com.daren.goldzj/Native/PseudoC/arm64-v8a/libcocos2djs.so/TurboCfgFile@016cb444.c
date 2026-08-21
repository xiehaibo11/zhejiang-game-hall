
/* v8::internal::compiler::TurboCfgFile::TurboCfgFile(v8::internal::Isolate*) */

void __thiscall
v8::internal::compiler::TurboCfgFile::TurboCfgFile(TurboCfgFile *this,Isolate *param_1)

{
  ios_base *this_00;
  char *__filename;
  byte bVar1;
  char *pcVar2;
  FILE *pFVar3;
  Isolate *in_x2;
  long lVar4;
  byte local_68 [16];
  char *local_58;
  
  Isolate::GetTurboCfgFileName(in_x2,param_1);
  pcVar2 = local_58;
  bVar1 = local_68[0];
  lVar4 = *(long *)(param_1 + 8);
  *(long *)this = lVar4;
  *(undefined8 *)(this + *(long *)(lVar4 + -0x18)) = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x10);
  *(long *)this = lVar4;
  *(undefined8 *)(this + *(long *)(lVar4 + -0x18)) = *(undefined8 *)(param_1 + 0x18);
  this_00 = (ios_base *)(this + *(long *)(*(long *)this + -0x18));
  std::__ndk1::ios_base::init
            (this_00,(basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined4 *)(this_00 + 0x90) = 0xffffffff;
  lVar4 = *(long *)(param_1 + 8);
  *(long *)this = lVar4;
  *(undefined8 *)(this + *(long *)(lVar4 + -0x18)) = *(undefined8 *)(param_1 + 0x20);
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(this + 8));
  if (*(long *)(this + 0x80) == 0) {
    __filename = (char *)((ulong)local_68 | 1);
    if ((bVar1 & 1) != 0) {
      __filename = pcVar2;
    }
    pFVar3 = fopen(__filename,"a");
    *(FILE **)(this + 0x80) = pFVar3;
    if (pFVar3 != (FILE *)0x0) {
      *(undefined4 *)(this + 0xa0) = 0x11;
      goto joined_r0x016cb578;
    }
  }
  std::__ndk1::ios_base::clear
            ((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
             *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 4);
joined_r0x016cb578:
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  lVar4 = *(long *)param_1;
  *(long *)this = lVar4;
  *(undefined8 *)(this + *(long *)(lVar4 + -0x18)) = *(undefined8 *)(param_1 + 0x28);
  return;
}

