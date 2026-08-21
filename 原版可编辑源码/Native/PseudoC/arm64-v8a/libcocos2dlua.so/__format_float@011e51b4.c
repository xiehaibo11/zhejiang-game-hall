
/* std::__ndk1::__num_put_base::__format_float(char*, char const*, unsigned int) */

bool std::__ndk1::__num_put_base::__format_float(char *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  
  pcVar3 = param_1;
  if ((param_3 >> 0xb & 1) != 0) {
    pcVar3 = param_1 + 1;
    *param_1 = '+';
  }
  pcVar4 = pcVar3;
  if ((param_3 >> 10 & 1) != 0) {
    pcVar4 = pcVar3 + 1;
    *pcVar3 = '#';
  }
  uVar1 = param_3 & 0x104;
  if (uVar1 != 0x104) {
    pcVar4[0] = '.';
    pcVar4[1] = '*';
    cVar6 = *param_2;
    pcVar4 = pcVar4 + 2;
  }
  else {
    cVar6 = *param_2;
  }
  while (cVar6 != '\0') {
    param_2 = param_2 + 1;
    *pcVar4 = cVar6;
    pcVar4 = pcVar4 + 1;
    cVar6 = *param_2;
  }
  if (uVar1 == 0x100) {
    bVar2 = (param_3 & 0x4000) == 0;
    cVar5 = 'e';
    cVar6 = 'E';
  }
  else if (uVar1 == 4) {
    bVar2 = (param_3 & 0x4000) == 0;
    cVar5 = 'f';
    cVar6 = 'F';
  }
  else if (uVar1 == 0x104) {
    bVar2 = (param_3 & 0x4000) == 0;
    cVar5 = 'a';
    cVar6 = 'A';
  }
  else {
    bVar2 = (param_3 & 0x4000) == 0;
    cVar5 = 'g';
    cVar6 = 'G';
  }
  if (bVar2) {
    cVar6 = cVar5;
  }
  *pcVar4 = cVar6;
  return uVar1 != 0x104;
}

