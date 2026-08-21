
char * UI_get0_action_string(UI_STRING *uis)

{
  if ((*(uint *)uis | 2) == 3) {
    return *(char **)(uis + 0x20);
  }
  return (char *)0x0;
}

