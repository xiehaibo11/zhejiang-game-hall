
/* rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>::Uint64(unsigned long) */

undefined8 __thiscall
rapidjson::
PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::Uint64(PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
         *this,ulong param_1)

{
  long lVar1;
  void *__ptr;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  
                    /* try { // try from 00a60dcc to 00b60eaf has its CatchHandler @ 00a60c9c */
  PrettyPrefix(this,6);
  plVar6 = *(long **)this;
  pcVar5 = (char *)plVar6[3];
  pcVar4 = (char *)plVar6[4];
  pcVar3 = pcVar5 + 0x14;
  if (pcVar4 < pcVar3) {
                    /* catch() { ... } // from try @ 00a60d10 with catch @ 00a60e44 */
    __ptr = (void *)plVar6[2];
                    /* catch() { ... } // from try @ 00a60cf0 with catch @ 00a60e48 */
    if (__ptr == (void *)0x0) {
      if (*plVar6 == 0) {
        pvVar2 = operator_new(1);
        *plVar6 = (long)pvVar2;
        plVar6[1] = (long)pvVar2;
      }
      pcVar4 = (char *)plVar6[5];
    }
    else {
      pcVar4 = pcVar4 + (((ulong)(pcVar4 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
                    /* catch() { ... } // from try @ 00a60d28 with catch @ 00a60e58 */
    }
    pcVar3 = (char *)(((long)pcVar5 - (long)__ptr) + 0x14);
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
    pcVar5 = (char *)((long)pvVar2 + ((long)pcVar5 - (long)__ptr));
                    /* try { // try from 00a60eb0 to 00b60f03 has its CatchHandler @ 00a60eb0
                       catch() { ... } // from try @ 00a60eb0 with catch @ 00a60eb0
                       catch() { ... } // from try @ 00a61190 with catch @ 00a60eb0 */
    plVar6[4] = (long)((long)pvVar2 + (long)pcVar3);
    pcVar3 = pcVar5 + 0x14;
    plVar6[2] = (long)pvVar2;
    plVar6[3] = (long)pcVar5;
  }
  plVar6[3] = (long)pcVar3;
  lVar1 = internal::u64toa(param_1,pcVar5);
  *(long *)(*(long *)this + 0x18) = *(long *)(*(long *)this + 0x18) + (-0x14 - (long)pcVar5) + lVar1
  ;
                    /* catch() { ... } // from try @ 00a60d1c with catch @ 00a60e40 */
  return 1;
}

