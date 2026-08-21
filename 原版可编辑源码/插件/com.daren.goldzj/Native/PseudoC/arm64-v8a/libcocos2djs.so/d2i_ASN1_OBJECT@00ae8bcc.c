
ASN1_OBJECT * d2i_ASN1_OBJECT(ASN1_OBJECT **a,uchar **pp,long length)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  int reason;
  int iStack_38;
  int local_34;
  long local_30;
  uchar *local_28;
  
                    /* try { // try from 00ae8bd0 to 00be8bd7 has its CatchHandler @ 00ae8c68 */
                    /* try { // try from 00ae8bd8 to 00be8bf7 has its CatchHandler @ 00ae8b08 */
  local_28 = *pp;
                    /* try { // try from 00ae8bf8 to 00be8bff has its CatchHandler @ 00ae8c68 */
                    /* try { // try from 00ae8c00 to 00be8c1f has its CatchHandler @ 00ae8b08 */
  uVar1 = ASN1_get_object(&local_28,&local_30,&local_34,&iStack_38,length);
  if ((uVar1 >> 7 & 1) == 0) {
    if (local_34 == 6) {
                    /* try { // try from 00ae8c20 to 00be8c2b has its CatchHandler @ 00ae8c68 */
      pAVar2 = c2i_ASN1_OBJECT(a,&local_28,local_30);
      if (pAVar2 == (ASN1_OBJECT *)0x0) {
        return (ASN1_OBJECT *)0x0;
      }
                    /* try { // try from 00ae8c2c to 00be8c6f has its CatchHandler @ 00ae8b08 */
      *pp = local_28;
      return pAVar2;
    }
    reason = 0x74;
  }
  else {
    reason = 0x66;
  }
  ERR_put_error(0xd,0x93,reason,"crypto/asn1/a_object.c",0xde);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae8bd0 with catch @ 00ae8c68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae8bf8 with catch @ 00ae8c68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae8c20 with catch @ 00ae8c68
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae8b70 with catch @ 00ae8c6c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae8b9c with catch @ 00ae8c6c
                        */
  return (ASN1_OBJECT *)0x0;
}

