
bool SCT_signature_is_complete(int *param_1)

{
  if (*param_1 != 0) {
    return false;
  }
  if ((char)param_1[0x10] != '\x04') {
    return false;
  }
  if ((*(byte *)((long)param_1 + 0x41) | 2) != 3) {
    return false;
  }
  if (*(long *)(param_1 + 0x12) != 0) {
    return *(long *)(param_1 + 0x14) != 0;
  }
  return false;
}

