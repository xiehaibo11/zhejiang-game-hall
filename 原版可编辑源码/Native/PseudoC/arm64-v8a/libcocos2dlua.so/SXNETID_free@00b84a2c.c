
void SXNETID_free(SXNETID *a)

{
                    /* catch() { ... } // from try @ 00b84920 with catch @ 00b84a30 */
  ASN1_item_free((ASN1_VALUE *)a,(ASN1_ITEM *)SXNETID_it);
  return;
}

