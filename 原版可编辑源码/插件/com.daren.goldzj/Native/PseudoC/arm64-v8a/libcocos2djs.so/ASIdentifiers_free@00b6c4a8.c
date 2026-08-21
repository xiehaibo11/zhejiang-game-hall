
void ASIdentifiers_free(ASIdentifiers *a)

{
                    /* try { // try from 00b6c4b0 to 00c6c4b3 has its CatchHandler @ 00b6c6f0 */
  ASN1_item_free((ASN1_VALUE *)a,(ASN1_ITEM *)ASIdentifiers_it);
  return;
}

