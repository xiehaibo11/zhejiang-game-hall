
void POLICY_MAPPING_free(POLICY_MAPPING *a)

{
                    /* try { // try from 00b8283c to 00c8283f has its CatchHandler @ 00b829d4 */
  ASN1_item_free((ASN1_VALUE *)a,(ASN1_ITEM *)POLICY_MAPPING_it);
  return;
}

