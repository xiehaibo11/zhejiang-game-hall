
char * UI_get0_result_string(UI_STRING *uis)

{
  if (*(int *)uis - 1U < 2) {
    return *(char **)(uis + 0x18);
  }
  return (char *)0x0;
}

