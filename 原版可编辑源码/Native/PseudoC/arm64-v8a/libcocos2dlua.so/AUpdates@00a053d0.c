
/* universe::network::AUpdates::AUpdates(universe::network::AUpdates const&) */

void __thiscall universe::network::AUpdates::AUpdates(AUpdates *this,AUpdates *param_1)

{
  void *__src;
  size_t __size;
  void *__dest;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  __src = *(void **)param_1;
  __size = *(size_t *)(param_1 + 8);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (__size != 0) {
    *(size_t *)(this + 8) = __size;
    *(undefined8 *)(this + 0x10) = 0;
    __dest = malloc(__size);
    *(void **)this = __dest;
    memcpy(__dest,__src,__size);
    return;
  }
  return;
}

