
undefined8 X509_get0_trust_objects(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x138) != (undefined8 *)0x0) {
    return **(undefined8 **)(param_1 + 0x138);
  }
  return 0;
}

