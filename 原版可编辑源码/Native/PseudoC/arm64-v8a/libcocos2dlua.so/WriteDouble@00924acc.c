
/* rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>,
   rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator, 0u>::WriteDouble(double)
    */

void __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::WriteDouble(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              *this,double param_1)

{
  char *__size;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  void *__ptr;
  void *pvVar5;
  char *pcVar6;
  long *plVar7;
  int local_60;
  int iStack_5c;
  long local_58;
  
                    /* catch() { ... } // from try @ 009249e8 with catch @ 00924ae8 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((~(ulong)param_1 & 0x7ff0000000000000) == 0) {
    uVar3 = 0;
  }
  else {
    plVar7 = *(long **)this;
    pcVar6 = (char *)plVar7[3];
    pcVar4 = (char *)plVar7[4];
    if (pcVar4 < pcVar6 + 0x19) {
      __ptr = (void *)plVar7[2];
      if (__ptr == (void *)0x0) {
        if (*plVar7 == 0) {
          pvVar5 = operator_new(1);
          *plVar7 = (long)pvVar5;
          plVar7[1] = (long)pvVar5;
        }
        pcVar4 = (char *)plVar7[5];
      }
      else {
        pcVar4 = pcVar4 + (((ulong)(pcVar4 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
      }
      __size = (char *)(((long)pcVar6 - (long)__ptr) + 0x19);
      if (__size <= pcVar4) {
        __size = pcVar4;
      }
      if (__size == (char *)0x0) {
        free(__ptr);
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = realloc(__ptr,(size_t)__size);
      }
      pcVar6 = (char *)((long)pvVar5 + ((long)pcVar6 - (long)__ptr));
      plVar7[2] = (long)pvVar5;
      plVar7[3] = (long)pcVar6;
      plVar7[4] = (long)((long)pvVar5 + (long)__size);
    }
    plVar7[3] = (long)(pcVar6 + 0x19);
    if (ABS(param_1) == 0.0) {
      pcVar4 = pcVar6;
      if ((long)param_1 < 0) {
        pcVar4 = pcVar6 + 1;
        *pcVar6 = '-';
      }
      pcVar4[0] = '0';
      pcVar4[1] = '.';
      pcVar4[2] = '0';
      pcVar4 = pcVar4 + 3;
    }
    else {
      iVar1 = *(int *)(this + 0x38);
      pcVar4 = pcVar6;
      if (param_1 < 0.0) {
        *pcVar6 = '-';
        param_1 = -param_1;
        pcVar4 = pcVar6 + 1;
      }
      internal::Grisu2(param_1,pcVar4,&iStack_5c,&local_60);
      pcVar4 = (char *)internal::Prettify(pcVar4,iStack_5c,local_60,iVar1);
    }
    uVar3 = 1;
    *(char **)(*(long *)this + 0x18) =
         pcVar4 + (*(long *)(*(long *)this + 0x18) - (long)pcVar6) + -0x19;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

