
/* std::__ndk1::__num_put_base::__format_int(char*, char const*, bool, unsigned int) */

void std::__ndk1::__num_put_base::__format_int
               (char *param_1,char *param_2,bool param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  
  if ((param_4 >> 0xb & 1) != 0) {
    *param_1 = '+';
    param_1 = param_1 + 1;
  }
  if ((param_4 >> 9 & 1) == 0) {
    cVar2 = *param_2;
    pcVar1 = param_1;
  }
  else {
    pcVar1 = param_1 + 1;
    *param_1 = '#';
    cVar2 = *param_2;
  }
  while (cVar2 != '\0') {
    param_2 = param_2 + 1;
    *pcVar1 = cVar2;
    pcVar1 = pcVar1 + 1;
    cVar2 = *param_2;
  }
  if ((param_4 & 0x4a) != 0x40) {
    if ((param_4 & 0x4a) == 8) {
      cVar2 = 'x';
      if ((param_4 & 0x4000) != 0) {
        cVar2 = 'X';
      }
      *pcVar1 = cVar2;
      return;
    }
    cVar2 = 'd';
    if (!param_3) {
      cVar2 = 'u';
    }
    *pcVar1 = cVar2;
    return;
  }
  *pcVar1 = 'o';
  return;
}

