
/* rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>,
   rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator, 0u>::WriteString(char
   const*, unsigned int) */

undefined8 __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::WriteString(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              *this,char *param_1,uint param_2)

{
  undefined1 *__size;
  byte bVar1;
  char cVar2;
  char *pcVar3;
  void *__ptr;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  long *plVar11;
  
  plVar11 = *(long **)this;
  uVar5 = (ulong)(param_2 * 6 + 2);
  plVar6 = plVar11 + 3;
  puVar10 = (undefined1 *)*plVar6;
  puVar7 = (undefined1 *)plVar11[4];
  if (puVar7 < puVar10 + uVar5) {
    __ptr = (void *)plVar11[2];
    if (__ptr == (void *)0x0) {
      if (*plVar11 == 0) {
        pvVar4 = operator_new(1);
        *plVar11 = (long)pvVar4;
        plVar11[1] = (long)pvVar4;
      }
      puVar7 = (undefined1 *)plVar11[5];
    }
    else {
                    /* catch() { ... } // from try @ 009e75dc with catch @ 009e77a0 */
      puVar7 = puVar7 + (((ulong)(puVar7 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = (undefined1 *)(((long)puVar10 - (long)__ptr) + uVar5);
    if (__size <= puVar7) {
      __size = puVar7;
    }
    if (__size == (undefined1 *)0x0) {
      free(__ptr);
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = realloc(__ptr,(size_t)__size);
                    /* try { // try from 009e77f8 to 00ae784f has its CatchHandler @ 009e77f8
                       catch() { ... } // from try @ 009e77f8 with catch @ 009e77f8
                       catch() { ... } // from try @ 009e7a38 with catch @ 009e77f8 */
    }
    plVar11[2] = (long)pvVar4;
    plVar11[3] = (long)pvVar4 + ((long)puVar10 - (long)__ptr);
    plVar11[4] = (long)((long)pvVar4 + (long)__size);
    plVar6 = (long *)(*(long *)this + 0x18);
    puVar10 = (undefined1 *)*plVar6;
  }
  *plVar6 = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  if (param_2 != 0) {
    pbVar8 = (byte *)param_1;
    do {
      bVar1 = *pbVar8;
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      if (cVar2 == '\0') {
        pbVar9 = *(byte **)(*(long *)this + 0x18);
        *(byte **)(*(long *)this + 0x18) = pbVar9 + 1;
        *pbVar9 = bVar1;
      }
      else {
        puVar7 = *(undefined1 **)(*(long *)this + 0x18);
        *(undefined1 **)(*(long *)this + 0x18) = puVar7 + 1;
        *puVar7 = 0x5c;
        pcVar3 = *(char **)(*(long *)this + 0x18);
        *(char **)(*(long *)this + 0x18) = pcVar3 + 1;
        *pcVar3 = cVar2;
        if (cVar2 == 'u') {
          puVar7 = *(undefined1 **)(*(long *)this + 0x18);
          *(undefined1 **)(*(long *)this + 0x18) = puVar7 + 1;
          *puVar7 = 0x30;
          puVar7 = *(undefined1 **)(*(long *)this + 0x18);
          *(undefined1 **)(*(long *)this + 0x18) = puVar7 + 1;
          *puVar7 = 0x30;
          cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
          pcVar3 = *(char **)(*(long *)this + 0x18);
                    /* try { // try from 009e7714 to 00ae77f7 has its CatchHandler @ 009e7550 */
          *(char **)(*(long *)this + 0x18) = pcVar3 + 1;
          *pcVar3 = cVar2;
          cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 & 0xf];
          pcVar3 = *(char **)(*(long *)this + 0x18);
          *(char **)(*(long *)this + 0x18) = pcVar3 + 1;
          *pcVar3 = cVar2;
        }
      }
      pbVar8 = pbVar8 + 1;
    } while ((ulong)((long)pbVar8 - (long)param_1) < (ulong)param_2);
  }
  puVar7 = *(undefined1 **)(*(long *)this + 0x18);
  *(undefined1 **)(*(long *)this + 0x18) = puVar7 + 1;
  *puVar7 = 0x22;
                    /* catch() { ... } // from try @ 009e75d0 with catch @ 009e7788 */
                    /* catch() { ... } // from try @ 009e75c4 with catch @ 009e778c */
                    /* catch() { ... } // from try @ 009e75a4 with catch @ 009e7790 */
  return 1;
}

