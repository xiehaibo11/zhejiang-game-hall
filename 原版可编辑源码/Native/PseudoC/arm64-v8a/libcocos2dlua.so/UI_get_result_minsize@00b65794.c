
int UI_get_result_minsize(UI_STRING *uis)

{
  if (*(int *)uis - 1U < 2) {
    return *(int *)(uis + 0x20);
  }
  return -1;
}

