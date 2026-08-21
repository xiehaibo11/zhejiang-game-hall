
size_t SSL_get_peer_finished(SSL *s,void *buf,size_t count)

{
  size_t __n;
  long lVar1;
  size_t sVar2;
  
  lVar1 = *(long *)&s->read_ahead;
  if (lVar1 == 0) {
    sVar2 = 0;
  }
  else {
    sVar2 = (size_t)*(int *)(lVar1 + 0x214);
    __n = sVar2;
    if (count <= sVar2) {
      __n = count;
    }
    memcpy(buf,(void *)(lVar1 + 0x194),__n);
  }
  return sVar2;
}

