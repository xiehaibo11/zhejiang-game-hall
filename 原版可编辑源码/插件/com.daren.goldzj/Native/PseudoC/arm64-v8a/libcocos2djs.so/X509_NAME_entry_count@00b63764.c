
int X509_NAME_entry_count(X509_NAME *name)

{
  int iVar1;
  
  if (name != (X509_NAME *)0x0) {
    iVar1 = OPENSSL_sk_num(name->entries);
    return iVar1;
  }
                    /* try { // try from 00b63770 to 00c639df has its CatchHandler @ 00b63618 */
  return 0;
}

