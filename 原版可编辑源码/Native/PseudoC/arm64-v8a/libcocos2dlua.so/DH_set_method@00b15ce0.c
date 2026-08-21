
int DH_set_method(DH *dh,DH_METHOD *meth)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)&(dh->ex_data).dummy + 0x28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(dh);
  }
  ENGINE_finish((ENGINE *)dh->meth);
  *(DH_METHOD **)&(dh->ex_data).dummy = meth;
  dh->meth = (DH_METHOD *)0x0;
  if (meth->init != (_func_1704 *)0x0) {
    (*meth->init)(dh);
  }
  return 1;
}

