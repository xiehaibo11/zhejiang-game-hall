
void X509_get0_pubkey(long param_1)

{
  if (param_1 != 0) {
    X509_PUBKEY_get0(*(undefined8 *)(param_1 + 0x50));
    return;
  }
  return;
}

