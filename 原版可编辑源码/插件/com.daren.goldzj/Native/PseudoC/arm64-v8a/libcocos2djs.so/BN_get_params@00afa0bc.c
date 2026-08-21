
int BN_get_params(int which)

{
  switch(which) {
  case 0:
    return DAT_01d39068;
  case 1:
    return DAT_01d3906c;
  case 2:
    return DAT_01d39070;
  case 3:
                    /* try { // try from 00afa114 to 00bfa143 has its CatchHandler @ 00afa17c */
    return DAT_01d39074;
  default:
    return 0;
  }
}

