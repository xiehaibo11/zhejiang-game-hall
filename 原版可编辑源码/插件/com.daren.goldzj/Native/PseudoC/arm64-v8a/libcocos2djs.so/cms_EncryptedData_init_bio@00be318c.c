
void cms_EncryptedData_init_bio(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((*(long *)(puVar1[1] + 0x18) != 0) && (puVar1[2] != 0)) {
    *puVar1 = 2;
  }
  cms_EncryptedContent_init_bio();
  return;
}

