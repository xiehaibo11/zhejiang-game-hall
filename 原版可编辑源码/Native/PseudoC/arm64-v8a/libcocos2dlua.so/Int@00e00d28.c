
/* rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,
   rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator,
   0u>::Int(int) */

undefined8 __thiscall
rapidjson::
PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::Int(PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
      *this,int param_1)

{
  char *__size;
  long lVar1;
  void *__ptr;
  void *pvVar2;
  char *pcVar3;
  long *plVar4;
  char *pcVar5;
  
  PrettyPrefix(this,6);
  plVar4 = *(long **)this;
  pcVar5 = (char *)plVar4[3];
  pcVar3 = (char *)plVar4[4];
  if (pcVar3 < pcVar5 + 0xb) {
    __ptr = (void *)plVar4[2];
    if (__ptr == (void *)0x0) {
      if (*plVar4 == 0) {
        pvVar2 = operator_new(1);
        *plVar4 = (long)pvVar2;
        plVar4[1] = (long)pvVar2;
      }
      pcVar3 = (char *)plVar4[5];
    }
    else {
      pcVar3 = pcVar3 + (((ulong)(pcVar3 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = (char *)(((long)pcVar5 - (long)__ptr) + 0xb);
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
    pcVar5 = (char *)((long)pvVar2 + ((long)pcVar5 - (long)__ptr));
    plVar4[2] = (long)pvVar2;
    plVar4[3] = (long)pcVar5;
    plVar4[4] = (long)((long)pvVar2 + (long)__size);
  }
  plVar4[3] = (long)(pcVar5 + 0xb);
  pcVar3 = pcVar5;
  if (param_1 < 0) {
    *pcVar5 = '-';
    param_1 = -param_1;
    pcVar3 = pcVar5 + 1;
  }
  lVar1 = internal::u32toa(param_1,pcVar3);
  *(long *)(*(long *)this + 0x18) = (lVar1 - (long)pcVar5) + *(long *)(*(long *)this + 0x18) + -0xb;
  return 1;
}

