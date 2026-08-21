
void spSlot_dispose(void *param_1)

{
                    /* catch() { ... } // from try @ 00d54f5c with catch @ 00d54bc4 */
  _spFree(*(void **)((long)param_1 + 0x38));
  _spFree(*(void **)((long)param_1 + 0x20));
  _spFree(param_1);
  return;
}

