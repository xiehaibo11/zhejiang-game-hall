
void spSlot_setAttachmentTime(float param_1,long param_2)

{
  *(float *)(param_2 + 0x40) = *(float *)(*(long *)(*(long *)(param_2 + 8) + 8) + 0x80) - param_1;
  return;
}

