
void jpeg_suppress_tables(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x80) = param_2;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x80) = param_2;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x80) = param_2;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x80) = param_2;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x114) = param_2;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xc0) + 0x114) = param_2;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x114) = param_2;
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 200) + 0x114) = param_2;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x114) = param_2;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x114) = param_2;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xb8) + 0x114) = param_2;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x114) = param_2;
  }
  return;
}

