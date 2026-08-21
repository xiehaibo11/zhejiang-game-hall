
int SSL_has_matching_session_id(SSL *ssl,uchar *id,uint id_len)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int local_180 [14];
  uint local_148;
  undefined1 auStack_144 [292];
  
  if (id_len < 0x21) {
    local_180[0] = ssl->version;
    local_148 = id_len;
                    /* try { // try from 00ad5984 to 00bd59b3 has its CatchHandler @ 00ad5984
                       catch() { ... } // from try @ 00ad5984 with catch @ 00ad5984
                       catch() { ... } // from try @ 00ad5a1c with catch @ 00ad5984 */
    memcpy(auStack_144,id,(ulong)id_len);
    CRYPTO_THREAD_read_lock(ssl[1].bbio[7].num_read);
    uVar2._0_4_ = (ssl[1].bbio)->flags;
    uVar2._4_4_ = (ssl[1].bbio)->retry_reason;
    lVar3 = OPENSSL_LH_retrieve(uVar2,local_180);
                    /* try { // try from 00ad59b4 to 00bd59b7 has its CatchHandler @ 00ad5a5c */
    CRYPTO_THREAD_unlock(ssl[1].bbio[7].num_read);
                    /* try { // try from 00ad59b8 to 00bd59bf has its CatchHandler @ 00ad5a4c */
    uVar1 = (uint)(lVar3 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 00ad58c0 with catch @ 00ad5960 */
    uVar1 = 0;
  }
  return uVar1;
}

