
int i2a_ACCESS_DESCRIPTION(BIO *bp,ACCESS_DESCRIPTION *a)

{
  i2a_ASN1_OBJECT(bp,a->method);
                    /* try { // try from 00b80680 to 00c8069f has its CatchHandler @ 00b808f8 */
  return 2;
}

