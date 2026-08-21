
int UI_get_result_maxsize(UI_STRING *uis)

{
  if (*(int *)uis - 1U < 2) {
                    /* catch() { ... } // from try @ 00b5738c with catch @ 00b57344 */
    return *(int *)(uis + 0x24);
  }
  return -1;
}

