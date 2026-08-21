
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(universe::network::OStream const&) */

OStream * __thiscall universe::network::OStream::operator=(OStream *this,OStream *param_1)

{
  void *__src;
  size_t __size;
  void *__dest;
  
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

