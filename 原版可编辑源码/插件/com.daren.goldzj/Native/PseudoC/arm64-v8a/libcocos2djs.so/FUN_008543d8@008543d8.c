
void FUN_008543d8(void)

{
  if ((DAT_01d38d80 & 1) != 0) {
    operator_delete(DAT_01d38d90);
  }
  if ((DAT_01d38d60 & 1) != 0) {
    operator_delete(DAT_01d38d70);
  }
  if ((DAT_01d38d40 & 1) != 0) {
    operator_delete(DAT_01d38d50);
  }
  if ((DAT_01d38d20 & 1) == 0) {
    return;
  }
  operator_delete(DAT_01d38d30);
  return;
}

