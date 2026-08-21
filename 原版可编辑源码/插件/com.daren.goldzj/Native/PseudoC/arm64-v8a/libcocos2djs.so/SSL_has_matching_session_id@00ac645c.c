
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
    memcpy(auStack_144,id,(ulong)id_len);
    CRYPTO_THREAD_read_lock(ssl[1].bbio[7].num_read);
    uVar2._0_4_ = (ssl[1].bbio)->flags;
    uVar2._4_4_ = (ssl[1].bbio)->retry_reason;
    lVar3 = OPENSSL_LH_retrieve(uVar2,local_180);
    CRYPTO_THREAD_unlock(ssl[1].bbio[7].num_read);
    uVar1 = (uint)(lVar3 != 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

