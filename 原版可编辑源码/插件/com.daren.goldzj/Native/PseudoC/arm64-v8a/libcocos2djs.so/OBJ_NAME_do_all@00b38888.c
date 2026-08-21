
void OBJ_NAME_do_all(int type,fn *fn,void *arg)

{
  int local_28 [2];
  fn *local_20;
  void *pvStack_18;
  
  local_28[0] = type;
  local_20 = fn;
  pvStack_18 = arg;
  OPENSSL_LH_doall_arg(DAT_01d3ac98,&LAB_00b388c8,local_28);
  return;
}

