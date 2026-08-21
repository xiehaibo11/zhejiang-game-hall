
void ASN1_TYPE_free(ASN1_TYPE *a)

{
                    /* try { // try from 00af098c to 00bf0993 has its CatchHandler @ 00af0ef0 */
  ASN1_item_free((ASN1_VALUE *)a,(ASN1_ITEM *)ASN1_ANY_it);
  return;
}

