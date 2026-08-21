
void spSlot_setAttachment(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x28) != param_2) {
    *(long *)(param_1 + 0x28) = param_2;
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x80);
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x40) = uVar1;
  }
  return;
}

