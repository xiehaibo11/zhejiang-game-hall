
/* rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>,
   rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator, 0u>::WriteDouble(double)
    */

void __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::WriteDouble(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              *this,double param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  void *__ptr;
  void *pvVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  int local_60;
  int iStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((~(ulong)param_1 & 0x7ff0000000000000) == 0) {
    uVar3 = 0;
  }
  else {
    plVar8 = *(long **)this;
    pcVar7 = (char *)plVar8[3];
    pcVar6 = (char *)plVar8[4];
    pcVar4 = pcVar7 + 0x19;
                    /* try { // try from 00a61860 to 00b618b3 has its CatchHandler @ 00a61860
                       catch() { ... } // from try @ 00a61860 with catch @ 00a61860
                       catch() { ... } // from try @ 00a619a8 with catch @ 00a61860 */
    if (pcVar6 < pcVar4) {
      __ptr = (void *)plVar8[2];
      if (__ptr == (void *)0x0) {
        if (*plVar8 == 0) {
          pvVar5 = operator_new(1);
          *plVar8 = (long)pvVar5;
          plVar8[1] = (long)pvVar5;
        }
        pcVar6 = (char *)plVar8[5];
      }
      else {
        pcVar6 = pcVar6 + (((ulong)(pcVar6 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
      }
      pcVar4 = (char *)(((long)pcVar7 - (long)__ptr) + 0x19);
      if (pcVar4 <= pcVar6) {
        pcVar4 = pcVar6;
      }
      if (pcVar4 == (char *)0x0) {
        free(__ptr);
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = realloc(__ptr,(size_t)pcVar4);
      }
      pcVar7 = (char *)((long)pvVar5 + ((long)pcVar7 - (long)__ptr));
      plVar8[4] = (long)((long)pvVar5 + (long)pcVar4);
      pcVar4 = pcVar7 + 0x19;
      plVar8[2] = (long)pvVar5;
      plVar8[3] = (long)pcVar7;
                    /* try { // try from 00a619a8 to 00b61a07 has its CatchHandler @ 00a61860 */
    }
    plVar8[3] = (long)pcVar4;
    if (ABS(param_1) == 0.0) {
      pcVar4 = pcVar7;
      if ((long)param_1 < 0) {
        pcVar4 = pcVar7 + 1;
        *pcVar7 = '-';
      }
      pcVar4[0] = '0';
      pcVar4[1] = '.';
                    /* try { // try from 00a618b4 to 00b618bf has its CatchHandler @ 00a619e4 */
      pcVar4[2] = '0';
      pcVar4 = pcVar4 + 3;
    }
    else {
      iVar1 = *(int *)(this + 0x38);
      pcVar4 = pcVar7;
      if (param_1 < 0.0) {
        *pcVar7 = '-';
        param_1 = -param_1;
        pcVar4 = pcVar7 + 1;
      }
                    /* try { // try from 00a618c8 to 00b619a7 has its CatchHandler @ 00a619ec */
      internal::Grisu2(param_1,pcVar4,&iStack_5c,&local_60);
      pcVar4 = (char *)internal::Prettify(pcVar4,iStack_5c,local_60,iVar1);
    }
    uVar3 = 1;
    *(char **)(*(long *)this + 0x18) =
         pcVar4 + *(long *)(*(long *)this + 0x18) + (-0x19 - (long)pcVar7);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

