
/* universe::network::AUpdates::clear() */

void __thiscall universe::network::AUpdates::clear(AUpdates *this)

{
  if (*(void **)this != (void *)0x0) {
                    /* catch() { ... } // from try @ 00a052fc with catch @ 00a05554 */
    free(*(void **)this);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

