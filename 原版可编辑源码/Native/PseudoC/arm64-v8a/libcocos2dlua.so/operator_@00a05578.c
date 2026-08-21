
/* universe::network::AUpdates::TEMPNAMEPLACEHOLDERVALUE(universe::network::AUpdates const&) */

AUpdates * __thiscall universe::network::AUpdates::operator=(AUpdates *this,AUpdates *param_1)

{
  void *__src;
  size_t __size;
  void *__dest;
  
                    /* try { // try from 00a0558c to 00b055d7 has its CatchHandler @ 00a0558c
                       catch() { ... } // from try @ 00a0558c with catch @ 00a0558c
                       catch() { ... } // from try @ 00a055dc with catch @ 00a0558c */
  __src = *(void **)param_1;
  __size = *(size_t *)(param_1 + 8);
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (__size != 0) {
    *(size_t *)(this + 8) = __size;
    *(undefined8 *)(this + 0x10) = 0;
    __dest = malloc(__size);
    *(void **)this = __dest;
    memcpy(__dest,__src,__size);
  }
  return this;
}

