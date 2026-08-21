
undefined8 X509_get0_reject_objects(long param_1)

{
  if (*(long *)(param_1 + 0x138) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x138) + 8);
  }
  return 0;
}

