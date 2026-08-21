
void cpSpaceFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
    cpSpaceDestroy(param_1);
    free(param_1);
    return;
  }
  return;
}

