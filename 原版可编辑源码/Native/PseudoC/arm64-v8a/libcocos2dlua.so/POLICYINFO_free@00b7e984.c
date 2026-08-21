
void POLICYINFO_free(POLICYINFO *a)

{
                    /* catch() { ... } // from try @ 00b7e91c with catch @ 00b7e984 */
                    /* catch() { ... } // from try @ 00b7e890 with catch @ 00b7e988 */
  ASN1_item_free((ASN1_VALUE *)a,(ASN1_ITEM *)POLICYINFO_it);
  return;
}

