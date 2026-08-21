
int UI_get_result_maxsize(UI_STRING *uis)

{
  if (*(int *)uis - 1U < 2) {
    return *(int *)(uis + 0x24);
  }
  return -1;
}

