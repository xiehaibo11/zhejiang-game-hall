
int X509_REQ_set_subject_name(X509_REQ *req,X509_NAME *name)

{
  int iVar1;
  
  if (req != (X509_REQ *)0x0) {
    *(undefined4 *)&req->signature = 1;
    iVar1 = X509_NAME_set((X509_NAME **)(req + 1),name);
    return iVar1;
  }
  return 0;
}

