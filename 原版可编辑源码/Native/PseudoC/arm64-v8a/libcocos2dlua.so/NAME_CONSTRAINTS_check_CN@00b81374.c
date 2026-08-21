
int NAME_CONSTRAINTS_check_CN(X509 *param_1,undefined8 param_2)

{
  int loc;
  int iVar1;
  X509_NAME *name;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *in;
  undefined4 local_68 [2];
  int *local_60;
  int local_58;
  undefined4 local_54;
  uchar *local_50;
  undefined8 local_48;
  uchar *local_38;
  
  local_60 = &local_58;
                    /* try { // try from 00b81384 to 00c813bb has its CatchHandler @ 00b81274 */
  local_48 = 0;
  local_54 = 0x16;
  local_68[0] = 2;
  name = X509_get_subject_name(param_1);
  loc = X509_NAME_get_index_by_NID(name,0xd,-1);
                    /* try { // try from 00b813bc to 00c813c7 has its CatchHandler @ 00b81438 */
  do {
    if (loc == -1) {
                    /* try { // try from 00b81450 to 00c814a7 has its CatchHandler @ 00b81274 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8144c with catch @ 00b81474
                        */
      return 0;
    }
                    /* try { // try from 00b813d8 to 00c813db has its CatchHandler @ 00b81494 */
    ne = X509_NAME_get_entry(name,loc);
                    /* try { // try from 00b813dc to 00c8144b has its CatchHandler @ 00b81274 */
    in = X509_NAME_ENTRY_get_data(ne);
    iVar1 = asn1_valid_host();
    if (iVar1 != 0) {
      local_58 = ASN1_STRING_to_UTF8(&local_38,in);
      if (local_58 < 1) {
        return 0x11;
      }
      local_50 = local_38;
      iVar1 = FUN_00b81230(local_68,param_2);
      CRYPTO_free(local_38);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b812d8 with catch @ 00b81434
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b81358 with catch @ 00b81438
                       catch(type#1 @ 00000000) { ... } // from try @ 00b813bc with catch @ 00b81438
                        */
    loc = X509_NAME_get_index_by_NID(name,0xd,loc);
                    /* try { // try from 00b8144c to 00c8144f has its CatchHandler @ 00b81474 */
  } while( true );
}

