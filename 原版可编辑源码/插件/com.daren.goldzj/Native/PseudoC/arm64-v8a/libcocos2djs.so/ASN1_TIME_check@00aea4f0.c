
int ASN1_TIME_check(ASN1_TIME *t)

{
  int iVar1;
  
  if (t->type == 0x17) {
    iVar1 = ASN1_UTCTIME_check(t);
    return iVar1;
  }
  if (t->type == 0x18) {
                    /* try { // try from 00aea504 to 00bea50f has its CatchHandler @ 00aea540 */
    iVar1 = ASN1_GENERALIZEDTIME_check(t);
    return iVar1;
  }
                    /* try { // try from 00aea510 to 00bea653 has its CatchHandler @ 00aea3e8 */
  return 0;
}

