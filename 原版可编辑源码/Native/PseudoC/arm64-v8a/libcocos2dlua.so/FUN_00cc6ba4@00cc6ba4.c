
void FUN_00cc6ba4(long *param_1,char *param_2,uint param_3)

{
  ios_base *this;
  int iVar1;
  FILE *__stream;
  char *__modes;
  
  *(undefined8 *)(param_1 + 0x16) = 0x16cde48;
  *param_1 = 0x16cde20;
  std::__ndk1::ios_base::init
            ((ios_base *)(param_1 + 0x16),
             (basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 1));
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *param_1 = (long)&PTR__basic_ofstream_016cddd0;
  param_1[0x16] = (long)&PTR__basic_ofstream_016cddf8;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 1));
  if (param_1[0x10] == 0) {
    __modes = "w";
    switch(param_3 & 0xfffffffd | 0x10) {
    case 0x10:
    case 0x30:
      break;
    case 0x11:
      __modes = "a";
      break;
    default:
      goto switchD_00cc6c80_caseD_12;
    case 0x14:
    case 0x34:
      __modes = "wb";
      break;
    case 0x15:
      __modes = "ab";
      break;
    case 0x18:
      __modes = "r+";
      break;
    case 0x19:
      __modes = "a+";
      break;
    case 0x1c:
      __modes = "r+b";
      break;
    case 0x1d:
      __modes = "a+b";
      break;
    case 0x38:
      __modes = "w+";
      break;
    case 0x3c:
      __modes = "w+b";
    }
    __stream = fopen(param_2,__modes);
    param_1[0x10] = (long)__stream;
    if (__stream != (FILE *)0x0) {
      *(uint *)(param_1 + 0x14) = param_3 | 0x10;
      if ((param_3 >> 1 & 1) == 0) {
        return;
      }
      iVar1 = fseek(__stream,0,2);
      if (iVar1 == 0) {
        return;
      }
      fclose((FILE *)param_1[0x10]);
      param_1[0x10] = 0;
    }
  }
switchD_00cc6c80_caseD_12:
  this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
  std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 4);
  return;
}

