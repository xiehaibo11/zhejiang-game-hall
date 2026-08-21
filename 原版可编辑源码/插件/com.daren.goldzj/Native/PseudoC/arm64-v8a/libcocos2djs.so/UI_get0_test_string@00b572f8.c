
char * UI_get0_test_string(UI_STRING *uis)

{
  if (*(int *)uis == 2) {
    return *(char **)(uis + 0x28);
  }
  return (char *)0x0;
}

