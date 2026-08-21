
int DSO_flags(DSO *dso)

{
  int iVar1;
  
  iVar1 = 0;
  if (dso != (DSO *)0x0) {
    iVar1 = dso->flags;
  }
  return iVar1;
}

