
/* rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>::Uint(unsigned int) */

undefined8 __thiscall
rapidjson::
PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::Uint(PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
       *this,uint param_1)

{
  long lVar1;
  void *__ptr;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  
  PrettyPrefix(this,6);
  plVar6 = *(long **)this;
  pcVar5 = (char *)plVar6[3];
  pcVar4 = (char *)plVar6[4];
  pcVar3 = pcVar5 + 10;
  if (pcVar4 < pcVar3) {
    __ptr = (void *)plVar6[2];
    if (__ptr == (void *)0x0) {
      if (*plVar6 == 0) {
        pvVar2 = operator_new(1);
        *plVar6 = (long)pvVar2;
        plVar6[1] = (long)pvVar2;
      }
      pcVar4 = (char *)plVar6[5];
    }
    else {
                    /* catch() { ... } // from try @ 00a609b0 with catch @ 00a60c44 */
      pcVar4 = pcVar4 + (((ulong)(pcVar4 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    pcVar3 = (char *)(((long)pcVar5 - (long)__ptr) + 10);
    if (pcVar3 <= pcVar4) {
      pcVar3 = pcVar4;
    }
    if (pcVar3 == (char *)0x0) {
      free(__ptr);
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(__ptr,(size_t)pcVar3);
    }
                    /* try { // try from 00a60c9c to 00b60cef has its CatchHandler @ 00a60c9c
                       catch() { ... } // from try @ 00a60c9c with catch @ 00a60c9c
                       catch() { ... } // from try @ 00a60dcc with catch @ 00a60c9c */
    pcVar5 = (char *)((long)pvVar2 + ((long)pcVar5 - (long)__ptr));
    plVar6[4] = (long)((long)pvVar2 + (long)pcVar3);
    pcVar3 = pcVar5 + 10;
    plVar6[2] = (long)pvVar2;
    plVar6[3] = (long)pcVar5;
  }
  plVar6[3] = (long)pcVar3;
  lVar1 = internal::u32toa(param_1,pcVar5);
  *(long *)(*(long *)this + 0x18) = *(long *)(*(long *)this + 0x18) + (-10 - (long)pcVar5) + lVar1;
                    /* catch() { ... } // from try @ 00a609a4 with catch @ 00a60c2c */
                    /* catch() { ... } // from try @ 00a60998 with catch @ 00a60c30 */
                    /* catch() { ... } // from try @ 00a60978 with catch @ 00a60c34 */
  return 1;
}

