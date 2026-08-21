
void * _TIFFCheckRealloc(undefined8 *param_1,void *param_2,long param_3,long param_4,
                        undefined8 param_5)

{
  void *pvVar1;
  
                    /* try { // try from 0112c524 to 0122c52b has its CatchHandler @ 0112c56c */
                    /* try { // try from 0112c52c to 0122c5b7 has its CatchHandler @ 0112c4e4 */
  if (((param_3 == 0) || (param_4 == 0)) ||
     (pvVar1 = _TIFFrealloc(param_2,param_4 * param_3), pvVar1 == (void *)0x0)) {
                    /* catch() { ... } // from try @ 0112c524 with catch @ 0112c56c */
    TIFFErrorExt(param_1[0x77],*param_1,
                 "Failed to allocate memory for %s (%ld elements of %ld bytes each)",param_5,param_3
                 ,param_4);
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

