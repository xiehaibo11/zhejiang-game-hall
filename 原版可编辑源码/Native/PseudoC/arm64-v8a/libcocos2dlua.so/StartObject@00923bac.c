
/* rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>,
   rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator, 0u>::StartObject() */

undefined8 __thiscall
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::StartObject(Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
              *this)

{
  ulong __size;
  undefined8 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
                    /* catch() { ... } // from try @ 00923b60 with catch @ 00923bb8 */
  Prefix(this,3);
  puVar7 = *(undefined8 **)(this + 0x20);
  puVar1 = *(undefined8 **)(this + 0x28);
                    /* try { // try from 00923bcc to 00a23c83 has its CatchHandler @ 00923bcc
                       catch() { ... } // from try @ 00923bcc with catch @ 00923bcc
                       catch() { ... } // from try @ 00923d04 with catch @ 00923bcc */
  if (puVar1 < puVar7 + 2) {
    pvVar6 = *(void **)(this + 0x18);
    if (pvVar6 == (void *)0x0) {
      if (*(long *)(this + 8) == 0) {
        pvVar2 = operator_new(1);
        *(void **)(this + 8) = pvVar2;
        *(void **)(this + 0x10) = pvVar2;
      }
      uVar4 = *(ulong *)(this + 0x30);
    }
    else {
      uVar4 = (long)puVar1 + (((ulong)((long)puVar1 + (1 - (long)pvVar6)) >> 1) - (long)pvVar6);
    }
    __size = ((long)puVar7 - (long)pvVar6) + 0x10;
    if (__size <= uVar4) {
      __size = uVar4;
    }
                    /* try { // try from 00923c84 to 00a23cb7 has its CatchHandler @ 00923d84 */
    if (__size == 0) {
      free(pvVar6);
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(pvVar6,__size);
    }
    puVar7 = (undefined8 *)((long)pvVar2 + ((long)puVar7 - (long)pvVar6));
    *(void **)(this + 0x18) = pvVar2;
    *(undefined8 **)(this + 0x20) = puVar7;
    *(ulong *)(this + 0x28) = (long)pvVar2 + __size;
  }
  *(undefined8 **)(this + 0x20) = puVar7 + 2;
  *puVar7 = 0;
  *(undefined1 *)(puVar7 + 1) = 0;
  plVar8 = *(long **)this;
  puVar3 = (undefined1 *)plVar8[3];
  puVar5 = (undefined1 *)plVar8[4];
  if (puVar5 < puVar3 + 1) {
    pvVar6 = (void *)plVar8[2];
    if (pvVar6 == (void *)0x0) {
      if (*plVar8 == 0) {
        pvVar2 = operator_new(1);
        *plVar8 = (long)pvVar2;
        plVar8[1] = (long)pvVar2;
      }
      puVar5 = (undefined1 *)plVar8[5];
    }
    else {
      puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar6)) >> 1) - (long)pvVar6);
    }
    lVar9 = (long)puVar3 - (long)pvVar6;
                    /* try { // try from 00923cb8 to 00a23ccb has its CatchHandler @ 00923d50 */
    if (puVar5 < (undefined1 *)(lVar9 + 1)) {
      puVar5 = (undefined1 *)(lVar9 + 1);
    }
    if (puVar5 == (undefined1 *)0x0) {
      free(pvVar6);
      pvVar6 = (void *)0x0;
    }
    else {
                    /* try { // try from 00923cd0 to 00a23d03 has its CatchHandler @ 00923d54 */
      pvVar6 = realloc(pvVar6,(size_t)puVar5);
    }
    puVar3 = (undefined1 *)((long)pvVar6 + lVar9);
                    /* try { // try from 00923d04 to 00a23d9f has its CatchHandler @ 00923bcc */
    plVar8[2] = (long)pvVar6;
    plVar8[3] = (long)puVar3;
    plVar8[4] = (long)((long)pvVar6 + (long)puVar5);
  }
  plVar8[3] = (long)(puVar3 + 1);
  *puVar3 = 0x7b;
  return 1;
}

