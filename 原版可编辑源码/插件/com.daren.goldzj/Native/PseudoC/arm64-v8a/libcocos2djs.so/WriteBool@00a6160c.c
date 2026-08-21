
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
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  
  plVar8 = *(long **)this;
  plVar5 = plVar8 + 3;
                    /* try { // try from 00a61624 to 00b61633 has its CatchHandler @ 00a617d4 */
  puVar7 = (undefined1 *)*plVar5;
  if (param_1) {
    puVar6 = (undefined1 *)plVar8[4];
                    /* try { // try from 00a61634 to 00b61757 has its CatchHandler @ 00a61800 */
    if (puVar6 < puVar7 + 4) {
      pvVar2 = (void *)plVar8[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar8 == 0) {
          pvVar3 = operator_new(1);
                    /* try { // try from 00a61758 to 00b6185f has its CatchHandler @ 00a61564 */
          *plVar8 = (long)pvVar3;
          plVar8[1] = (long)pvVar3;
        }
        puVar6 = (undefined1 *)plVar8[5];
      }
      else {
        puVar6 = puVar6 + (((ulong)(puVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      puVar1 = (undefined1 *)(((long)puVar7 - (long)pvVar2) + 4);
      if (puVar1 <= puVar6) {
        puVar1 = puVar6;
      }
      if (puVar1 == (undefined1 *)0x0) {
        free(pvVar2);
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = realloc(pvVar2,(size_t)puVar1);
      }
                    /* catch() { ... } // from try @ 00a61624 with catch @ 00a617d4 */
      plVar8[2] = (long)pvVar3;
      plVar8[3] = (long)pvVar3 + ((long)puVar7 - (long)pvVar2);
                    /* catch() { ... } // from try @ 00a615d0 with catch @ 00a617d8 */
      plVar8[4] = (long)((long)pvVar3 + (long)puVar1);
                    /* catch() { ... } // from try @ 00a615c8 with catch @ 00a617e0 */
      plVar5 = (long *)(*(long *)this + 0x18);
      puVar7 = (undefined1 *)*plVar5;
    }
    *plVar5 = (long)(puVar7 + 1);
    *puVar7 = 0x74;
    puVar7 = *(undefined1 **)(*(long *)this + 0x18);
    *(undefined1 **)(*(long *)this + 0x18) = puVar7 + 1;
    *puVar7 = 0x72;
    puVar7 = *(undefined1 **)(*(long *)this + 0x18);
    *(undefined1 **)(*(long *)this + 0x18) = puVar7 + 1;
    uVar4 = 0x75;
  }
  else {
    puVar6 = (undefined1 *)plVar8[4];
    if (puVar6 < puVar7 + 5) {
      pvVar2 = (void *)plVar8[2];
      if (pvVar2 == (void *)0x0) {
        if (*plVar8 == 0) {
          pvVar3 = operator_new(1);
          *plVar8 = (long)pvVar3;
          plVar8[1] = (long)pvVar3;
        }
        puVar6 = (undefined1 *)plVar8[5];
      }
      else {
        puVar6 = puVar6 + (((ulong)(puVar6 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
      }
      puVar1 = (undefined1 *)(((long)puVar7 - (long)pvVar2) + 5);
      if (puVar1 <= puVar6) {
        puVar1 = puVar6;
      }
      if (puVar1 == (undefined1 *)0x0) {
                    /* catch() { ... } // from try @ 00a615bc with catch @ 00a617e8 */
        free(pvVar2);
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = realloc(pvVar2,(size_t)puVar1);
      }
                    /* catch() { ... } // from try @ 00a615e8 with catch @ 00a617f0 */
      plVar8[2] = (long)pvVar3;
      plVar8[3] = (long)pvVar3 + ((long)puVar7 - (long)pvVar2);
      plVar8[4] = (long)((long)pvVar3 + (long)puVar1);
                    /* catch() { ... } // from try @ 00a61634 with catch @ 00a61800 */
      plVar5 = (long *)(*(long *)this + 0x18);
      puVar7 = (undefined1 *)*plVar5;
    }
    *plVar5 = (long)(puVar7 + 1);
    *puVar7 = 0x66;
    puVar7 = *(undefined1 **)(*(long *)this + 0x18);
    *(undefined1 **)(*(long *)this + 0x18) = puVar7 + 1;
    *puVar7 = 0x61;
    puVar7 = *(undefined1 **)(*(long *)this + 0x18);
    *(undefined1 **)(*(long *)this + 0x18) = puVar7 + 1;
    *puVar7 = 0x6c;
    puVar7 = *(undefined1 **)(*(long *)this + 0x18);
    *(undefined1 **)(*(long *)this + 0x18) = puVar7 + 1;
    uVar4 = 0x73;
  }
  *puVar7 = uVar4;
  puVar7 = *(undefined1 **)(*(long *)this + 0x18);
  *(undefined1 **)(*(long *)this + 0x18) = puVar7 + 1;
  *puVar7 = 0x65;
  return 1;
}

