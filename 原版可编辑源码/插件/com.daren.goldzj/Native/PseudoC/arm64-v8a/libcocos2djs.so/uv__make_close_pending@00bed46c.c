
void uv__make_close_pending(long param_1)

{
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x168);
  *(long *)(*(long *)(param_1 + 8) + 0x168) = param_1;
  return;
}

