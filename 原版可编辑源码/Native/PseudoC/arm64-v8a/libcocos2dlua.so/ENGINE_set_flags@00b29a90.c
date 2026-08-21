
int ENGINE_set_flags(ENGINE *e,int flags)

{
  *(int *)(e + 0x98) = flags;
  return 1;
}

