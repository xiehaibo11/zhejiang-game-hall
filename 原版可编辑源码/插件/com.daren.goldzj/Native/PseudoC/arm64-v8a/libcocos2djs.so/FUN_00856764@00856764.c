
void FUN_00856764(void)

{
  if ((DAT_01d53740 & 1) != 0) {
    operator_delete(DAT_01d53750);
  }
  if ((DAT_01d53728 & 1) == 0) {
    return;
  }
  operator_delete(DAT_01d53738);
  return;
}

