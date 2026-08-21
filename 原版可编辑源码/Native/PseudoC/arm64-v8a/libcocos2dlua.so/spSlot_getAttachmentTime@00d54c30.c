
float spSlot_getAttachmentTime(long param_1)

{
  return *(float *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x80) - *(float *)(param_1 + 0x40);
}

