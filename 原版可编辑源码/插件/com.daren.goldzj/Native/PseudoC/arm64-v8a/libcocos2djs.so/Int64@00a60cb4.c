
/* rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>::Int64(long) */

undefined8 __thiscall
rapidjson::
PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::Int64(PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
        *this,long param_1)

{
  char *__size;
  char *pcVar1;
  void *__ptr;
  void *pvVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  
  PrettyPrefix(this,6);
  plVar5 = *(long **)this;
  pcVar1 = (char *)plVar5[3];
  pcVar4 = (char *)plVar5[4];
  if (pcVar4 < pcVar1 + 0x15) {
    __ptr = (void *)plVar5[2];
    if (__ptr == (void *)0x0) {
      if (*plVar5 == 0) {
                    /* try { // try from 00a60d1c to 00b60d27 has its CatchHandler @ 00a60e40 */
        pvVar2 = operator_new(1);
                    /* try { // try from 00a60d28 to 00b60dcb has its CatchHandler @ 00a60e58 */
        *plVar5 = (long)pvVar2;
        plVar5[1] = (long)pvVar2;
      }
      pcVar4 = (char *)plVar5[5];
    }
    else {
      pcVar4 = pcVar4 + (((ulong)(pcVar4 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
                    /* try { // try from 00a60d10 to 00b60d1b has its CatchHandler @ 00a60e44 */
    }
    __size = (char *)(((long)pcVar1 - (long)__ptr) + 0x15);
    if (__size <= pcVar4) {
      __size = pcVar4;
    }
    if (__size == (char *)0x0) {
      free(__ptr);
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(__ptr,(size_t)__size);
    }
    pcVar1 = (char *)((long)pvVar2 + ((long)pcVar1 - (long)__ptr));
    plVar5[4] = (long)((long)pvVar2 + (long)__size);
    plVar5[2] = (long)pvVar2;
    plVar5[3] = (long)pcVar1;
    plVar5[3] = (long)(pcVar1 + 0x15);
  }
  else {
    plVar5[3] = (long)(pcVar1 + 0x15);
                    /* try { // try from 00a60cf0 to 00b60d07 has its CatchHandler @ 00a60e48 */
  }
  pcVar4 = pcVar1;
  if (param_1 < 0) {
    *pcVar1 = '-';
    param_1 = -param_1;
    pcVar4 = pcVar1 + 1;
  }
  lVar3 = internal::u64toa(param_1,pcVar4);
  *(long *)(*(long *)this + 0x18) = *(long *)(*(long *)this + 0x18) + (-0x15 - (long)pcVar1) + lVar3
  ;
  return 1;
}

