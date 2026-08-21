
/* spine::Atlas::beginPast(spine::Atlas::Str*, char) */

undefined8 spine::Atlas::beginPast(Str *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)param_1;
  do {
    if (*(char **)(param_1 + 8) == pcVar2) {
      return 0;
    }
    pcVar3 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar3;
  } while (cVar1 != param_2);
  *(char **)param_1 = pcVar3;
  return 1;
}

