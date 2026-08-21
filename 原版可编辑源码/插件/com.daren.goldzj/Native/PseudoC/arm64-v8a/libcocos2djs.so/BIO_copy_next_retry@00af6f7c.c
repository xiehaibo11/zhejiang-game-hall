
void BIO_copy_next_retry(BIO *b)

{
                    /* catch() { ... } // from try @ 00af6f00 with catch @ 00af6f84 */
  b->flags = b->flags | b->next_bio->flags & 0xfU;
  b->retry_reason = b->next_bio->retry_reason;
  return;
}

