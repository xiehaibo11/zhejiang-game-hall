
ulong BIO_number_written(BIO *bio)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (bio != (BIO *)0x0) {
    uVar1 = bio->num_write;
  }
  return uVar1;
}

