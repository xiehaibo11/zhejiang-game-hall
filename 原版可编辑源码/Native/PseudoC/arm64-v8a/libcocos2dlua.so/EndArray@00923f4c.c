
/* rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>,
   rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator, 0u>::EndArray(unsigned
   int) */

undefined8
rapidjson::
Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>
::EndArray(uint param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = (undefined8 *)(ulong)param_1;
  plVar6 = (long *)*puVar1;
  puVar1[4] = puVar1[4] + -0x10;
  puVar4 = (undefined1 *)plVar6[3];
  puVar5 = (undefined1 *)plVar6[4];
  if (puVar5 < puVar4 + 1) {
    pvVar2 = (void *)plVar6[2];
    if (pvVar2 == (void *)0x0) {
      if (*plVar6 == 0) {
        pvVar3 = operator_new(1);
        *plVar6 = (long)pvVar3;
        plVar6[1] = (long)pvVar3;
      }
      puVar5 = (undefined1 *)plVar6[5];
    }
    else {
      puVar5 = puVar5 + (((ulong)(puVar5 + (1 - (long)pvVar2)) >> 1) - (long)pvVar2);
    }
    lVar7 = (long)puVar4 - (long)pvVar2;
    if (puVar5 < (undefined1 *)(lVar7 + 1)) {
      puVar5 = (undefined1 *)(lVar7 + 1);
    }
    if (puVar5 == (undefined1 *)0x0) {
      free(pvVar2);
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(pvVar2,(size_t)puVar5);
    }
    puVar4 = (undefined1 *)((long)pvVar2 + lVar7);
    plVar6[2] = (long)pvVar2;
    plVar6[3] = (long)puVar4;
    plVar6[4] = (long)((long)pvVar2 + (long)puVar5);
  }
  plVar6[3] = (long)(puVar4 + 1);
  *puVar4 = 0x5d;
  return 1;
}

