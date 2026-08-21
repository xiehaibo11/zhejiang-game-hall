
char * UI_method_get_prompt_constructor(UI *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_1 != (UI *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x30);
  }
  return pcVar1;
}

