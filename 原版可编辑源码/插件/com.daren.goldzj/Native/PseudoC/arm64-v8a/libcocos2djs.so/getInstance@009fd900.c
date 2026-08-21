
/* universe::Branches::getInstance() */

void universe::Branches::getInstance(void)

{
  if (DAT_01d38a40 == (void *)0x0) {
                    /* try { // try from 009fd91c to 00afd92b has its CatchHandler @ 009fdac4 */
    DAT_01d38a40 = operator_new(1,(nothrow_t *)&std::nothrow);
  }
                    /* try { // try from 009fd92c to 00afda47 has its CatchHandler @ 009fdaf0 */
  return;
}

