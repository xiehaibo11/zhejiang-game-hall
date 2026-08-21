
void * _TIFFCheckRealloc(undefined8 *param_1,void *param_2,long param_3,long param_4,
                        undefined8 param_5)

{
  void *pvVar1;
  
  if (((param_3 == 0) || (param_4 == 0)) ||
     (pvVar1 = _TIFFrealloc(param_2,param_4 * param_3), pvVar1 == (void *)0x0)) {
    TIFFErrorExt(param_1[0x77],*param_1,
                 "Failed to allocate memory for %s (%ld elements of %ld bytes each)",param_5,param_3
                 ,param_4);
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

