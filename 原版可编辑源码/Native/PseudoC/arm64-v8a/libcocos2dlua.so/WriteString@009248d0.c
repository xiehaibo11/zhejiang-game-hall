
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
  undefined1 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  long *plVar10;
  
  plVar10 = *(long **)this;
  uVar5 = (ulong)(param_2 * 6 + 2);
  puVar9 = (undefined1 *)plVar10[3];
  puVar6 = (undefined1 *)plVar10[4];
  if (puVar6 < puVar9 + uVar5) {
    __ptr = (void *)plVar10[2];
    if (__ptr == (void *)0x0) {
      if (*plVar10 == 0) {
                    /* try { // try from 00924a68 to 00a24b03 has its CatchHandler @ 00924930 */
        pvVar4 = operator_new(1);
        *plVar10 = (long)pvVar4;
        plVar10[1] = (long)pvVar4;
      }
      puVar6 = (undefined1 *)plVar10[5];
    }
    else {
      puVar6 = puVar6 + (((ulong)(puVar6 + (1 - (long)__ptr)) >> 1) - (long)__ptr);
    }
    __size = (undefined1 *)(((long)puVar9 - (long)__ptr) + uVar5);
    if (__size <= puVar6) {
      __size = puVar6;
    }
    if (__size == (undefined1 *)0x0) {
      free(__ptr);
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = realloc(__ptr,(size_t)__size);
    }
                    /* catch() { ... } // from try @ 00924a1c with catch @ 00924ab4 */
                    /* catch() { ... } // from try @ 00924a34 with catch @ 00924ab8 */
    plVar10[2] = (long)pvVar4;
    plVar10[3] = (long)pvVar4 + ((long)puVar9 - (long)__ptr);
    plVar10[4] = (long)((long)pvVar4 + (long)__size);
    plVar10 = *(long **)this;
    puVar9 = (undefined1 *)plVar10[3];
  }
                    /* catch() { ... } // from try @ 009248c4 with catch @ 0092491c */
  plVar10[3] = (long)(puVar9 + 1);
  *puVar9 = 0x22;
  if (param_2 != 0) {
                    /* try { // try from 00924930 to 00a249e7 has its CatchHandler @ 00924930
                       catch() { ... } // from try @ 00924930 with catch @ 00924930
                       catch() { ... } // from try @ 00924a68 with catch @ 00924930 */
    pbVar7 = (byte *)param_1;
    do {
      bVar1 = *pbVar7;
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      if (cVar2 == '\0') {
        pbVar8 = *(byte **)(*(long *)this + 0x18);
        *(byte **)(*(long *)this + 0x18) = pbVar8 + 1;
        *pbVar8 = bVar1;
      }
      else {
        puVar6 = *(undefined1 **)(*(long *)this + 0x18);
        *(undefined1 **)(*(long *)this + 0x18) = puVar6 + 1;
        *puVar6 = 0x5c;
        pcVar3 = *(char **)(*(long *)this + 0x18);
        *(char **)(*(long *)this + 0x18) = pcVar3 + 1;
        *pcVar3 = cVar2;
        if (cVar2 == 'u') {
          puVar6 = *(undefined1 **)(*(long *)this + 0x18);
          *(undefined1 **)(*(long *)this + 0x18) = puVar6 + 1;
          *puVar6 = 0x30;
          puVar6 = *(undefined1 **)(*(long *)this + 0x18);
          *(undefined1 **)(*(long *)this + 0x18) = puVar6 + 1;
          *puVar6 = 0x30;
          cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
                    /* try { // try from 009249e8 to 00a24a1b has its CatchHandler @ 00924ae8 */
          pcVar3 = *(char **)(*(long *)this + 0x18);
          *(char **)(*(long *)this + 0x18) = pcVar3 + 1;
          *pcVar3 = cVar2;
          cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 & 0xf];
          pcVar3 = *(char **)(*(long *)this + 0x18);
          *(char **)(*(long *)this + 0x18) = pcVar3 + 1;
          *pcVar3 = cVar2;
        }
      }
      pbVar7 = pbVar7 + 1;
    } while ((ulong)((long)pbVar7 - (long)param_1) < (ulong)param_2);
  }
                    /* try { // try from 00924a1c to 00a24a2f has its CatchHandler @ 00924ab4 */
  puVar6 = *(undefined1 **)(*(long *)this + 0x18);
  *(undefined1 **)(*(long *)this + 0x18) = puVar6 + 1;
  *puVar6 = 0x22;
                    /* try { // try from 00924a34 to 00a24a67 has its CatchHandler @ 00924ab8 */
  return 1;
}

