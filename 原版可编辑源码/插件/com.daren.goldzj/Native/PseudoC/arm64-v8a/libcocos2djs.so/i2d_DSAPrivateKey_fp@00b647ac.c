
int i2d_DSAPrivateKey_fp(FILE *fp,DSA *dsa)

{
  int iVar1;
  
                    /* try { // try from 00b647b4 to 00c647bb has its CatchHandler @ 00b6485c */
                    /* try { // try from 00b647bc to 00c6488b has its CatchHandler @ 00b646b4 */
  iVar1 = ASN1_i2d_fp(i2d_DSAPrivateKey,fp,dsa);
  return iVar1;
}

