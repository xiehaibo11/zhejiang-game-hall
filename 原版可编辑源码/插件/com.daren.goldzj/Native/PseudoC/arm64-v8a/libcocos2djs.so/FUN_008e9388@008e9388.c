
void FUN_008e9388(void)

{
  if (DAT_01d36f80 != (Object *)0x0) {
    se::Object::unroot(DAT_01d36f80);
    se::RefCounter::decRef((RefCounter *)DAT_01d36f80);
    DAT_01d36f80 = (Object *)0x0;
  }
  return;
}

