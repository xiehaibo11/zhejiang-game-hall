
/* rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>,
   rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator, 0u>::Uint(unsigned int) */

undefined8 __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::Uint(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
       *this,uint param_1)

{
  char *__size;
  long lVar1;
  void *__ptr;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  
  Prefix(this,6);
  plVar5 = *(long **)this;
  pcVar4 = (char *)plVar5[3];
  pcVar3 = (char *)plVar5[4];
  if (pcVar3 < pcVar4 + 10) {
    __ptr = (void *)plVar5[2];
    if (__ptr == (void *)0x0) {
      if (*plVar5 == 0) {
        pvVar2 = operator_new(1);
        *plVar5 = (long)pvVar2;
        plVar5[1] = (long)pvVar2;
      }
      pcVar3 = (char *)plVar5[5];
    }
    else {
      pcVar3 = pcVar3 + (((ulong)(pcVar3 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
                    /* try { // try from 009241bc to 00a241ef has its CatchHandler @ 00924240 */
    }
    __size = (char *)(((long)pcVar4 - (long)__ptr) + 10);
                    /* try { // try from 009241f0 to 00a2428b has its CatchHandler @ 009240a4 */
    if (__size <= pcVar3) {
      __size = pcVar3;
    }
    if (__size == (char *)0x0) {
      free(__ptr);
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(__ptr,(size_t)__size);
    }
    pcVar4 = (char *)((long)pvVar2 + ((long)pcVar4 - (long)__ptr));
    plVar5[2] = (long)pvVar2;
    plVar5[3] = (long)pcVar4;
    plVar5[4] = (long)((long)pvVar2 + (long)__size);
  }
                    /* try { // try from 00924170 to 00a241a3 has its CatchHandler @ 00924270 */
  plVar5[3] = (long)(pcVar4 + 10);
  lVar1 = internal::u32toa(param_1,pcVar4);
  *(long *)(*(long *)this + 0x18) = (lVar1 - (long)pcVar4) + *(long *)(*(long *)this + 0x18) + -10;
                    /* try { // try from 009241a4 to 00a241b7 has its CatchHandler @ 0092423c */
  return 1;
}

