
void * _TIFFCheckMalloc(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  void *pvVar1;
  
  if (((param_2 == 0) || (param_3 == 0)) ||
     (pvVar1 = _TIFFrealloc((void *)0x0,param_3 * param_2), pvVar1 == (void *)0x0)) {
    TIFFErrorExt(param_1[0x77],*param_1,
                 "Failed to allocate memory for %s (%ld elements of %ld bytes each)",param_4,param_2
                 ,param_3);
    pvVar1 = (void *)0x0;
  }
  return pvVar1;
}

