
void BIO_free_all(BIO *a)

{
  int iVar1;
  bio_st *pbVar2;
  
  do {
    if (a == (BIO *)0x0) {
      return;
    }
    iVar1 = a->references;
    pbVar2 = a->next_bio;
    BIO_free(a);
    a = pbVar2;
  } while (iVar1 < 2);
  return;
}

