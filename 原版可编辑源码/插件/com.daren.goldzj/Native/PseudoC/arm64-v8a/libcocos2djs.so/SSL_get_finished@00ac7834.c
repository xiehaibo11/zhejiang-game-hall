
size_t SSL_get_finished(SSL *s,void *buf,size_t count)

{
  size_t __n;
  long lVar1;
  size_t sVar2;
  
  lVar1 = *(long *)&s->read_ahead;
  if (lVar1 == 0) {
                    /* try { // try from 00ac7868 to 00bc79bb has its CatchHandler @ 00ac7868
                       catch() { ... } // from try @ 00ac7868 with catch @ 00ac7868
                       catch() { ... } // from try @ 00ac79c4 with catch @ 00ac7868 */
    sVar2 = 0;
  }
  else {
    sVar2 = (size_t)*(int *)(lVar1 + 400);
                    /* catch() { ... } // from try @ 00ac77d4 with catch @ 00ac7854 */
    __n = sVar2;
    if (count <= sVar2) {
      __n = count;
    }
    memcpy(buf,(void *)(lVar1 + 0x110),__n);
  }
  return sVar2;
}

