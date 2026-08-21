
void * FUN_00a4e340(void *param_1,size_t param_2)

{
  void *__dest;
  
                    /* try { // try from 00a4e35c to 00b4e3c7 has its CatchHandler @ 00a4e554 */
  __dest = (void *)(*(code *)PTR_malloc_017699f8)(param_2);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}

