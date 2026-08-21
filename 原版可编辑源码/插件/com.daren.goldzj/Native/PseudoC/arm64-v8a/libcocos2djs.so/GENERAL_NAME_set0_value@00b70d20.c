
void GENERAL_NAME_set0_value(GENERAL_NAME *a,int type,void *value)

{
  if ((uint)type < 9) {
    (a->d).ptr = value;
  }
  a->type = type;
  return;
}

