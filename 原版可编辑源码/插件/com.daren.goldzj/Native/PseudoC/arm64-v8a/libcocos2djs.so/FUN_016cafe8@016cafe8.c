
void FUN_016cafe8(long *param_1,long *param_2,char *param_3,uint param_4)

{
  ios_base *piVar1;
  int iVar2;
  FILE *__stream;
  char *__modes;
  long lVar3;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  *(long *)((long)param_1 + *(long *)(lVar3 + -0x18)) = param_2[3];
  lVar3 = param_2[1];
  *param_1 = lVar3;
  *(long *)((long)param_1 + *(long *)(lVar3 + -0x18)) = param_2[2];
  piVar1 = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
  std::__ndk1::ios_base::init
            (piVar1,(basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 1));
  *(undefined8 *)(piVar1 + 0x88) = 0;
  *(undefined4 *)(piVar1 + 0x90) = 0xffffffff;
  lVar3 = *param_2;
  *param_1 = lVar3;
  *(long *)((long)param_1 + *(long *)(lVar3 + -0x18)) = param_2[3];
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)(param_1 + 1));
  if (param_1[0x10] == 0) {
    __modes = "w";
    switch(param_4 & 0xfffffffd | 0x10) {
    case 0x10:
    case 0x30:
      break;
    case 0x11:
      __modes = "a";
      break;
    default:
      goto switchD_016cb0d8_caseD_12;
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
    __stream = fopen(param_3,__modes);
    param_1[0x10] = (long)__stream;
    if (__stream != (FILE *)0x0) {
      *(uint *)(param_1 + 0x14) = param_4 | 0x10;
      if (((param_4 >> 1 & 1) == 0) || (iVar2 = fseek(__stream,0,2), iVar2 == 0)) {
        return;
      }
      fclose((FILE *)param_1[0x10]);
      param_1[0x10] = 0;
    }
  }
switchD_016cb0d8_caseD_12:
  piVar1 = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
  std::__ndk1::ios_base::clear(piVar1,*(uint *)(piVar1 + 0x20) | 4);
  return;
}

