
void FUN_007be3c8(void)

{
  if ((DAT_0178f360 & 1) != 0) {
    operator_delete(DAT_0178f370);
  }
  if ((DAT_0178f340 & 1) != 0) {
    operator_delete(DAT_0178f350);
  }
  if ((DAT_0178f320 & 1) != 0) {
    operator_delete(DAT_0178f330);
  }
  if ((DAT_0178f300 & 1) == 0) {
    return;
  }
  operator_delete(DAT_0178f310);
  return;
}

