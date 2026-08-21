
void FUN_007c15c4(void)

{
  if ((DAT_01794c88 & 1) != 0) {
    operator_delete(DAT_01794c98);
  }
  if ((DAT_01794c70 & 1) == 0) {
    return;
  }
  operator_delete(DAT_01794c80);
  return;
}

