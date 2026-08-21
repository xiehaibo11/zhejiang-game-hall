
/* universe::Branches::getInstance() */

void universe::Branches::getInstance(void)

{
  if (DAT_01782280 == (void *)0x0) {
    DAT_01782280 = operator_new(1,(nothrow_t *)&std::nothrow);
  }
  return;
}

