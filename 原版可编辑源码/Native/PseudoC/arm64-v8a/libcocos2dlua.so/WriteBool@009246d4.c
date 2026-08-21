
/* rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>,
   rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator, 0u>::WriteBool(bool) */

undefined8 __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::WriteBool(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
            *this,bool param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  
  plVar7 = *(long **)this;
  puVar6 = (undefined1 *)plVar7[3];
  if (param_1) {
    puVar5 = (undefined1 *)plVar7[4];
    if (puVar5 < puVar6 + 4) {
      pvVar2 = (void *)plVar7[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        puVar5 = (undefined1 *)plVar7[5];
      }
      else {
        puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      puVar1 = (undefined1 *)(((long)puVar6 - (long)pvVar2) + 4);
      if (puVar1 <= puVar5) {
        puVar1 = puVar5;
      }
      if (puVar1 == (undefined1 *)0x0) {
        free(pvVar2);
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = realloc(pvVar2,(size_t)puVar1);
      }
      plVar7[2] = (long)pvVar3;
      plVar7[3] = (long)pvVar3 + ((long)puVar6 - (long)pvVar2);
      plVar7[4] = (long)((long)pvVar3 + (long)puVar1);
      plVar7 = *(long **)this;
      puVar6 = (undefined1 *)plVar7[3];
    }
    plVar7[3] = (long)(puVar6 + 1);
    *puVar6 = 0x74;
    puVar6 = *(undefined1 **)(*(long *)this + 0x18);
    *(undefined1 **)(*(long *)this + 0x18) = puVar6 + 1;
    *puVar6 = 0x72;
    puVar6 = *(undefined1 **)(*(long *)this + 0x18);
    *(undefined1 **)(*(long *)this + 0x18) = puVar6 + 1;
    uVar4 = 0x75;
  }
  else {
    puVar5 = (undefined1 *)plVar7[4];
    if (puVar5 < puVar6 + 5) {
      pvVar2 = (void *)plVar7[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar7 == 0) {
          pvVar3 = operator_new(1);
          *plVar7 = (long)pvVar3;
          plVar7[1] = (long)pvVar3;
        }
        puVar5 = (undefined1 *)plVar7[5];
      }
      else {
        puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      puVar1 = (undefined1 *)(((long)puVar6 - (long)pvVar2) + 5);
      if (puVar1 <= puVar5) {
        puVar1 = puVar5;
      }
                    /* try { // try from 00924878 to 00a248c3 has its CatchHandler @ 00924878
                       catch() { ... } // from try @ 00924878 with catch @ 00924878
                       catch() { ... } // from try @ 009248c8 with catch @ 00924878 */
      if (puVar1 == (undefined1 *)0x0) {
        free(pvVar2);
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = realloc(pvVar2,(size_t)puVar1);
      }
      plVar7[2] = (long)pvVar3;
      plVar7[3] = (long)pvVar3 + ((long)puVar6 - (long)pvVar2);
      plVar7[4] = (long)((long)pvVar3 + (long)puVar1);
                    /* try { // try from 009248c4 to 00a248c7 has its CatchHandler @ 0092491c */
      plVar7 = *(long **)this;
                    /* try { // try from 009248c8 to 00a2492f has its CatchHandler @ 00924878 */
      puVar6 = (undefined1 *)plVar7[3];
    }
    plVar7[3] = (long)(puVar6 + 1);
    *puVar6 = 0x66;
    puVar6 = *(undefined1 **)(*(long *)this + 0x18);
    *(undefined1 **)(*(long *)this + 0x18) = puVar6 + 1;
    *puVar6 = 0x61;
    puVar6 = *(undefined1 **)(*(long *)this + 0x18);
    *(undefined1 **)(*(long *)this + 0x18) = puVar6 + 1;
    *puVar6 = 0x6c;
    puVar6 = *(undefined1 **)(*(long *)this + 0x18);
    *(undefined1 **)(*(long *)this + 0x18) = puVar6 + 1;
    uVar4 = 0x73;
  }
  *puVar6 = uVar4;
  puVar6 = *(undefined1 **)(*(long *)this + 0x18);
  *(undefined1 **)(*(long *)this + 0x18) = puVar6 + 1;
  *puVar6 = 0x65;
  return 1;
}

