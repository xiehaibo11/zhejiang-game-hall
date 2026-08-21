
void * GENERAL_NAME_get0_value(GENERAL_NAME *a,int *ptype)

{
  if (ptype != (int *)0x0) {
    *ptype = a->type;
  }
  if ((uint)a->type < 9) {
    return (a->d).ptr;
  }
  return (void *)0x0;
}

