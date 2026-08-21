
/* ResKey::getInstance() */

void ResKey::getInstance(void)

{
  if ((DAT_01787ed0 == (undefined8 *)0x0) &&
     (DAT_01787ed0 = operator_new(0x10,(nothrow_t *)&std::nothrow),
     DAT_01787ed0 != (undefined8 *)0x0)) {
    *DAT_01787ed0 = 0;
    *(undefined4 *)(DAT_01787ed0 + 1) = 0;
  }
  return;
}

