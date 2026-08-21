
void FUN_007c1580(void)

{
  if ((DAT_01794c50 & 1) != 0) {
    operator_delete(DAT_01794c60);
  }
  if ((DAT_01794c38 & 1) == 0) {
    return;
  }
  operator_delete(DAT_01794c48);
  return;
}

