
void * FUN_00a51d04(void)

{
  void *__s;
  
  __s = (void *)(*(code *)PTR_malloc_01d1b740)(0x80);
                    /* catch() { ... } // from try @ 00a51b4c with catch @ 00a51d28 */
  if (__s != (void *)0x0) {
                    /* catch() { ... } // from try @ 00a51b40 with catch @ 00a51d2c */
                    /* catch() { ... } // from try @ 00a51b20 with catch @ 00a51d30 */
    memset(__s,0,0x80);
  }
                    /* catch() { ... } // from try @ 00a51b58 with catch @ 00a51d40 */
  return __s;
}

